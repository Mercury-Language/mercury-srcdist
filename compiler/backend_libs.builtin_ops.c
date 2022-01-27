/*
** Automatically generated from `builtin_ops.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 138 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1];

#line 141 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0;

#line 144 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;

#line 147 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1];

#line 150 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1;

#line 153 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1];

#line 156 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1];

#line 159 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2];

#line 162 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2];

#line 165 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2];

#line 168 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0;

#line 171 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1;

#line 174 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2;

#line 177 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3;

#line 180 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4;

#line 183 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5;

#line 186 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6;

#line 189 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7;

#line 192 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8;

#line 195 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9;

#line 198 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10;

#line 201 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11;

#line 204 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12;

#line 207 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13;

#line 210 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14;

#line 213 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1];

#line 216 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15;

#line 219 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16;

#line 222 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17;

#line 225 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18;

#line 228 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19;

#line 231 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20;

#line 234 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21;

#line 237 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22;

#line 240 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23;

#line 243 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24;

#line 246 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25;

#line 249 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26;

#line 252 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27;

#line 255 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28;

#line 258 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29;

#line 261 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30;

#line 264 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31;

#line 267 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32;

#line 270 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33;

#line 273 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34;

#line 276 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35;

#line 279 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36;

#line 282 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37;

#line 285 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38;

#line 288 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39;

#line 291 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40;

#line 294 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41;

#line 297 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42;

#line 300 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[42];

#line 303 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

#line 306 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[2];

#line 309 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[43];

#line 312 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[43];

#line 315 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0;

#line 318 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1;

#line 321 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2;

#line 324 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3];

#line 327 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3];

#line 330 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3];

#line 333 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1;

#line 336 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2];

#line 339 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0;

#line 342 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2];

#line 345 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1;

#line 348 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1];

#line 351 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2;

#line 354 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1;

#line 357 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1];

#line 360 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3;

#line 363 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1];

#line 366 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1];

#line 369 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1];

#line 372 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1];

#line 375 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4];

#line 378 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4];

#line 381 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4];

#line 384 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1];

#line 387 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0;

#line 390 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1];

#line 393 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1;

#line 396 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1];

#line 399 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2;

#line 402 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2];

#line 405 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3;

#line 408 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3];

#line 411 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4;

#line 414 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1];

#line 417 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1];

#line 420 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1];

#line 423 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2];

#line 426 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4];

#line 429 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5];

#line 432 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5];

#line 435 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0;

#line 438 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1;

#line 441 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2;

#line 444 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3;

#line 447 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4;

#line 450 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5;

#line 453 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6;

#line 456 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7;

#line 459 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8;

#line 462 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9;

#line 465 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10;

#line 468 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11;

#line 471 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12;

#line 474 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13;

#line 477 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[14];

#line 480 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[14];

#line 483 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[14];

#line 486 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 489 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 491 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 494 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 497 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 499 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 501 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 504 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 507 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 509 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 512 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 515 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 517 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 519 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 522 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 525 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 527 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 530 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 533 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 535 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 537 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 540 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 543 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 545 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 547 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 550 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 553 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 555 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 557 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 559 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 562 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 565 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 567 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 569 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 572 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 575 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 577 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 579 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 581 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 584 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 587 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 589 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 592 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 595 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 597 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 599 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_2[4][1];

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_3[1];




static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0))
  },
};

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    (MR_Box) &backend_libs__builtin_ops_scalar_common_3[0]
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



#line 661 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 666 "backend_libs.builtin_ops.c"
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

#line 681 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
  }
};

#line 689 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 694 "backend_libs.builtin_ops.c"
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

#line 709 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0
};

#line 714 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 719 "backend_libs.builtin_ops.c"
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

#line 733 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 739 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 745 "backend_libs.builtin_ops.c"
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

#line 766 "backend_libs.builtin_ops.c"
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

#line 781 "backend_libs.builtin_ops.c"
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

#line 796 "backend_libs.builtin_ops.c"
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

#line 811 "backend_libs.builtin_ops.c"
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

#line 826 "backend_libs.builtin_ops.c"
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

#line 841 "backend_libs.builtin_ops.c"
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

#line 856 "backend_libs.builtin_ops.c"
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

#line 871 "backend_libs.builtin_ops.c"
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

#line 886 "backend_libs.builtin_ops.c"
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

#line 901 "backend_libs.builtin_ops.c"
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

#line 916 "backend_libs.builtin_ops.c"
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

#line 931 "backend_libs.builtin_ops.c"
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

#line 946 "backend_libs.builtin_ops.c"
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

#line 961 "backend_libs.builtin_ops.c"
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

#line 976 "backend_libs.builtin_ops.c"
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

#line 991 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0
};

#line 996 "backend_libs.builtin_ops.c"
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

#line 1011 "backend_libs.builtin_ops.c"
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

#line 1026 "backend_libs.builtin_ops.c"
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

#line 1041 "backend_libs.builtin_ops.c"
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

#line 1056 "backend_libs.builtin_ops.c"
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

#line 1071 "backend_libs.builtin_ops.c"
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

#line 1086 "backend_libs.builtin_ops.c"
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

#line 1101 "backend_libs.builtin_ops.c"
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

#line 1116 "backend_libs.builtin_ops.c"
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

#line 1131 "backend_libs.builtin_ops.c"
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

#line 1146 "backend_libs.builtin_ops.c"
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

#line 1161 "backend_libs.builtin_ops.c"
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

#line 1176 "backend_libs.builtin_ops.c"
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

#line 1191 "backend_libs.builtin_ops.c"
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

#line 1206 "backend_libs.builtin_ops.c"
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

#line 1221 "backend_libs.builtin_ops.c"
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

#line 1236 "backend_libs.builtin_ops.c"
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

#line 1251 "backend_libs.builtin_ops.c"
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

#line 1266 "backend_libs.builtin_ops.c"
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

#line 1281 "backend_libs.builtin_ops.c"
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

#line 1296 "backend_libs.builtin_ops.c"
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

#line 1311 "backend_libs.builtin_ops.c"
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

#line 1326 "backend_libs.builtin_ops.c"
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

#line 1341 "backend_libs.builtin_ops.c"
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

#line 1356 "backend_libs.builtin_ops.c"
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

#line 1371 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40 = {
  (MR_String) "pointer_equal_conservative",
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

#line 1386 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41 = {
  (MR_String) "compound_eq",
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

#line 1401 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42 = {
  (MR_String) "compound_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 41,
  (MR_Integer) 42,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1416 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[42] = {
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42
};

#line 1462 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15
};

#line 1467 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[2] = {
  {
    (MR_Integer) 42,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1
  }
};

#line 1481 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[43] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42,
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40,
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

#line 1528 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[43] = {
  (MR_Integer) 20,
  (MR_Integer) 28,
  (MR_Integer) 27,
  (MR_Integer) 21,
  (MR_Integer) 26,
  (MR_Integer) 40,
  (MR_Integer) 41,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 29,
  (MR_Integer) 30,
  (MR_Integer) 7,
  (MR_Integer) 31,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 34,
  (MR_Integer) 39,
  (MR_Integer) 38,
  (MR_Integer) 36,
  (MR_Integer) 37,
  (MR_Integer) 35,
  (MR_Integer) 33,
  (MR_Integer) 25,
  (MR_Integer) 23,
  (MR_Integer) 24,
  (MR_Integer) 22,
  (MR_Integer) 42,
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
  (MR_Integer) 32,
  (MR_Integer) 5,
  (MR_Integer) 6
};

#line 1575 "backend_libs.builtin_ops.c"
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
  (MR_Integer) 43,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0
};

#line 1596 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0 = {
  (MR_String) "scalar_elem_string",
  (MR_Integer) 0
};

#line 1602 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1 = {
  (MR_String) "scalar_elem_int",
  (MR_Integer) 1
};

#line 1608 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2 = {
  (MR_String) "scalar_elem_generic",
  (MR_Integer) 2
};

#line 1614 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2
};

#line 1621 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0
};

#line 1628 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1635 "backend_libs.builtin_ops.c"
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

#line 1656 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1 = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1664 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1670 "backend_libs.builtin_ops.c"
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

#line 1685 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1691 "backend_libs.builtin_ops.c"
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

#line 1706 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1711 "backend_libs.builtin_ops.c"
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

#line 1726 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1734 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__pti_list_1__pseudo_1
};

#line 1739 "backend_libs.builtin_ops.c"
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

#line 1754 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0
};

#line 1759 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1
};

#line 1764 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 1769 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3
};

#line 1774 "backend_libs.builtin_ops.c"
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

#line 1798 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 1806 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1814 "backend_libs.builtin_ops.c"
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

#line 1835 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1840 "backend_libs.builtin_ops.c"
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

#line 1855 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1860 "backend_libs.builtin_ops.c"
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

#line 1875 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1880 "backend_libs.builtin_ops.c"
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

#line 1895 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1901 "backend_libs.builtin_ops.c"
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

#line 1916 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1923 "backend_libs.builtin_ops.c"
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

#line 1938 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0
};

#line 1943 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1
};

#line 1948 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2
};

#line 1953 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4
};

#line 1959 "backend_libs.builtin_ops.c"
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

#line 1983 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3
};

#line 1992 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 2001 "backend_libs.builtin_ops.c"
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

#line 2022 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0 = {
  (MR_String) "mktag",
  (MR_Integer) 0
};

#line 2028 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1 = {
  (MR_String) "tag",
  (MR_Integer) 1
};

#line 2034 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2 = {
  (MR_String) "unmktag",
  (MR_Integer) 2
};

#line 2040 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3 = {
  (MR_String) "strip_tag",
  (MR_Integer) 3
};

#line 2046 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4 = {
  (MR_String) "mkbody",
  (MR_Integer) 4
};

#line 2052 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5 = {
  (MR_String) "unmkbody",
  (MR_Integer) 5
};

#line 2058 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6 = {
  (MR_String) "bitwise_complement",
  (MR_Integer) 6
};

#line 2064 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7 = {
  (MR_String) "logical_not",
  (MR_Integer) 7
};

#line 2070 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8 = {
  (MR_String) "hash_string",
  (MR_Integer) 8
};

#line 2076 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9 = {
  (MR_String) "hash_string2",
  (MR_Integer) 9
};

#line 2082 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10 = {
  (MR_String) "hash_string3",
  (MR_Integer) 10
};

#line 2088 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11 = {
  (MR_String) "hash_string4",
  (MR_Integer) 11
};

#line 2094 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12 = {
  (MR_String) "hash_string5",
  (MR_Integer) 12
};

#line 2100 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13 = {
  (MR_String) "hash_string6",
  (MR_Integer) 13
};

#line 2106 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[14] = {
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13
};

#line 2124 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[14] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2
};

#line 2142 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[14] = {
  (MR_Integer) 9,
  (MR_Integer) 11,
  (MR_Integer) 13,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 12,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 6
};

#line 2160 "backend_libs.builtin_ops.c"
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
  (MR_Integer) 14,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0
};

#line 2181 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 2184 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2186 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2188 "backend_libs.builtin_ops.c"
{
#line 2190 "backend_libs.builtin_ops.c"
  {
#line 2192 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2195 "backend_libs.builtin_ops.c"
    {
#line 2197 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2200 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2202 "backend_libs.builtin_ops.c"
  }
#line 2204 "backend_libs.builtin_ops.c"
}

#line 2207 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 2210 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2212 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2214 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2216 "backend_libs.builtin_ops.c"
{
#line 2218 "backend_libs.builtin_ops.c"
  {
#line 2220 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2223 "backend_libs.builtin_ops.c"
    {
#line 2225 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2228 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2230 "backend_libs.builtin_ops.c"
  }
#line 2232 "backend_libs.builtin_ops.c"
}

#line 2235 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 2238 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2240 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2242 "backend_libs.builtin_ops.c"
{
#line 2244 "backend_libs.builtin_ops.c"
  {
#line 2246 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2249 "backend_libs.builtin_ops.c"
    {
#line 2251 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2254 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2256 "backend_libs.builtin_ops.c"
  }
#line 2258 "backend_libs.builtin_ops.c"
}

#line 2261 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 2264 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2266 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2268 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2270 "backend_libs.builtin_ops.c"
{
#line 2272 "backend_libs.builtin_ops.c"
  {
#line 2274 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2277 "backend_libs.builtin_ops.c"
    {
#line 2279 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2282 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2284 "backend_libs.builtin_ops.c"
  }
#line 2286 "backend_libs.builtin_ops.c"
}

#line 2289 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 2292 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2294 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2296 "backend_libs.builtin_ops.c"
{
#line 2298 "backend_libs.builtin_ops.c"
  {
#line 2300 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2303 "backend_libs.builtin_ops.c"
    {
#line 2305 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2308 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2310 "backend_libs.builtin_ops.c"
  }
#line 2312 "backend_libs.builtin_ops.c"
}

#line 2315 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 2318 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2320 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2322 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2324 "backend_libs.builtin_ops.c"
{
#line 2326 "backend_libs.builtin_ops.c"
  {
#line 2328 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2331 "backend_libs.builtin_ops.c"
    {
#line 2333 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2336 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2338 "backend_libs.builtin_ops.c"
  }
#line 2340 "backend_libs.builtin_ops.c"
}

#line 2343 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 2346 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2348 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2350 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2352 "backend_libs.builtin_ops.c"
{
#line 2354 "backend_libs.builtin_ops.c"
  {
#line 2356 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2359 "backend_libs.builtin_ops.c"
    {
#line 2361 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2364 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2366 "backend_libs.builtin_ops.c"
  }
#line 2368 "backend_libs.builtin_ops.c"
}

#line 2371 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 2374 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2376 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2378 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2380 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2382 "backend_libs.builtin_ops.c"
{
#line 2384 "backend_libs.builtin_ops.c"
  {
#line 2386 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2389 "backend_libs.builtin_ops.c"
    {
#line 2391 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2394 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2396 "backend_libs.builtin_ops.c"
  }
#line 2398 "backend_libs.builtin_ops.c"
}

#line 2401 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 2404 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2406 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2408 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2410 "backend_libs.builtin_ops.c"
{
#line 2412 "backend_libs.builtin_ops.c"
  {
#line 2414 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2417 "backend_libs.builtin_ops.c"
    {
#line 2419 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2422 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2424 "backend_libs.builtin_ops.c"
  }
#line 2426 "backend_libs.builtin_ops.c"
}

#line 2429 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 2432 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2434 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2436 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2438 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2440 "backend_libs.builtin_ops.c"
{
#line 2442 "backend_libs.builtin_ops.c"
  {
#line 2444 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2447 "backend_libs.builtin_ops.c"
    {
#line 2449 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2452 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2454 "backend_libs.builtin_ops.c"
  }
#line 2456 "backend_libs.builtin_ops.c"
}

#line 2459 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 2462 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2464 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2466 "backend_libs.builtin_ops.c"
{
#line 2468 "backend_libs.builtin_ops.c"
  {
#line 2470 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2473 "backend_libs.builtin_ops.c"
    {
#line 2475 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2478 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2480 "backend_libs.builtin_ops.c"
  }
#line 2482 "backend_libs.builtin_ops.c"
}

#line 2485 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 2488 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2490 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2492 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2494 "backend_libs.builtin_ops.c"
{
#line 2496 "backend_libs.builtin_ops.c"
  {
#line 2498 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2501 "backend_libs.builtin_ops.c"
    {
#line 2503 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____unary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2506 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2508 "backend_libs.builtin_ops.c"
  }
#line 2510 "backend_libs.builtin_ops.c"
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
#line 2554 "backend_libs.builtin_ops.c"
  {
#line 2556 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 2559 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2561 "backend_libs.builtin_ops.c"
  }
#line 31 "builtin_ops.m"
}

#line 151 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0(
#line 151 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_89,
#line 151 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 151 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 151 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 151 "builtin_ops.m"
{
#line 151 "builtin_ops.m"
  while (MR_TRUE)
#line 151 "builtin_ops.m"
    {
#line 151 "builtin_ops.m"
      /* tailcall optimized into a loop */
#line 151 "builtin_ops.m"
      {
#line 151 "builtin_ops.m"
        MR_bool backend_libs__builtin_ops__succeeded;
#line 151 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastX_87 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 151 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastY_88 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 151 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_87 == backend_libs__builtin_ops__CastY_88);
#line 151 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 2598 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "builtin_ops.m"
        else
#line 151 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 151 "builtin_ops.m"
            {
#line 151 "builtin_ops.m"
              MR_Float backend_libs__builtin_ops__V_103_103 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 151 "builtin_ops.m"
                {
#line 151 "builtin_ops.m"
                  MR_Float backend_libs__builtin_ops__V_35_35 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 151 "builtin_ops.m"
                  {
#line 151 "builtin_ops.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_103_103, backend_libs__builtin_ops__V_35_35);
#line 151 "builtin_ops.m"
                    return;
                  }
#line 151 "builtin_ops.m"
                }
#line 151 "builtin_ops.m"
              else
#line 151 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2629 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                else
#line 151 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2635 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                  else
#line 151 "builtin_ops.m"
                    if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2641 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
                    else
#line 2645 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
            }
#line 151 "builtin_ops.m"
          else
#line 151 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 151 "builtin_ops.m"
              {
#line 151 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2660 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
                else
#line 151 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 151 "builtin_ops.m"
                    {
#line 151 "builtin_ops.m"
                      MR_Integer backend_libs__builtin_ops__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 151 "builtin_ops.m"
                      {
#line 151 "builtin_ops.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_104_104, backend_libs__builtin_ops__V_20_20);
#line 151 "builtin_ops.m"
                        return;
                      }
#line 151 "builtin_ops.m"
                    }
#line 151 "builtin_ops.m"
                  else
#line 151 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2684 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                    else
#line 151 "builtin_ops.m"
                      if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2690 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
                      else
#line 2694 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
              }
#line 151 "builtin_ops.m"
            else
#line 151 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 151 "builtin_ops.m"
                {
#line 151 "builtin_ops.m"
                  MR_Box backend_libs__builtin_ops__V_105_105 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 151 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2709 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
                  else
#line 151 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2715 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
                    else
#line 151 "builtin_ops.m"
                      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 151 "builtin_ops.m"
                        {
#line 151 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));

#line 151 "builtin_ops.m"
                          {
#line 151 "builtin_ops.m"
                            mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_89, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_105_105, backend_libs__builtin_ops__V_5_5);
#line 151 "builtin_ops.m"
                            return;
                          }
#line 151 "builtin_ops.m"
                        }
#line 151 "builtin_ops.m"
                      else
#line 151 "builtin_ops.m"
                        if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2739 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
                        else
#line 2743 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
                }
#line 151 "builtin_ops.m"
              else
#line 151 "builtin_ops.m"
                if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 151 "builtin_ops.m"
                  {
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

#line 151 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2762 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                    else
#line 151 "builtin_ops.m"
                      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2768 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                      else
#line 151 "builtin_ops.m"
                        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2774 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                        else
#line 151 "builtin_ops.m"
                          if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 151 "builtin_ops.m"
                            {
#line 151 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 151 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 151 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 3)));
#line 151 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_85_85;

#line 151 "builtin_ops.m"
                              {
#line 151 "builtin_ops.m"
                                backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__V_85_85, backend_libs__builtin_ops__V_102_102, backend_libs__builtin_ops__V_82_82);
                              }
#line 2796 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_85_85 == (MR_Integer) 0);
#line 151 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 151 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_85_85;
#line 151 "builtin_ops.m"
                              else
#line 151 "builtin_ops.m"
                                {
#line 151 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_86_86;

#line 151 "builtin_ops.m"
                                  {
#line 151 "builtin_ops.m"
                                    backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_89, &backend_libs__builtin_ops__V_86_86, backend_libs__builtin_ops__V_101_101, backend_libs__builtin_ops__V_83_83);
                                  }
#line 2816 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_86_86 == (MR_Integer) 0);
#line 151 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 151 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_86_86;
#line 151 "builtin_ops.m"
                                  else
#line 151 "builtin_ops.m"
                                    {
#line 151 "builtin_ops.m"
                                      /* direct tailcall eliminated */
#line 151 "builtin_ops.m"
                                      {
#line 151 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_100_100;
#line 151 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_84_84;

#line 151 "builtin_ops.m"
                                        backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
#line 151 "builtin_ops.m"
                                        backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 151 "builtin_ops.m"
                                      }
#line 151 "builtin_ops.m"
                                      continue;
#line 151 "builtin_ops.m"
                                    }
#line 151 "builtin_ops.m"
                                }
#line 151 "builtin_ops.m"
                            }
#line 151 "builtin_ops.m"
                          else
#line 2853 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                  }
#line 151 "builtin_ops.m"
                else
#line 151 "builtin_ops.m"
                  {
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

#line 151 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2868 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                    else
#line 151 "builtin_ops.m"
                      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2874 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                      else
#line 151 "builtin_ops.m"
                        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2880 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "builtin_ops.m"
                        else
#line 151 "builtin_ops.m"
                          if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2886 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "builtin_ops.m"
                          else
#line 151 "builtin_ops.m"
                            {
#line 151 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 151 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 151 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_56_56;
#line 151 "builtin_ops.m"
                              MR_Integer backend_libs__builtin_ops__V_108_108 = (MR_Integer) backend_libs__builtin_ops__V_107_107;
#line 151 "builtin_ops.m"
                              MR_Integer backend_libs__builtin_ops__V_109_109 = (MR_Integer) backend_libs__builtin_ops__V_54_54;

#line 151 "builtin_ops.m"
                              {
#line 151 "builtin_ops.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__V_56_56, backend_libs__builtin_ops__V_108_108, backend_libs__builtin_ops__V_109_109);
                              }
#line 2908 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_56_56 == (MR_Integer) 0);
#line 151 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 151 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_56_56;
#line 151 "builtin_ops.m"
                              else
#line 151 "builtin_ops.m"
                                {
#line 151 "builtin_ops.m"
                                  /* direct tailcall eliminated */
#line 151 "builtin_ops.m"
                                  {
#line 151 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_106_106;
#line 151 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_55_55;

#line 151 "builtin_ops.m"
                                    backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
#line 151 "builtin_ops.m"
                                    backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 151 "builtin_ops.m"
                                  }
#line 151 "builtin_ops.m"
                                  continue;
#line 151 "builtin_ops.m"
                                }
#line 151 "builtin_ops.m"
                            }
#line 151 "builtin_ops.m"
                  }
#line 151 "builtin_ops.m"
      }
#line 151 "builtin_ops.m"
      break;
#line 151 "builtin_ops.m"
    }
#line 151 "builtin_ops.m"
}

#line 151 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0(
#line 151 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_21,
#line 151 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 151 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 151 "builtin_ops.m"
{
#line 151 "builtin_ops.m"
  while (MR_TRUE)
#line 151 "builtin_ops.m"
    {
#line 151 "builtin_ops.m"
      /* tailcall optimized into a loop */
#line 151 "builtin_ops.m"
      {
#line 151 "builtin_ops.m"
        MR_bool backend_libs__builtin_ops__succeeded;
#line 151 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastX_19 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 151 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastY_20 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 151 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_19 == backend_libs__builtin_ops__CastY_20);
#line 151 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 151 "builtin_ops.m"
        else
#line 151 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 151 "builtin_ops.m"
            {
#line 151 "builtin_ops.m"
              MR_Float backend_libs__builtin_ops__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "builtin_ops.m"
              MR_Float backend_libs__builtin_ops__V_8_8;

#line 151 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 151 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                {
#line 151 "builtin_ops.m"
                  backend_libs__builtin_ops__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 3003 "backend_libs.builtin_ops.c"
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_7_7 == backend_libs__builtin_ops__V_8_8);
#line 151 "builtin_ops.m"
                }
#line 151 "builtin_ops.m"
            }
#line 151 "builtin_ops.m"
          else
#line 151 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 151 "builtin_ops.m"
              {
#line 151 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_6_6;

#line 151 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 151 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                  {
#line 151 "builtin_ops.m"
                    backend_libs__builtin_ops__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 3028 "backend_libs.builtin_ops.c"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_5_5 == backend_libs__builtin_ops__V_6_6);
#line 151 "builtin_ops.m"
                  }
#line 151 "builtin_ops.m"
              }
#line 151 "builtin_ops.m"
            else
#line 151 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 151 "builtin_ops.m"
                {
#line 151 "builtin_ops.m"
                  MR_Box backend_libs__builtin_ops__V_3_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 151 "builtin_ops.m"
                  MR_Box backend_libs__builtin_ops__V_4_4;

#line 151 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 151 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                    {
#line 151 "builtin_ops.m"
                      backend_libs__builtin_ops__V_4_4 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 3053 "backend_libs.builtin_ops.c"
                      {
#line 3055 "backend_libs.builtin_ops.c"
                        return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_4_4);
                      }
#line 151 "builtin_ops.m"
                    }
#line 151 "builtin_ops.m"
                }
#line 151 "builtin_ops.m"
              else
#line 151 "builtin_ops.m"
                if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 151 "builtin_ops.m"
                  {
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 3)));
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_16_16;
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_17_17;
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_18_18;

#line 151 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 151 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                      {
#line 151 "builtin_ops.m"
                        backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "builtin_ops.m"
                        backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 151 "builtin_ops.m"
                        backend_libs__builtin_ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
#line 3093 "backend_libs.builtin_ops.c"
                        {
#line 3095 "backend_libs.builtin_ops.c"
                          backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_16_16);
                        }
#line 151 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                          {
#line 3102 "backend_libs.builtin_ops.c"
                            {
#line 3104 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_14_14, backend_libs__builtin_ops__V_17_17);
                            }
#line 151 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 3109 "backend_libs.builtin_ops.c"
                              {
#line 3111 "backend_libs.builtin_ops.c"
                                /* direct tailcall eliminated */
#line 3113 "backend_libs.builtin_ops.c"
                                {
#line 3115 "backend_libs.builtin_ops.c"
                                  MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_15_15;
#line 3117 "backend_libs.builtin_ops.c"
                                  MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_18_18;

#line 3120 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 3122 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 3124 "backend_libs.builtin_ops.c"
                                }
#line 3126 "backend_libs.builtin_ops.c"
                                continue;
#line 3128 "backend_libs.builtin_ops.c"
                              }
#line 151 "builtin_ops.m"
                          }
#line 151 "builtin_ops.m"
                      }
#line 151 "builtin_ops.m"
                  }
#line 151 "builtin_ops.m"
                else
#line 151 "builtin_ops.m"
                  {
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_11_11;
#line 151 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_12_12;

#line 151 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 151 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 151 "builtin_ops.m"
                      {
#line 151 "builtin_ops.m"
                        backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 151 "builtin_ops.m"
                        backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 3159 "backend_libs.builtin_ops.c"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_9_9 == backend_libs__builtin_ops__V_11_11);
#line 151 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 3163 "backend_libs.builtin_ops.c"
                          {
#line 3165 "backend_libs.builtin_ops.c"
                            /* direct tailcall eliminated */
#line 3167 "backend_libs.builtin_ops.c"
                            {
#line 3169 "backend_libs.builtin_ops.c"
                              MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_10_10;
#line 3171 "backend_libs.builtin_ops.c"
                              MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_12_12;

#line 3174 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 3176 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 3178 "backend_libs.builtin_ops.c"
                            }
#line 3180 "backend_libs.builtin_ops.c"
                            continue;
#line 3182 "backend_libs.builtin_ops.c"
                          }
#line 151 "builtin_ops.m"
                      }
#line 151 "builtin_ops.m"
                  }
#line 151 "builtin_ops.m"
        return backend_libs__builtin_ops__succeeded;
#line 151 "builtin_ops.m"
      }
#line 151 "builtin_ops.m"
      break;
#line 151 "builtin_ops.m"
    }
#line 151 "builtin_ops.m"
}

#line 145 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0(
#line 145 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_56,
#line 145 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 145 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 145 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 145 "builtin_ops.m"
{
#line 145 "builtin_ops.m"
  {
#line 145 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 145 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_54 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 145 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_55 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 145 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_54 == backend_libs__builtin_ops__CastY_55);
#line 145 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 3225 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 145 "builtin_ops.m"
    else
#line 145 "builtin_ops.m"
      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 145 "builtin_ops.m"
        {
#line 145 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 145 "builtin_ops.m"
          MR_Box backend_libs__builtin_ops__V_64_64 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 145 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 145 "builtin_ops.m"
            {
#line 145 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_6_6 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
#line 145 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 145 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_8_8;

#line 145 "builtin_ops.m"
              {
#line 145 "builtin_ops.m"
                mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_64_64, backend_libs__builtin_ops__V_6_6);
              }
#line 3254 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_8_8 == (MR_Integer) 0);
#line 145 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 145 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 145 "builtin_ops.m"
                *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_8_8;
#line 145 "builtin_ops.m"
              else
#line 145 "builtin_ops.m"
                {
#line 145 "builtin_ops.m"
                  backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_63_63, backend_libs__builtin_ops__V_7_7);
#line 145 "builtin_ops.m"
                  return;
                }
#line 145 "builtin_ops.m"
            }
#line 145 "builtin_ops.m"
          else
#line 145 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3277 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 145 "builtin_ops.m"
            else
#line 145 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3283 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 145 "builtin_ops.m"
              else
#line 3287 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 145 "builtin_ops.m"
        }
#line 145 "builtin_ops.m"
      else
#line 145 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 145 "builtin_ops.m"
          {
#line 145 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 145 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3302 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 145 "builtin_ops.m"
            else
#line 145 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 145 "builtin_ops.m"
                {
#line 145 "builtin_ops.m"
                  MR_Word backend_libs__builtin_ops__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 145 "builtin_ops.m"
                  {
#line 145 "builtin_ops.m"
                    mercury__list____Compare____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_65_65, backend_libs__builtin_ops__V_53_53);
#line 145 "builtin_ops.m"
                    return;
                  }
#line 145 "builtin_ops.m"
                }
#line 145 "builtin_ops.m"
              else
#line 145 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3326 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 145 "builtin_ops.m"
                else
#line 3330 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 145 "builtin_ops.m"
          }
#line 145 "builtin_ops.m"
        else
#line 145 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 145 "builtin_ops.m"
            {
#line 145 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_66_66 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
#line 145 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_67_67 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 145 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3347 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 145 "builtin_ops.m"
              else
#line 145 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3353 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 145 "builtin_ops.m"
                else
#line 145 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 145 "builtin_ops.m"
                    {
#line 145 "builtin_ops.m"
                      MR_Box backend_libs__builtin_ops__V_25_25 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
#line 145 "builtin_ops.m"
                      MR_Box backend_libs__builtin_ops__V_26_26 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1));
#line 145 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__V_27_27;

#line 145 "builtin_ops.m"
                      {
#line 145 "builtin_ops.m"
                        mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__V_27_27, backend_libs__builtin_ops__V_67_67, backend_libs__builtin_ops__V_25_25);
                      }
#line 3373 "backend_libs.builtin_ops.c"
                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_27_27 == (MR_Integer) 0);
#line 145 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 145 "builtin_ops.m"
                      if (backend_libs__builtin_ops__succeeded)
#line 145 "builtin_ops.m"
                        *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_27_27;
#line 145 "builtin_ops.m"
                      else
#line 145 "builtin_ops.m"
                        {
#line 145 "builtin_ops.m"
                          mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_66_66, backend_libs__builtin_ops__V_26_26);
#line 145 "builtin_ops.m"
                          return;
                        }
#line 145 "builtin_ops.m"
                    }
#line 145 "builtin_ops.m"
                  else
#line 3394 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 145 "builtin_ops.m"
            }
#line 145 "builtin_ops.m"
          else
#line 145 "builtin_ops.m"
            {
#line 145 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 145 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3407 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 145 "builtin_ops.m"
              else
#line 145 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3413 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 145 "builtin_ops.m"
                else
#line 145 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3419 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 145 "builtin_ops.m"
                  else
#line 145 "builtin_ops.m"
                    {
#line 145 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 145 "builtin_ops.m"
                      {
#line 145 "builtin_ops.m"
                        backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_68_68, backend_libs__builtin_ops__V_41_41);
#line 145 "builtin_ops.m"
                        return;
                      }
#line 145 "builtin_ops.m"
                    }
#line 145 "builtin_ops.m"
            }
#line 145 "builtin_ops.m"
  }
#line 145 "builtin_ops.m"
}

#line 145 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0(
#line 145 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_17,
#line 145 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 145 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 145 "builtin_ops.m"
{
#line 145 "builtin_ops.m"
  {
#line 145 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 145 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_15 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 145 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_16 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 145 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_15 == backend_libs__builtin_ops__CastY_16);
#line 145 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 145 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 145 "builtin_ops.m"
    else
#line 145 "builtin_ops.m"
      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 145 "builtin_ops.m"
        {
#line 145 "builtin_ops.m"
          MR_Box backend_libs__builtin_ops__V_3_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 145 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 145 "builtin_ops.m"
          MR_Box backend_libs__builtin_ops__V_5_5;
#line 145 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_6_6;

#line 145 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 145 "builtin_ops.m"
          if (backend_libs__builtin_ops__succeeded)
#line 145 "builtin_ops.m"
            {
#line 145 "builtin_ops.m"
              backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 145 "builtin_ops.m"
              backend_libs__builtin_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 3495 "backend_libs.builtin_ops.c"
              {
#line 3497 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_5_5);
              }
#line 145 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 3502 "backend_libs.builtin_ops.c"
                {
#line 3504 "backend_libs.builtin_ops.c"
                  return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_4_4, backend_libs__builtin_ops__V_6_6);
                }
#line 145 "builtin_ops.m"
            }
#line 145 "builtin_ops.m"
        }
#line 145 "builtin_ops.m"
      else
#line 145 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 145 "builtin_ops.m"
          {
#line 145 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_14_14;

#line 145 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 145 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 145 "builtin_ops.m"
              {
#line 145 "builtin_ops.m"
                backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 3530 "backend_libs.builtin_ops.c"
                {
#line 3532 "backend_libs.builtin_ops.c"
                  return backend_libs__builtin_ops__succeeded = mercury__list____Unify____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_14_14);
                }
#line 145 "builtin_ops.m"
              }
#line 145 "builtin_ops.m"
          }
#line 145 "builtin_ops.m"
        else
#line 145 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 145 "builtin_ops.m"
            {
#line 145 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_7_7 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 145 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_8_8 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1));
#line 145 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_9_9;
#line 145 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_10_10;

#line 145 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 145 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 145 "builtin_ops.m"
                {
#line 145 "builtin_ops.m"
                  backend_libs__builtin_ops__V_9_9 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 145 "builtin_ops.m"
                  backend_libs__builtin_ops__V_10_10 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
#line 3564 "backend_libs.builtin_ops.c"
                  {
#line 3566 "backend_libs.builtin_ops.c"
                    backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_9_9);
                  }
#line 145 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 3571 "backend_libs.builtin_ops.c"
                    {
#line 3573 "backend_libs.builtin_ops.c"
                      return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_10_10);
                    }
#line 145 "builtin_ops.m"
                }
#line 145 "builtin_ops.m"
            }
#line 145 "builtin_ops.m"
          else
#line 145 "builtin_ops.m"
            {
#line 145 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 145 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_12_12;

#line 145 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 145 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 145 "builtin_ops.m"
                {
#line 145 "builtin_ops.m"
                  backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 3597 "backend_libs.builtin_ops.c"
                  {
#line 3599 "backend_libs.builtin_ops.c"
                    return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_11_11, backend_libs__builtin_ops__V_12_12);
                  }
#line 145 "builtin_ops.m"
                }
#line 145 "builtin_ops.m"
            }
#line 145 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 145 "builtin_ops.m"
  }
#line 145 "builtin_ops.m"
}

#line 114 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(
#line 114 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 114 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 114 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 114 "builtin_ops.m"
{
#line 114 "builtin_ops.m"
  {
#line 114 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 114 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar1_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 114 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar2_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 114 "builtin_ops.m"
    {
#line 114 "builtin_ops.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Cast_HeadVar1_4, backend_libs__builtin_ops__Cast_HeadVar2_5);
#line 114 "builtin_ops.m"
      return;
    }
#line 114 "builtin_ops.m"
  }
#line 114 "builtin_ops.m"
}

#line 114 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(
#line 114 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_1,
#line 114 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 114 "builtin_ops.m"
{
#line 3654 "backend_libs.builtin_ops.c"
  {
#line 3656 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 3659 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 3661 "backend_libs.builtin_ops.c"
  }
#line 114 "builtin_ops.m"
}

#line 47 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0(
#line 47 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 47 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 47 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 47 "builtin_ops.m"
{
#line 47 "builtin_ops.m"
  {
#line 47 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 47 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_9 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 47 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_10 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 47 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_9 == backend_libs__builtin_ops__CastY_10);
#line 47 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 3690 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
      {
#line 47 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__V_4_4;
#line 47 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__V_5_5;

#line 47 "builtin_ops.m"
        {
#line 47 "builtin_ops.m"
          backend_libs__builtin_ops____Index____binary_op_0_0(backend_libs__builtin_ops__HeadVar__2_2, &backend_libs__builtin_ops__V_4_4);
        }
#line 47 "builtin_ops.m"
        {
#line 47 "builtin_ops.m"
          backend_libs__builtin_ops____Index____binary_op_0_0(backend_libs__builtin_ops__HeadVar__3_3, &backend_libs__builtin_ops__V_5_5);
        }
#line 47 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 < backend_libs__builtin_ops__V_5_5);
#line 47 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 3715 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "builtin_ops.m"
        else
#line 47 "builtin_ops.m"
          {
#line 47 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 > backend_libs__builtin_ops__V_5_5);
#line 47 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 3725 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "builtin_ops.m"
            else
#line 47 "builtin_ops.m"
              {
#line 47 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_6_6;

#line 47 "builtin_ops.m"
                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 47 "builtin_ops.m"
                  {
#line 47 "builtin_ops.m"
                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                  }
#line 47 "builtin_ops.m"
                else
#line 47 "builtin_ops.m"
                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 47 "builtin_ops.m"
                    {
#line 47 "builtin_ops.m"
                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                    }
#line 47 "builtin_ops.m"
                  else
#line 47 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 47 "builtin_ops.m"
                      {
#line 47 "builtin_ops.m"
                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                      }
#line 47 "builtin_ops.m"
                    else
#line 47 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                      else
#line 47 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 47 "builtin_ops.m"
                          {
#line 47 "builtin_ops.m"
                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                          }
#line 47 "builtin_ops.m"
                        else
#line 47 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41)))))
#line 47 "builtin_ops.m"
                            {
#line 47 "builtin_ops.m"
                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                            }
#line 47 "builtin_ops.m"
                          else
#line 47 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 47 "builtin_ops.m"
                              {
#line 47 "builtin_ops.m"
                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                              }
#line 47 "builtin_ops.m"
                            else
#line 47 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 47 "builtin_ops.m"
                                {
#line 47 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                }
#line 47 "builtin_ops.m"
                              else
#line 47 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 47 "builtin_ops.m"
                                  {
#line 47 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                  }
#line 47 "builtin_ops.m"
                                else
#line 47 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 47 "builtin_ops.m"
                                    {
#line 47 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                    }
#line 47 "builtin_ops.m"
                                  else
#line 47 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 47 "builtin_ops.m"
                                      {
#line 47 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                      }
#line 47 "builtin_ops.m"
                                    else
#line 47 "builtin_ops.m"
                                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 47 "builtin_ops.m"
                                        {
#line 47 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                        }
#line 47 "builtin_ops.m"
                                      else
#line 47 "builtin_ops.m"
                                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 47 "builtin_ops.m"
                                          {
#line 47 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                          }
#line 47 "builtin_ops.m"
                                        else
#line 47 "builtin_ops.m"
                                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 47 "builtin_ops.m"
                                            {
#line 47 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                            }
#line 47 "builtin_ops.m"
                                          else
#line 47 "builtin_ops.m"
                                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 47 "builtin_ops.m"
                                              {
#line 47 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                              }
#line 47 "builtin_ops.m"
                                            else
#line 47 "builtin_ops.m"
                                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 47 "builtin_ops.m"
                                                {
#line 47 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                }
#line 47 "builtin_ops.m"
                                              else
#line 47 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 47 "builtin_ops.m"
                                                  {
#line 47 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                  }
#line 47 "builtin_ops.m"
                                                else
#line 47 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 47 "builtin_ops.m"
                                                    {
#line 47 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                    }
#line 47 "builtin_ops.m"
                                                  else
#line 47 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 47 "builtin_ops.m"
                                                      {
#line 47 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                      }
#line 47 "builtin_ops.m"
                                                    else
#line 47 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 47 "builtin_ops.m"
                                                        {
#line 47 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                        }
#line 47 "builtin_ops.m"
                                                      else
#line 47 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 47 "builtin_ops.m"
                                                          {
#line 47 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                          }
#line 47 "builtin_ops.m"
                                                        else
#line 47 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 47 "builtin_ops.m"
                                                            {
#line 47 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                            }
#line 47 "builtin_ops.m"
                                                          else
#line 47 "builtin_ops.m"
                                                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 47 "builtin_ops.m"
                                                              {
#line 47 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                              }
#line 47 "builtin_ops.m"
                                                            else
#line 47 "builtin_ops.m"
                                                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 47 "builtin_ops.m"
                                                                {
#line 47 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                }
#line 47 "builtin_ops.m"
                                                              else
#line 47 "builtin_ops.m"
                                                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 47 "builtin_ops.m"
                                                                  {
#line 47 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                  }
#line 47 "builtin_ops.m"
                                                                else
#line 47 "builtin_ops.m"
                                                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 47 "builtin_ops.m"
                                                                    {
#line 47 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                    }
#line 47 "builtin_ops.m"
                                                                  else
#line 47 "builtin_ops.m"
                                                                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 47 "builtin_ops.m"
                                                                      {
#line 47 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                      }
#line 47 "builtin_ops.m"
                                                                    else
#line 47 "builtin_ops.m"
                                                                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 47 "builtin_ops.m"
                                                                        {
#line 47 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                        }
#line 47 "builtin_ops.m"
                                                                      else
#line 47 "builtin_ops.m"
                                                                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 47 "builtin_ops.m"
                                                                          {
#line 47 "builtin_ops.m"
                                                                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                          }
#line 47 "builtin_ops.m"
                                                                        else
#line 47 "builtin_ops.m"
                                                                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 47 "builtin_ops.m"
                                                                            {
#line 47 "builtin_ops.m"
                                                                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                            }
#line 47 "builtin_ops.m"
                                                                          else
#line 47 "builtin_ops.m"
                                                                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 47 "builtin_ops.m"
                                                                              {
#line 47 "builtin_ops.m"
                                                                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                              }
#line 47 "builtin_ops.m"
                                                                            else
#line 47 "builtin_ops.m"
                                                                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 47 "builtin_ops.m"
                                                                                {
#line 47 "builtin_ops.m"
                                                                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                }
#line 47 "builtin_ops.m"
                                                                              else
#line 47 "builtin_ops.m"
                                                                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 47 "builtin_ops.m"
                                                                                  {
#line 47 "builtin_ops.m"
                                                                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                  }
#line 47 "builtin_ops.m"
                                                                                else
#line 47 "builtin_ops.m"
                                                                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 47 "builtin_ops.m"
                                                                                    {
#line 47 "builtin_ops.m"
                                                                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                    }
#line 47 "builtin_ops.m"
                                                                                  else
#line 47 "builtin_ops.m"
                                                                                    if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 47 "builtin_ops.m"
                                                                                      {
#line 47 "builtin_ops.m"
                                                                                        backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                      }
#line 47 "builtin_ops.m"
                                                                                    else
#line 47 "builtin_ops.m"
                                                                                      if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 47 "builtin_ops.m"
                                                                                        {
#line 47 "builtin_ops.m"
                                                                                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                        }
#line 47 "builtin_ops.m"
                                                                                      else
#line 47 "builtin_ops.m"
                                                                                        if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 47 "builtin_ops.m"
                                                                                          {
#line 47 "builtin_ops.m"
                                                                                            backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                          }
#line 47 "builtin_ops.m"
                                                                                        else
#line 47 "builtin_ops.m"
                                                                                          if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 47 "builtin_ops.m"
                                                                                            {
#line 47 "builtin_ops.m"
                                                                                              backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                            }
#line 47 "builtin_ops.m"
                                                                                          else
#line 47 "builtin_ops.m"
                                                                                            if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 47 "builtin_ops.m"
                                                                                              {
#line 47 "builtin_ops.m"
                                                                                                backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                              }
#line 47 "builtin_ops.m"
                                                                                            else
#line 47 "builtin_ops.m"
                                                                                              if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 47 "builtin_ops.m"
                                                                                                {
#line 47 "builtin_ops.m"
                                                                                                  backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                                }
#line 47 "builtin_ops.m"
                                                                                              else
#line 47 "builtin_ops.m"
                                                                                                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 47 "builtin_ops.m"
                                                                                                  {
#line 47 "builtin_ops.m"
                                                                                                    backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                                  }
#line 47 "builtin_ops.m"
                                                                                                else
#line 47 "builtin_ops.m"
                                                                                                  if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 47 "builtin_ops.m"
                                                                                                    {
#line 47 "builtin_ops.m"
                                                                                                      backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                                                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                                    }
#line 47 "builtin_ops.m"
                                                                                                  else
#line 47 "builtin_ops.m"
                                                                                                    {
#line 47 "builtin_ops.m"
                                                                                                      MR_Word backend_libs__builtin_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "builtin_ops.m"
                                                                                                      MR_Word backend_libs__builtin_ops__V_8_8;

#line 47 "builtin_ops.m"
                                                                                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 47 "builtin_ops.m"
                                                                                                      if (backend_libs__builtin_ops__succeeded)
#line 47 "builtin_ops.m"
                                                                                                        {
#line 47 "builtin_ops.m"
                                                                                                          backend_libs__builtin_ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "builtin_ops.m"
                                                                                                          {
#line 47 "builtin_ops.m"
                                                                                                            backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__V_6_6, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_8_8);
                                                                                                          }
#line 47 "builtin_ops.m"
                                                                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                                                                                                        }
#line 47 "builtin_ops.m"
                                                                                                    }
#line 47 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 47 "builtin_ops.m"
                  *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_6_6;
#line 47 "builtin_ops.m"
                else
#line 47 "builtin_ops.m"
                  {
#line 47 "builtin_ops.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 47 "builtin_ops.m"
                    return;
                  }
#line 47 "builtin_ops.m"
              }
#line 47 "builtin_ops.m"
          }
#line 47 "builtin_ops.m"
      }
#line 47 "builtin_ops.m"
  }
#line 47 "builtin_ops.m"
}

#line 47 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Index____binary_op_0_0(
#line 47 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 47 "builtin_ops.m"
  MR_Integer * backend_libs__builtin_ops__HeadVar__2_2)
#line 47 "builtin_ops.m"
{
#line 47 "builtin_ops.m"
  {
#line 47 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 4304 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 7;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 4310 "backend_libs.builtin_ops.c"
        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 8;
#line 47 "builtin_ops.m"
      else
#line 47 "builtin_ops.m"
        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 4316 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 9;
#line 47 "builtin_ops.m"
        else
#line 47 "builtin_ops.m"
          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 4322 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 14;
#line 47 "builtin_ops.m"
          else
#line 47 "builtin_ops.m"
            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 4328 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 41;
#line 47 "builtin_ops.m"
            else
#line 47 "builtin_ops.m"
              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41)))))
#line 4334 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 42;
#line 47 "builtin_ops.m"
              else
#line 47 "builtin_ops.m"
                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 4340 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 12;
#line 47 "builtin_ops.m"
                else
#line 47 "builtin_ops.m"
                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 4346 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 31;
#line 47 "builtin_ops.m"
                  else
#line 47 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 4352 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 32;
#line 47 "builtin_ops.m"
                    else
#line 47 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 4358 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 39;
#line 47 "builtin_ops.m"
                      else
#line 47 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 4364 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 37;
#line 47 "builtin_ops.m"
                        else
#line 47 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 4370 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 35;
#line 47 "builtin_ops.m"
                          else
#line 47 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 4376 "backend_libs.builtin_ops.c"
                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 36;
#line 47 "builtin_ops.m"
                            else
#line 47 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 4382 "backend_libs.builtin_ops.c"
                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 34;
#line 47 "builtin_ops.m"
                              else
#line 47 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 4388 "backend_libs.builtin_ops.c"
                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 29;
#line 47 "builtin_ops.m"
                                else
#line 47 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 4394 "backend_libs.builtin_ops.c"
                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 33;
#line 47 "builtin_ops.m"
                                  else
#line 47 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 4400 "backend_libs.builtin_ops.c"
                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 28;
#line 47 "builtin_ops.m"
                                    else
#line 47 "builtin_ops.m"
                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 4406 "backend_libs.builtin_ops.c"
                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 30;
#line 47 "builtin_ops.m"
                                      else
#line 47 "builtin_ops.m"
                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 4412 "backend_libs.builtin_ops.c"
                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 38;
#line 47 "builtin_ops.m"
                                        else
#line 47 "builtin_ops.m"
                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4418 "backend_libs.builtin_ops.c"
                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                                          else
#line 47 "builtin_ops.m"
                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 4424 "backend_libs.builtin_ops.c"
                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 3;
#line 47 "builtin_ops.m"
                                            else
#line 47 "builtin_ops.m"
                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 4430 "backend_libs.builtin_ops.c"
                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 26;
#line 47 "builtin_ops.m"
                                              else
#line 47 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 4436 "backend_libs.builtin_ops.c"
                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 24;
#line 47 "builtin_ops.m"
                                                else
#line 47 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 4442 "backend_libs.builtin_ops.c"
                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 25;
#line 47 "builtin_ops.m"
                                                  else
#line 47 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 4448 "backend_libs.builtin_ops.c"
                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 23;
#line 47 "builtin_ops.m"
                                                    else
#line 47 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4454 "backend_libs.builtin_ops.c"
                                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 4;
#line 47 "builtin_ops.m"
                                                      else
#line 47 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4460 "backend_libs.builtin_ops.c"
                                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 2;
#line 47 "builtin_ops.m"
                                                        else
#line 47 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4466 "backend_libs.builtin_ops.c"
                                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 1;
#line 47 "builtin_ops.m"
                                                          else
#line 47 "builtin_ops.m"
                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 4472 "backend_libs.builtin_ops.c"
                                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 10;
#line 47 "builtin_ops.m"
                                                            else
#line 47 "builtin_ops.m"
                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 4478 "backend_libs.builtin_ops.c"
                                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 11;
#line 47 "builtin_ops.m"
                                                              else
#line 47 "builtin_ops.m"
                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 4484 "backend_libs.builtin_ops.c"
                                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 13;
#line 47 "builtin_ops.m"
                                                                else
#line 47 "builtin_ops.m"
                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 4490 "backend_libs.builtin_ops.c"
                                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 40;
#line 47 "builtin_ops.m"
                                                                  else
#line 47 "builtin_ops.m"
                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 4496 "backend_libs.builtin_ops.c"
                                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 22;
#line 47 "builtin_ops.m"
                                                                    else
#line 47 "builtin_ops.m"
                                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 4502 "backend_libs.builtin_ops.c"
                                                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 16;
#line 47 "builtin_ops.m"
                                                                      else
#line 47 "builtin_ops.m"
                                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 4508 "backend_libs.builtin_ops.c"
                                                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 21;
#line 47 "builtin_ops.m"
                                                                        else
#line 47 "builtin_ops.m"
                                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 4514 "backend_libs.builtin_ops.c"
                                                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 19;
#line 47 "builtin_ops.m"
                                                                          else
#line 47 "builtin_ops.m"
                                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 4520 "backend_libs.builtin_ops.c"
                                                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 20;
#line 47 "builtin_ops.m"
                                                                            else
#line 47 "builtin_ops.m"
                                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 4526 "backend_libs.builtin_ops.c"
                                                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 18;
#line 47 "builtin_ops.m"
                                                                              else
#line 47 "builtin_ops.m"
                                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 4532 "backend_libs.builtin_ops.c"
                                                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 17;
#line 47 "builtin_ops.m"
                                                                                else
#line 47 "builtin_ops.m"
                                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4538 "backend_libs.builtin_ops.c"
                                                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 5;
#line 47 "builtin_ops.m"
                                                                                  else
#line 47 "builtin_ops.m"
                                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 4544 "backend_libs.builtin_ops.c"
                                                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 6;
#line 47 "builtin_ops.m"
                                                                                    else
#line 47 "builtin_ops.m"
                                                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 4550 "backend_libs.builtin_ops.c"
                                                                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 27;
#line 47 "builtin_ops.m"
                                                                                      else
#line 4554 "backend_libs.builtin_ops.c"
                                                                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 15;
#line 47 "builtin_ops.m"
  }
#line 47 "builtin_ops.m"
}

#line 47 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0(
#line 47 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 47 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 47 "builtin_ops.m"
{
#line 47 "builtin_ops.m"
  {
#line 47 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 47 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_89 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_90 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_89 == backend_libs__builtin_ops__CastY_90);
#line 47 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 47 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 47 "builtin_ops.m"
        {
#line 47 "builtin_ops.m"
          MR_Integer backend_libs__builtin_ops__CastX_17 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
          MR_Integer backend_libs__builtin_ops__CastY_18 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_18 == backend_libs__builtin_ops__CastX_17);
#line 47 "builtin_ops.m"
        }
#line 47 "builtin_ops.m"
      else
#line 47 "builtin_ops.m"
        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 47 "builtin_ops.m"
          {
#line 47 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__CastX_19 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__CastY_20 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_20 == backend_libs__builtin_ops__CastX_19);
#line 47 "builtin_ops.m"
          }
#line 47 "builtin_ops.m"
        else
#line 47 "builtin_ops.m"
          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 47 "builtin_ops.m"
            {
#line 47 "builtin_ops.m"
              MR_Integer backend_libs__builtin_ops__CastX_21 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
              MR_Integer backend_libs__builtin_ops__CastY_22 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_22 == backend_libs__builtin_ops__CastX_21);
#line 47 "builtin_ops.m"
            }
#line 47 "builtin_ops.m"
          else
#line 47 "builtin_ops.m"
            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 47 "builtin_ops.m"
              {
#line 47 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__CastX_31 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__CastY_32 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_32 == backend_libs__builtin_ops__CastX_31);
#line 47 "builtin_ops.m"
              }
#line 47 "builtin_ops.m"
            else
#line 47 "builtin_ops.m"
              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 47 "builtin_ops.m"
                {
#line 47 "builtin_ops.m"
                  MR_Integer backend_libs__builtin_ops__CastX_85 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                  MR_Integer backend_libs__builtin_ops__CastY_86 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_86 == backend_libs__builtin_ops__CastX_85);
#line 47 "builtin_ops.m"
                }
#line 47 "builtin_ops.m"
              else
#line 47 "builtin_ops.m"
                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41)))))
#line 47 "builtin_ops.m"
                  {
#line 47 "builtin_ops.m"
                    MR_Integer backend_libs__builtin_ops__CastX_87 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                    MR_Integer backend_libs__builtin_ops__CastY_88 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_88 == backend_libs__builtin_ops__CastX_87);
#line 47 "builtin_ops.m"
                  }
#line 47 "builtin_ops.m"
                else
#line 47 "builtin_ops.m"
                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 47 "builtin_ops.m"
                    {
#line 47 "builtin_ops.m"
                      MR_Integer backend_libs__builtin_ops__CastX_27 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                      MR_Integer backend_libs__builtin_ops__CastY_28 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_28 == backend_libs__builtin_ops__CastX_27);
#line 47 "builtin_ops.m"
                    }
#line 47 "builtin_ops.m"
                  else
#line 47 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 47 "builtin_ops.m"
                      {
#line 47 "builtin_ops.m"
                        MR_Integer backend_libs__builtin_ops__CastX_65 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                        MR_Integer backend_libs__builtin_ops__CastY_66 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_66 == backend_libs__builtin_ops__CastX_65);
#line 47 "builtin_ops.m"
                      }
#line 47 "builtin_ops.m"
                    else
#line 47 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          MR_Integer backend_libs__builtin_ops__CastX_67 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                          MR_Integer backend_libs__builtin_ops__CastY_68 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_68 == backend_libs__builtin_ops__CastX_67);
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                      else
#line 47 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 47 "builtin_ops.m"
                          {
#line 47 "builtin_ops.m"
                            MR_Integer backend_libs__builtin_ops__CastX_81 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                            MR_Integer backend_libs__builtin_ops__CastY_82 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_82 == backend_libs__builtin_ops__CastX_81);
#line 47 "builtin_ops.m"
                          }
#line 47 "builtin_ops.m"
                        else
#line 47 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 47 "builtin_ops.m"
                            {
#line 47 "builtin_ops.m"
                              MR_Integer backend_libs__builtin_ops__CastX_77 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                              MR_Integer backend_libs__builtin_ops__CastY_78 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_78 == backend_libs__builtin_ops__CastX_77);
#line 47 "builtin_ops.m"
                            }
#line 47 "builtin_ops.m"
                          else
#line 47 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 47 "builtin_ops.m"
                              {
#line 47 "builtin_ops.m"
                                MR_Integer backend_libs__builtin_ops__CastX_73 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                MR_Integer backend_libs__builtin_ops__CastY_74 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_74 == backend_libs__builtin_ops__CastX_73);
#line 47 "builtin_ops.m"
                              }
#line 47 "builtin_ops.m"
                            else
#line 47 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 47 "builtin_ops.m"
                                {
#line 47 "builtin_ops.m"
                                  MR_Integer backend_libs__builtin_ops__CastX_75 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                  MR_Integer backend_libs__builtin_ops__CastY_76 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_76 == backend_libs__builtin_ops__CastX_75);
#line 47 "builtin_ops.m"
                                }
#line 47 "builtin_ops.m"
                              else
#line 47 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 47 "builtin_ops.m"
                                  {
#line 47 "builtin_ops.m"
                                    MR_Integer backend_libs__builtin_ops__CastX_71 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                    MR_Integer backend_libs__builtin_ops__CastY_72 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_72 == backend_libs__builtin_ops__CastX_71);
#line 47 "builtin_ops.m"
                                  }
#line 47 "builtin_ops.m"
                                else
#line 47 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 47 "builtin_ops.m"
                                    {
#line 47 "builtin_ops.m"
                                      MR_Integer backend_libs__builtin_ops__CastX_61 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                      MR_Integer backend_libs__builtin_ops__CastY_62 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_62 == backend_libs__builtin_ops__CastX_61);
#line 47 "builtin_ops.m"
                                    }
#line 47 "builtin_ops.m"
                                  else
#line 47 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 47 "builtin_ops.m"
                                      {
#line 47 "builtin_ops.m"
                                        MR_Integer backend_libs__builtin_ops__CastX_69 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                        MR_Integer backend_libs__builtin_ops__CastY_70 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_70 == backend_libs__builtin_ops__CastX_69);
#line 47 "builtin_ops.m"
                                      }
#line 47 "builtin_ops.m"
                                    else
#line 47 "builtin_ops.m"
                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 47 "builtin_ops.m"
                                        {
#line 47 "builtin_ops.m"
                                          MR_Integer backend_libs__builtin_ops__CastX_59 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                          MR_Integer backend_libs__builtin_ops__CastY_60 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_60 == backend_libs__builtin_ops__CastX_59);
#line 47 "builtin_ops.m"
                                        }
#line 47 "builtin_ops.m"
                                      else
#line 47 "builtin_ops.m"
                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 47 "builtin_ops.m"
                                          {
#line 47 "builtin_ops.m"
                                            MR_Integer backend_libs__builtin_ops__CastX_63 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                            MR_Integer backend_libs__builtin_ops__CastY_64 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_64 == backend_libs__builtin_ops__CastX_63);
#line 47 "builtin_ops.m"
                                          }
#line 47 "builtin_ops.m"
                                        else
#line 47 "builtin_ops.m"
                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 47 "builtin_ops.m"
                                            {
#line 47 "builtin_ops.m"
                                              MR_Integer backend_libs__builtin_ops__CastX_79 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                              MR_Integer backend_libs__builtin_ops__CastY_80 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_80 == backend_libs__builtin_ops__CastX_79);
#line 47 "builtin_ops.m"
                                            }
#line 47 "builtin_ops.m"
                                          else
#line 47 "builtin_ops.m"
                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 47 "builtin_ops.m"
                                              {
#line 47 "builtin_ops.m"
                                                MR_Integer backend_libs__builtin_ops__CastX_3 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                MR_Integer backend_libs__builtin_ops__CastY_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_4 == backend_libs__builtin_ops__CastX_3);
#line 47 "builtin_ops.m"
                                              }
#line 47 "builtin_ops.m"
                                            else
#line 47 "builtin_ops.m"
                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 47 "builtin_ops.m"
                                                {
#line 47 "builtin_ops.m"
                                                  MR_Integer backend_libs__builtin_ops__CastX_9 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                  MR_Integer backend_libs__builtin_ops__CastY_10 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_10 == backend_libs__builtin_ops__CastX_9);
#line 47 "builtin_ops.m"
                                                }
#line 47 "builtin_ops.m"
                                              else
#line 47 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 47 "builtin_ops.m"
                                                  {
#line 47 "builtin_ops.m"
                                                    MR_Integer backend_libs__builtin_ops__CastX_55 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                    MR_Integer backend_libs__builtin_ops__CastY_56 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_56 == backend_libs__builtin_ops__CastX_55);
#line 47 "builtin_ops.m"
                                                  }
#line 47 "builtin_ops.m"
                                                else
#line 47 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 47 "builtin_ops.m"
                                                    {
#line 47 "builtin_ops.m"
                                                      MR_Integer backend_libs__builtin_ops__CastX_51 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                      MR_Integer backend_libs__builtin_ops__CastY_52 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_52 == backend_libs__builtin_ops__CastX_51);
#line 47 "builtin_ops.m"
                                                    }
#line 47 "builtin_ops.m"
                                                  else
#line 47 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 47 "builtin_ops.m"
                                                      {
#line 47 "builtin_ops.m"
                                                        MR_Integer backend_libs__builtin_ops__CastX_53 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                        MR_Integer backend_libs__builtin_ops__CastY_54 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_54 == backend_libs__builtin_ops__CastX_53);
#line 47 "builtin_ops.m"
                                                      }
#line 47 "builtin_ops.m"
                                                    else
#line 47 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 47 "builtin_ops.m"
                                                        {
#line 47 "builtin_ops.m"
                                                          MR_Integer backend_libs__builtin_ops__CastX_49 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                          MR_Integer backend_libs__builtin_ops__CastY_50 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_50 == backend_libs__builtin_ops__CastX_49);
#line 47 "builtin_ops.m"
                                                        }
#line 47 "builtin_ops.m"
                                                      else
#line 47 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 47 "builtin_ops.m"
                                                          {
#line 47 "builtin_ops.m"
                                                            MR_Integer backend_libs__builtin_ops__CastX_11 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                            MR_Integer backend_libs__builtin_ops__CastY_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_12 == backend_libs__builtin_ops__CastX_11);
#line 47 "builtin_ops.m"
                                                          }
#line 47 "builtin_ops.m"
                                                        else
#line 47 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 47 "builtin_ops.m"
                                                            {
#line 47 "builtin_ops.m"
                                                              MR_Integer backend_libs__builtin_ops__CastX_7 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                              MR_Integer backend_libs__builtin_ops__CastY_8 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_8 == backend_libs__builtin_ops__CastX_7);
#line 47 "builtin_ops.m"
                                                            }
#line 47 "builtin_ops.m"
                                                          else
#line 47 "builtin_ops.m"
                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 47 "builtin_ops.m"
                                                              {
#line 47 "builtin_ops.m"
                                                                MR_Integer backend_libs__builtin_ops__CastX_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                MR_Integer backend_libs__builtin_ops__CastY_6 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_6 == backend_libs__builtin_ops__CastX_5);
#line 47 "builtin_ops.m"
                                                              }
#line 47 "builtin_ops.m"
                                                            else
#line 47 "builtin_ops.m"
                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 47 "builtin_ops.m"
                                                                {
#line 47 "builtin_ops.m"
                                                                  MR_Integer backend_libs__builtin_ops__CastX_23 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                  MR_Integer backend_libs__builtin_ops__CastY_24 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_24 == backend_libs__builtin_ops__CastX_23);
#line 47 "builtin_ops.m"
                                                                }
#line 47 "builtin_ops.m"
                                                              else
#line 47 "builtin_ops.m"
                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 47 "builtin_ops.m"
                                                                  {
#line 47 "builtin_ops.m"
                                                                    MR_Integer backend_libs__builtin_ops__CastX_25 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                    MR_Integer backend_libs__builtin_ops__CastY_26 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_26 == backend_libs__builtin_ops__CastX_25);
#line 47 "builtin_ops.m"
                                                                  }
#line 47 "builtin_ops.m"
                                                                else
#line 47 "builtin_ops.m"
                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 47 "builtin_ops.m"
                                                                    {
#line 47 "builtin_ops.m"
                                                                      MR_Integer backend_libs__builtin_ops__CastX_29 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                      MR_Integer backend_libs__builtin_ops__CastY_30 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_30 == backend_libs__builtin_ops__CastX_29);
#line 47 "builtin_ops.m"
                                                                    }
#line 47 "builtin_ops.m"
                                                                  else
#line 47 "builtin_ops.m"
                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 47 "builtin_ops.m"
                                                                      {
#line 47 "builtin_ops.m"
                                                                        MR_Integer backend_libs__builtin_ops__CastX_83 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                        MR_Integer backend_libs__builtin_ops__CastY_84 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_84 == backend_libs__builtin_ops__CastX_83);
#line 47 "builtin_ops.m"
                                                                      }
#line 47 "builtin_ops.m"
                                                                    else
#line 47 "builtin_ops.m"
                                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 47 "builtin_ops.m"
                                                                        {
#line 47 "builtin_ops.m"
                                                                          MR_Integer backend_libs__builtin_ops__CastX_47 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                          MR_Integer backend_libs__builtin_ops__CastY_48 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_48 == backend_libs__builtin_ops__CastX_47);
#line 47 "builtin_ops.m"
                                                                        }
#line 47 "builtin_ops.m"
                                                                      else
#line 47 "builtin_ops.m"
                                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 47 "builtin_ops.m"
                                                                          {
#line 47 "builtin_ops.m"
                                                                            MR_Integer backend_libs__builtin_ops__CastX_35 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                            MR_Integer backend_libs__builtin_ops__CastY_36 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_36 == backend_libs__builtin_ops__CastX_35);
#line 47 "builtin_ops.m"
                                                                          }
#line 47 "builtin_ops.m"
                                                                        else
#line 47 "builtin_ops.m"
                                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 47 "builtin_ops.m"
                                                                            {
#line 47 "builtin_ops.m"
                                                                              MR_Integer backend_libs__builtin_ops__CastX_45 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                              MR_Integer backend_libs__builtin_ops__CastY_46 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_46 == backend_libs__builtin_ops__CastX_45);
#line 47 "builtin_ops.m"
                                                                            }
#line 47 "builtin_ops.m"
                                                                          else
#line 47 "builtin_ops.m"
                                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 47 "builtin_ops.m"
                                                                              {
#line 47 "builtin_ops.m"
                                                                                MR_Integer backend_libs__builtin_ops__CastX_41 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                                MR_Integer backend_libs__builtin_ops__CastY_42 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_42 == backend_libs__builtin_ops__CastX_41);
#line 47 "builtin_ops.m"
                                                                              }
#line 47 "builtin_ops.m"
                                                                            else
#line 47 "builtin_ops.m"
                                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 47 "builtin_ops.m"
                                                                                {
#line 47 "builtin_ops.m"
                                                                                  MR_Integer backend_libs__builtin_ops__CastX_43 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                                  MR_Integer backend_libs__builtin_ops__CastY_44 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_44 == backend_libs__builtin_ops__CastX_43);
#line 47 "builtin_ops.m"
                                                                                }
#line 47 "builtin_ops.m"
                                                                              else
#line 47 "builtin_ops.m"
                                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 47 "builtin_ops.m"
                                                                                  {
#line 47 "builtin_ops.m"
                                                                                    MR_Integer backend_libs__builtin_ops__CastX_39 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                                    MR_Integer backend_libs__builtin_ops__CastY_40 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_40 == backend_libs__builtin_ops__CastX_39);
#line 47 "builtin_ops.m"
                                                                                  }
#line 47 "builtin_ops.m"
                                                                                else
#line 47 "builtin_ops.m"
                                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 47 "builtin_ops.m"
                                                                                    {
#line 47 "builtin_ops.m"
                                                                                      MR_Integer backend_libs__builtin_ops__CastX_37 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                                      MR_Integer backend_libs__builtin_ops__CastY_38 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_38 == backend_libs__builtin_ops__CastX_37);
#line 47 "builtin_ops.m"
                                                                                    }
#line 47 "builtin_ops.m"
                                                                                  else
#line 47 "builtin_ops.m"
                                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 47 "builtin_ops.m"
                                                                                      {
#line 47 "builtin_ops.m"
                                                                                        MR_Integer backend_libs__builtin_ops__CastX_13 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                                        MR_Integer backend_libs__builtin_ops__CastY_14 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_14 == backend_libs__builtin_ops__CastX_13);
#line 47 "builtin_ops.m"
                                                                                      }
#line 47 "builtin_ops.m"
                                                                                    else
#line 47 "builtin_ops.m"
                                                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 47 "builtin_ops.m"
                                                                                        {
#line 47 "builtin_ops.m"
                                                                                          MR_Integer backend_libs__builtin_ops__CastX_15 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                                          MR_Integer backend_libs__builtin_ops__CastY_16 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_16 == backend_libs__builtin_ops__CastX_15);
#line 47 "builtin_ops.m"
                                                                                        }
#line 47 "builtin_ops.m"
                                                                                      else
#line 47 "builtin_ops.m"
                                                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 47 "builtin_ops.m"
                                                                                          {
#line 47 "builtin_ops.m"
                                                                                            MR_Integer backend_libs__builtin_ops__CastX_57 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
                                                                                            MR_Integer backend_libs__builtin_ops__CastY_58 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
                                                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_58 == backend_libs__builtin_ops__CastX_57);
#line 47 "builtin_ops.m"
                                                                                          }
#line 47 "builtin_ops.m"
                                                                                        else
#line 47 "builtin_ops.m"
                                                                                          {
#line 47 "builtin_ops.m"
                                                                                            MR_Word backend_libs__builtin_ops__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "builtin_ops.m"
                                                                                            MR_Word backend_libs__builtin_ops__V_34_34;

#line 47 "builtin_ops.m"
                                                                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 47 "builtin_ops.m"
                                                                                            if (backend_libs__builtin_ops__succeeded)
#line 47 "builtin_ops.m"
                                                                                              {
#line 47 "builtin_ops.m"
                                                                                                backend_libs__builtin_ops__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 5232 "backend_libs.builtin_ops.c"
                                                                                                {
#line 5234 "backend_libs.builtin_ops.c"
                                                                                                  return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(backend_libs__builtin_ops__V_33_33, backend_libs__builtin_ops__V_34_34);
                                                                                                }
#line 47 "builtin_ops.m"
                                                                                              }
#line 47 "builtin_ops.m"
                                                                                          }
#line 47 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 47 "builtin_ops.m"
  }
#line 47 "builtin_ops.m"
}

#line 110 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0(
#line 110 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 110 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 110 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 110 "builtin_ops.m"
{
#line 110 "builtin_ops.m"
  {
#line 110 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 110 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 110 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_13 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 110 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_12 == backend_libs__builtin_ops__CastY_13);
#line 110 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 5272 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "builtin_ops.m"
    else
#line 110 "builtin_ops.m"
      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 110 "builtin_ops.m"
        {
#line 110 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 110 "builtin_ops.m"
            {
#line 110 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 110 "builtin_ops.m"
              MR_Integer backend_libs__builtin_ops__V_18_18 = (MR_Integer) backend_libs__builtin_ops__V_16_16;
#line 110 "builtin_ops.m"
              MR_Integer backend_libs__builtin_ops__V_19_19 = (MR_Integer) backend_libs__builtin_ops__V_5_5;

#line 110 "builtin_ops.m"
              {
#line 110 "builtin_ops.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_18_18, backend_libs__builtin_ops__V_19_19);
#line 110 "builtin_ops.m"
                return;
              }
#line 110 "builtin_ops.m"
            }
#line 110 "builtin_ops.m"
          else
#line 5305 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 110 "builtin_ops.m"
        }
#line 110 "builtin_ops.m"
      else
#line 110 "builtin_ops.m"
        {
#line 110 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 110 "builtin_ops.m"
          if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5318 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "builtin_ops.m"
          else
#line 110 "builtin_ops.m"
            {
#line 110 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 110 "builtin_ops.m"
              {
#line 110 "builtin_ops.m"
                mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__builtin_ops_scalar_common_1[0], backend_libs__builtin_ops__HeadVar__1_1, ((MR_Box) (backend_libs__builtin_ops__V_17_17)), ((MR_Box) (backend_libs__builtin_ops__V_11_11)));
#line 110 "builtin_ops.m"
                return;
              }
#line 110 "builtin_ops.m"
            }
#line 110 "builtin_ops.m"
        }
#line 110 "builtin_ops.m"
  }
#line 110 "builtin_ops.m"
}

#line 110 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0(
#line 110 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 110 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 110 "builtin_ops.m"
{
#line 110 "builtin_ops.m"
  {
#line 110 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 110 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_7 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 110 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_8 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 110 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_7 == backend_libs__builtin_ops__CastY_8);
#line 110 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 110 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 110 "builtin_ops.m"
    else
#line 110 "builtin_ops.m"
      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 110 "builtin_ops.m"
        {
#line 110 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_4_4;

#line 110 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 110 "builtin_ops.m"
          if (backend_libs__builtin_ops__succeeded)
#line 110 "builtin_ops.m"
            {
#line 110 "builtin_ops.m"
              backend_libs__builtin_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 5386 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_3_3 == backend_libs__builtin_ops__V_4_4);
#line 110 "builtin_ops.m"
            }
#line 110 "builtin_ops.m"
        }
#line 110 "builtin_ops.m"
      else
#line 110 "builtin_ops.m"
        {
#line 110 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__TypeInfo_9_9;
#line 110 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 110 "builtin_ops.m"
          MR_Word backend_libs__builtin_ops__V_6_6;

#line 110 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 110 "builtin_ops.m"
          if (backend_libs__builtin_ops__succeeded)
#line 110 "builtin_ops.m"
            {
#line 110 "builtin_ops.m"
              backend_libs__builtin_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 5411 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__TypeInfo_9_9 = (MR_Word) &backend_libs__builtin_ops_scalar_common_1[0];
#line 5413 "backend_libs.builtin_ops.c"
              {
#line 5415 "backend_libs.builtin_ops.c"
                return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_9_9, ((MR_Box) (backend_libs__builtin_ops__V_5_5)), ((MR_Box) (backend_libs__builtin_ops__V_6_6)));
              }
#line 110 "builtin_ops.m"
            }
#line 110 "builtin_ops.m"
        }
#line 110 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 110 "builtin_ops.m"
  }
#line 110 "builtin_ops.m"
}

#line 142 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops__translate_builtin_5_p_0(
#line 142 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_24,
#line 142 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__FullyQualifiedModule_6,
#line 142 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__PredName_7,
#line 142 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__ProcId_8,
#line 142 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__Args_9,
#line 142 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__Code_10)
#line 142 "builtin_ops.m"
{
#line 209 "builtin_ops.m"
  {
#line 209 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 209 "builtin_ops.m"
    MR_Word backend_libs__builtin_ops__CodePrime_13;
#line 204 "builtin_ops.m"
    MR_String backend_libs__builtin_ops__ModuleName_11;
#line 204 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__ProcNum_12;
#line 204 "builtin_ops.m"
    MR_Word backend_libs__builtin_ops__V_526_526;
#line 204 "builtin_ops.m"
    MR_Box backend_libs__builtin_ops__V_527_527;

#line 204 "builtin_ops.m"
    {
#line 204 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(backend_libs__builtin_ops__FullyQualifiedModule_6, &backend_libs__builtin_ops__ModuleName_11);
    }
#line 204 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 204 "builtin_ops.m"
      {
#line 205 "builtin_ops.m"
        {
#line 205 "builtin_ops.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__builtin_ops__ProcId_8, &backend_libs__builtin_ops__ProcNum_12);
        }
#line 222 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 222 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
          {
#line 222 "builtin_ops.m"
            backend_libs__builtin_ops__V_527_527 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 0));
#line 222 "builtin_ops.m"
            backend_libs__builtin_ops__V_526_526 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 1)));
#line 224 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "io") == 0))
#line 225 "builtin_ops.m"
              {
#line 227 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 225 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 225 "builtin_ops.m"
                  {
#line 227 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 229 "builtin_ops.m"
                      {
#line 229 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_get_io_state") == 0))
#line 228 "builtin_ops.m"
                          {
#line 228 "builtin_ops.m"
                            {
#line 228 "builtin_ops.m"
                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 228 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Args_9));
#line 228 "builtin_ops.m"
                            }
#line 228 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 228 "builtin_ops.m"
                          }
#line 229 "builtin_ops.m"
                        else
#line 229 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_set_io_state") == 0))
#line 230 "builtin_ops.m"
                            {
#line 231 "builtin_ops.m"
                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_2[0]);
#line 230 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 230 "builtin_ops.m"
                            }
#line 229 "builtin_ops.m"
                          else
#line 229 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 229 "builtin_ops.m"
                      }
#line 225 "builtin_ops.m"
                  }
#line 225 "builtin_ops.m"
              }
#line 224 "builtin_ops.m"
            else
#line 224 "builtin_ops.m"
              if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "int") == 0))
#line 282 "builtin_ops.m"
                {
#line 282 "builtin_ops.m"
                  MR_Word backend_libs__builtin_ops__V_538_538;
#line 282 "builtin_ops.m"
                  MR_Box backend_libs__builtin_ops__V_539_539;

#line 347 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                    {
#line 347 "builtin_ops.m"
                      backend_libs__builtin_ops__V_539_539 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                      backend_libs__builtin_ops__V_538_538 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 282 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "*") == 0))
#line 346 "builtin_ops.m"
                        {
#line 346 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__ArithOp_54;
#line 346 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_102_102;
#line 346 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_103_103;
#line 346 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_104_104;
#line 346 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_105_105;
#line 346 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_257;

#line 347 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                            {
#line 336 "builtin_ops.m"
                              backend_libs__builtin_ops__ArithOp_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 347 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                {
#line 347 "builtin_ops.m"
                                  backend_libs__builtin_ops__Z_257 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                    {
#line 348 "builtin_ops.m"
                                      {
#line 348 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_104_104, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                      }
#line 348 "builtin_ops.m"
                                      {
#line 348 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_105_105, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                      }
#line 348 "builtin_ops.m"
                                      {
#line 348 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_54));
#line 348 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 2) = ((MR_Box) (backend_libs__builtin_ops__V_104_104));
#line 348 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 3) = ((MR_Box) (backend_libs__builtin_ops__V_105_105));
#line 348 "builtin_ops.m"
                                      }
#line 348 "builtin_ops.m"
                                      {
#line 348 "builtin_ops.m"
                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_257;
#line 348 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_103_103));
#line 348 "builtin_ops.m"
                                      }
#line 348 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                    }
#line 347 "builtin_ops.m"
                                }
#line 346 "builtin_ops.m"
                            }
#line 346 "builtin_ops.m"
                        }
#line 282 "builtin_ops.m"
                      else
#line 282 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "+") == 0))
#line 284 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0))
#line 297 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "builtin_ops.m"
                              {
#line 298 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_145_145;

#line 300 "builtin_ops.m"
                                {
#line 300 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 300 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_145_145, 0) = backend_libs__builtin_ops__V_527_527;
#line 300 "builtin_ops.m"
                                }
#line 300 "builtin_ops.m"
                                {
#line 300 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 300 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 300 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_145_145));
#line 300 "builtin_ops.m"
                                }
#line 298 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 298 "builtin_ops.m"
                              }
#line 297 "builtin_ops.m"
                            else
#line 286 "builtin_ops.m"
                              {
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_157_157;
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_158_158;
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_159_159;
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_160_160;
#line 286 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_232 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));

#line 286 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 286 "builtin_ops.m"
                                  {
#line 289 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_158_158 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "builtin_ops.m"
                                    {
#line 289 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_159_159, 0) = backend_libs__builtin_ops__V_527_527;
#line 289 "builtin_ops.m"
                                    }
#line 289 "builtin_ops.m"
                                    {
#line 289 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_160_160, 0) = backend_libs__builtin_ops__V_539_539;
#line 289 "builtin_ops.m"
                                    }
#line 289 "builtin_ops.m"
                                    {
#line 289 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_157_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 289 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 289 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 1) = ((MR_Box) (backend_libs__builtin_ops__V_158_158));
#line 289 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 2) = ((MR_Box) (backend_libs__builtin_ops__V_159_159));
#line 289 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 3) = ((MR_Box) (backend_libs__builtin_ops__V_160_160));
#line 289 "builtin_ops.m"
                                    }
#line 289 "builtin_ops.m"
                                    {
#line 289 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_232;
#line 289 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_157_157));
#line 289 "builtin_ops.m"
                                    }
#line 289 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 286 "builtin_ops.m"
                                  }
#line 286 "builtin_ops.m"
                              }
#line 284 "builtin_ops.m"
                          else
#line 284 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 1))
#line 286 "builtin_ops.m"
                              {
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_153_153;
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_154_154;
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_155_155;
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_156_156;
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_346_346;
#line 286 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_349;

#line 286 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 286 "builtin_ops.m"
                                  {
#line 286 "builtin_ops.m"
                                    backend_libs__builtin_ops__Z_349 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 286 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_346_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 286 "builtin_ops.m"
                                      {
#line 292 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_154_154 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 292 "builtin_ops.m"
                                        {
#line 292 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_155_155, 0) = backend_libs__builtin_ops__Z_349;
#line 292 "builtin_ops.m"
                                        }
#line 292 "builtin_ops.m"
                                        {
#line 292 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_156_156, 0) = backend_libs__builtin_ops__V_539_539;
#line 292 "builtin_ops.m"
                                        }
#line 292 "builtin_ops.m"
                                        {
#line 292 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 1) = ((MR_Box) (backend_libs__builtin_ops__V_154_154));
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 2) = ((MR_Box) (backend_libs__builtin_ops__V_155_155));
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 3) = ((MR_Box) (backend_libs__builtin_ops__V_156_156));
#line 292 "builtin_ops.m"
                                        }
#line 292 "builtin_ops.m"
                                        {
#line 292 "builtin_ops.m"
                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_153_153));
#line 292 "builtin_ops.m"
                                        }
#line 292 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 286 "builtin_ops.m"
                                      }
#line 286 "builtin_ops.m"
                                  }
#line 286 "builtin_ops.m"
                              }
#line 284 "builtin_ops.m"
                            else
#line 284 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 2))
#line 286 "builtin_ops.m"
                                {
#line 286 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_149_149;
#line 286 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_150_150;
#line 286 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_151_151;
#line 286 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_152_152;
#line 286 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_352_352;
#line 286 "builtin_ops.m"
                                  MR_Box backend_libs__builtin_ops__Z_355;

#line 286 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 286 "builtin_ops.m"
                                    {
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__Z_355 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_352_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 286 "builtin_ops.m"
                                        {
#line 295 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_150_150 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 295 "builtin_ops.m"
                                          {
#line 295 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 295 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_151_151, 0) = backend_libs__builtin_ops__Z_355;
#line 295 "builtin_ops.m"
                                          }
#line 295 "builtin_ops.m"
                                          {
#line 295 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 295 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_152_152, 0) = backend_libs__builtin_ops__V_527_527;
#line 295 "builtin_ops.m"
                                          }
#line 295 "builtin_ops.m"
                                          {
#line 295 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 295 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 295 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 1) = ((MR_Box) (backend_libs__builtin_ops__V_150_150));
#line 295 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 2) = ((MR_Box) (backend_libs__builtin_ops__V_151_151));
#line 295 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 3) = ((MR_Box) (backend_libs__builtin_ops__V_152_152));
#line 295 "builtin_ops.m"
                                          }
#line 295 "builtin_ops.m"
                                          {
#line 295 "builtin_ops.m"
                                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 295 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 295 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_149_149));
#line 295 "builtin_ops.m"
                                          }
#line 295 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 286 "builtin_ops.m"
                                        }
#line 286 "builtin_ops.m"
                                    }
#line 286 "builtin_ops.m"
                                }
#line 284 "builtin_ops.m"
                              else
#line 284 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 282 "builtin_ops.m"
                        else
#line 282 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "-") == 0))
#line 303 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0))
#line 316 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "builtin_ops.m"
                                {
#line 317 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_123_123;
#line 317 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_127_127;

#line 319 "builtin_ops.m"
                                  {
#line 319 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_127_127, 0) = backend_libs__builtin_ops__V_527_527;
#line 319 "builtin_ops.m"
                                  }
#line 319 "builtin_ops.m"
                                  {
#line 319 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 319 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 319 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 319 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_2[1])));
#line 319 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 3) = ((MR_Box) (backend_libs__builtin_ops__V_127_127));
#line 319 "builtin_ops.m"
                                  }
#line 319 "builtin_ops.m"
                                  {
#line 319 "builtin_ops.m"
                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 319 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_123_123));
#line 319 "builtin_ops.m"
                                  }
#line 317 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 317 "builtin_ops.m"
                                }
#line 316 "builtin_ops.m"
                              else
#line 305 "builtin_ops.m"
                                {
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_139_139;
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_140_140;
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_141_141;
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_142_142;
#line 305 "builtin_ops.m"
                                  MR_Box backend_libs__builtin_ops__Z_243 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));

#line 305 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 305 "builtin_ops.m"
                                    {
#line 308 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 308 "builtin_ops.m"
                                      {
#line 308 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 308 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_141_141, 0) = backend_libs__builtin_ops__V_527_527;
#line 308 "builtin_ops.m"
                                      }
#line 308 "builtin_ops.m"
                                      {
#line 308 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 308 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_142_142, 0) = backend_libs__builtin_ops__V_539_539;
#line 308 "builtin_ops.m"
                                      }
#line 308 "builtin_ops.m"
                                      {
#line 308 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 308 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 308 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 1) = ((MR_Box) (backend_libs__builtin_ops__V_140_140));
#line 308 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 2) = ((MR_Box) (backend_libs__builtin_ops__V_141_141));
#line 308 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 3) = ((MR_Box) (backend_libs__builtin_ops__V_142_142));
#line 308 "builtin_ops.m"
                                      }
#line 308 "builtin_ops.m"
                                      {
#line 308 "builtin_ops.m"
                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_243;
#line 308 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_139_139));
#line 308 "builtin_ops.m"
                                      }
#line 308 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 305 "builtin_ops.m"
                                    }
#line 305 "builtin_ops.m"
                                }
#line 303 "builtin_ops.m"
                            else
#line 303 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 1))
#line 305 "builtin_ops.m"
                                {
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_135_135;
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_136_136;
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_137_137;
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_138_138;
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_358_358;
#line 305 "builtin_ops.m"
                                  MR_Box backend_libs__builtin_ops__Z_361;

#line 305 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 305 "builtin_ops.m"
                                    {
#line 305 "builtin_ops.m"
                                      backend_libs__builtin_ops__Z_361 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 305 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_358_358 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 305 "builtin_ops.m"
                                        {
#line 311 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_136_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 311 "builtin_ops.m"
                                          {
#line 311 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 311 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_137_137, 0) = backend_libs__builtin_ops__V_539_539;
#line 311 "builtin_ops.m"
                                          }
#line 311 "builtin_ops.m"
                                          {
#line 311 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 311 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_138_138, 0) = backend_libs__builtin_ops__Z_361;
#line 311 "builtin_ops.m"
                                          }
#line 311 "builtin_ops.m"
                                          {
#line 311 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 311 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 311 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 1) = ((MR_Box) (backend_libs__builtin_ops__V_136_136));
#line 311 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 2) = ((MR_Box) (backend_libs__builtin_ops__V_137_137));
#line 311 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 3) = ((MR_Box) (backend_libs__builtin_ops__V_138_138));
#line 311 "builtin_ops.m"
                                          }
#line 311 "builtin_ops.m"
                                          {
#line 311 "builtin_ops.m"
                                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 311 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
#line 311 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_135_135));
#line 311 "builtin_ops.m"
                                          }
#line 311 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 305 "builtin_ops.m"
                                        }
#line 305 "builtin_ops.m"
                                    }
#line 305 "builtin_ops.m"
                                }
#line 303 "builtin_ops.m"
                              else
#line 303 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 2))
#line 305 "builtin_ops.m"
                                  {
#line 305 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_131_131;
#line 305 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_132_132;
#line 305 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_133_133;
#line 305 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_134_134;
#line 305 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_364_364;
#line 305 "builtin_ops.m"
                                    MR_Box backend_libs__builtin_ops__Z_367;

#line 305 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 305 "builtin_ops.m"
                                      {
#line 305 "builtin_ops.m"
                                        backend_libs__builtin_ops__Z_367 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 305 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_364_364 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 305 "builtin_ops.m"
                                          {
#line 314 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_132_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 314 "builtin_ops.m"
                                            {
#line 314 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_133_133, 0) = backend_libs__builtin_ops__V_527_527;
#line 314 "builtin_ops.m"
                                            }
#line 314 "builtin_ops.m"
                                            {
#line 314 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 314 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_134_134, 0) = backend_libs__builtin_ops__Z_367;
#line 314 "builtin_ops.m"
                                            }
#line 314 "builtin_ops.m"
                                            {
#line 314 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 314 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 314 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 1) = ((MR_Box) (backend_libs__builtin_ops__V_132_132));
#line 314 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 2) = ((MR_Box) (backend_libs__builtin_ops__V_133_133));
#line 314 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 3) = ((MR_Box) (backend_libs__builtin_ops__V_134_134));
#line 314 "builtin_ops.m"
                                            }
#line 314 "builtin_ops.m"
                                            {
#line 314 "builtin_ops.m"
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 314 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 314 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_131_131));
#line 314 "builtin_ops.m"
                                            }
#line 314 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 305 "builtin_ops.m"
                                          }
#line 305 "builtin_ops.m"
                                      }
#line 305 "builtin_ops.m"
                                  }
#line 303 "builtin_ops.m"
                                else
#line 303 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 282 "builtin_ops.m"
                          else
#line 282 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "<") == 0))
#line 357 "builtin_ops.m"
                              {
#line 357 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_92_92;
#line 357 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_93_93;
#line 357 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_94_94;
#line 357 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__CompareOp_262;

#line 358 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 357 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 357 "builtin_ops.m"
                                  {
#line 358 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 357 "builtin_ops.m"
                                      {
#line 354 "builtin_ops.m"
                                        backend_libs__builtin_ops__CompareOp_262 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22));
#line 359 "builtin_ops.m"
                                        {
#line 359 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_93_93, 0) = backend_libs__builtin_ops__V_527_527;
#line 359 "builtin_ops.m"
                                        }
#line 359 "builtin_ops.m"
                                        {
#line 359 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_94_94, 0) = backend_libs__builtin_ops__V_539_539;
#line 359 "builtin_ops.m"
                                        }
#line 359 "builtin_ops.m"
                                        {
#line 359 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 359 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_262));
#line 359 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 2) = ((MR_Box) (backend_libs__builtin_ops__V_93_93));
#line 359 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 3) = ((MR_Box) (backend_libs__builtin_ops__V_94_94));
#line 359 "builtin_ops.m"
                                        }
#line 359 "builtin_ops.m"
                                        {
#line 359 "builtin_ops.m"
                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_92_92));
#line 359 "builtin_ops.m"
                                        }
#line 359 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 357 "builtin_ops.m"
                                      }
#line 357 "builtin_ops.m"
                                  }
#line 357 "builtin_ops.m"
                              }
#line 282 "builtin_ops.m"
                            else
#line 282 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) ">") == 0))
#line 357 "builtin_ops.m"
                                {
#line 357 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_388_388;
#line 357 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_389_389;
#line 357 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_390_390;
#line 357 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__CompareOp_393;

#line 358 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 357 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 357 "builtin_ops.m"
                                    {
#line 358 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 357 "builtin_ops.m"
                                        {
#line 353 "builtin_ops.m"
                                          backend_libs__builtin_ops__CompareOp_393 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
#line 359 "builtin_ops.m"
                                          {
#line 359 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_389_389 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_389_389, 0) = backend_libs__builtin_ops__V_527_527;
#line 359 "builtin_ops.m"
                                          }
#line 359 "builtin_ops.m"
                                          {
#line 359 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_390_390 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_390_390, 0) = backend_libs__builtin_ops__V_539_539;
#line 359 "builtin_ops.m"
                                          }
#line 359 "builtin_ops.m"
                                          {
#line 359 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_388_388 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 359 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_393));
#line 359 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 2) = ((MR_Box) (backend_libs__builtin_ops__V_389_389));
#line 359 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 3) = ((MR_Box) (backend_libs__builtin_ops__V_390_390));
#line 359 "builtin_ops.m"
                                          }
#line 359 "builtin_ops.m"
                                          {
#line 359 "builtin_ops.m"
                                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_388_388));
#line 359 "builtin_ops.m"
                                          }
#line 359 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 357 "builtin_ops.m"
                                        }
#line 357 "builtin_ops.m"
                                    }
#line 357 "builtin_ops.m"
                                }
#line 282 "builtin_ops.m"
                              else
#line 282 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "\\") == 0))
#line 350 "builtin_ops.m"
                                  {
#line 350 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_97_97;
#line 350 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_98_98;
#line 350 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_99_99;

#line 350 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 350 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 350 "builtin_ops.m"
                                      {
#line 350 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 350 "builtin_ops.m"
                                          {
#line 351 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_98_98 = (MR_Integer) 6;
#line 351 "builtin_ops.m"
                                            {
#line 351 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 351 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_99_99, 0) = backend_libs__builtin_ops__V_527_527;
#line 351 "builtin_ops.m"
                                            }
#line 351 "builtin_ops.m"
                                            {
#line 351 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 351 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 351 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 1) = ((MR_Box) (backend_libs__builtin_ops__V_98_98));
#line 351 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 2) = ((MR_Box) (backend_libs__builtin_ops__V_99_99));
#line 351 "builtin_ops.m"
                                            }
#line 351 "builtin_ops.m"
                                            {
#line 351 "builtin_ops.m"
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 351 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 351 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_97_97));
#line 351 "builtin_ops.m"
                                            }
#line 351 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 350 "builtin_ops.m"
                                          }
#line 350 "builtin_ops.m"
                                      }
#line 350 "builtin_ops.m"
                                  }
#line 282 "builtin_ops.m"
                                else
#line 282 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "/\\") == 0))
#line 346 "builtin_ops.m"
                                    {
#line 346 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__ArithOp_368;
#line 346 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_371_371;
#line 346 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_372_372;
#line 346 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_373_373;
#line 346 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_374_374;
#line 346 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Z_377;

#line 347 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                        {
#line 344 "builtin_ops.m"
                                          backend_libs__builtin_ops__ArithOp_368 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 347 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                            {
#line 347 "builtin_ops.m"
                                              backend_libs__builtin_ops__Z_377 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_371_371 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                {
#line 348 "builtin_ops.m"
                                                  {
#line 348 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_373_373 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_373_373, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                  }
#line 348 "builtin_ops.m"
                                                  {
#line 348 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_374_374 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_374_374, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                  }
#line 348 "builtin_ops.m"
                                                  {
#line 348 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_372_372 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_368));
#line 348 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 2) = ((MR_Box) (backend_libs__builtin_ops__V_373_373));
#line 348 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 3) = ((MR_Box) (backend_libs__builtin_ops__V_374_374));
#line 348 "builtin_ops.m"
                                                  }
#line 348 "builtin_ops.m"
                                                  {
#line 348 "builtin_ops.m"
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_377;
#line 348 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_372_372));
#line 348 "builtin_ops.m"
                                                  }
#line 348 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                }
#line 347 "builtin_ops.m"
                                            }
#line 346 "builtin_ops.m"
                                        }
#line 346 "builtin_ops.m"
                                    }
#line 282 "builtin_ops.m"
                                  else
#line 282 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "=<") == 0))
#line 357 "builtin_ops.m"
                                      {
#line 357 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_380_380;
#line 357 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_381_381;
#line 357 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_382_382;
#line 357 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__CompareOp_385;

#line 358 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 357 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 357 "builtin_ops.m"
                                          {
#line 358 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 357 "builtin_ops.m"
                                              {
#line 356 "builtin_ops.m"
                                                backend_libs__builtin_ops__CompareOp_385 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
#line 359 "builtin_ops.m"
                                                {
#line 359 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_381_381 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_381_381, 0) = backend_libs__builtin_ops__V_527_527;
#line 359 "builtin_ops.m"
                                                }
#line 359 "builtin_ops.m"
                                                {
#line 359 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_382_382 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_382_382, 0) = backend_libs__builtin_ops__V_539_539;
#line 359 "builtin_ops.m"
                                                }
#line 359 "builtin_ops.m"
                                                {
#line 359 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_380_380 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 359 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_385));
#line 359 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 2) = ((MR_Box) (backend_libs__builtin_ops__V_381_381));
#line 359 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 3) = ((MR_Box) (backend_libs__builtin_ops__V_382_382));
#line 359 "builtin_ops.m"
                                                }
#line 359 "builtin_ops.m"
                                                {
#line 359 "builtin_ops.m"
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_380_380));
#line 359 "builtin_ops.m"
                                                }
#line 359 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 357 "builtin_ops.m"
                                              }
#line 357 "builtin_ops.m"
                                          }
#line 357 "builtin_ops.m"
                                      }
#line 282 "builtin_ops.m"
                                    else
#line 282 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) ">=") == 0))
#line 357 "builtin_ops.m"
                                        {
#line 357 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_396_396;
#line 357 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_397_397;
#line 357 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_398_398;
#line 357 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__CompareOp_401;

#line 358 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 357 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 357 "builtin_ops.m"
                                            {
#line 358 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 357 "builtin_ops.m"
                                                {
#line 355 "builtin_ops.m"
                                                  backend_libs__builtin_ops__CompareOp_401 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
#line 359 "builtin_ops.m"
                                                  {
#line 359 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_397_397 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_397_397, 0) = backend_libs__builtin_ops__V_527_527;
#line 359 "builtin_ops.m"
                                                  }
#line 359 "builtin_ops.m"
                                                  {
#line 359 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_398_398 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_398_398, 0) = backend_libs__builtin_ops__V_539_539;
#line 359 "builtin_ops.m"
                                                  }
#line 359 "builtin_ops.m"
                                                  {
#line 359 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_396_396 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 359 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 359 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_401));
#line 359 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 2) = ((MR_Box) (backend_libs__builtin_ops__V_397_397));
#line 359 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 3) = ((MR_Box) (backend_libs__builtin_ops__V_398_398));
#line 359 "builtin_ops.m"
                                                  }
#line 359 "builtin_ops.m"
                                                  {
#line 359 "builtin_ops.m"
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_396_396));
#line 359 "builtin_ops.m"
                                                  }
#line 359 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 357 "builtin_ops.m"
                                                }
#line 357 "builtin_ops.m"
                                            }
#line 357 "builtin_ops.m"
                                        }
#line 282 "builtin_ops.m"
                                      else
#line 282 "builtin_ops.m"
                                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "\\/") == 0))
#line 346 "builtin_ops.m"
                                          {
#line 346 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__ArithOp_402;
#line 346 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_405_405;
#line 346 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_406_406;
#line 346 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_407_407;
#line 346 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_408_408;
#line 346 "builtin_ops.m"
                                            MR_Box backend_libs__builtin_ops__Z_411;

#line 347 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                              {
#line 345 "builtin_ops.m"
                                                backend_libs__builtin_ops__ArithOp_402 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 347 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                  {
#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__Z_411 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                      {
#line 348 "builtin_ops.m"
                                                        {
#line 348 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_407_407 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_407_407, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                        }
#line 348 "builtin_ops.m"
                                                        {
#line 348 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_408_408 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_408_408, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                        }
#line 348 "builtin_ops.m"
                                                        {
#line 348 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_406_406 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_402));
#line 348 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 2) = ((MR_Box) (backend_libs__builtin_ops__V_407_407));
#line 348 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 3) = ((MR_Box) (backend_libs__builtin_ops__V_408_408));
#line 348 "builtin_ops.m"
                                                        }
#line 348 "builtin_ops.m"
                                                        {
#line 348 "builtin_ops.m"
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_411;
#line 348 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_406_406));
#line 348 "builtin_ops.m"
                                                        }
#line 348 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                      }
#line 347 "builtin_ops.m"
                                                  }
#line 346 "builtin_ops.m"
                                              }
#line 346 "builtin_ops.m"
                                          }
#line 282 "builtin_ops.m"
                                        else
#line 282 "builtin_ops.m"
                                          if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "xor") == 0))
#line 322 "builtin_ops.m"
                                            {
#line 322 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_108_108;
#line 322 "builtin_ops.m"
                                              MR_Box backend_libs__builtin_ops__Z_254;

#line 322 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 322 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 322 "builtin_ops.m"
                                                {
#line 322 "builtin_ops.m"
                                                  backend_libs__builtin_ops__Z_254 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 322 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 322 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 326 "builtin_ops.m"
                                                    {
#line 326 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0))
#line 324 "builtin_ops.m"
                                                        {
#line 324 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__V_117_117;
#line 324 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__V_119_119;
#line 324 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__V_120_120;

#line 325 "builtin_ops.m"
                                                          {
#line 325 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_119_119, 0) = backend_libs__builtin_ops__V_527_527;
#line 325 "builtin_ops.m"
                                                          }
#line 325 "builtin_ops.m"
                                                          {
#line 325 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_120_120, 0) = backend_libs__builtin_ops__V_539_539;
#line 325 "builtin_ops.m"
                                                          }
#line 325 "builtin_ops.m"
                                                          {
#line 325 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 325 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 325 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 325 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 2) = ((MR_Box) (backend_libs__builtin_ops__V_119_119));
#line 325 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 3) = ((MR_Box) (backend_libs__builtin_ops__V_120_120));
#line 325 "builtin_ops.m"
                                                          }
#line 325 "builtin_ops.m"
                                                          {
#line 325 "builtin_ops.m"
                                                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 325 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_254;
#line 325 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_117_117));
#line 325 "builtin_ops.m"
                                                          }
#line 324 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 324 "builtin_ops.m"
                                                        }
#line 326 "builtin_ops.m"
                                                      else
#line 326 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 1))
#line 327 "builtin_ops.m"
                                                          {
#line 327 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__V_113_113;
#line 327 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__V_115_115;
#line 327 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__V_116_116;

#line 328 "builtin_ops.m"
                                                            {
#line 328 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 328 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_115_115, 0) = backend_libs__builtin_ops__V_527_527;
#line 328 "builtin_ops.m"
                                                            }
#line 328 "builtin_ops.m"
                                                            {
#line 328 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 328 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_116_116, 0) = backend_libs__builtin_ops__Z_254;
#line 328 "builtin_ops.m"
                                                            }
#line 328 "builtin_ops.m"
                                                            {
#line 328 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 328 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 328 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 328 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 2) = ((MR_Box) (backend_libs__builtin_ops__V_115_115));
#line 328 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 3) = ((MR_Box) (backend_libs__builtin_ops__V_116_116));
#line 328 "builtin_ops.m"
                                                            }
#line 328 "builtin_ops.m"
                                                            {
#line 328 "builtin_ops.m"
                                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 328 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 328 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_113_113));
#line 328 "builtin_ops.m"
                                                            }
#line 327 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 327 "builtin_ops.m"
                                                          }
#line 326 "builtin_ops.m"
                                                        else
#line 326 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 2))
#line 330 "builtin_ops.m"
                                                            {
#line 330 "builtin_ops.m"
                                                              MR_Word backend_libs__builtin_ops__V_109_109;
#line 330 "builtin_ops.m"
                                                              MR_Word backend_libs__builtin_ops__V_111_111;
#line 330 "builtin_ops.m"
                                                              MR_Word backend_libs__builtin_ops__V_112_112;

#line 331 "builtin_ops.m"
                                                              {
#line 331 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_111_111, 0) = backend_libs__builtin_ops__V_539_539;
#line 331 "builtin_ops.m"
                                                              }
#line 331 "builtin_ops.m"
                                                              {
#line 331 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_112_112, 0) = backend_libs__builtin_ops__Z_254;
#line 331 "builtin_ops.m"
                                                              }
#line 331 "builtin_ops.m"
                                                              {
#line 331 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 331 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 331 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 331 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 2) = ((MR_Box) (backend_libs__builtin_ops__V_111_111));
#line 331 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 3) = ((MR_Box) (backend_libs__builtin_ops__V_112_112));
#line 331 "builtin_ops.m"
                                                              }
#line 331 "builtin_ops.m"
                                                              {
#line 331 "builtin_ops.m"
                                                                backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
#line 331 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_109_109));
#line 331 "builtin_ops.m"
                                                              }
#line 330 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 330 "builtin_ops.m"
                                                            }
#line 326 "builtin_ops.m"
                                                          else
#line 326 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 326 "builtin_ops.m"
                                                    }
#line 322 "builtin_ops.m"
                                                }
#line 322 "builtin_ops.m"
                                            }
#line 282 "builtin_ops.m"
                                          else
#line 282 "builtin_ops.m"
                                            if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "plus") == 0))
#line 346 "builtin_ops.m"
                                              {
#line 346 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__ArithOp_422;
#line 346 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_425_425;
#line 346 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_426_426;
#line 346 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_427_427;
#line 346 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_428_428;
#line 346 "builtin_ops.m"
                                                MR_Box backend_libs__builtin_ops__Z_431;

#line 347 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                  {
#line 334 "builtin_ops.m"
                                                    backend_libs__builtin_ops__ArithOp_422 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                      {
#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__Z_431 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_425_425 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                                        if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                          {
#line 348 "builtin_ops.m"
                                                            {
#line 348 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_427_427 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_427_427, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                            }
#line 348 "builtin_ops.m"
                                                            {
#line 348 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_428_428 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_428_428, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                            }
#line 348 "builtin_ops.m"
                                                            {
#line 348 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_426_426 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_422));
#line 348 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 2) = ((MR_Box) (backend_libs__builtin_ops__V_427_427));
#line 348 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 3) = ((MR_Box) (backend_libs__builtin_ops__V_428_428));
#line 348 "builtin_ops.m"
                                                            }
#line 348 "builtin_ops.m"
                                                            {
#line 348 "builtin_ops.m"
                                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_431;
#line 348 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_426_426));
#line 348 "builtin_ops.m"
                                                            }
#line 348 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                          }
#line 347 "builtin_ops.m"
                                                      }
#line 346 "builtin_ops.m"
                                                  }
#line 346 "builtin_ops.m"
                                              }
#line 282 "builtin_ops.m"
                                            else
#line 282 "builtin_ops.m"
                                              if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "minus") == 0))
#line 346 "builtin_ops.m"
                                                {
#line 346 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__ArithOp_412;
#line 346 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_415_415;
#line 346 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_416_416;
#line 346 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_417_417;
#line 346 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_418_418;
#line 346 "builtin_ops.m"
                                                  MR_Box backend_libs__builtin_ops__Z_421;

#line 347 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                    {
#line 335 "builtin_ops.m"
                                                      backend_libs__builtin_ops__ArithOp_412 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 347 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                      if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                        {
#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__Z_421 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_415_415 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                                          if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                            {
#line 348 "builtin_ops.m"
                                                              {
#line 348 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_417_417 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_417_417, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                              }
#line 348 "builtin_ops.m"
                                                              {
#line 348 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_418_418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_418_418, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                              }
#line 348 "builtin_ops.m"
                                                              {
#line 348 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_416_416 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_412));
#line 348 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 2) = ((MR_Box) (backend_libs__builtin_ops__V_417_417));
#line 348 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 3) = ((MR_Box) (backend_libs__builtin_ops__V_418_418));
#line 348 "builtin_ops.m"
                                                              }
#line 348 "builtin_ops.m"
                                                              {
#line 348 "builtin_ops.m"
                                                                backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_421;
#line 348 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_416_416));
#line 348 "builtin_ops.m"
                                                              }
#line 348 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                            }
#line 347 "builtin_ops.m"
                                                        }
#line 346 "builtin_ops.m"
                                                    }
#line 346 "builtin_ops.m"
                                                }
#line 282 "builtin_ops.m"
                                              else
#line 282 "builtin_ops.m"
                                                if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "times") == 0))
#line 346 "builtin_ops.m"
                                                  {
#line 346 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__ArithOp_432;
#line 346 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_435_435;
#line 346 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_436_436;
#line 346 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_437_437;
#line 346 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_438_438;
#line 346 "builtin_ops.m"
                                                    MR_Box backend_libs__builtin_ops__Z_441;

#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                      {
#line 337 "builtin_ops.m"
                                                        backend_libs__builtin_ops__ArithOp_432 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                        if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                          {
#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__Z_441 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_435_435 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                                            if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                              {
#line 348 "builtin_ops.m"
                                                                {
#line 348 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_437_437 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_437_437, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                                }
#line 348 "builtin_ops.m"
                                                                {
#line 348 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_438_438 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_438_438, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                                }
#line 348 "builtin_ops.m"
                                                                {
#line 348 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_436_436 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_432));
#line 348 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 2) = ((MR_Box) (backend_libs__builtin_ops__V_437_437));
#line 348 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 3) = ((MR_Box) (backend_libs__builtin_ops__V_438_438));
#line 348 "builtin_ops.m"
                                                                }
#line 348 "builtin_ops.m"
                                                                {
#line 348 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_441;
#line 348 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_436_436));
#line 348 "builtin_ops.m"
                                                                }
#line 348 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                              }
#line 347 "builtin_ops.m"
                                                          }
#line 346 "builtin_ops.m"
                                                      }
#line 346 "builtin_ops.m"
                                                  }
#line 282 "builtin_ops.m"
                                                else
#line 282 "builtin_ops.m"
                                                  if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_rem") == 0))
#line 346 "builtin_ops.m"
                                                    {
#line 346 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__ArithOp_462;
#line 346 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_465_465;
#line 346 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_466_466;
#line 346 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_467_467;
#line 346 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_468_468;
#line 346 "builtin_ops.m"
                                                      MR_Box backend_libs__builtin_ops__Z_471;

#line 347 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                      if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                        {
#line 339 "builtin_ops.m"
                                                          backend_libs__builtin_ops__ArithOp_462 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                          if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                            {
#line 347 "builtin_ops.m"
                                                              backend_libs__builtin_ops__Z_471 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_465_465 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                                              if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                                {
#line 348 "builtin_ops.m"
                                                                  {
#line 348 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_467_467 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_467_467, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                                  }
#line 348 "builtin_ops.m"
                                                                  {
#line 348 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_468_468 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_468_468, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                                  }
#line 348 "builtin_ops.m"
                                                                  {
#line 348 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_466_466 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_462));
#line 348 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 2) = ((MR_Box) (backend_libs__builtin_ops__V_467_467));
#line 348 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 3) = ((MR_Box) (backend_libs__builtin_ops__V_468_468));
#line 348 "builtin_ops.m"
                                                                  }
#line 348 "builtin_ops.m"
                                                                  {
#line 348 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_471;
#line 348 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_466_466));
#line 348 "builtin_ops.m"
                                                                  }
#line 348 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                                }
#line 347 "builtin_ops.m"
                                                            }
#line 346 "builtin_ops.m"
                                                        }
#line 346 "builtin_ops.m"
                                                    }
#line 282 "builtin_ops.m"
                                                  else
#line 282 "builtin_ops.m"
                                                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_quotient") == 0))
#line 346 "builtin_ops.m"
                                                      {
#line 346 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__ArithOp_452;
#line 346 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_455_455;
#line 346 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_456_456;
#line 346 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_457_457;
#line 346 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_458_458;
#line 346 "builtin_ops.m"
                                                        MR_Box backend_libs__builtin_ops__Z_461;

#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                        if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                          {
#line 338 "builtin_ops.m"
                                                            backend_libs__builtin_ops__ArithOp_452 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                            if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                              {
#line 347 "builtin_ops.m"
                                                                backend_libs__builtin_ops__Z_461 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_455_455 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                                                if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                                  {
#line 348 "builtin_ops.m"
                                                                    {
#line 348 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__V_457_457 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_457_457, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                                    }
#line 348 "builtin_ops.m"
                                                                    {
#line 348 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__V_458_458 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_458_458, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                                    }
#line 348 "builtin_ops.m"
                                                                    {
#line 348 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__V_456_456 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_452));
#line 348 "builtin_ops.m"
                                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 2) = ((MR_Box) (backend_libs__builtin_ops__V_457_457));
#line 348 "builtin_ops.m"
                                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 3) = ((MR_Box) (backend_libs__builtin_ops__V_458_458));
#line 348 "builtin_ops.m"
                                                                    }
#line 348 "builtin_ops.m"
                                                                    {
#line 348 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_461;
#line 348 "builtin_ops.m"
                                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_456_456));
#line 348 "builtin_ops.m"
                                                                    }
#line 348 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                                  }
#line 347 "builtin_ops.m"
                                                              }
#line 346 "builtin_ops.m"
                                                          }
#line 346 "builtin_ops.m"
                                                      }
#line 282 "builtin_ops.m"
                                                    else
#line 282 "builtin_ops.m"
                                                      if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_left_shift") == 0))
#line 346 "builtin_ops.m"
                                                        {
#line 346 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__ArithOp_442;
#line 346 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__V_445_445;
#line 346 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__V_446_446;
#line 346 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__V_447_447;
#line 346 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__V_448_448;
#line 346 "builtin_ops.m"
                                                          MR_Box backend_libs__builtin_ops__Z_451;

#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                          if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                            {
#line 341 "builtin_ops.m"
                                                              backend_libs__builtin_ops__ArithOp_442 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 347 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                              if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                                {
#line 347 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__Z_451 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_445_445 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                                                  if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                                    {
#line 348 "builtin_ops.m"
                                                                      {
#line 348 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__V_447_447 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_447_447, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                                      }
#line 348 "builtin_ops.m"
                                                                      {
#line 348 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__V_448_448 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_448_448, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                                      }
#line 348 "builtin_ops.m"
                                                                      {
#line 348 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__V_446_446 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_442));
#line 348 "builtin_ops.m"
                                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 2) = ((MR_Box) (backend_libs__builtin_ops__V_447_447));
#line 348 "builtin_ops.m"
                                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 3) = ((MR_Box) (backend_libs__builtin_ops__V_448_448));
#line 348 "builtin_ops.m"
                                                                      }
#line 348 "builtin_ops.m"
                                                                      {
#line 348 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_451;
#line 348 "builtin_ops.m"
                                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_446_446));
#line 348 "builtin_ops.m"
                                                                      }
#line 348 "builtin_ops.m"
                                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                                    }
#line 347 "builtin_ops.m"
                                                                }
#line 346 "builtin_ops.m"
                                                            }
#line 346 "builtin_ops.m"
                                                        }
#line 282 "builtin_ops.m"
                                                      else
#line 282 "builtin_ops.m"
                                                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_right_shift") == 0))
#line 346 "builtin_ops.m"
                                                          {
#line 346 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__ArithOp_472;
#line 346 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__V_475_475;
#line 346 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__V_476_476;
#line 346 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__V_477_477;
#line 346 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__V_478_478;
#line 346 "builtin_ops.m"
                                                            MR_Box backend_libs__builtin_ops__Z_481;

#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                            if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                              {
#line 343 "builtin_ops.m"
                                                                backend_libs__builtin_ops__ArithOp_472 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 347 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                                if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                                  {
#line 347 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__Z_481 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_475_475 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 346 "builtin_ops.m"
                                                                    if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                                      {
#line 348 "builtin_ops.m"
                                                                        {
#line 348 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__V_477_477 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_477_477, 0) = backend_libs__builtin_ops__V_527_527;
#line 348 "builtin_ops.m"
                                                                        }
#line 348 "builtin_ops.m"
                                                                        {
#line 348 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__V_478_478 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_478_478, 0) = backend_libs__builtin_ops__V_539_539;
#line 348 "builtin_ops.m"
                                                                        }
#line 348 "builtin_ops.m"
                                                                        {
#line 348 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__V_476_476 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 348 "builtin_ops.m"
                                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 348 "builtin_ops.m"
                                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_472));
#line 348 "builtin_ops.m"
                                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 2) = ((MR_Box) (backend_libs__builtin_ops__V_477_477));
#line 348 "builtin_ops.m"
                                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 3) = ((MR_Box) (backend_libs__builtin_ops__V_478_478));
#line 348 "builtin_ops.m"
                                                                        }
#line 348 "builtin_ops.m"
                                                                        {
#line 348 "builtin_ops.m"
                                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 348 "builtin_ops.m"
                                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_481;
#line 348 "builtin_ops.m"
                                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_476_476));
#line 348 "builtin_ops.m"
                                                                        }
#line 348 "builtin_ops.m"
                                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 346 "builtin_ops.m"
                                                                      }
#line 347 "builtin_ops.m"
                                                                  }
#line 346 "builtin_ops.m"
                                                              }
#line 346 "builtin_ops.m"
                                                          }
#line 282 "builtin_ops.m"
                                                        else
#line 282 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 347 "builtin_ops.m"
                    }
#line 282 "builtin_ops.m"
                }
#line 224 "builtin_ops.m"
              else
#line 224 "builtin_ops.m"
                if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "float") == 0))
#line 362 "builtin_ops.m"
                  {
#line 362 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_536_536;
#line 362 "builtin_ops.m"
                    MR_Box backend_libs__builtin_ops__V_537_537;

#line 390 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 362 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 362 "builtin_ops.m"
                      {
#line 390 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 390 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 390 "builtin_ops.m"
                          {
#line 390 "builtin_ops.m"
                            backend_libs__builtin_ops__V_537_537 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 390 "builtin_ops.m"
                            backend_libs__builtin_ops__V_536_536 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 362 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "*") == 0))
#line 389 "builtin_ops.m"
                              {
#line 389 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_62_62;
#line 389 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_63_63;
#line 389 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_64_64;
#line 389 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_65_65;
#line 389 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_295;

#line 390 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_536_536)) == (MR_mktag((MR_Integer) 1)));
#line 390 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 390 "builtin_ops.m"
                                  {
#line 390 "builtin_ops.m"
                                    backend_libs__builtin_ops__Z_295 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));
#line 390 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
#line 390 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 389 "builtin_ops.m"
                                      {
#line 391 "builtin_ops.m"
                                        {
#line 391 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_64_64, 0) = backend_libs__builtin_ops__V_527_527;
#line 391 "builtin_ops.m"
                                        }
#line 391 "builtin_ops.m"
                                        {
#line 391 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_65_65, 0) = backend_libs__builtin_ops__V_537_537;
#line 391 "builtin_ops.m"
                                        }
#line 391 "builtin_ops.m"
                                        {
#line 391 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 391 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29))));
#line 391 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 2) = ((MR_Box) (backend_libs__builtin_ops__V_64_64));
#line 391 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 3) = ((MR_Box) (backend_libs__builtin_ops__V_65_65));
#line 391 "builtin_ops.m"
                                        }
#line 391 "builtin_ops.m"
                                        {
#line 391 "builtin_ops.m"
                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_295;
#line 391 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_63_63));
#line 391 "builtin_ops.m"
                                        }
#line 391 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 389 "builtin_ops.m"
                                      }
#line 390 "builtin_ops.m"
                                  }
#line 389 "builtin_ops.m"
                              }
#line 362 "builtin_ops.m"
                            else
#line 362 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "+") == 0))
#line 364 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "builtin_ops.m"
                                  {
#line 366 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_89_89;

#line 368 "builtin_ops.m"
                                    {
#line 368 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 368 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_89_89, 0) = backend_libs__builtin_ops__V_527_527;
#line 368 "builtin_ops.m"
                                    }
#line 368 "builtin_ops.m"
                                    {
#line 368 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_537_537;
#line 368 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_89_89));
#line 368 "builtin_ops.m"
                                    }
#line 366 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 366 "builtin_ops.m"
                                  }
#line 364 "builtin_ops.m"
                                else
#line 370 "builtin_ops.m"
                                  {
#line 370 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
#line 370 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_83_83;
#line 370 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_84_84;
#line 370 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_85_85;
#line 370 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_86_86;
#line 370 "builtin_ops.m"
                                    MR_Box backend_libs__builtin_ops__Z_275 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));

#line 370 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                                      {
#line 372 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27));
#line 372 "builtin_ops.m"
                                        {
#line 372 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 372 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_85_85, 0) = backend_libs__builtin_ops__V_527_527;
#line 372 "builtin_ops.m"
                                        }
#line 372 "builtin_ops.m"
                                        {
#line 372 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 372 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_86_86, 0) = backend_libs__builtin_ops__V_537_537;
#line 372 "builtin_ops.m"
                                        }
#line 372 "builtin_ops.m"
                                        {
#line 372 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 372 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 372 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 1) = ((MR_Box) (backend_libs__builtin_ops__V_84_84));
#line 372 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 2) = ((MR_Box) (backend_libs__builtin_ops__V_85_85));
#line 372 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 3) = ((MR_Box) (backend_libs__builtin_ops__V_86_86));
#line 372 "builtin_ops.m"
                                        }
#line 372 "builtin_ops.m"
                                        {
#line 372 "builtin_ops.m"
                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_275;
#line 372 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_83_83));
#line 372 "builtin_ops.m"
                                        }
#line 372 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 370 "builtin_ops.m"
                                      }
#line 370 "builtin_ops.m"
                                  }
#line 362 "builtin_ops.m"
                              else
#line 362 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "-") == 0))
#line 375 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "builtin_ops.m"
                                    {
#line 377 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_75_75;
#line 377 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_79_79;

#line 380 "builtin_ops.m"
                                      {
#line 380 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 380 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_79_79, 0) = backend_libs__builtin_ops__V_527_527;
#line 380 "builtin_ops.m"
                                      }
#line 380 "builtin_ops.m"
                                      {
#line 380 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 380 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 380 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28))));
#line 380 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &backend_libs__builtin_ops_scalar_common_2[2])));
#line 380 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 3) = ((MR_Box) (backend_libs__builtin_ops__V_79_79));
#line 380 "builtin_ops.m"
                                      }
#line 379 "builtin_ops.m"
                                      {
#line 379 "builtin_ops.m"
                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 379 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_537_537;
#line 379 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_75_75));
#line 379 "builtin_ops.m"
                                      }
#line 377 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 377 "builtin_ops.m"
                                    }
#line 375 "builtin_ops.m"
                                  else
#line 382 "builtin_ops.m"
                                    {
#line 382 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
#line 382 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_69_69;
#line 382 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_70_70;
#line 382 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_71_71;
#line 382 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_72_72;
#line 382 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Z_286 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));

#line 382 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 382 "builtin_ops.m"
                                        {
#line 384 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28));
#line 384 "builtin_ops.m"
                                          {
#line 384 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 384 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_71_71, 0) = backend_libs__builtin_ops__V_527_527;
#line 384 "builtin_ops.m"
                                          }
#line 384 "builtin_ops.m"
                                          {
#line 384 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 384 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_72_72, 0) = backend_libs__builtin_ops__V_537_537;
#line 384 "builtin_ops.m"
                                          }
#line 384 "builtin_ops.m"
                                          {
#line 384 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 384 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 384 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 1) = ((MR_Box) (backend_libs__builtin_ops__V_70_70));
#line 384 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 2) = ((MR_Box) (backend_libs__builtin_ops__V_71_71));
#line 384 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 3) = ((MR_Box) (backend_libs__builtin_ops__V_72_72));
#line 384 "builtin_ops.m"
                                          }
#line 384 "builtin_ops.m"
                                          {
#line 384 "builtin_ops.m"
                                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_286;
#line 384 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_69_69));
#line 384 "builtin_ops.m"
                                          }
#line 384 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 382 "builtin_ops.m"
                                        }
#line 382 "builtin_ops.m"
                                    }
#line 362 "builtin_ops.m"
                                else
#line 362 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "<") == 0))
#line 397 "builtin_ops.m"
                                    {
#line 397 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_57_57;
#line 397 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_58_58;
#line 397 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_59_59;
#line 397 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__CompareOp_299;

#line 398 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 397 "builtin_ops.m"
                                        {
#line 394 "builtin_ops.m"
                                          backend_libs__builtin_ops__CompareOp_299 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33));
#line 399 "builtin_ops.m"
                                          {
#line 399 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_58_58, 0) = backend_libs__builtin_ops__V_527_527;
#line 399 "builtin_ops.m"
                                          }
#line 399 "builtin_ops.m"
                                          {
#line 399 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_59_59, 0) = backend_libs__builtin_ops__V_537_537;
#line 399 "builtin_ops.m"
                                          }
#line 399 "builtin_ops.m"
                                          {
#line 399 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 399 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 399 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_299));
#line 399 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 2) = ((MR_Box) (backend_libs__builtin_ops__V_58_58));
#line 399 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 3) = ((MR_Box) (backend_libs__builtin_ops__V_59_59));
#line 399 "builtin_ops.m"
                                          }
#line 399 "builtin_ops.m"
                                          {
#line 399 "builtin_ops.m"
                                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_57_57));
#line 399 "builtin_ops.m"
                                          }
#line 399 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 397 "builtin_ops.m"
                                        }
#line 397 "builtin_ops.m"
                                    }
#line 362 "builtin_ops.m"
                                  else
#line 362 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) ">") == 0))
#line 397 "builtin_ops.m"
                                      {
#line 397 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_320_320;
#line 397 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_321_321;
#line 397 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_322_322;
#line 397 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__CompareOp_325;

#line 398 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 397 "builtin_ops.m"
                                          {
#line 393 "builtin_ops.m"
                                            backend_libs__builtin_ops__CompareOp_325 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34));
#line 399 "builtin_ops.m"
                                            {
#line 399 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_321_321 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_321_321, 0) = backend_libs__builtin_ops__V_527_527;
#line 399 "builtin_ops.m"
                                            }
#line 399 "builtin_ops.m"
                                            {
#line 399 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_322_322 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_322_322, 0) = backend_libs__builtin_ops__V_537_537;
#line 399 "builtin_ops.m"
                                            }
#line 399 "builtin_ops.m"
                                            {
#line 399 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_320_320 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 399 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 399 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_325));
#line 399 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 2) = ((MR_Box) (backend_libs__builtin_ops__V_321_321));
#line 399 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 3) = ((MR_Box) (backend_libs__builtin_ops__V_322_322));
#line 399 "builtin_ops.m"
                                            }
#line 399 "builtin_ops.m"
                                            {
#line 399 "builtin_ops.m"
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_320_320));
#line 399 "builtin_ops.m"
                                            }
#line 399 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 397 "builtin_ops.m"
                                          }
#line 397 "builtin_ops.m"
                                      }
#line 362 "builtin_ops.m"
                                    else
#line 362 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "=<") == 0))
#line 397 "builtin_ops.m"
                                        {
#line 397 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_312_312;
#line 397 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_313_313;
#line 397 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_314_314;
#line 397 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__CompareOp_317;

#line 398 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 397 "builtin_ops.m"
                                            {
#line 396 "builtin_ops.m"
                                              backend_libs__builtin_ops__CompareOp_317 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35));
#line 399 "builtin_ops.m"
                                              {
#line 399 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_313_313 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_313_313, 0) = backend_libs__builtin_ops__V_527_527;
#line 399 "builtin_ops.m"
                                              }
#line 399 "builtin_ops.m"
                                              {
#line 399 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_314_314 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_314_314, 0) = backend_libs__builtin_ops__V_537_537;
#line 399 "builtin_ops.m"
                                              }
#line 399 "builtin_ops.m"
                                              {
#line 399 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_312_312 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 399 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 399 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_317));
#line 399 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 2) = ((MR_Box) (backend_libs__builtin_ops__V_313_313));
#line 399 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 3) = ((MR_Box) (backend_libs__builtin_ops__V_314_314));
#line 399 "builtin_ops.m"
                                              }
#line 399 "builtin_ops.m"
                                              {
#line 399 "builtin_ops.m"
                                                backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_312_312));
#line 399 "builtin_ops.m"
                                              }
#line 399 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 397 "builtin_ops.m"
                                            }
#line 397 "builtin_ops.m"
                                        }
#line 362 "builtin_ops.m"
                                      else
#line 362 "builtin_ops.m"
                                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) ">=") == 0))
#line 397 "builtin_ops.m"
                                          {
#line 397 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_328_328;
#line 397 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_329_329;
#line 397 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_330_330;
#line 397 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__CompareOp_333;

#line 398 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 397 "builtin_ops.m"
                                              {
#line 395 "builtin_ops.m"
                                                backend_libs__builtin_ops__CompareOp_333 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36));
#line 399 "builtin_ops.m"
                                                {
#line 399 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_329_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_329_329, 0) = backend_libs__builtin_ops__V_527_527;
#line 399 "builtin_ops.m"
                                                }
#line 399 "builtin_ops.m"
                                                {
#line 399 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_330_330 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 399 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_330_330, 0) = backend_libs__builtin_ops__V_537_537;
#line 399 "builtin_ops.m"
                                                }
#line 399 "builtin_ops.m"
                                                {
#line 399 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_328_328 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 399 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 399 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_333));
#line 399 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 2) = ((MR_Box) (backend_libs__builtin_ops__V_329_329));
#line 399 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 3) = ((MR_Box) (backend_libs__builtin_ops__V_330_330));
#line 399 "builtin_ops.m"
                                                }
#line 399 "builtin_ops.m"
                                                {
#line 399 "builtin_ops.m"
                                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_328_328));
#line 399 "builtin_ops.m"
                                                }
#line 399 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 397 "builtin_ops.m"
                                              }
#line 397 "builtin_ops.m"
                                          }
#line 362 "builtin_ops.m"
                                        else
#line 362 "builtin_ops.m"
                                          if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_quotient") == 0))
#line 389 "builtin_ops.m"
                                            {
#line 389 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_336_336;
#line 389 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_337_337;
#line 389 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_338_338;
#line 389 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_339_339;
#line 389 "builtin_ops.m"
                                              MR_Box backend_libs__builtin_ops__Z_342;

#line 390 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_536_536)) == (MR_mktag((MR_Integer) 1)));
#line 390 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 390 "builtin_ops.m"
                                                {
#line 390 "builtin_ops.m"
                                                  backend_libs__builtin_ops__Z_342 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));
#line 390 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
#line 390 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_336_336 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 389 "builtin_ops.m"
                                                    {
#line 391 "builtin_ops.m"
                                                      {
#line 391 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_338_338 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_338_338, 0) = backend_libs__builtin_ops__V_527_527;
#line 391 "builtin_ops.m"
                                                      }
#line 391 "builtin_ops.m"
                                                      {
#line 391 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_339_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_339_339, 0) = backend_libs__builtin_ops__V_537_537;
#line 391 "builtin_ops.m"
                                                      }
#line 391 "builtin_ops.m"
                                                      {
#line 391 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_337_337 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 391 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 391 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30))));
#line 391 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 2) = ((MR_Box) (backend_libs__builtin_ops__V_338_338));
#line 391 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 3) = ((MR_Box) (backend_libs__builtin_ops__V_339_339));
#line 391 "builtin_ops.m"
                                                      }
#line 391 "builtin_ops.m"
                                                      {
#line 391 "builtin_ops.m"
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_342;
#line 391 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_337_337));
#line 391 "builtin_ops.m"
                                                      }
#line 391 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 389 "builtin_ops.m"
                                                    }
#line 390 "builtin_ops.m"
                                                }
#line 389 "builtin_ops.m"
                                            }
#line 362 "builtin_ops.m"
                                          else
#line 362 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 390 "builtin_ops.m"
                          }
#line 362 "builtin_ops.m"
                      }
#line 362 "builtin_ops.m"
                  }
#line 224 "builtin_ops.m"
                else
#line 224 "builtin_ops.m"
                  if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "builtin") == 0))
#line 221 "builtin_ops.m"
                    {
#line 221 "builtin_ops.m"
                      MR_Box backend_libs__builtin_ops__Y_49;
#line 221 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__V_203_203;
#line 221 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__V_204_204;

#line 222 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_promise_unique") == 0);
#line 221 "builtin_ops.m"
                      if (backend_libs__builtin_ops__succeeded)
#line 221 "builtin_ops.m"
                        {
#line 222 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 221 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 221 "builtin_ops.m"
                            {
#line 222 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 222 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
                                {
#line 222 "builtin_ops.m"
                                  backend_libs__builtin_ops__Y_49 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 222 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 222 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_203_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 221 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 221 "builtin_ops.m"
                                    {
#line 223 "builtin_ops.m"
                                      {
#line 223 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_204_204, 0) = backend_libs__builtin_ops__V_527_527;
#line 223 "builtin_ops.m"
                                      }
#line 223 "builtin_ops.m"
                                      {
#line 223 "builtin_ops.m"
                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 223 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_49;
#line 223 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_204_204));
#line 223 "builtin_ops.m"
                                      }
#line 223 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 221 "builtin_ops.m"
                                    }
#line 222 "builtin_ops.m"
                                }
#line 221 "builtin_ops.m"
                            }
#line 221 "builtin_ops.m"
                        }
#line 221 "builtin_ops.m"
                    }
#line 224 "builtin_ops.m"
                  else
#line 224 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "private_builtin") == 0))
#line 234 "builtin_ops.m"
                      {
#line 265 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 234 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 238 "builtin_ops.m"
                          {
#line 238 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "pointer_equal") == 0))
#line 269 "builtin_ops.m"
                              {
#line 269 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_173_173;
#line 269 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_174_174;
#line 269 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_175_175;
#line 269 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_176_176;
#line 269 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__X_220;
#line 269 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Y_221;
#line 269 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_524_524;
#line 269 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__V_525_525;

#line 272 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 272 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 272 "builtin_ops.m"
                                  {
#line 272 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_525_525 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 272 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 273 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__V_524_524 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "builtin_ops.m"
                                      {
#line 272 "builtin_ops.m"
                                        backend_libs__builtin_ops__X_220 = backend_libs__builtin_ops__V_527_527;
#line 272 "builtin_ops.m"
                                        backend_libs__builtin_ops__Y_221 = backend_libs__builtin_ops__V_525_525;
#line 272 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 272 "builtin_ops.m"
                                      }
#line 273 "builtin_ops.m"
                                    else
#line 273 "builtin_ops.m"
                                      {
#line 273 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_170_170;

#line 273 "builtin_ops.m"
                                        backend_libs__builtin_ops__X_220 = backend_libs__builtin_ops__V_525_525;
#line 273 "builtin_ops.m"
                                        backend_libs__builtin_ops__Y_221 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_524_524, (MR_Integer) 0));
#line 273 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_524_524, (MR_Integer) 1)));
#line 273 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_170_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "builtin_ops.m"
                                      }
#line 269 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 269 "builtin_ops.m"
                                      {
#line 275 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_174_174 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39));
#line 275 "builtin_ops.m"
                                        {
#line 275 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_175_175, 0) = backend_libs__builtin_ops__X_220;
#line 275 "builtin_ops.m"
                                        }
#line 275 "builtin_ops.m"
                                        {
#line 275 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_176_176, 0) = backend_libs__builtin_ops__Y_221;
#line 275 "builtin_ops.m"
                                        }
#line 275 "builtin_ops.m"
                                        {
#line 275 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 275 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 275 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 1) = ((MR_Box) (backend_libs__builtin_ops__V_174_174));
#line 275 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 2) = ((MR_Box) (backend_libs__builtin_ops__V_175_175));
#line 275 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 3) = ((MR_Box) (backend_libs__builtin_ops__V_176_176));
#line 275 "builtin_ops.m"
                                        }
#line 275 "builtin_ops.m"
                                        {
#line 275 "builtin_ops.m"
                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_173_173));
#line 275 "builtin_ops.m"
                                        }
#line 275 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 269 "builtin_ops.m"
                                      }
#line 272 "builtin_ops.m"
                                  }
#line 269 "builtin_ops.m"
                              }
#line 238 "builtin_ops.m"
                            else
#line 238 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "builtin_int_gt") == 0))
#line 258 "builtin_ops.m"
                                {
#line 258 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_183_183;
#line 258 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_184_184;
#line 258 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_185_185;
#line 258 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_186_186;
#line 258 "builtin_ops.m"
                                  MR_Box backend_libs__builtin_ops__Y_216;

#line 259 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 259 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 259 "builtin_ops.m"
                                    {
#line 259 "builtin_ops.m"
                                      backend_libs__builtin_ops__Y_216 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 259 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 259 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_183_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 258 "builtin_ops.m"
                                        {
#line 260 "builtin_ops.m"
                                          {
#line 260 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 260 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_185_185, 0) = backend_libs__builtin_ops__V_527_527;
#line 260 "builtin_ops.m"
                                          }
#line 260 "builtin_ops.m"
                                          {
#line 260 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 260 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_186_186, 0) = backend_libs__builtin_ops__Y_216;
#line 260 "builtin_ops.m"
                                          }
#line 260 "builtin_ops.m"
                                          {
#line 260 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 260 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 260 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 260 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 2) = ((MR_Box) (backend_libs__builtin_ops__V_185_185));
#line 260 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 3) = ((MR_Box) (backend_libs__builtin_ops__V_186_186));
#line 260 "builtin_ops.m"
                                          }
#line 260 "builtin_ops.m"
                                          {
#line 260 "builtin_ops.m"
                                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_184_184));
#line 260 "builtin_ops.m"
                                          }
#line 260 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 258 "builtin_ops.m"
                                        }
#line 259 "builtin_ops.m"
                                    }
#line 258 "builtin_ops.m"
                                }
#line 238 "builtin_ops.m"
                              else
#line 238 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "builtin_int_lt") == 0))
#line 258 "builtin_ops.m"
                                  {
#line 258 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_492_492;
#line 258 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_493_493;
#line 258 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_494_494;
#line 258 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_495_495;
#line 258 "builtin_ops.m"
                                    MR_Box backend_libs__builtin_ops__Y_497;

#line 259 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 259 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 259 "builtin_ops.m"
                                      {
#line 259 "builtin_ops.m"
                                        backend_libs__builtin_ops__Y_497 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 259 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 259 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_492_492 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 258 "builtin_ops.m"
                                          {
#line 260 "builtin_ops.m"
                                            {
#line 260 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_494_494 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 260 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_494_494, 0) = backend_libs__builtin_ops__V_527_527;
#line 260 "builtin_ops.m"
                                            }
#line 260 "builtin_ops.m"
                                            {
#line 260 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_495_495 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 260 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_495_495, 0) = backend_libs__builtin_ops__Y_497;
#line 260 "builtin_ops.m"
                                            }
#line 260 "builtin_ops.m"
                                            {
#line 260 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_493_493 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 260 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 260 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))));
#line 260 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 2) = ((MR_Box) (backend_libs__builtin_ops__V_494_494));
#line 260 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 3) = ((MR_Box) (backend_libs__builtin_ops__V_495_495));
#line 260 "builtin_ops.m"
                                            }
#line 260 "builtin_ops.m"
                                            {
#line 260 "builtin_ops.m"
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_493_493));
#line 260 "builtin_ops.m"
                                            }
#line 260 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 258 "builtin_ops.m"
                                          }
#line 259 "builtin_ops.m"
                                      }
#line 258 "builtin_ops.m"
                                  }
#line 238 "builtin_ops.m"
                                else
#line 238 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_type_cast") == 0))
#line 248 "builtin_ops.m"
                                    {
#line 248 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_188_188;
#line 248 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_189_189;
#line 248 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Y_214;

#line 248 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 248 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 248 "builtin_ops.m"
                                        {
#line 248 "builtin_ops.m"
                                          backend_libs__builtin_ops__Y_214 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 248 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 248 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 248 "builtin_ops.m"
                                            {
#line 254 "builtin_ops.m"
                                              {
#line 254 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 254 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_189_189, 0) = backend_libs__builtin_ops__V_527_527;
#line 254 "builtin_ops.m"
                                              }
#line 254 "builtin_ops.m"
                                              {
#line 254 "builtin_ops.m"
                                                backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_214;
#line 254 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_189_189));
#line 254 "builtin_ops.m"
                                              }
#line 254 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 248 "builtin_ops.m"
                                            }
#line 248 "builtin_ops.m"
                                        }
#line 248 "builtin_ops.m"
                                    }
#line 238 "builtin_ops.m"
                                  else
#line 238 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "trace_get_io_state") == 0))
#line 236 "builtin_ops.m"
                                      {
#line 236 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 236 "builtin_ops.m"
                                          {
#line 237 "builtin_ops.m"
                                            {
#line 237 "builtin_ops.m"
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 237 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Args_9));
#line 237 "builtin_ops.m"
                                            }
#line 237 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 236 "builtin_ops.m"
                                          }
#line 236 "builtin_ops.m"
                                      }
#line 238 "builtin_ops.m"
                                    else
#line 238 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "trace_set_io_state") == 0))
#line 239 "builtin_ops.m"
                                        {
#line 239 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_193_193;

#line 239 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 239 "builtin_ops.m"
                                            {
#line 240 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_193_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 240 "builtin_ops.m"
                                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_2[0]);
#line 240 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 239 "builtin_ops.m"
                                            }
#line 239 "builtin_ops.m"
                                        }
#line 238 "builtin_ops.m"
                                      else
#line 238 "builtin_ops.m"
                                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "builtin_compound_eq") == 0))
#line 264 "builtin_ops.m"
                                          {
#line 264 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_178_178;
#line 264 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_179_179;
#line 264 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_180_180;
#line 264 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_181_181;
#line 264 "builtin_ops.m"
                                            MR_Box backend_libs__builtin_ops__Y_218;

#line 265 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 265 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 265 "builtin_ops.m"
                                              {
#line 265 "builtin_ops.m"
                                                backend_libs__builtin_ops__Y_218 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 265 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 265 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 264 "builtin_ops.m"
                                                  {
#line 266 "builtin_ops.m"
                                                    {
#line 266 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_180_180, 0) = backend_libs__builtin_ops__V_527_527;
#line 266 "builtin_ops.m"
                                                    }
#line 266 "builtin_ops.m"
                                                    {
#line 266 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_181_181, 0) = backend_libs__builtin_ops__Y_218;
#line 266 "builtin_ops.m"
                                                    }
#line 266 "builtin_ops.m"
                                                    {
#line 266 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 266 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 266 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40))));
#line 266 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 2) = ((MR_Box) (backend_libs__builtin_ops__V_180_180));
#line 266 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 3) = ((MR_Box) (backend_libs__builtin_ops__V_181_181));
#line 266 "builtin_ops.m"
                                                    }
#line 266 "builtin_ops.m"
                                                    {
#line 266 "builtin_ops.m"
                                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_179_179));
#line 266 "builtin_ops.m"
                                                    }
#line 266 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 264 "builtin_ops.m"
                                                  }
#line 265 "builtin_ops.m"
                                              }
#line 264 "builtin_ops.m"
                                          }
#line 238 "builtin_ops.m"
                                        else
#line 238 "builtin_ops.m"
                                          if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "builtin_compound_lt") == 0))
#line 264 "builtin_ops.m"
                                            {
#line 264 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_483_483;
#line 264 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_484_484;
#line 264 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_485_485;
#line 264 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_486_486;
#line 264 "builtin_ops.m"
                                              MR_Box backend_libs__builtin_ops__Y_488;

#line 265 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 265 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 265 "builtin_ops.m"
                                                {
#line 265 "builtin_ops.m"
                                                  backend_libs__builtin_ops__Y_488 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 265 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 265 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_483_483 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 264 "builtin_ops.m"
                                                    {
#line 266 "builtin_ops.m"
                                                      {
#line 266 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_485_485 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_485_485, 0) = backend_libs__builtin_ops__V_527_527;
#line 266 "builtin_ops.m"
                                                      }
#line 266 "builtin_ops.m"
                                                      {
#line 266 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_486_486 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_486_486, 0) = backend_libs__builtin_ops__Y_488;
#line 266 "builtin_ops.m"
                                                      }
#line 266 "builtin_ops.m"
                                                      {
#line 266 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_484_484 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 266 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 266 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41))));
#line 266 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 2) = ((MR_Box) (backend_libs__builtin_ops__V_485_485));
#line 266 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 3) = ((MR_Box) (backend_libs__builtin_ops__V_486_486));
#line 266 "builtin_ops.m"
                                                      }
#line 266 "builtin_ops.m"
                                                      {
#line 266 "builtin_ops.m"
                                                        backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_484_484));
#line 266 "builtin_ops.m"
                                                      }
#line 266 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 264 "builtin_ops.m"
                                                    }
#line 265 "builtin_ops.m"
                                                }
#line 264 "builtin_ops.m"
                                            }
#line 238 "builtin_ops.m"
                                          else
#line 238 "builtin_ops.m"
                                            if ((((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "store_at_ref") == 0)) || ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "store_at_ref_impure") == 0))))
#line 244 "builtin_ops.m"
                                              {
#line 244 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_191_191;
#line 244 "builtin_ops.m"
                                                MR_Box backend_libs__builtin_ops__Y_212;

#line 245 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 245 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 245 "builtin_ops.m"
                                                  {
#line 245 "builtin_ops.m"
                                                    backend_libs__builtin_ops__Y_212 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 245 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 245 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_191_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 244 "builtin_ops.m"
                                                      {
#line 246 "builtin_ops.m"
                                                        {
#line 246 "builtin_ops.m"
                                                          backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
#line 246 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 1) = backend_libs__builtin_ops__Y_212;
#line 246 "builtin_ops.m"
                                                        }
#line 246 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 244 "builtin_ops.m"
                                                      }
#line 245 "builtin_ops.m"
                                                  }
#line 244 "builtin_ops.m"
                                              }
#line 238 "builtin_ops.m"
                                            else
#line 238 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 238 "builtin_ops.m"
                          }
#line 234 "builtin_ops.m"
                      }
#line 224 "builtin_ops.m"
                    else
#line 224 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "term_size_prof_builtin") == 0))
#line 278 "builtin_ops.m"
                        {
#line 278 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_53;
#line 278 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_162_162;
#line 278 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_163_163;
#line 278 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_164_164;
#line 278 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_165_165;
#line 278 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_166_166;
#line 278 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_167_167;
#line 278 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Y_229;

#line 279 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "term_size_plus") == 0);
#line 278 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 278 "builtin_ops.m"
                            {
#line 279 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 278 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 278 "builtin_ops.m"
                                {
#line 279 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 279 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 279 "builtin_ops.m"
                                    {
#line 279 "builtin_ops.m"
                                      backend_libs__builtin_ops__Y_229 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 279 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 279 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_162_162)) == (MR_mktag((MR_Integer) 1)));
#line 279 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 279 "builtin_ops.m"
                                        {
#line 279 "builtin_ops.m"
                                          backend_libs__builtin_ops__Z_53 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_162_162, (MR_Integer) 0));
#line 279 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_162_162, (MR_Integer) 1)));
#line 279 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 278 "builtin_ops.m"
                                            {
#line 280 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_165_165 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 280 "builtin_ops.m"
                                              {
#line 280 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 280 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_166_166, 0) = backend_libs__builtin_ops__V_527_527;
#line 280 "builtin_ops.m"
                                              }
#line 280 "builtin_ops.m"
                                              {
#line 280 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 280 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_167_167, 0) = backend_libs__builtin_ops__Y_229;
#line 280 "builtin_ops.m"
                                              }
#line 280 "builtin_ops.m"
                                              {
#line 280 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 280 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 280 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 1) = ((MR_Box) (backend_libs__builtin_ops__V_165_165));
#line 280 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 2) = ((MR_Box) (backend_libs__builtin_ops__V_166_166));
#line 280 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 3) = ((MR_Box) (backend_libs__builtin_ops__V_167_167));
#line 280 "builtin_ops.m"
                                              }
#line 280 "builtin_ops.m"
                                              {
#line 280 "builtin_ops.m"
                                                backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_53;
#line 280 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_164_164));
#line 280 "builtin_ops.m"
                                              }
#line 280 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 278 "builtin_ops.m"
                                            }
#line 279 "builtin_ops.m"
                                        }
#line 279 "builtin_ops.m"
                                    }
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                            }
#line 278 "builtin_ops.m"
                        }
#line 224 "builtin_ops.m"
                      else
#line 224 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 222 "builtin_ops.m"
          }
#line 204 "builtin_ops.m"
      }
#line 209 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 208 "builtin_ops.m"
      *backend_libs__builtin_ops__Code_10 = backend_libs__builtin_ops__CodePrime_13;
#line 209 "builtin_ops.m"
    else
#line 210 "builtin_ops.m"
      {
#line 210 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__Arity_14;
#line 210 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__Msg_15;
#line 210 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__V_25_25;
#line 210 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_31_31;
#line 210 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__V_33_33;
#line 210 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__V_34_34;
#line 210 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__V_41_41;

#line 210 "builtin_ops.m"
        {
#line 210 "builtin_ops.m"
          mercury__list__length_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_24, backend_libs__builtin_ops__Args_9, &backend_libs__builtin_ops__Arity_14);
        }
#line 9155 "backend_libs.builtin_ops.c"
        backend_libs__builtin_ops__V_31_31 = (MR_Word) &backend_libs__builtin_ops_scalar_common_2[3];
#line 211 "builtin_ops.m"
        {
#line 211 "builtin_ops.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(backend_libs__builtin_ops__V_31_31, backend_libs__builtin_ops__Arity_14, &backend_libs__builtin_ops__V_25_25);
        }
#line 211 "builtin_ops.m"
        {
#line 211 "builtin_ops.m"
          backend_libs__builtin_ops__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "/", backend_libs__builtin_ops__V_25_25);
        }
#line 211 "builtin_ops.m"
        {
#line 211 "builtin_ops.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__builtin_ops__V_31_31, backend_libs__builtin_ops__PredName_7, &backend_libs__builtin_ops__V_34_34);
        }
#line 211 "builtin_ops.m"
        {
#line 211 "builtin_ops.m"
          backend_libs__builtin_ops__V_41_41 = mercury__string__f_43_43_2_f_0(backend_libs__builtin_ops__V_34_34, backend_libs__builtin_ops__V_33_33);
        }
#line 211 "builtin_ops.m"
        {
#line 211 "builtin_ops.m"
          backend_libs__builtin_ops__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "unknown builtin ", backend_libs__builtin_ops__V_41_41);
        }
#line 212 "builtin_ops.m"
        {
#line 212 "builtin_ops.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.builtin_ops", (MR_String) "predicate \140backend_libs.builtin_ops.translate_builtin\'/5", backend_libs__builtin_ops__Msg_15);
#line 212 "builtin_ops.m"
          return;
        }
#line 210 "builtin_ops.m"
      }
#line 209 "builtin_ops.m"
  }
#line 142 "builtin_ops.m"
}

#line 125 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops__test_if_builtin_4_p_0(
#line 125 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_12,
#line 125 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__FullyQualifiedModule_5,
#line 125 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__PredName_6,
#line 125 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__ProcId_7,
#line 125 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__Args_8)
#line 125 "builtin_ops.m"
{
#line 197 "builtin_ops.m"
  {
#line 197 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 197 "builtin_ops.m"
    MR_String backend_libs__builtin_ops__ModuleName_9;
#line 197 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__ProcNum_10;
#line 197 "builtin_ops.m"
    MR_Word backend_libs__builtin_ops__V_496_496;
#line 222 "builtin_ops.m"
    MR_Box backend_libs__builtin_ops__V_497_497;

#line 198 "builtin_ops.m"
    {
#line 198 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(backend_libs__builtin_ops__FullyQualifiedModule_5, &backend_libs__builtin_ops__ModuleName_9);
    }
#line 197 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 197 "builtin_ops.m"
      {
#line 199 "builtin_ops.m"
        {
#line 199 "builtin_ops.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__builtin_ops__ProcId_7, &backend_libs__builtin_ops__ProcNum_10);
        }
#line 222 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Args_8)) == (MR_mktag((MR_Integer) 1)));
#line 222 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
          {
#line 222 "builtin_ops.m"
            backend_libs__builtin_ops__V_497_497 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 0));
#line 222 "builtin_ops.m"
            backend_libs__builtin_ops__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 1)));
#line 224 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "io") == 0))
#line 225 "builtin_ops.m"
              {
#line 227 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 225 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 225 "builtin_ops.m"
                  {
#line 227 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 229 "builtin_ops.m"
                      {
#line 229 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_get_io_state") == 0))
#line 228 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 229 "builtin_ops.m"
                        else
#line 229 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_set_io_state") == 0))
#line 230 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 229 "builtin_ops.m"
                          else
#line 229 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 229 "builtin_ops.m"
                      }
#line 225 "builtin_ops.m"
                  }
#line 225 "builtin_ops.m"
              }
#line 224 "builtin_ops.m"
            else
#line 224 "builtin_ops.m"
              if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "int") == 0))
#line 282 "builtin_ops.m"
                {
#line 282 "builtin_ops.m"
                  MR_Word backend_libs__builtin_ops__V_508_508;
#line 347 "builtin_ops.m"
                  MR_Box backend_libs__builtin_ops__V_509_509;

#line 347 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                    {
#line 347 "builtin_ops.m"
                      backend_libs__builtin_ops__V_509_509 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                      backend_libs__builtin_ops__V_508_508 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 282 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "*") == 0))
#line 346 "builtin_ops.m"
                        {
#line 346 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_72_72;
#line 347 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_227;

#line 347 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                            {
#line 347 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                {
#line 347 "builtin_ops.m"
                                  backend_libs__builtin_ops__Z_227 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                }
#line 346 "builtin_ops.m"
                            }
#line 346 "builtin_ops.m"
                        }
#line 282 "builtin_ops.m"
                      else
#line 282 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "+") == 0))
#line 284 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0))
#line 297 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 297 "builtin_ops.m"
                            else
#line 286 "builtin_ops.m"
                              {
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_202 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));

#line 286 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_118_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "builtin_ops.m"
                              }
#line 284 "builtin_ops.m"
                          else
#line 284 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 1))
#line 286 "builtin_ops.m"
                              {
#line 286 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_316_316;
#line 286 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_319;

#line 286 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 286 "builtin_ops.m"
                                  {
#line 286 "builtin_ops.m"
                                    backend_libs__builtin_ops__Z_319 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 286 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_316_316 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "builtin_ops.m"
                                  }
#line 286 "builtin_ops.m"
                              }
#line 284 "builtin_ops.m"
                            else
#line 284 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 2))
#line 286 "builtin_ops.m"
                                {
#line 286 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_322_322;
#line 286 "builtin_ops.m"
                                  MR_Box backend_libs__builtin_ops__Z_325;

#line 286 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 286 "builtin_ops.m"
                                    {
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__Z_325 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_322_322 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "builtin_ops.m"
                                    }
#line 286 "builtin_ops.m"
                                }
#line 284 "builtin_ops.m"
                              else
#line 284 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 282 "builtin_ops.m"
                        else
#line 282 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "-") == 0))
#line 303 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0))
#line 316 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 316 "builtin_ops.m"
                              else
#line 305 "builtin_ops.m"
                                {
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                  MR_Box backend_libs__builtin_ops__Z_213 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));

#line 305 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "builtin_ops.m"
                                }
#line 303 "builtin_ops.m"
                            else
#line 303 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 1))
#line 305 "builtin_ops.m"
                                {
#line 305 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_328_328;
#line 305 "builtin_ops.m"
                                  MR_Box backend_libs__builtin_ops__Z_331;

#line 305 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 305 "builtin_ops.m"
                                    {
#line 305 "builtin_ops.m"
                                      backend_libs__builtin_ops__Z_331 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 305 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_328_328 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "builtin_ops.m"
                                    }
#line 305 "builtin_ops.m"
                                }
#line 303 "builtin_ops.m"
                              else
#line 303 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 2))
#line 305 "builtin_ops.m"
                                  {
#line 305 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_334_334;
#line 305 "builtin_ops.m"
                                    MR_Box backend_libs__builtin_ops__Z_337;

#line 305 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 305 "builtin_ops.m"
                                      {
#line 305 "builtin_ops.m"
                                        backend_libs__builtin_ops__Z_337 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 305 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 305 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_334_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "builtin_ops.m"
                                      }
#line 305 "builtin_ops.m"
                                  }
#line 303 "builtin_ops.m"
                                else
#line 303 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 282 "builtin_ops.m"
                          else
#line 282 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "<") == 0))
#line 357 "builtin_ops.m"
                              {
#line 358 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 357 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "builtin_ops.m"
                              }
#line 282 "builtin_ops.m"
                            else
#line 282 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) ">") == 0))
#line 357 "builtin_ops.m"
                                {
#line 358 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 357 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "builtin_ops.m"
                                }
#line 282 "builtin_ops.m"
                              else
#line 282 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "\\") == 0))
#line 350 "builtin_ops.m"
                                  {
#line 350 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 350 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 350 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "builtin_ops.m"
                                  }
#line 282 "builtin_ops.m"
                                else
#line 282 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "/\\") == 0))
#line 346 "builtin_ops.m"
                                    {
#line 346 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_341_341;
#line 347 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Z_347;

#line 347 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                        {
#line 347 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                            {
#line 347 "builtin_ops.m"
                                              backend_libs__builtin_ops__Z_347 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                            }
#line 346 "builtin_ops.m"
                                        }
#line 346 "builtin_ops.m"
                                    }
#line 282 "builtin_ops.m"
                                  else
#line 282 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "=<") == 0))
#line 357 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 357 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "builtin_ops.m"
                                      }
#line 282 "builtin_ops.m"
                                    else
#line 282 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) ">=") == 0))
#line 357 "builtin_ops.m"
                                        {
#line 358 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 357 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "builtin_ops.m"
                                        }
#line 282 "builtin_ops.m"
                                      else
#line 282 "builtin_ops.m"
                                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "\\/") == 0))
#line 346 "builtin_ops.m"
                                          {
#line 346 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_375_375;
#line 347 "builtin_ops.m"
                                            MR_Box backend_libs__builtin_ops__Z_381;

#line 347 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                              {
#line 347 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                  {
#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__Z_381 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_375_375 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                                  }
#line 346 "builtin_ops.m"
                                              }
#line 346 "builtin_ops.m"
                                          }
#line 282 "builtin_ops.m"
                                        else
#line 282 "builtin_ops.m"
                                          if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "xor") == 0))
#line 322 "builtin_ops.m"
                                            {
#line 322 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_78_78;
#line 322 "builtin_ops.m"
                                              MR_Box backend_libs__builtin_ops__Z_224;

#line 322 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 322 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 322 "builtin_ops.m"
                                                {
#line 322 "builtin_ops.m"
                                                  backend_libs__builtin_ops__Z_224 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 322 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 322 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 322 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 326 "builtin_ops.m"
                                                    {
#line 326 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0))
#line 324 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 326 "builtin_ops.m"
                                                      else
#line 326 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 1))
#line 327 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 326 "builtin_ops.m"
                                                        else
#line 326 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 2))
#line 330 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 326 "builtin_ops.m"
                                                          else
#line 326 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 326 "builtin_ops.m"
                                                    }
#line 322 "builtin_ops.m"
                                                }
#line 322 "builtin_ops.m"
                                            }
#line 282 "builtin_ops.m"
                                          else
#line 282 "builtin_ops.m"
                                            if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "plus") == 0))
#line 346 "builtin_ops.m"
                                              {
#line 346 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_395_395;
#line 347 "builtin_ops.m"
                                                MR_Box backend_libs__builtin_ops__Z_401;

#line 347 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                  {
#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                      {
#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__Z_401 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_395_395 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                                      }
#line 346 "builtin_ops.m"
                                                  }
#line 346 "builtin_ops.m"
                                              }
#line 282 "builtin_ops.m"
                                            else
#line 282 "builtin_ops.m"
                                              if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "minus") == 0))
#line 346 "builtin_ops.m"
                                                {
#line 346 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_385_385;
#line 347 "builtin_ops.m"
                                                  MR_Box backend_libs__builtin_ops__Z_391;

#line 347 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                    {
#line 347 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                      if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                        {
#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__Z_391 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_385_385 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                                        }
#line 346 "builtin_ops.m"
                                                    }
#line 346 "builtin_ops.m"
                                                }
#line 282 "builtin_ops.m"
                                              else
#line 282 "builtin_ops.m"
                                                if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "times") == 0))
#line 346 "builtin_ops.m"
                                                  {
#line 346 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_405_405;
#line 347 "builtin_ops.m"
                                                    MR_Box backend_libs__builtin_ops__Z_411;

#line 347 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                      {
#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                        if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                          {
#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__Z_411 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                                          }
#line 346 "builtin_ops.m"
                                                      }
#line 346 "builtin_ops.m"
                                                  }
#line 282 "builtin_ops.m"
                                                else
#line 282 "builtin_ops.m"
                                                  if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_rem") == 0))
#line 346 "builtin_ops.m"
                                                    {
#line 346 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_435_435;
#line 347 "builtin_ops.m"
                                                      MR_Box backend_libs__builtin_ops__Z_441;

#line 347 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                      if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                        {
#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                          if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                            {
#line 347 "builtin_ops.m"
                                                              backend_libs__builtin_ops__Z_441 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_435_435 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                                            }
#line 346 "builtin_ops.m"
                                                        }
#line 346 "builtin_ops.m"
                                                    }
#line 282 "builtin_ops.m"
                                                  else
#line 282 "builtin_ops.m"
                                                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_quotient") == 0))
#line 346 "builtin_ops.m"
                                                      {
#line 346 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_425_425;
#line 347 "builtin_ops.m"
                                                        MR_Box backend_libs__builtin_ops__Z_431;

#line 347 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                        if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                          {
#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                            if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                              {
#line 347 "builtin_ops.m"
                                                                backend_libs__builtin_ops__Z_431 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_425_425 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                                              }
#line 346 "builtin_ops.m"
                                                          }
#line 346 "builtin_ops.m"
                                                      }
#line 282 "builtin_ops.m"
                                                    else
#line 282 "builtin_ops.m"
                                                      if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_left_shift") == 0))
#line 346 "builtin_ops.m"
                                                        {
#line 346 "builtin_ops.m"
                                                          MR_Word backend_libs__builtin_ops__V_415_415;
#line 347 "builtin_ops.m"
                                                          MR_Box backend_libs__builtin_ops__Z_421;

#line 347 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                          if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                            {
#line 347 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                              if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                                {
#line 347 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__Z_421 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_415_415 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                                                }
#line 346 "builtin_ops.m"
                                                            }
#line 346 "builtin_ops.m"
                                                        }
#line 282 "builtin_ops.m"
                                                      else
#line 282 "builtin_ops.m"
                                                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_right_shift") == 0))
#line 346 "builtin_ops.m"
                                                          {
#line 346 "builtin_ops.m"
                                                            MR_Word backend_libs__builtin_ops__V_445_445;
#line 347 "builtin_ops.m"
                                                            MR_Box backend_libs__builtin_ops__Z_451;

#line 347 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 346 "builtin_ops.m"
                                                            if (backend_libs__builtin_ops__succeeded)
#line 346 "builtin_ops.m"
                                                              {
#line 347 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                                if (backend_libs__builtin_ops__succeeded)
#line 347 "builtin_ops.m"
                                                                  {
#line 347 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__Z_451 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 347 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 347 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_445_445 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "builtin_ops.m"
                                                                  }
#line 346 "builtin_ops.m"
                                                              }
#line 346 "builtin_ops.m"
                                                          }
#line 282 "builtin_ops.m"
                                                        else
#line 282 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 347 "builtin_ops.m"
                    }
#line 282 "builtin_ops.m"
                }
#line 224 "builtin_ops.m"
              else
#line 224 "builtin_ops.m"
                if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "float") == 0))
#line 362 "builtin_ops.m"
                  {
#line 362 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_506_506;
#line 390 "builtin_ops.m"
                    MR_Box backend_libs__builtin_ops__V_507_507;

#line 390 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 362 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 362 "builtin_ops.m"
                      {
#line 390 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 390 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 390 "builtin_ops.m"
                          {
#line 390 "builtin_ops.m"
                            backend_libs__builtin_ops__V_507_507 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 390 "builtin_ops.m"
                            backend_libs__builtin_ops__V_506_506 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 362 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "*") == 0))
#line 389 "builtin_ops.m"
                              {
#line 389 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_32_32;
#line 390 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_265;

#line 390 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_506_506)) == (MR_mktag((MR_Integer) 1)));
#line 390 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 390 "builtin_ops.m"
                                  {
#line 390 "builtin_ops.m"
                                    backend_libs__builtin_ops__Z_265 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));
#line 390 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
#line 390 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "builtin_ops.m"
                                  }
#line 389 "builtin_ops.m"
                              }
#line 362 "builtin_ops.m"
                            else
#line 362 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "+") == 0))
#line 364 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 364 "builtin_ops.m"
                                else
#line 370 "builtin_ops.m"
                                  {
#line 370 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
#line 370 "builtin_ops.m"
                                    MR_Box backend_libs__builtin_ops__Z_245 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));

#line 370 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 370 "builtin_ops.m"
                                  }
#line 362 "builtin_ops.m"
                              else
#line 362 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "-") == 0))
#line 375 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 375 "builtin_ops.m"
                                  else
#line 382 "builtin_ops.m"
                                    {
#line 382 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
#line 382 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Z_256 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));

#line 382 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "builtin_ops.m"
                                    }
#line 362 "builtin_ops.m"
                                else
#line 362 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "<") == 0))
#line 398 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "builtin_ops.m"
                                  else
#line 362 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) ">") == 0))
#line 398 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "builtin_ops.m"
                                    else
#line 362 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "=<") == 0))
#line 398 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "builtin_ops.m"
                                      else
#line 362 "builtin_ops.m"
                                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) ">=") == 0))
#line 398 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "builtin_ops.m"
                                        else
#line 362 "builtin_ops.m"
                                          if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_quotient") == 0))
#line 389 "builtin_ops.m"
                                            {
#line 389 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_306_306;
#line 390 "builtin_ops.m"
                                              MR_Box backend_libs__builtin_ops__Z_312;

#line 390 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_506_506)) == (MR_mktag((MR_Integer) 1)));
#line 390 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 390 "builtin_ops.m"
                                                {
#line 390 "builtin_ops.m"
                                                  backend_libs__builtin_ops__Z_312 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));
#line 390 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
#line 390 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_306_306 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "builtin_ops.m"
                                                }
#line 389 "builtin_ops.m"
                                            }
#line 362 "builtin_ops.m"
                                          else
#line 362 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 390 "builtin_ops.m"
                          }
#line 362 "builtin_ops.m"
                      }
#line 362 "builtin_ops.m"
                  }
#line 224 "builtin_ops.m"
                else
#line 224 "builtin_ops.m"
                  if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "builtin") == 0))
#line 221 "builtin_ops.m"
                    {
#line 221 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__V_173_173;
#line 222 "builtin_ops.m"
                      MR_Box backend_libs__builtin_ops__Y_19;

#line 222 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_promise_unique") == 0);
#line 221 "builtin_ops.m"
                      if (backend_libs__builtin_ops__succeeded)
#line 221 "builtin_ops.m"
                        {
#line 222 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 221 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 221 "builtin_ops.m"
                            {
#line 222 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 222 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
                                {
#line 222 "builtin_ops.m"
                                  backend_libs__builtin_ops__Y_19 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 222 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 222 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_173_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "builtin_ops.m"
                                }
#line 221 "builtin_ops.m"
                            }
#line 221 "builtin_ops.m"
                        }
#line 221 "builtin_ops.m"
                    }
#line 224 "builtin_ops.m"
                  else
#line 224 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "private_builtin") == 0))
#line 234 "builtin_ops.m"
                      {
#line 265 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 234 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 238 "builtin_ops.m"
                          {
#line 238 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "pointer_equal") == 0))
#line 269 "builtin_ops.m"
                              {
#line 269 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_494_494;
#line 272 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__V_495_495;

#line 272 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 272 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 272 "builtin_ops.m"
                                  {
#line 272 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_495_495 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 272 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 273 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__V_494_494 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 273 "builtin_ops.m"
                                    else
#line 273 "builtin_ops.m"
                                      {
#line 273 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_494_494, (MR_Integer) 1)));
#line 273 "builtin_ops.m"
                                        MR_Box backend_libs__builtin_ops__Y_191 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_494_494, (MR_Integer) 0));

#line 273 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_140_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "builtin_ops.m"
                                      }
#line 272 "builtin_ops.m"
                                  }
#line 269 "builtin_ops.m"
                              }
#line 238 "builtin_ops.m"
                            else
#line 238 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "builtin_int_gt") == 0))
#line 258 "builtin_ops.m"
                                {
#line 258 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_153_153;
#line 259 "builtin_ops.m"
                                  MR_Box backend_libs__builtin_ops__Y_186;

#line 259 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 259 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 259 "builtin_ops.m"
                                    {
#line 259 "builtin_ops.m"
                                      backend_libs__builtin_ops__Y_186 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 259 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 259 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_153_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "builtin_ops.m"
                                    }
#line 258 "builtin_ops.m"
                                }
#line 238 "builtin_ops.m"
                              else
#line 238 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "builtin_int_lt") == 0))
#line 258 "builtin_ops.m"
                                  {
#line 258 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_462_462;
#line 259 "builtin_ops.m"
                                    MR_Box backend_libs__builtin_ops__Y_467;

#line 259 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 259 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 259 "builtin_ops.m"
                                      {
#line 259 "builtin_ops.m"
                                        backend_libs__builtin_ops__Y_467 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 259 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 259 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_462_462 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "builtin_ops.m"
                                      }
#line 258 "builtin_ops.m"
                                  }
#line 238 "builtin_ops.m"
                                else
#line 238 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_type_cast") == 0))
#line 248 "builtin_ops.m"
                                    {
#line 248 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_158_158;
#line 248 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Y_184;

#line 248 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 248 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 248 "builtin_ops.m"
                                        {
#line 248 "builtin_ops.m"
                                          backend_libs__builtin_ops__Y_184 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 248 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 248 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "builtin_ops.m"
                                        }
#line 248 "builtin_ops.m"
                                    }
#line 238 "builtin_ops.m"
                                  else
#line 238 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "trace_get_io_state") == 0))
#line 236 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "builtin_ops.m"
                                    else
#line 238 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "trace_set_io_state") == 0))
#line 239 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "builtin_ops.m"
                                      else
#line 238 "builtin_ops.m"
                                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "builtin_compound_eq") == 0))
#line 264 "builtin_ops.m"
                                          {
#line 264 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_148_148;
#line 265 "builtin_ops.m"
                                            MR_Box backend_libs__builtin_ops__Y_188;

#line 265 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 265 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 265 "builtin_ops.m"
                                              {
#line 265 "builtin_ops.m"
                                                backend_libs__builtin_ops__Y_188 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 265 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 265 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "builtin_ops.m"
                                              }
#line 264 "builtin_ops.m"
                                          }
#line 238 "builtin_ops.m"
                                        else
#line 238 "builtin_ops.m"
                                          if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "builtin_compound_lt") == 0))
#line 264 "builtin_ops.m"
                                            {
#line 264 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_453_453;
#line 265 "builtin_ops.m"
                                              MR_Box backend_libs__builtin_ops__Y_458;

#line 265 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 265 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 265 "builtin_ops.m"
                                                {
#line 265 "builtin_ops.m"
                                                  backend_libs__builtin_ops__Y_458 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 265 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 265 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_453_453 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "builtin_ops.m"
                                                }
#line 264 "builtin_ops.m"
                                            }
#line 238 "builtin_ops.m"
                                          else
#line 238 "builtin_ops.m"
                                            if ((((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "store_at_ref") == 0)) || ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "store_at_ref_impure") == 0))))
#line 244 "builtin_ops.m"
                                              {
#line 244 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_161_161;
#line 245 "builtin_ops.m"
                                                MR_Box backend_libs__builtin_ops__Y_182;

#line 245 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 245 "builtin_ops.m"
                                                if (backend_libs__builtin_ops__succeeded)
#line 245 "builtin_ops.m"
                                                  {
#line 245 "builtin_ops.m"
                                                    backend_libs__builtin_ops__Y_182 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 245 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 245 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "builtin_ops.m"
                                                  }
#line 244 "builtin_ops.m"
                                              }
#line 238 "builtin_ops.m"
                                            else
#line 238 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 238 "builtin_ops.m"
                          }
#line 234 "builtin_ops.m"
                      }
#line 224 "builtin_ops.m"
                    else
#line 224 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "term_size_prof_builtin") == 0))
#line 278 "builtin_ops.m"
                        {
#line 278 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_132_132;
#line 278 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_133_133;
#line 279 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Y_199;
#line 279 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_23;

#line 279 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "term_size_plus") == 0);
#line 278 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 278 "builtin_ops.m"
                            {
#line 279 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 278 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 278 "builtin_ops.m"
                                {
#line 279 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 279 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 279 "builtin_ops.m"
                                    {
#line 279 "builtin_ops.m"
                                      backend_libs__builtin_ops__Y_199 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 279 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 279 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_132_132)) == (MR_mktag((MR_Integer) 1)));
#line 279 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 279 "builtin_ops.m"
                                        {
#line 279 "builtin_ops.m"
                                          backend_libs__builtin_ops__Z_23 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_132_132, (MR_Integer) 0));
#line 279 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_132_132, (MR_Integer) 1)));
#line 279 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_133_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 279 "builtin_ops.m"
                                        }
#line 279 "builtin_ops.m"
                                    }
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                            }
#line 278 "builtin_ops.m"
                        }
#line 224 "builtin_ops.m"
                      else
#line 224 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 222 "builtin_ops.m"
          }
#line 197 "builtin_ops.m"
      }
#line 197 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 197 "builtin_ops.m"
  }
#line 125 "builtin_ops.m"
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
