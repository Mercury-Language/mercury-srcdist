/*
** Automatically generated from `builtin_ops.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 132 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1];

#line 135 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0;

#line 138 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;

#line 141 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1];

#line 144 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1;

#line 147 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1];

#line 150 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1];

#line 153 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2];

#line 156 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2];

#line 159 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2];

#line 162 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0;

#line 165 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1;

#line 168 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2;

#line 171 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3;

#line 174 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4;

#line 177 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5;

#line 180 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6;

#line 183 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7;

#line 186 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8;

#line 189 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9;

#line 192 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10;

#line 195 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11;

#line 198 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12;

#line 201 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13;

#line 204 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14;

#line 207 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1];

#line 210 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15;

#line 213 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16;

#line 216 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17;

#line 219 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18;

#line 222 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19;

#line 225 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20;

#line 228 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21;

#line 231 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22;

#line 234 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23;

#line 237 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24;

#line 240 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25;

#line 243 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26;

#line 246 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27;

#line 249 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28;

#line 252 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29;

#line 255 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30;

#line 258 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31;

#line 261 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32;

#line 264 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33;

#line 267 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34;

#line 270 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35;

#line 273 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36;

#line 276 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37;

#line 279 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38;

#line 282 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39;

#line 285 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40;

#line 288 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41;

#line 291 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[41];

#line 294 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

#line 297 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[2];

#line 300 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[42];

#line 303 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[42];

#line 306 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0;

#line 309 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1;

#line 312 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2;

#line 315 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3];

#line 318 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3];

#line 321 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3];

#line 324 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1;

#line 327 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2];

#line 330 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0;

#line 333 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2];

#line 336 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1;

#line 339 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1];

#line 342 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2;

#line 345 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1;

#line 348 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1];

#line 351 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3;

#line 354 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1];

#line 357 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1];

#line 360 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1];

#line 363 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1];

#line 366 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4];

#line 369 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4];

#line 372 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4];

#line 375 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1];

#line 378 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0;

#line 381 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1];

#line 384 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1;

#line 387 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1];

#line 390 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2;

#line 393 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2];

#line 396 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3;

#line 399 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3];

#line 402 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4;

#line 405 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1];

#line 408 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1];

#line 411 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1];

#line 414 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2];

#line 417 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4];

#line 420 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5];

#line 423 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5];

#line 426 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0;

#line 429 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1;

#line 432 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2;

#line 435 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3;

#line 438 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4;

#line 441 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5;

#line 444 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6;

#line 447 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7;

#line 450 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8;

#line 453 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9;

#line 456 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10;

#line 459 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[11];

#line 462 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[11];

#line 465 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[11];

#line 468 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 471 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 473 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 476 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 479 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 481 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 483 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 486 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 489 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 491 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 494 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 497 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 499 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 501 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 504 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 507 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 509 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 512 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 515 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 517 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 519 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 522 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 525 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 527 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 529 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 532 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 535 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 537 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 539 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 541 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 544 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 547 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 549 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 551 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 554 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 557 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 559 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 561 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 563 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 566 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 569 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 571 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 574 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 577 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 579 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 581 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 183 "builtin_ops.m"
static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_p_0(
#line 183 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__HeadVar__1_1,
#line 183 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__HeadVar__2_2,
#line 183 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__HeadVar__3_3,
#line 183 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__4_4,
#line 183 "builtin_ops.m"
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



#line 653 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 658 "backend_libs.builtin_ops.c"
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

#line 673 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
  }
};

#line 681 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 686 "backend_libs.builtin_ops.c"
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

#line 701 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0
};

#line 706 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 711 "backend_libs.builtin_ops.c"
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

#line 725 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 731 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 737 "backend_libs.builtin_ops.c"
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

#line 758 "backend_libs.builtin_ops.c"
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

#line 773 "backend_libs.builtin_ops.c"
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

#line 788 "backend_libs.builtin_ops.c"
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

#line 803 "backend_libs.builtin_ops.c"
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

#line 818 "backend_libs.builtin_ops.c"
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

#line 833 "backend_libs.builtin_ops.c"
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

#line 848 "backend_libs.builtin_ops.c"
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

#line 863 "backend_libs.builtin_ops.c"
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

#line 878 "backend_libs.builtin_ops.c"
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

#line 893 "backend_libs.builtin_ops.c"
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

#line 908 "backend_libs.builtin_ops.c"
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

#line 923 "backend_libs.builtin_ops.c"
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

#line 938 "backend_libs.builtin_ops.c"
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

#line 953 "backend_libs.builtin_ops.c"
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

#line 968 "backend_libs.builtin_ops.c"
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

#line 983 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0
};

#line 988 "backend_libs.builtin_ops.c"
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

#line 1003 "backend_libs.builtin_ops.c"
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

#line 1018 "backend_libs.builtin_ops.c"
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

#line 1033 "backend_libs.builtin_ops.c"
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

#line 1048 "backend_libs.builtin_ops.c"
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

#line 1063 "backend_libs.builtin_ops.c"
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

#line 1078 "backend_libs.builtin_ops.c"
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

#line 1093 "backend_libs.builtin_ops.c"
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

#line 1108 "backend_libs.builtin_ops.c"
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

#line 1123 "backend_libs.builtin_ops.c"
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

#line 1138 "backend_libs.builtin_ops.c"
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

#line 1153 "backend_libs.builtin_ops.c"
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

#line 1168 "backend_libs.builtin_ops.c"
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

#line 1183 "backend_libs.builtin_ops.c"
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

#line 1198 "backend_libs.builtin_ops.c"
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

#line 1213 "backend_libs.builtin_ops.c"
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

#line 1228 "backend_libs.builtin_ops.c"
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

#line 1243 "backend_libs.builtin_ops.c"
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

#line 1258 "backend_libs.builtin_ops.c"
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

#line 1273 "backend_libs.builtin_ops.c"
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

#line 1288 "backend_libs.builtin_ops.c"
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

#line 1303 "backend_libs.builtin_ops.c"
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

#line 1318 "backend_libs.builtin_ops.c"
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

#line 1333 "backend_libs.builtin_ops.c"
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

#line 1348 "backend_libs.builtin_ops.c"
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

#line 1363 "backend_libs.builtin_ops.c"
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

#line 1378 "backend_libs.builtin_ops.c"
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

#line 1393 "backend_libs.builtin_ops.c"
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

#line 1438 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15
};

#line 1443 "backend_libs.builtin_ops.c"
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

#line 1457 "backend_libs.builtin_ops.c"
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

#line 1503 "backend_libs.builtin_ops.c"
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

#line 1549 "backend_libs.builtin_ops.c"
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

#line 1570 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0 = {
  (MR_String) "scalar_elem_string",
  (MR_Integer) 0
};

#line 1576 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1 = {
  (MR_String) "scalar_elem_int",
  (MR_Integer) 1
};

#line 1582 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2 = {
  (MR_String) "scalar_elem_generic",
  (MR_Integer) 2
};

#line 1588 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2
};

#line 1595 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0
};

#line 1602 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1609 "backend_libs.builtin_ops.c"
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

#line 1630 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1 = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1638 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1644 "backend_libs.builtin_ops.c"
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

#line 1659 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1665 "backend_libs.builtin_ops.c"
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

#line 1680 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1685 "backend_libs.builtin_ops.c"
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

#line 1700 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1708 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__pti_list_1__pseudo_1
};

#line 1713 "backend_libs.builtin_ops.c"
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

#line 1728 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0
};

#line 1733 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1
};

#line 1738 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 1743 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3
};

#line 1748 "backend_libs.builtin_ops.c"
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

#line 1772 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 1780 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1788 "backend_libs.builtin_ops.c"
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

#line 1809 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1814 "backend_libs.builtin_ops.c"
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

#line 1829 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1834 "backend_libs.builtin_ops.c"
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

#line 1849 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1854 "backend_libs.builtin_ops.c"
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

#line 1869 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1875 "backend_libs.builtin_ops.c"
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

#line 1890 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1897 "backend_libs.builtin_ops.c"
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

#line 1912 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0
};

#line 1917 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1
};

#line 1922 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2
};

#line 1927 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4
};

#line 1933 "backend_libs.builtin_ops.c"
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

#line 1957 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3
};

#line 1966 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 1975 "backend_libs.builtin_ops.c"
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

#line 1996 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0 = {
  (MR_String) "mktag",
  (MR_Integer) 0
};

#line 2002 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1 = {
  (MR_String) "tag",
  (MR_Integer) 1
};

#line 2008 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2 = {
  (MR_String) "unmktag",
  (MR_Integer) 2
};

#line 2014 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3 = {
  (MR_String) "strip_tag",
  (MR_Integer) 3
};

#line 2020 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4 = {
  (MR_String) "mkbody",
  (MR_Integer) 4
};

#line 2026 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5 = {
  (MR_String) "unmkbody",
  (MR_Integer) 5
};

#line 2032 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6 = {
  (MR_String) "bitwise_complement",
  (MR_Integer) 6
};

#line 2038 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7 = {
  (MR_String) "logical_not",
  (MR_Integer) 7
};

#line 2044 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8 = {
  (MR_String) "hash_string",
  (MR_Integer) 8
};

#line 2050 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9 = {
  (MR_String) "hash_string2",
  (MR_Integer) 9
};

#line 2056 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10 = {
  (MR_String) "hash_string3",
  (MR_Integer) 10
};

#line 2062 "backend_libs.builtin_ops.c"
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

#line 2077 "backend_libs.builtin_ops.c"
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

#line 2092 "backend_libs.builtin_ops.c"
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

#line 2107 "backend_libs.builtin_ops.c"
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

#line 2128 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 2131 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2133 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2135 "backend_libs.builtin_ops.c"
{
#line 2137 "backend_libs.builtin_ops.c"
  {
#line 2139 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2142 "backend_libs.builtin_ops.c"
    {
#line 2144 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2147 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2149 "backend_libs.builtin_ops.c"
  }
#line 2151 "backend_libs.builtin_ops.c"
}

#line 2154 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 2157 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2159 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2161 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2163 "backend_libs.builtin_ops.c"
{
#line 2165 "backend_libs.builtin_ops.c"
  {
#line 2167 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2170 "backend_libs.builtin_ops.c"
    {
#line 2172 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2175 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2177 "backend_libs.builtin_ops.c"
  }
#line 2179 "backend_libs.builtin_ops.c"
}

#line 2182 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 2185 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2187 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2189 "backend_libs.builtin_ops.c"
{
#line 2191 "backend_libs.builtin_ops.c"
  {
#line 2193 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2196 "backend_libs.builtin_ops.c"
    {
#line 2198 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2201 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2203 "backend_libs.builtin_ops.c"
  }
#line 2205 "backend_libs.builtin_ops.c"
}

#line 2208 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 2211 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2213 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2215 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2217 "backend_libs.builtin_ops.c"
{
#line 2219 "backend_libs.builtin_ops.c"
  {
#line 2221 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2224 "backend_libs.builtin_ops.c"
    {
#line 2226 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2229 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2231 "backend_libs.builtin_ops.c"
  }
#line 2233 "backend_libs.builtin_ops.c"
}

#line 2236 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 2239 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2241 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2243 "backend_libs.builtin_ops.c"
{
#line 2245 "backend_libs.builtin_ops.c"
  {
#line 2247 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2250 "backend_libs.builtin_ops.c"
    {
#line 2252 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2255 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2257 "backend_libs.builtin_ops.c"
  }
#line 2259 "backend_libs.builtin_ops.c"
}

#line 2262 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 2265 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2267 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2269 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2271 "backend_libs.builtin_ops.c"
{
#line 2273 "backend_libs.builtin_ops.c"
  {
#line 2275 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2278 "backend_libs.builtin_ops.c"
    {
#line 2280 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2283 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2285 "backend_libs.builtin_ops.c"
  }
#line 2287 "backend_libs.builtin_ops.c"
}

#line 2290 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 2293 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2295 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2297 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2299 "backend_libs.builtin_ops.c"
{
#line 2301 "backend_libs.builtin_ops.c"
  {
#line 2303 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2306 "backend_libs.builtin_ops.c"
    {
#line 2308 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2311 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2313 "backend_libs.builtin_ops.c"
  }
#line 2315 "backend_libs.builtin_ops.c"
}

#line 2318 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 2321 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2323 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2325 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2327 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2329 "backend_libs.builtin_ops.c"
{
#line 2331 "backend_libs.builtin_ops.c"
  {
#line 2333 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2336 "backend_libs.builtin_ops.c"
    {
#line 2338 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2341 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2343 "backend_libs.builtin_ops.c"
  }
#line 2345 "backend_libs.builtin_ops.c"
}

#line 2348 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 2351 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2353 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2355 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2357 "backend_libs.builtin_ops.c"
{
#line 2359 "backend_libs.builtin_ops.c"
  {
#line 2361 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2364 "backend_libs.builtin_ops.c"
    {
#line 2366 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2369 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2371 "backend_libs.builtin_ops.c"
  }
#line 2373 "backend_libs.builtin_ops.c"
}

#line 2376 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 2379 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2381 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2383 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2385 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2387 "backend_libs.builtin_ops.c"
{
#line 2389 "backend_libs.builtin_ops.c"
  {
#line 2391 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2394 "backend_libs.builtin_ops.c"
    {
#line 2396 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2399 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2401 "backend_libs.builtin_ops.c"
  }
#line 2403 "backend_libs.builtin_ops.c"
}

#line 2406 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 2409 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2411 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2413 "backend_libs.builtin_ops.c"
{
#line 2415 "backend_libs.builtin_ops.c"
  {
#line 2417 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2420 "backend_libs.builtin_ops.c"
    {
#line 2422 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2425 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2427 "backend_libs.builtin_ops.c"
  }
#line 2429 "backend_libs.builtin_ops.c"
}

#line 2432 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 2435 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2437 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2439 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2441 "backend_libs.builtin_ops.c"
{
#line 2443 "backend_libs.builtin_ops.c"
  {
#line 2445 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2448 "backend_libs.builtin_ops.c"
    {
#line 2450 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____unary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2453 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2455 "backend_libs.builtin_ops.c"
  }
#line 2457 "backend_libs.builtin_ops.c"
}

#line 183 "builtin_ops.m"
static MR_bool MR_CALL 
backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_p_0(
#line 183 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__HeadVar__1_1,
#line 183 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__HeadVar__2_2,
#line 183 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__HeadVar__3_3,
#line 183 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__4_4,
#line 183 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__5_5)
#line 183 "builtin_ops.m"
{
#line 186 "builtin_ops.m"
  {
#line 186 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 186 "builtin_ops.m"
    MR_Word backend_libs__builtin_ops__V_431_431;
#line 186 "builtin_ops.m"
    MR_Box backend_libs__builtin_ops__V_432_432;

#line 202 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 202 "builtin_ops.m"
      {
#line 202 "builtin_ops.m"
        backend_libs__builtin_ops__V_432_432 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__4_4, (MR_Integer) 0));
#line 202 "builtin_ops.m"
        backend_libs__builtin_ops__V_431_431 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__4_4, (MR_Integer) 1)));
#line 186 "builtin_ops.m"
        if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "int") == 0))
#line 186 "builtin_ops.m"
          {
#line 186 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_443_443;
#line 186 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_444_444;

#line 234 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 234 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
              {
#line 234 "builtin_ops.m"
                backend_libs__builtin_ops__V_444_444 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 234 "builtin_ops.m"
                backend_libs__builtin_ops__V_443_443 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 186 "builtin_ops.m"
                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "*") == 0))
#line 234 "builtin_ops.m"
                  {
#line 234 "builtin_ops.m"
                    MR_Box backend_libs__builtin_ops__Z_155;
#line 234 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_158_158;
#line 234 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_159_159;
#line 234 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_160_160;
#line 234 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_161_161;
#line 234 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_162_162;

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
                            backend_libs__builtin_ops__Z_155 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 234 "builtin_ops.m"
                            backend_libs__builtin_ops__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 234 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
                              {
#line 235 "builtin_ops.m"
                                backend_libs__builtin_ops__V_160_160 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 235 "builtin_ops.m"
                                {
#line 235 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_161_161, 0) = backend_libs__builtin_ops__V_432_432;
#line 235 "builtin_ops.m"
                                }
#line 235 "builtin_ops.m"
                                {
#line 235 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_162_162, 0) = backend_libs__builtin_ops__V_444_444;
#line 235 "builtin_ops.m"
                                }
#line 235 "builtin_ops.m"
                                {
#line 235 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_159_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_159_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_159_159, 1) = ((MR_Box) (backend_libs__builtin_ops__V_160_160));
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_159_159, 2) = ((MR_Box) (backend_libs__builtin_ops__V_161_161));
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_159_159, 3) = ((MR_Box) (backend_libs__builtin_ops__V_162_162));
#line 235 "builtin_ops.m"
                                }
#line 235 "builtin_ops.m"
                                {
#line 235 "builtin_ops.m"
                                  MR_Word base;
#line 235 "builtin_ops.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_ops.m"
                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_155;
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_159_159));
#line 235 "builtin_ops.m"
                                }
#line 235 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 234 "builtin_ops.m"
                              }
#line 234 "builtin_ops.m"
                          }
#line 234 "builtin_ops.m"
                      }
#line 234 "builtin_ops.m"
                  }
#line 186 "builtin_ops.m"
                else
#line 186 "builtin_ops.m"
                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "+") == 0))
#line 186 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0))
#line 186 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "builtin_ops.m"
                        {
#line 256 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_267_267;

#line 257 "builtin_ops.m"
                          {
#line 257 "builtin_ops.m"
                            backend_libs__builtin_ops__V_267_267 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 257 "builtin_ops.m"
                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_267_267, 0) = backend_libs__builtin_ops__V_432_432;
#line 257 "builtin_ops.m"
                          }
#line 257 "builtin_ops.m"
                          {
#line 257 "builtin_ops.m"
                            MR_Word base;
#line 257 "builtin_ops.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "builtin_ops.m"
                            *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 257 "builtin_ops.m"
                            MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 257 "builtin_ops.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_267_267));
#line 257 "builtin_ops.m"
                          }
#line 256 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 256 "builtin_ops.m"
                        }
#line 186 "builtin_ops.m"
                      else
#line 218 "builtin_ops.m"
                        {
#line 218 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_75 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_79_79;
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_80_80;
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_81_81;
#line 218 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_82_82;

#line 218 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 218 "builtin_ops.m"
                            {
#line 219 "builtin_ops.m"
                              backend_libs__builtin_ops__V_80_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "builtin_ops.m"
                              {
#line 219 "builtin_ops.m"
                                backend_libs__builtin_ops__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_81_81, 0) = backend_libs__builtin_ops__V_432_432;
#line 219 "builtin_ops.m"
                              }
#line 219 "builtin_ops.m"
                              {
#line 219 "builtin_ops.m"
                                backend_libs__builtin_ops__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 219 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_82_82, 0) = backend_libs__builtin_ops__V_444_444;
#line 219 "builtin_ops.m"
                              }
#line 219 "builtin_ops.m"
                              {
#line 219 "builtin_ops.m"
                                backend_libs__builtin_ops__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 219 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 219 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_79_79, 1) = ((MR_Box) (backend_libs__builtin_ops__V_80_80));
#line 219 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_79_79, 2) = ((MR_Box) (backend_libs__builtin_ops__V_81_81));
#line 219 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_79_79, 3) = ((MR_Box) (backend_libs__builtin_ops__V_82_82));
#line 219 "builtin_ops.m"
                              }
#line 219 "builtin_ops.m"
                              {
#line 219 "builtin_ops.m"
                                MR_Word base;
#line 219 "builtin_ops.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 219 "builtin_ops.m"
                                *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 219 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_75;
#line 219 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_79_79));
#line 219 "builtin_ops.m"
                              }
#line 219 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 218 "builtin_ops.m"
                            }
#line 218 "builtin_ops.m"
                        }
#line 186 "builtin_ops.m"
                    else
#line 186 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 1))
#line 220 "builtin_ops.m"
                        {
#line 220 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_85;
#line 220 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_88_88;
#line 220 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_89_89;
#line 220 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_90_90;
#line 220 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_91_91;
#line 220 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_92_92;

#line 220 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 220 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 220 "builtin_ops.m"
                            {
#line 220 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_85 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 220 "builtin_ops.m"
                              backend_libs__builtin_ops__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 220 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 220 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 220 "builtin_ops.m"
                                {
#line 221 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_90_90 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 221 "builtin_ops.m"
                                  {
#line 221 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_91_91, 0) = backend_libs__builtin_ops__Z_85;
#line 221 "builtin_ops.m"
                                  }
#line 221 "builtin_ops.m"
                                  {
#line 221 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_92_92, 0) = backend_libs__builtin_ops__V_444_444;
#line 221 "builtin_ops.m"
                                  }
#line 221 "builtin_ops.m"
                                  {
#line 221 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 221 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 221 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_89_89, 1) = ((MR_Box) (backend_libs__builtin_ops__V_90_90));
#line 221 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_89_89, 2) = ((MR_Box) (backend_libs__builtin_ops__V_91_91));
#line 221 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_89_89, 3) = ((MR_Box) (backend_libs__builtin_ops__V_92_92));
#line 221 "builtin_ops.m"
                                  }
#line 221 "builtin_ops.m"
                                  {
#line 221 "builtin_ops.m"
                                    MR_Word base;
#line 221 "builtin_ops.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 221 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 221 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 221 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_89_89));
#line 221 "builtin_ops.m"
                                  }
#line 221 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 220 "builtin_ops.m"
                                }
#line 220 "builtin_ops.m"
                            }
#line 220 "builtin_ops.m"
                        }
#line 186 "builtin_ops.m"
                      else
#line 186 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 2))
#line 222 "builtin_ops.m"
                          {
#line 222 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_95;
#line 222 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_98_98;
#line 222 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_99_99;
#line 222 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_100_100;
#line 222 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_101_101;
#line 222 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_102_102;

#line 222 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 222 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
                              {
#line 222 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_95 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 222 "builtin_ops.m"
                                backend_libs__builtin_ops__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 222 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_98_98 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 222 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 222 "builtin_ops.m"
                                  {
#line 223 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_100_100 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 223 "builtin_ops.m"
                                    {
#line 223 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_101_101, 0) = backend_libs__builtin_ops__Z_95;
#line 223 "builtin_ops.m"
                                    }
#line 223 "builtin_ops.m"
                                    {
#line 223 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_102_102, 0) = backend_libs__builtin_ops__V_432_432;
#line 223 "builtin_ops.m"
                                    }
#line 223 "builtin_ops.m"
                                    {
#line 223 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 223 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 223 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_99_99, 1) = ((MR_Box) (backend_libs__builtin_ops__V_100_100));
#line 223 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_99_99, 2) = ((MR_Box) (backend_libs__builtin_ops__V_101_101));
#line 223 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_99_99, 3) = ((MR_Box) (backend_libs__builtin_ops__V_102_102));
#line 223 "builtin_ops.m"
                                    }
#line 223 "builtin_ops.m"
                                    {
#line 223 "builtin_ops.m"
                                      MR_Word base;
#line 223 "builtin_ops.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 223 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 223 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 223 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_99_99));
#line 223 "builtin_ops.m"
                                    }
#line 223 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 222 "builtin_ops.m"
                                  }
#line 222 "builtin_ops.m"
                              }
#line 222 "builtin_ops.m"
                          }
#line 186 "builtin_ops.m"
                        else
#line 186 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 186 "builtin_ops.m"
                  else
#line 186 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "-") == 0))
#line 186 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0))
#line 186 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "builtin_ops.m"
                          {
#line 258 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_272_272;
#line 258 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_276_276;

#line 259 "builtin_ops.m"
                            {
#line 259 "builtin_ops.m"
                              backend_libs__builtin_ops__V_276_276 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 259 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_276_276, 0) = backend_libs__builtin_ops__V_432_432;
#line 259 "builtin_ops.m"
                            }
#line 259 "builtin_ops.m"
                            {
#line 259 "builtin_ops.m"
                              backend_libs__builtin_ops__V_272_272 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 259 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_272_272, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 259 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_272_272, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 259 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_272_272, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_2[0])));
#line 259 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_272_272, 3) = ((MR_Box) (backend_libs__builtin_ops__V_276_276));
#line 259 "builtin_ops.m"
                            }
#line 259 "builtin_ops.m"
                            {
#line 259 "builtin_ops.m"
                              MR_Word base;
#line 259 "builtin_ops.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 259 "builtin_ops.m"
                              *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 259 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 259 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_272_272));
#line 259 "builtin_ops.m"
                            }
#line 258 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 258 "builtin_ops.m"
                          }
#line 186 "builtin_ops.m"
                        else
#line 226 "builtin_ops.m"
                          {
#line 226 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_115 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_119_119;
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_120_120;
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_121_121;
#line 226 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_122_122;

#line 226 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_118_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 226 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 226 "builtin_ops.m"
                              {
#line 227 "builtin_ops.m"
                                backend_libs__builtin_ops__V_120_120 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 227 "builtin_ops.m"
                                {
#line 227 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_121_121, 0) = backend_libs__builtin_ops__V_432_432;
#line 227 "builtin_ops.m"
                                }
#line 227 "builtin_ops.m"
                                {
#line 227 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_122_122, 0) = backend_libs__builtin_ops__V_444_444;
#line 227 "builtin_ops.m"
                                }
#line 227 "builtin_ops.m"
                                {
#line 227 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 227 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 227 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_119_119, 1) = ((MR_Box) (backend_libs__builtin_ops__V_120_120));
#line 227 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_119_119, 2) = ((MR_Box) (backend_libs__builtin_ops__V_121_121));
#line 227 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_119_119, 3) = ((MR_Box) (backend_libs__builtin_ops__V_122_122));
#line 227 "builtin_ops.m"
                                }
#line 227 "builtin_ops.m"
                                {
#line 227 "builtin_ops.m"
                                  MR_Word base;
#line 227 "builtin_ops.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "builtin_ops.m"
                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 227 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_115;
#line 227 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_119_119));
#line 227 "builtin_ops.m"
                                }
#line 227 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 226 "builtin_ops.m"
                              }
#line 226 "builtin_ops.m"
                          }
#line 186 "builtin_ops.m"
                      else
#line 186 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 1))
#line 228 "builtin_ops.m"
                          {
#line 228 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_125;
#line 228 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_128_128;
#line 228 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_129_129;
#line 228 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_130_130;
#line 228 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_131_131;
#line 228 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_132_132;

#line 228 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 228 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 228 "builtin_ops.m"
                              {
#line 228 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_125 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 228 "builtin_ops.m"
                                backend_libs__builtin_ops__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 228 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_128_128 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 228 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 228 "builtin_ops.m"
                                  {
#line 229 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_130_130 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 229 "builtin_ops.m"
                                    {
#line 229 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_131_131 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 229 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_131_131, 0) = backend_libs__builtin_ops__V_444_444;
#line 229 "builtin_ops.m"
                                    }
#line 229 "builtin_ops.m"
                                    {
#line 229 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_132_132 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 229 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_132_132, 0) = backend_libs__builtin_ops__Z_125;
#line 229 "builtin_ops.m"
                                    }
#line 229 "builtin_ops.m"
                                    {
#line 229 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_129_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 229 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_129_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 229 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_129_129, 1) = ((MR_Box) (backend_libs__builtin_ops__V_130_130));
#line 229 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_129_129, 2) = ((MR_Box) (backend_libs__builtin_ops__V_131_131));
#line 229 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_129_129, 3) = ((MR_Box) (backend_libs__builtin_ops__V_132_132));
#line 229 "builtin_ops.m"
                                    }
#line 229 "builtin_ops.m"
                                    {
#line 229 "builtin_ops.m"
                                      MR_Word base;
#line 229 "builtin_ops.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 229 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 229 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 229 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_129_129));
#line 229 "builtin_ops.m"
                                    }
#line 229 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 228 "builtin_ops.m"
                                  }
#line 228 "builtin_ops.m"
                              }
#line 228 "builtin_ops.m"
                          }
#line 186 "builtin_ops.m"
                        else
#line 186 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 2))
#line 230 "builtin_ops.m"
                            {
#line 230 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Z_135;
#line 230 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_138_138;
#line 230 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_139_139;
#line 230 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_140_140;
#line 230 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_141_141;
#line 230 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_142_142;

#line 230 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 230 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 230 "builtin_ops.m"
                                {
#line 230 "builtin_ops.m"
                                  backend_libs__builtin_ops__Z_135 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 230 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 230 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 230 "builtin_ops.m"
                                    {
#line 231 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 231 "builtin_ops.m"
                                      {
#line 231 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 231 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_141_141, 0) = backend_libs__builtin_ops__V_432_432;
#line 231 "builtin_ops.m"
                                      }
#line 231 "builtin_ops.m"
                                      {
#line 231 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 231 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_142_142, 0) = backend_libs__builtin_ops__Z_135;
#line 231 "builtin_ops.m"
                                      }
#line 231 "builtin_ops.m"
                                      {
#line 231 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 231 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 231 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 1) = ((MR_Box) (backend_libs__builtin_ops__V_140_140));
#line 231 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 2) = ((MR_Box) (backend_libs__builtin_ops__V_141_141));
#line 231 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 3) = ((MR_Box) (backend_libs__builtin_ops__V_142_142));
#line 231 "builtin_ops.m"
                                      }
#line 231 "builtin_ops.m"
                                      {
#line 231 "builtin_ops.m"
                                        MR_Word base;
#line 231 "builtin_ops.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 231 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 231 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 231 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_139_139));
#line 231 "builtin_ops.m"
                                      }
#line 231 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 230 "builtin_ops.m"
                                    }
#line 230 "builtin_ops.m"
                                }
#line 230 "builtin_ops.m"
                            }
#line 186 "builtin_ops.m"
                          else
#line 186 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 186 "builtin_ops.m"
                    else
#line 186 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "<") == 0))
#line 265 "builtin_ops.m"
                        {
#line 265 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_296_296;
#line 265 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_297_297;
#line 265 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_298_298;
#line 265 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_299_299;

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
                                  backend_libs__builtin_ops__V_297_297 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22));
#line 266 "builtin_ops.m"
                                  {
#line 266 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_298_298 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_298_298, 0) = backend_libs__builtin_ops__V_432_432;
#line 266 "builtin_ops.m"
                                  }
#line 266 "builtin_ops.m"
                                  {
#line 266 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_299_299 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_299_299, 0) = backend_libs__builtin_ops__V_444_444;
#line 266 "builtin_ops.m"
                                  }
#line 266 "builtin_ops.m"
                                  {
#line 266 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_296_296 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 266 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_296_296, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 266 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_296_296, 1) = ((MR_Box) (backend_libs__builtin_ops__V_297_297));
#line 266 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_296_296, 2) = ((MR_Box) (backend_libs__builtin_ops__V_298_298));
#line 266 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_296_296, 3) = ((MR_Box) (backend_libs__builtin_ops__V_299_299));
#line 266 "builtin_ops.m"
                                  }
#line 266 "builtin_ops.m"
                                  {
#line 266 "builtin_ops.m"
                                    MR_Word base;
#line 266 "builtin_ops.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 266 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_296_296));
#line 266 "builtin_ops.m"
                                  }
#line 266 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 265 "builtin_ops.m"
                                }
#line 265 "builtin_ops.m"
                            }
#line 265 "builtin_ops.m"
                        }
#line 186 "builtin_ops.m"
                      else
#line 186 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) ">") == 0))
#line 263 "builtin_ops.m"
                          {
#line 263 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_288_288;
#line 263 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_289_289;
#line 263 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_290_290;
#line 263 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_291_291;

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
                                    backend_libs__builtin_ops__V_289_289 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
#line 264 "builtin_ops.m"
                                    {
#line 264 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_290_290 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 264 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_290_290, 0) = backend_libs__builtin_ops__V_432_432;
#line 264 "builtin_ops.m"
                                    }
#line 264 "builtin_ops.m"
                                    {
#line 264 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_291_291 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 264 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_291_291, 0) = backend_libs__builtin_ops__V_444_444;
#line 264 "builtin_ops.m"
                                    }
#line 264 "builtin_ops.m"
                                    {
#line 264 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_288_288 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 264 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_288_288, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 264 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_288_288, 1) = ((MR_Box) (backend_libs__builtin_ops__V_289_289));
#line 264 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_288_288, 2) = ((MR_Box) (backend_libs__builtin_ops__V_290_290));
#line 264 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_288_288, 3) = ((MR_Box) (backend_libs__builtin_ops__V_291_291));
#line 264 "builtin_ops.m"
                                    }
#line 264 "builtin_ops.m"
                                    {
#line 264 "builtin_ops.m"
                                      MR_Word base;
#line 264 "builtin_ops.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 264 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 264 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_288_288));
#line 264 "builtin_ops.m"
                                    }
#line 264 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 263 "builtin_ops.m"
                                  }
#line 263 "builtin_ops.m"
                              }
#line 263 "builtin_ops.m"
                          }
#line 186 "builtin_ops.m"
                        else
#line 186 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "\\") == 0))
#line 260 "builtin_ops.m"
                            {
#line 260 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_281_281;
#line 260 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_282_282;
#line 260 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_283_283;

#line 260 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 260 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 260 "builtin_ops.m"
                                {
#line 260 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 260 "builtin_ops.m"
                                    {
#line 261 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_282_282 = (MR_Integer) 6;
#line 261 "builtin_ops.m"
                                      {
#line 261 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_283_283 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 261 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_283_283, 0) = backend_libs__builtin_ops__V_432_432;
#line 261 "builtin_ops.m"
                                      }
#line 261 "builtin_ops.m"
                                      {
#line 261 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_281_281 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 261 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_281_281, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 261 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_281_281, 1) = ((MR_Box) (backend_libs__builtin_ops__V_282_282));
#line 261 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_281_281, 2) = ((MR_Box) (backend_libs__builtin_ops__V_283_283));
#line 261 "builtin_ops.m"
                                      }
#line 261 "builtin_ops.m"
                                      {
#line 261 "builtin_ops.m"
                                        MR_Word base;
#line 261 "builtin_ops.m"
                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 261 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 261 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 261 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_281_281));
#line 261 "builtin_ops.m"
                                      }
#line 261 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 260 "builtin_ops.m"
                                    }
#line 260 "builtin_ops.m"
                                }
#line 260 "builtin_ops.m"
                            }
#line 186 "builtin_ops.m"
                          else
#line 186 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "/\\") == 0))
#line 246 "builtin_ops.m"
                              {
#line 246 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_215;
#line 246 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_218_218;
#line 246 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_219_219;
#line 246 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_220_220;
#line 246 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_221_221;
#line 246 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_222_222;

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
                                        backend_libs__builtin_ops__Z_215 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 246 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 246 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_218_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 246 "builtin_ops.m"
                                          {
#line 247 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_220_220 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 247 "builtin_ops.m"
                                            {
#line 247 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_221_221 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 247 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_221_221, 0) = backend_libs__builtin_ops__V_432_432;
#line 247 "builtin_ops.m"
                                            }
#line 247 "builtin_ops.m"
                                            {
#line 247 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_222_222 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 247 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_222_222, 0) = backend_libs__builtin_ops__V_444_444;
#line 247 "builtin_ops.m"
                                            }
#line 247 "builtin_ops.m"
                                            {
#line 247 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_219_219 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 247 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_219_219, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 247 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_219_219, 1) = ((MR_Box) (backend_libs__builtin_ops__V_220_220));
#line 247 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_219_219, 2) = ((MR_Box) (backend_libs__builtin_ops__V_221_221));
#line 247 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_219_219, 3) = ((MR_Box) (backend_libs__builtin_ops__V_222_222));
#line 247 "builtin_ops.m"
                                            }
#line 247 "builtin_ops.m"
                                            {
#line 247 "builtin_ops.m"
                                              MR_Word base;
#line 247 "builtin_ops.m"
                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 247 "builtin_ops.m"
                                              *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 247 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_215;
#line 247 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_219_219));
#line 247 "builtin_ops.m"
                                            }
#line 247 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 246 "builtin_ops.m"
                                          }
#line 246 "builtin_ops.m"
                                      }
#line 246 "builtin_ops.m"
                                  }
#line 246 "builtin_ops.m"
                              }
#line 186 "builtin_ops.m"
                            else
#line 186 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "=<") == 0))
#line 269 "builtin_ops.m"
                                {
#line 269 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_312_312;
#line 269 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_313_313;
#line 269 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_314_314;
#line 269 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_315_315;

#line 269 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 269 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 269 "builtin_ops.m"
                                    {
#line 269 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_443_443 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 269 "builtin_ops.m"
                                        {
#line 270 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_313_313 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
#line 270 "builtin_ops.m"
                                          {
#line 270 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_314_314 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 270 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_314_314, 0) = backend_libs__builtin_ops__V_432_432;
#line 270 "builtin_ops.m"
                                          }
#line 270 "builtin_ops.m"
                                          {
#line 270 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_315_315 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 270 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_315_315, 0) = backend_libs__builtin_ops__V_444_444;
#line 270 "builtin_ops.m"
                                          }
#line 270 "builtin_ops.m"
                                          {
#line 270 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_312_312 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 270 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 270 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 1) = ((MR_Box) (backend_libs__builtin_ops__V_313_313));
#line 270 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 2) = ((MR_Box) (backend_libs__builtin_ops__V_314_314));
#line 270 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 3) = ((MR_Box) (backend_libs__builtin_ops__V_315_315));
#line 270 "builtin_ops.m"
                                          }
#line 270 "builtin_ops.m"
                                          {
#line 270 "builtin_ops.m"
                                            MR_Word base;
#line 270 "builtin_ops.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 270 "builtin_ops.m"
                                            *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 270 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_312_312));
#line 270 "builtin_ops.m"
                                          }
#line 270 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 269 "builtin_ops.m"
                                        }
#line 269 "builtin_ops.m"
                                    }
#line 269 "builtin_ops.m"
                                }
#line 186 "builtin_ops.m"
                              else
#line 186 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) ">=") == 0))
#line 267 "builtin_ops.m"
                                  {
#line 267 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_304_304;
#line 267 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_305_305;
#line 267 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_306_306;
#line 267 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_307_307;

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
                                            backend_libs__builtin_ops__V_305_305 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
#line 268 "builtin_ops.m"
                                            {
#line 268 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_306_306 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_306_306, 0) = backend_libs__builtin_ops__V_432_432;
#line 268 "builtin_ops.m"
                                            }
#line 268 "builtin_ops.m"
                                            {
#line 268 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_307_307 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_307_307, 0) = backend_libs__builtin_ops__V_444_444;
#line 268 "builtin_ops.m"
                                            }
#line 268 "builtin_ops.m"
                                            {
#line 268 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_304_304 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 268 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_304_304, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 268 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_304_304, 1) = ((MR_Box) (backend_libs__builtin_ops__V_305_305));
#line 268 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_304_304, 2) = ((MR_Box) (backend_libs__builtin_ops__V_306_306));
#line 268 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_304_304, 3) = ((MR_Box) (backend_libs__builtin_ops__V_307_307));
#line 268 "builtin_ops.m"
                                            }
#line 268 "builtin_ops.m"
                                            {
#line 268 "builtin_ops.m"
                                              MR_Word base;
#line 268 "builtin_ops.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 268 "builtin_ops.m"
                                              *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 268 "builtin_ops.m"
                                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_304_304));
#line 268 "builtin_ops.m"
                                            }
#line 268 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 267 "builtin_ops.m"
                                          }
#line 267 "builtin_ops.m"
                                      }
#line 267 "builtin_ops.m"
                                  }
#line 186 "builtin_ops.m"
                                else
#line 186 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "\\/") == 0))
#line 248 "builtin_ops.m"
                                    {
#line 248 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Z_225;
#line 248 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_228_228;
#line 248 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_229_229;
#line 248 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_230_230;
#line 248 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_231_231;
#line 248 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_232_232;

#line 248 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 248 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 248 "builtin_ops.m"
                                        {
#line 248 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 248 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 248 "builtin_ops.m"
                                            {
#line 248 "builtin_ops.m"
                                              backend_libs__builtin_ops__Z_225 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 248 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 248 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_228_228 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 248 "builtin_ops.m"
                                                {
#line 249 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_230_230 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 249 "builtin_ops.m"
                                                  {
#line 249 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_231_231 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 249 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_231_231, 0) = backend_libs__builtin_ops__V_432_432;
#line 249 "builtin_ops.m"
                                                  }
#line 249 "builtin_ops.m"
                                                  {
#line 249 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_232_232 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 249 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_232_232, 0) = backend_libs__builtin_ops__V_444_444;
#line 249 "builtin_ops.m"
                                                  }
#line 249 "builtin_ops.m"
                                                  {
#line 249 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_229_229 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 249 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_229_229, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 249 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_229_229, 1) = ((MR_Box) (backend_libs__builtin_ops__V_230_230));
#line 249 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_229_229, 2) = ((MR_Box) (backend_libs__builtin_ops__V_231_231));
#line 249 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_229_229, 3) = ((MR_Box) (backend_libs__builtin_ops__V_232_232));
#line 249 "builtin_ops.m"
                                                  }
#line 249 "builtin_ops.m"
                                                  {
#line 249 "builtin_ops.m"
                                                    MR_Word base;
#line 249 "builtin_ops.m"
                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "builtin_ops.m"
                                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 249 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_225;
#line 249 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_229_229));
#line 249 "builtin_ops.m"
                                                  }
#line 249 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 248 "builtin_ops.m"
                                                }
#line 248 "builtin_ops.m"
                                            }
#line 248 "builtin_ops.m"
                                        }
#line 248 "builtin_ops.m"
                                    }
#line 186 "builtin_ops.m"
                                  else
#line 186 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "xor") == 0))
#line 186 "builtin_ops.m"
                                      {
#line 186 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_429_429;
#line 186 "builtin_ops.m"
                                        MR_Box backend_libs__builtin_ops__V_430_430;

#line 250 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 250 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 250 "builtin_ops.m"
                                          {
#line 250 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_430_430 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 250 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_429_429 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 250 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_429_429 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 186 "builtin_ops.m"
                                              {
#line 186 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0))
#line 250 "builtin_ops.m"
                                                  {
#line 250 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_239_239;
#line 250 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_241_241;
#line 250 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_242_242;

#line 251 "builtin_ops.m"
                                                    {
#line 251 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_241_241 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 251 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_241_241, 0) = backend_libs__builtin_ops__V_432_432;
#line 251 "builtin_ops.m"
                                                    }
#line 251 "builtin_ops.m"
                                                    {
#line 251 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_242_242 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 251 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_242_242, 0) = backend_libs__builtin_ops__V_444_444;
#line 251 "builtin_ops.m"
                                                    }
#line 251 "builtin_ops.m"
                                                    {
#line 251 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_239_239 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 251 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_239_239, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 251 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_239_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 251 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_239_239, 2) = ((MR_Box) (backend_libs__builtin_ops__V_241_241));
#line 251 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_239_239, 3) = ((MR_Box) (backend_libs__builtin_ops__V_242_242));
#line 251 "builtin_ops.m"
                                                    }
#line 251 "builtin_ops.m"
                                                    {
#line 251 "builtin_ops.m"
                                                      MR_Word base;
#line 251 "builtin_ops.m"
                                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "builtin_ops.m"
                                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 251 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_430_430;
#line 251 "builtin_ops.m"
                                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_239_239));
#line 251 "builtin_ops.m"
                                                    }
#line 250 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 250 "builtin_ops.m"
                                                  }
#line 186 "builtin_ops.m"
                                                else
#line 186 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 1))
#line 252 "builtin_ops.m"
                                                    {
#line 252 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_249_249;
#line 252 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_251_251;
#line 252 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_252_252;

#line 253 "builtin_ops.m"
                                                      {
#line 253 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_251_251 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 253 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_251_251, 0) = backend_libs__builtin_ops__V_432_432;
#line 253 "builtin_ops.m"
                                                      }
#line 253 "builtin_ops.m"
                                                      {
#line 253 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_252_252 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 253 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_252_252, 0) = backend_libs__builtin_ops__V_430_430;
#line 253 "builtin_ops.m"
                                                      }
#line 253 "builtin_ops.m"
                                                      {
#line 253 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_249_249 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 253 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_249_249, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 253 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_249_249, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 253 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_249_249, 2) = ((MR_Box) (backend_libs__builtin_ops__V_251_251));
#line 253 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_249_249, 3) = ((MR_Box) (backend_libs__builtin_ops__V_252_252));
#line 253 "builtin_ops.m"
                                                      }
#line 253 "builtin_ops.m"
                                                      {
#line 253 "builtin_ops.m"
                                                        MR_Word base;
#line 253 "builtin_ops.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "builtin_ops.m"
                                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 253 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_444_444;
#line 253 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_249_249));
#line 253 "builtin_ops.m"
                                                      }
#line 252 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 252 "builtin_ops.m"
                                                    }
#line 186 "builtin_ops.m"
                                                  else
#line 186 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 2))
#line 254 "builtin_ops.m"
                                                      {
#line 254 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_259_259;
#line 254 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_261_261;
#line 254 "builtin_ops.m"
                                                        MR_Word backend_libs__builtin_ops__V_262_262;

#line 255 "builtin_ops.m"
                                                        {
#line 255 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_261_261 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 255 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_261_261, 0) = backend_libs__builtin_ops__V_444_444;
#line 255 "builtin_ops.m"
                                                        }
#line 255 "builtin_ops.m"
                                                        {
#line 255 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_262_262 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 255 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_262_262, 0) = backend_libs__builtin_ops__V_430_430;
#line 255 "builtin_ops.m"
                                                        }
#line 255 "builtin_ops.m"
                                                        {
#line 255 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_259_259 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 255 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_259_259, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 255 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_259_259, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 255 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_259_259, 2) = ((MR_Box) (backend_libs__builtin_ops__V_261_261));
#line 255 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_259_259, 3) = ((MR_Box) (backend_libs__builtin_ops__V_262_262));
#line 255 "builtin_ops.m"
                                                        }
#line 255 "builtin_ops.m"
                                                        {
#line 255 "builtin_ops.m"
                                                          MR_Word base;
#line 255 "builtin_ops.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "builtin_ops.m"
                                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 255 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 255 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_259_259));
#line 255 "builtin_ops.m"
                                                        }
#line 254 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 254 "builtin_ops.m"
                                                      }
#line 186 "builtin_ops.m"
                                                    else
#line 186 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 186 "builtin_ops.m"
                                              }
#line 250 "builtin_ops.m"
                                          }
#line 186 "builtin_ops.m"
                                      }
#line 186 "builtin_ops.m"
                                    else
#line 186 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "plus") == 0))
#line 224 "builtin_ops.m"
                                        {
#line 224 "builtin_ops.m"
                                          MR_Box backend_libs__builtin_ops__Z_105;
#line 224 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_108_108;
#line 224 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_109_109;
#line 224 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_110_110;
#line 224 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_111_111;
#line 224 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_112_112;

#line 224 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 224 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 224 "builtin_ops.m"
                                            {
#line 224 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_443_443)) == (MR_mktag((MR_Integer) 1)));
#line 224 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 224 "builtin_ops.m"
                                                {
#line 224 "builtin_ops.m"
                                                  backend_libs__builtin_ops__Z_105 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 224 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 224 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "builtin_ops.m"
                                                  if (backend_libs__builtin_ops__succeeded)
#line 224 "builtin_ops.m"
                                                    {
#line 225 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_110_110 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 225 "builtin_ops.m"
                                                      {
#line 225 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 225 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_111_111, 0) = backend_libs__builtin_ops__V_432_432;
#line 225 "builtin_ops.m"
                                                      }
#line 225 "builtin_ops.m"
                                                      {
#line 225 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 225 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_112_112, 0) = backend_libs__builtin_ops__V_444_444;
#line 225 "builtin_ops.m"
                                                      }
#line 225 "builtin_ops.m"
                                                      {
#line 225 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 225 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 225 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 1) = ((MR_Box) (backend_libs__builtin_ops__V_110_110));
#line 225 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 2) = ((MR_Box) (backend_libs__builtin_ops__V_111_111));
#line 225 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 3) = ((MR_Box) (backend_libs__builtin_ops__V_112_112));
#line 225 "builtin_ops.m"
                                                      }
#line 225 "builtin_ops.m"
                                                      {
#line 225 "builtin_ops.m"
                                                        MR_Word base;
#line 225 "builtin_ops.m"
                                                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 225 "builtin_ops.m"
                                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 225 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_105;
#line 225 "builtin_ops.m"
                                                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_109_109));
#line 225 "builtin_ops.m"
                                                      }
#line 225 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 224 "builtin_ops.m"
                                                    }
#line 224 "builtin_ops.m"
                                                }
#line 224 "builtin_ops.m"
                                            }
#line 224 "builtin_ops.m"
                                        }
#line 186 "builtin_ops.m"
                                      else
#line 186 "builtin_ops.m"
                                        if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "minus") == 0))
#line 232 "builtin_ops.m"
                                          {
#line 232 "builtin_ops.m"
                                            MR_Box backend_libs__builtin_ops__Z_145;
#line 232 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_148_148;
#line 232 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_149_149;
#line 232 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_150_150;
#line 232 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_151_151;
#line 232 "builtin_ops.m"
                                            MR_Word backend_libs__builtin_ops__V_152_152;

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
                                                    backend_libs__builtin_ops__Z_145 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 232 "builtin_ops.m"
                                                    backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 232 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 232 "builtin_ops.m"
                                                    if (backend_libs__builtin_ops__succeeded)
#line 232 "builtin_ops.m"
                                                      {
#line 233 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_150_150 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 233 "builtin_ops.m"
                                                        {
#line 233 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 233 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_151_151, 0) = backend_libs__builtin_ops__V_432_432;
#line 233 "builtin_ops.m"
                                                        }
#line 233 "builtin_ops.m"
                                                        {
#line 233 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 233 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_152_152, 0) = backend_libs__builtin_ops__V_444_444;
#line 233 "builtin_ops.m"
                                                        }
#line 233 "builtin_ops.m"
                                                        {
#line 233 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 233 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 233 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 1) = ((MR_Box) (backend_libs__builtin_ops__V_150_150));
#line 233 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 2) = ((MR_Box) (backend_libs__builtin_ops__V_151_151));
#line 233 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 3) = ((MR_Box) (backend_libs__builtin_ops__V_152_152));
#line 233 "builtin_ops.m"
                                                        }
#line 233 "builtin_ops.m"
                                                        {
#line 233 "builtin_ops.m"
                                                          MR_Word base;
#line 233 "builtin_ops.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 233 "builtin_ops.m"
                                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 233 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_145;
#line 233 "builtin_ops.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_149_149));
#line 233 "builtin_ops.m"
                                                        }
#line 233 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 232 "builtin_ops.m"
                                                      }
#line 232 "builtin_ops.m"
                                                  }
#line 232 "builtin_ops.m"
                                              }
#line 232 "builtin_ops.m"
                                          }
#line 186 "builtin_ops.m"
                                        else
#line 186 "builtin_ops.m"
                                          if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "times") == 0))
#line 236 "builtin_ops.m"
                                            {
#line 236 "builtin_ops.m"
                                              MR_Box backend_libs__builtin_ops__Z_165;
#line 236 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_168_168;
#line 236 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_169_169;
#line 236 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_170_170;
#line 236 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_171_171;
#line 236 "builtin_ops.m"
                                              MR_Word backend_libs__builtin_ops__V_172_172;

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
                                                      backend_libs__builtin_ops__Z_165 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 236 "builtin_ops.m"
                                                      backend_libs__builtin_ops__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 236 "builtin_ops.m"
                                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_168_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "builtin_ops.m"
                                                      if (backend_libs__builtin_ops__succeeded)
#line 236 "builtin_ops.m"
                                                        {
#line 237 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_170_170 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 237 "builtin_ops.m"
                                                          {
#line 237 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_171_171 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 237 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_171_171, 0) = backend_libs__builtin_ops__V_432_432;
#line 237 "builtin_ops.m"
                                                          }
#line 237 "builtin_ops.m"
                                                          {
#line 237 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 237 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_172_172, 0) = backend_libs__builtin_ops__V_444_444;
#line 237 "builtin_ops.m"
                                                          }
#line 237 "builtin_ops.m"
                                                          {
#line 237 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_169_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 237 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_169_169, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_169_169, 1) = ((MR_Box) (backend_libs__builtin_ops__V_170_170));
#line 237 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_169_169, 2) = ((MR_Box) (backend_libs__builtin_ops__V_171_171));
#line 237 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_169_169, 3) = ((MR_Box) (backend_libs__builtin_ops__V_172_172));
#line 237 "builtin_ops.m"
                                                          }
#line 237 "builtin_ops.m"
                                                          {
#line 237 "builtin_ops.m"
                                                            MR_Word base;
#line 237 "builtin_ops.m"
                                                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 237 "builtin_ops.m"
                                                            *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 237 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_165;
#line 237 "builtin_ops.m"
                                                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_169_169));
#line 237 "builtin_ops.m"
                                                          }
#line 237 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 236 "builtin_ops.m"
                                                        }
#line 236 "builtin_ops.m"
                                                    }
#line 236 "builtin_ops.m"
                                                }
#line 236 "builtin_ops.m"
                                            }
#line 186 "builtin_ops.m"
                                          else
#line 186 "builtin_ops.m"
                                            if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_rem") == 0))
#line 240 "builtin_ops.m"
                                              {
#line 240 "builtin_ops.m"
                                                MR_Box backend_libs__builtin_ops__Z_185;
#line 240 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_188_188;
#line 240 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_189_189;
#line 240 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_190_190;
#line 240 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_191_191;
#line 240 "builtin_ops.m"
                                                MR_Word backend_libs__builtin_ops__V_192_192;

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
                                                        backend_libs__builtin_ops__Z_185 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 240 "builtin_ops.m"
                                                        backend_libs__builtin_ops__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 240 "builtin_ops.m"
                                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "builtin_ops.m"
                                                        if (backend_libs__builtin_ops__succeeded)
#line 240 "builtin_ops.m"
                                                          {
#line 241 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_190_190 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 241 "builtin_ops.m"
                                                            {
#line 241 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_191_191, 0) = backend_libs__builtin_ops__V_432_432;
#line 241 "builtin_ops.m"
                                                            }
#line 241 "builtin_ops.m"
                                                            {
#line 241 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_192_192 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 241 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_192_192, 0) = backend_libs__builtin_ops__V_444_444;
#line 241 "builtin_ops.m"
                                                            }
#line 241 "builtin_ops.m"
                                                            {
#line 241 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_189_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 241 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_189_189, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 241 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_189_189, 1) = ((MR_Box) (backend_libs__builtin_ops__V_190_190));
#line 241 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_189_189, 2) = ((MR_Box) (backend_libs__builtin_ops__V_191_191));
#line 241 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_189_189, 3) = ((MR_Box) (backend_libs__builtin_ops__V_192_192));
#line 241 "builtin_ops.m"
                                                            }
#line 241 "builtin_ops.m"
                                                            {
#line 241 "builtin_ops.m"
                                                              MR_Word base;
#line 241 "builtin_ops.m"
                                                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "builtin_ops.m"
                                                              *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 241 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_185;
#line 241 "builtin_ops.m"
                                                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_189_189));
#line 241 "builtin_ops.m"
                                                            }
#line 241 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 240 "builtin_ops.m"
                                                          }
#line 240 "builtin_ops.m"
                                                      }
#line 240 "builtin_ops.m"
                                                  }
#line 240 "builtin_ops.m"
                                              }
#line 186 "builtin_ops.m"
                                            else
#line 186 "builtin_ops.m"
                                              if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_quotient") == 0))
#line 238 "builtin_ops.m"
                                                {
#line 238 "builtin_ops.m"
                                                  MR_Box backend_libs__builtin_ops__Z_175;
#line 238 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_178_178;
#line 238 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_179_179;
#line 238 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_180_180;
#line 238 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_181_181;
#line 238 "builtin_ops.m"
                                                  MR_Word backend_libs__builtin_ops__V_182_182;

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
                                                          backend_libs__builtin_ops__Z_175 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 238 "builtin_ops.m"
                                                          backend_libs__builtin_ops__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 238 "builtin_ops.m"
                                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "builtin_ops.m"
                                                          if (backend_libs__builtin_ops__succeeded)
#line 238 "builtin_ops.m"
                                                            {
#line 239 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_180_180 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 239 "builtin_ops.m"
                                                              {
#line 239 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 239 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_181_181, 0) = backend_libs__builtin_ops__V_432_432;
#line 239 "builtin_ops.m"
                                                              }
#line 239 "builtin_ops.m"
                                                              {
#line 239 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_182_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 239 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_182_182, 0) = backend_libs__builtin_ops__V_444_444;
#line 239 "builtin_ops.m"
                                                              }
#line 239 "builtin_ops.m"
                                                              {
#line 239 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 239 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 239 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 1) = ((MR_Box) (backend_libs__builtin_ops__V_180_180));
#line 239 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 2) = ((MR_Box) (backend_libs__builtin_ops__V_181_181));
#line 239 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 3) = ((MR_Box) (backend_libs__builtin_ops__V_182_182));
#line 239 "builtin_ops.m"
                                                              }
#line 239 "builtin_ops.m"
                                                              {
#line 239 "builtin_ops.m"
                                                                MR_Word base;
#line 239 "builtin_ops.m"
                                                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 239 "builtin_ops.m"
                                                                *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 239 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_175;
#line 239 "builtin_ops.m"
                                                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_179_179));
#line 239 "builtin_ops.m"
                                                              }
#line 239 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 238 "builtin_ops.m"
                                                            }
#line 238 "builtin_ops.m"
                                                        }
#line 238 "builtin_ops.m"
                                                    }
#line 238 "builtin_ops.m"
                                                }
#line 186 "builtin_ops.m"
                                              else
#line 186 "builtin_ops.m"
                                                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_left_shift") == 0))
#line 242 "builtin_ops.m"
                                                  {
#line 242 "builtin_ops.m"
                                                    MR_Box backend_libs__builtin_ops__Z_195;
#line 242 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_198_198;
#line 242 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_199_199;
#line 242 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_200_200;
#line 242 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_201_201;
#line 242 "builtin_ops.m"
                                                    MR_Word backend_libs__builtin_ops__V_202_202;

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
                                                            backend_libs__builtin_ops__Z_195 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 242 "builtin_ops.m"
                                                            backend_libs__builtin_ops__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 242 "builtin_ops.m"
                                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_198_198 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 242 "builtin_ops.m"
                                                            if (backend_libs__builtin_ops__succeeded)
#line 242 "builtin_ops.m"
                                                              {
#line 243 "builtin_ops.m"
                                                                backend_libs__builtin_ops__V_200_200 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 243 "builtin_ops.m"
                                                                {
#line 243 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_201_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 243 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_201_201, 0) = backend_libs__builtin_ops__V_432_432;
#line 243 "builtin_ops.m"
                                                                }
#line 243 "builtin_ops.m"
                                                                {
#line 243 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_202_202 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 243 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_202_202, 0) = backend_libs__builtin_ops__V_444_444;
#line 243 "builtin_ops.m"
                                                                }
#line 243 "builtin_ops.m"
                                                                {
#line 243 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_199_199 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 243 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_199_199, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 243 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_199_199, 1) = ((MR_Box) (backend_libs__builtin_ops__V_200_200));
#line 243 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_199_199, 2) = ((MR_Box) (backend_libs__builtin_ops__V_201_201));
#line 243 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_199_199, 3) = ((MR_Box) (backend_libs__builtin_ops__V_202_202));
#line 243 "builtin_ops.m"
                                                                }
#line 243 "builtin_ops.m"
                                                                {
#line 243 "builtin_ops.m"
                                                                  MR_Word base;
#line 243 "builtin_ops.m"
                                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "builtin_ops.m"
                                                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 243 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_195;
#line 243 "builtin_ops.m"
                                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_199_199));
#line 243 "builtin_ops.m"
                                                                }
#line 243 "builtin_ops.m"
                                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 242 "builtin_ops.m"
                                                              }
#line 242 "builtin_ops.m"
                                                          }
#line 242 "builtin_ops.m"
                                                      }
#line 242 "builtin_ops.m"
                                                  }
#line 186 "builtin_ops.m"
                                                else
#line 186 "builtin_ops.m"
                                                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_right_shift") == 0))
#line 244 "builtin_ops.m"
                                                    {
#line 244 "builtin_ops.m"
                                                      MR_Box backend_libs__builtin_ops__Z_205;
#line 244 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_208_208;
#line 244 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_209_209;
#line 244 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_210_210;
#line 244 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_211_211;
#line 244 "builtin_ops.m"
                                                      MR_Word backend_libs__builtin_ops__V_212_212;

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
                                                              backend_libs__builtin_ops__Z_205 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 0));
#line 244 "builtin_ops.m"
                                                              backend_libs__builtin_ops__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_443_443, (MR_Integer) 1)));
#line 244 "builtin_ops.m"
                                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_208_208 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "builtin_ops.m"
                                                              if (backend_libs__builtin_ops__succeeded)
#line 244 "builtin_ops.m"
                                                                {
#line 245 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__V_210_210 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 245 "builtin_ops.m"
                                                                  {
#line 245 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_211_211 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 245 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_211_211, 0) = backend_libs__builtin_ops__V_432_432;
#line 245 "builtin_ops.m"
                                                                  }
#line 245 "builtin_ops.m"
                                                                  {
#line 245 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 245 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_212_212, 0) = backend_libs__builtin_ops__V_444_444;
#line 245 "builtin_ops.m"
                                                                  }
#line 245 "builtin_ops.m"
                                                                  {
#line 245 "builtin_ops.m"
                                                                    backend_libs__builtin_ops__V_209_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 245 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_209_209, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 245 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_209_209, 1) = ((MR_Box) (backend_libs__builtin_ops__V_210_210));
#line 245 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_209_209, 2) = ((MR_Box) (backend_libs__builtin_ops__V_211_211));
#line 245 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_209_209, 3) = ((MR_Box) (backend_libs__builtin_ops__V_212_212));
#line 245 "builtin_ops.m"
                                                                  }
#line 245 "builtin_ops.m"
                                                                  {
#line 245 "builtin_ops.m"
                                                                    MR_Word base;
#line 245 "builtin_ops.m"
                                                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "builtin_ops.m"
                                                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 245 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_205;
#line 245 "builtin_ops.m"
                                                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_209_209));
#line 245 "builtin_ops.m"
                                                                  }
#line 245 "builtin_ops.m"
                                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 244 "builtin_ops.m"
                                                                }
#line 244 "builtin_ops.m"
                                                            }
#line 244 "builtin_ops.m"
                                                        }
#line 244 "builtin_ops.m"
                                                    }
#line 186 "builtin_ops.m"
                                                  else
#line 186 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 234 "builtin_ops.m"
              }
#line 186 "builtin_ops.m"
          }
#line 186 "builtin_ops.m"
        else
#line 186 "builtin_ops.m"
          if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "float") == 0))
#line 186 "builtin_ops.m"
            {
#line 186 "builtin_ops.m"
              MR_Word backend_libs__builtin_ops__V_441_441;
#line 186 "builtin_ops.m"
              MR_Box backend_libs__builtin_ops__V_442_442;

#line 276 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 186 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 186 "builtin_ops.m"
                {
#line 276 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 276 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 276 "builtin_ops.m"
                    {
#line 276 "builtin_ops.m"
                      backend_libs__builtin_ops__V_442_442 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 276 "builtin_ops.m"
                      backend_libs__builtin_ops__V_441_441 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 186 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "*") == 0))
#line 276 "builtin_ops.m"
                        {
#line 276 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_338;
#line 276 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_341_341;
#line 276 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_342_342;
#line 276 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_343_343;
#line 276 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_344_344;
#line 276 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_345_345;

#line 276 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_441_441)) == (MR_mktag((MR_Integer) 1)));
#line 276 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 276 "builtin_ops.m"
                            {
#line 276 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_338 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 0));
#line 276 "builtin_ops.m"
                              backend_libs__builtin_ops__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 1)));
#line 276 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 276 "builtin_ops.m"
                                {
#line 277 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_343_343 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29));
#line 277 "builtin_ops.m"
                                  {
#line 277 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_344_344 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_344_344, 0) = backend_libs__builtin_ops__V_432_432;
#line 277 "builtin_ops.m"
                                  }
#line 277 "builtin_ops.m"
                                  {
#line 277 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_345_345 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_345_345, 0) = backend_libs__builtin_ops__V_442_442;
#line 277 "builtin_ops.m"
                                  }
#line 277 "builtin_ops.m"
                                  {
#line 277 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_342_342 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 277 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_342_342, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 277 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_342_342, 1) = ((MR_Box) (backend_libs__builtin_ops__V_343_343));
#line 277 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_342_342, 2) = ((MR_Box) (backend_libs__builtin_ops__V_344_344));
#line 277 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_342_342, 3) = ((MR_Box) (backend_libs__builtin_ops__V_345_345));
#line 277 "builtin_ops.m"
                                  }
#line 277 "builtin_ops.m"
                                  {
#line 277 "builtin_ops.m"
                                    MR_Word base;
#line 277 "builtin_ops.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 277 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 277 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_338;
#line 277 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_342_342));
#line 277 "builtin_ops.m"
                                  }
#line 277 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 276 "builtin_ops.m"
                                }
#line 276 "builtin_ops.m"
                            }
#line 276 "builtin_ops.m"
                        }
#line 186 "builtin_ops.m"
                      else
#line 186 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "+") == 0))
#line 186 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "builtin_ops.m"
                            {
#line 280 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_360_360;

#line 281 "builtin_ops.m"
                              {
#line 281 "builtin_ops.m"
                                backend_libs__builtin_ops__V_360_360 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 281 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_360_360, 0) = backend_libs__builtin_ops__V_432_432;
#line 281 "builtin_ops.m"
                              }
#line 281 "builtin_ops.m"
                              {
#line 281 "builtin_ops.m"
                                MR_Word base;
#line 281 "builtin_ops.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "builtin_ops.m"
                                *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 281 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_442_442;
#line 281 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_360_360));
#line 281 "builtin_ops.m"
                              }
#line 280 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 280 "builtin_ops.m"
                            }
#line 186 "builtin_ops.m"
                          else
#line 272 "builtin_ops.m"
                            {
#line 272 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Z_318 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 0));
#line 272 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 1)));
#line 272 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_322_322;
#line 272 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_323_323;
#line 272 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_324_324;
#line 272 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_325_325;

#line 272 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_321_321 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 272 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 272 "builtin_ops.m"
                                {
#line 273 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_323_323 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27));
#line 273 "builtin_ops.m"
                                  {
#line 273 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_324_324 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 273 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_324_324, 0) = backend_libs__builtin_ops__V_432_432;
#line 273 "builtin_ops.m"
                                  }
#line 273 "builtin_ops.m"
                                  {
#line 273 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_325_325 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 273 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_325_325, 0) = backend_libs__builtin_ops__V_442_442;
#line 273 "builtin_ops.m"
                                  }
#line 273 "builtin_ops.m"
                                  {
#line 273 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_322_322 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 273 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_322_322, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 273 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_322_322, 1) = ((MR_Box) (backend_libs__builtin_ops__V_323_323));
#line 273 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_322_322, 2) = ((MR_Box) (backend_libs__builtin_ops__V_324_324));
#line 273 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_322_322, 3) = ((MR_Box) (backend_libs__builtin_ops__V_325_325));
#line 273 "builtin_ops.m"
                                  }
#line 273 "builtin_ops.m"
                                  {
#line 273 "builtin_ops.m"
                                    MR_Word base;
#line 273 "builtin_ops.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 273 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 273 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_318;
#line 273 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_322_322));
#line 273 "builtin_ops.m"
                                  }
#line 273 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                            }
#line 186 "builtin_ops.m"
                        else
#line 186 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "-") == 0))
#line 186 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 282 "builtin_ops.m"
                              {
#line 282 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_365_365;
#line 282 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_369_369;

#line 283 "builtin_ops.m"
                                {
#line 283 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_369_369 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 283 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_369_369, 0) = backend_libs__builtin_ops__V_432_432;
#line 283 "builtin_ops.m"
                                }
#line 283 "builtin_ops.m"
                                {
#line 283 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_365_365 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 283 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 283 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28))));
#line 283 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &backend_libs__builtin_ops_scalar_common_2[1])));
#line 283 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_365_365, 3) = ((MR_Box) (backend_libs__builtin_ops__V_369_369));
#line 283 "builtin_ops.m"
                                }
#line 283 "builtin_ops.m"
                                {
#line 283 "builtin_ops.m"
                                  MR_Word base;
#line 283 "builtin_ops.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 283 "builtin_ops.m"
                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 283 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__V_442_442;
#line 283 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_365_365));
#line 283 "builtin_ops.m"
                                }
#line 282 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 282 "builtin_ops.m"
                              }
#line 186 "builtin_ops.m"
                            else
#line 274 "builtin_ops.m"
                              {
#line 274 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Z_328 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 0));
#line 274 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 1)));
#line 274 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_332_332;
#line 274 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_333_333;
#line 274 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_334_334;
#line 274 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_335_335;

#line 274 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_331_331 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 274 "builtin_ops.m"
                                  {
#line 275 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_333_333 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28));
#line 275 "builtin_ops.m"
                                    {
#line 275 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_334_334 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_334_334, 0) = backend_libs__builtin_ops__V_432_432;
#line 275 "builtin_ops.m"
                                    }
#line 275 "builtin_ops.m"
                                    {
#line 275 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_335_335 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 275 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_335_335, 0) = backend_libs__builtin_ops__V_442_442;
#line 275 "builtin_ops.m"
                                    }
#line 275 "builtin_ops.m"
                                    {
#line 275 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_332_332 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 275 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_332_332, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 275 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_332_332, 1) = ((MR_Box) (backend_libs__builtin_ops__V_333_333));
#line 275 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_332_332, 2) = ((MR_Box) (backend_libs__builtin_ops__V_334_334));
#line 275 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_332_332, 3) = ((MR_Box) (backend_libs__builtin_ops__V_335_335));
#line 275 "builtin_ops.m"
                                    }
#line 275 "builtin_ops.m"
                                    {
#line 275 "builtin_ops.m"
                                      MR_Word base;
#line 275 "builtin_ops.m"
                                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 275 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_328;
#line 275 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_332_332));
#line 275 "builtin_ops.m"
                                    }
#line 275 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 274 "builtin_ops.m"
                                  }
#line 274 "builtin_ops.m"
                              }
#line 186 "builtin_ops.m"
                          else
#line 186 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "<") == 0))
#line 287 "builtin_ops.m"
                              {
#line 287 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_382_382;
#line 287 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_383_383;
#line 287 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_384_384;
#line 287 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_385_385;

#line 287 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 287 "builtin_ops.m"
                                  {
#line 288 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_383_383 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33));
#line 288 "builtin_ops.m"
                                    {
#line 288 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_384_384 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 288 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_384_384, 0) = backend_libs__builtin_ops__V_432_432;
#line 288 "builtin_ops.m"
                                    }
#line 288 "builtin_ops.m"
                                    {
#line 288 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_385_385 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 288 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_385_385, 0) = backend_libs__builtin_ops__V_442_442;
#line 288 "builtin_ops.m"
                                    }
#line 288 "builtin_ops.m"
                                    {
#line 288 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_382_382 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 288 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_382_382, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 288 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_382_382, 1) = ((MR_Box) (backend_libs__builtin_ops__V_383_383));
#line 288 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_382_382, 2) = ((MR_Box) (backend_libs__builtin_ops__V_384_384));
#line 288 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_382_382, 3) = ((MR_Box) (backend_libs__builtin_ops__V_385_385));
#line 288 "builtin_ops.m"
                                    }
#line 288 "builtin_ops.m"
                                    {
#line 288 "builtin_ops.m"
                                      MR_Word base;
#line 288 "builtin_ops.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 288 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 288 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_382_382));
#line 288 "builtin_ops.m"
                                    }
#line 288 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 287 "builtin_ops.m"
                                  }
#line 287 "builtin_ops.m"
                              }
#line 186 "builtin_ops.m"
                            else
#line 186 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) ">") == 0))
#line 285 "builtin_ops.m"
                                {
#line 285 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_374_374;
#line 285 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_375_375;
#line 285 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_376_376;
#line 285 "builtin_ops.m"
                                  MR_Word backend_libs__builtin_ops__V_377_377;

#line 285 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 285 "builtin_ops.m"
                                    {
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_375_375 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34));
#line 286 "builtin_ops.m"
                                      {
#line 286 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_376_376 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_376_376, 0) = backend_libs__builtin_ops__V_432_432;
#line 286 "builtin_ops.m"
                                      }
#line 286 "builtin_ops.m"
                                      {
#line 286 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_377_377 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 286 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_377_377, 0) = backend_libs__builtin_ops__V_442_442;
#line 286 "builtin_ops.m"
                                      }
#line 286 "builtin_ops.m"
                                      {
#line 286 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_374_374 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 286 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_374_374, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 286 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_374_374, 1) = ((MR_Box) (backend_libs__builtin_ops__V_375_375));
#line 286 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_374_374, 2) = ((MR_Box) (backend_libs__builtin_ops__V_376_376));
#line 286 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_374_374, 3) = ((MR_Box) (backend_libs__builtin_ops__V_377_377));
#line 286 "builtin_ops.m"
                                      }
#line 286 "builtin_ops.m"
                                      {
#line 286 "builtin_ops.m"
                                        MR_Word base;
#line 286 "builtin_ops.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 286 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 286 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_374_374));
#line 286 "builtin_ops.m"
                                      }
#line 286 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 285 "builtin_ops.m"
                                    }
#line 285 "builtin_ops.m"
                                }
#line 186 "builtin_ops.m"
                              else
#line 186 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "=<") == 0))
#line 291 "builtin_ops.m"
                                  {
#line 291 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_398_398;
#line 291 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_399_399;
#line 291 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_400_400;
#line 291 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_401_401;

#line 291 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 291 "builtin_ops.m"
                                      {
#line 292 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_399_399 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35));
#line 292 "builtin_ops.m"
                                        {
#line 292 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_400_400 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_400_400, 0) = backend_libs__builtin_ops__V_432_432;
#line 292 "builtin_ops.m"
                                        }
#line 292 "builtin_ops.m"
                                        {
#line 292 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_401_401 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_401_401, 0) = backend_libs__builtin_ops__V_442_442;
#line 292 "builtin_ops.m"
                                        }
#line 292 "builtin_ops.m"
                                        {
#line 292 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_398_398 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_398_398, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_398_398, 1) = ((MR_Box) (backend_libs__builtin_ops__V_399_399));
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_398_398, 2) = ((MR_Box) (backend_libs__builtin_ops__V_400_400));
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_398_398, 3) = ((MR_Box) (backend_libs__builtin_ops__V_401_401));
#line 292 "builtin_ops.m"
                                        }
#line 292 "builtin_ops.m"
                                        {
#line 292 "builtin_ops.m"
                                          MR_Word base;
#line 292 "builtin_ops.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 292 "builtin_ops.m"
                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 292 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_398_398));
#line 292 "builtin_ops.m"
                                        }
#line 292 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 291 "builtin_ops.m"
                                      }
#line 291 "builtin_ops.m"
                                  }
#line 186 "builtin_ops.m"
                                else
#line 186 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) ">=") == 0))
#line 289 "builtin_ops.m"
                                    {
#line 289 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_390_390;
#line 289 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_391_391;
#line 289 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_392_392;
#line 289 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_393_393;

#line 289 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_441_441 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 289 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 289 "builtin_ops.m"
                                        {
#line 290 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_391_391 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36));
#line 290 "builtin_ops.m"
                                          {
#line 290 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_392_392 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_392_392, 0) = backend_libs__builtin_ops__V_432_432;
#line 290 "builtin_ops.m"
                                          }
#line 290 "builtin_ops.m"
                                          {
#line 290 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_393_393 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_393_393, 0) = backend_libs__builtin_ops__V_442_442;
#line 290 "builtin_ops.m"
                                          }
#line 290 "builtin_ops.m"
                                          {
#line 290 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_390_390 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 290 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_390_390, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 290 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_390_390, 1) = ((MR_Box) (backend_libs__builtin_ops__V_391_391));
#line 290 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_390_390, 2) = ((MR_Box) (backend_libs__builtin_ops__V_392_392));
#line 290 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_390_390, 3) = ((MR_Box) (backend_libs__builtin_ops__V_393_393));
#line 290 "builtin_ops.m"
                                          }
#line 290 "builtin_ops.m"
                                          {
#line 290 "builtin_ops.m"
                                            MR_Word base;
#line 290 "builtin_ops.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 290 "builtin_ops.m"
                                            *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 290 "builtin_ops.m"
                                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_390_390));
#line 290 "builtin_ops.m"
                                          }
#line 290 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 289 "builtin_ops.m"
                                        }
#line 289 "builtin_ops.m"
                                    }
#line 186 "builtin_ops.m"
                                  else
#line 186 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unchecked_quotient") == 0))
#line 278 "builtin_ops.m"
                                      {
#line 278 "builtin_ops.m"
                                        MR_Box backend_libs__builtin_ops__Z_348;
#line 278 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_351_351;
#line 278 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_352_352;
#line 278 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_353_353;
#line 278 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_354_354;
#line 278 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_355_355;

#line 278 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_441_441)) == (MR_mktag((MR_Integer) 1)));
#line 278 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 278 "builtin_ops.m"
                                          {
#line 278 "builtin_ops.m"
                                            backend_libs__builtin_ops__Z_348 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 0));
#line 278 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_441_441, (MR_Integer) 1)));
#line 278 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_351_351 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 278 "builtin_ops.m"
                                              {
#line 279 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_353_353 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30));
#line 279 "builtin_ops.m"
                                                {
#line 279 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_354_354 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_354_354, 0) = backend_libs__builtin_ops__V_432_432;
#line 279 "builtin_ops.m"
                                                }
#line 279 "builtin_ops.m"
                                                {
#line 279 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_355_355 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_355_355, 0) = backend_libs__builtin_ops__V_442_442;
#line 279 "builtin_ops.m"
                                                }
#line 279 "builtin_ops.m"
                                                {
#line 279 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_352_352 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 279 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_352_352, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 279 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_352_352, 1) = ((MR_Box) (backend_libs__builtin_ops__V_353_353));
#line 279 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_352_352, 2) = ((MR_Box) (backend_libs__builtin_ops__V_354_354));
#line 279 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_352_352, 3) = ((MR_Box) (backend_libs__builtin_ops__V_355_355));
#line 279 "builtin_ops.m"
                                                }
#line 279 "builtin_ops.m"
                                                {
#line 279 "builtin_ops.m"
                                                  MR_Word base;
#line 279 "builtin_ops.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 279 "builtin_ops.m"
                                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 279 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_348;
#line 279 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_352_352));
#line 279 "builtin_ops.m"
                                                }
#line 279 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 278 "builtin_ops.m"
                                              }
#line 278 "builtin_ops.m"
                                          }
#line 278 "builtin_ops.m"
                                      }
#line 186 "builtin_ops.m"
                                    else
#line 186 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 276 "builtin_ops.m"
                    }
#line 186 "builtin_ops.m"
                }
#line 186 "builtin_ops.m"
            }
#line 186 "builtin_ops.m"
          else
#line 186 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "builtin") == 0))
#line 202 "builtin_ops.m"
              {
#line 202 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__Y_27;
#line 202 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_29_29;
#line 202 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_30_30;

#line 202 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unsafe_promise_unique") == 0);
#line 202 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 202 "builtin_ops.m"
                  {
#line 202 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 202 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 202 "builtin_ops.m"
                      {
#line 202 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 202 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 202 "builtin_ops.m"
                          {
#line 202 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_27 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 202 "builtin_ops.m"
                            backend_libs__builtin_ops__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 202 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_29_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 202 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 202 "builtin_ops.m"
                              {
#line 203 "builtin_ops.m"
                                {
#line 203 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 203 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_30_30, 0) = backend_libs__builtin_ops__V_432_432;
#line 203 "builtin_ops.m"
                                }
#line 203 "builtin_ops.m"
                                {
#line 203 "builtin_ops.m"
                                  MR_Word base;
#line 203 "builtin_ops.m"
                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 203 "builtin_ops.m"
                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 203 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Y_27;
#line 203 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_30_30));
#line 203 "builtin_ops.m"
                                }
#line 203 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 202 "builtin_ops.m"
                              }
#line 202 "builtin_ops.m"
                          }
#line 202 "builtin_ops.m"
                      }
#line 202 "builtin_ops.m"
                  }
#line 202 "builtin_ops.m"
              }
#line 186 "builtin_ops.m"
            else
#line 186 "builtin_ops.m"
              if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "private_builtin") == 0))
#line 186 "builtin_ops.m"
                {
#line 210 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 186 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 186 "builtin_ops.m"
                    {
#line 186 "builtin_ops.m"
                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "store_at_ref") == 0))
#line 191 "builtin_ops.m"
                        {
#line 191 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Y_14;
#line 191 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_16_16;

#line 191 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 191 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 191 "builtin_ops.m"
                            {
#line 191 "builtin_ops.m"
                              backend_libs__builtin_ops__Y_14 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 191 "builtin_ops.m"
                              backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 191 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 191 "builtin_ops.m"
                                {
#line 192 "builtin_ops.m"
                                  {
#line 192 "builtin_ops.m"
                                    MR_Word base;
#line 192 "builtin_ops.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "builtin_ops.m"
                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 192 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 192 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = backend_libs__builtin_ops__Y_14;
#line 192 "builtin_ops.m"
                                  }
#line 192 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 191 "builtin_ops.m"
                                }
#line 191 "builtin_ops.m"
                            }
#line 191 "builtin_ops.m"
                        }
#line 186 "builtin_ops.m"
                      else
#line 186 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "builtin_int_gt") == 0))
#line 205 "builtin_ops.m"
                          {
#line 205 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Y_32;
#line 205 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_34_34;
#line 205 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_35_35;
#line 205 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_36_36;
#line 205 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_37_37;
#line 205 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_38_38;

#line 205 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 205 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 205 "builtin_ops.m"
                              {
#line 205 "builtin_ops.m"
                                backend_libs__builtin_ops__Y_32 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 205 "builtin_ops.m"
                                backend_libs__builtin_ops__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 205 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 205 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 205 "builtin_ops.m"
                                  {
#line 206 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
#line 206 "builtin_ops.m"
                                    {
#line 206 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 206 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_37_37, 0) = backend_libs__builtin_ops__V_432_432;
#line 206 "builtin_ops.m"
                                    }
#line 206 "builtin_ops.m"
                                    {
#line 206 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 206 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_38_38, 0) = backend_libs__builtin_ops__Y_32;
#line 206 "builtin_ops.m"
                                    }
#line 206 "builtin_ops.m"
                                    {
#line 206 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 206 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 206 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_35_35, 1) = ((MR_Box) (backend_libs__builtin_ops__V_36_36));
#line 206 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_35_35, 2) = ((MR_Box) (backend_libs__builtin_ops__V_37_37));
#line 206 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_35_35, 3) = ((MR_Box) (backend_libs__builtin_ops__V_38_38));
#line 206 "builtin_ops.m"
                                    }
#line 206 "builtin_ops.m"
                                    {
#line 206 "builtin_ops.m"
                                      MR_Word base;
#line 206 "builtin_ops.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 206 "builtin_ops.m"
                                      *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 206 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_35_35));
#line 206 "builtin_ops.m"
                                    }
#line 206 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 205 "builtin_ops.m"
                                  }
#line 205 "builtin_ops.m"
                              }
#line 205 "builtin_ops.m"
                          }
#line 186 "builtin_ops.m"
                        else
#line 186 "builtin_ops.m"
                          if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "builtin_int_lt") == 0))
#line 207 "builtin_ops.m"
                            {
#line 207 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Y_40;
#line 207 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_42_42;
#line 207 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_43_43;
#line 207 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_44_44;
#line 207 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_45_45;
#line 207 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_46_46;

#line 207 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 207 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 207 "builtin_ops.m"
                                {
#line 207 "builtin_ops.m"
                                  backend_libs__builtin_ops__Y_40 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 207 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 207 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 207 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 207 "builtin_ops.m"
                                    {
#line 208 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22));
#line 208 "builtin_ops.m"
                                      {
#line 208 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 208 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_45_45, 0) = backend_libs__builtin_ops__V_432_432;
#line 208 "builtin_ops.m"
                                      }
#line 208 "builtin_ops.m"
                                      {
#line 208 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 208 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_46_46, 0) = backend_libs__builtin_ops__Y_40;
#line 208 "builtin_ops.m"
                                      }
#line 208 "builtin_ops.m"
                                      {
#line 208 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 208 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 208 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_43_43, 1) = ((MR_Box) (backend_libs__builtin_ops__V_44_44));
#line 208 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_43_43, 2) = ((MR_Box) (backend_libs__builtin_ops__V_45_45));
#line 208 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_43_43, 3) = ((MR_Box) (backend_libs__builtin_ops__V_46_46));
#line 208 "builtin_ops.m"
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
                                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_43_43));
#line 208 "builtin_ops.m"
                                      }
#line 208 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 207 "builtin_ops.m"
                                    }
#line 207 "builtin_ops.m"
                                }
#line 207 "builtin_ops.m"
                            }
#line 186 "builtin_ops.m"
                          else
#line 186 "builtin_ops.m"
                            if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "unsafe_type_cast") == 0))
#line 200 "builtin_ops.m"
                              {
#line 200 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Y_22;
#line 200 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_24_24;
#line 200 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_25_25;

#line 200 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 200 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 200 "builtin_ops.m"
                                  {
#line 200 "builtin_ops.m"
                                    backend_libs__builtin_ops__Y_22 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 200 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 200 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 200 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 200 "builtin_ops.m"
                                      {
#line 201 "builtin_ops.m"
                                        {
#line 201 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 201 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_25_25, 0) = backend_libs__builtin_ops__V_432_432;
#line 201 "builtin_ops.m"
                                        }
#line 201 "builtin_ops.m"
                                        {
#line 201 "builtin_ops.m"
                                          MR_Word base;
#line 201 "builtin_ops.m"
                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 201 "builtin_ops.m"
                                          *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 201 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Y_22;
#line 201 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_25_25));
#line 201 "builtin_ops.m"
                                        }
#line 201 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 200 "builtin_ops.m"
                                      }
#line 200 "builtin_ops.m"
                                  }
#line 200 "builtin_ops.m"
                              }
#line 186 "builtin_ops.m"
                            else
#line 186 "builtin_ops.m"
                              if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "trace_get_io_state") == 0))
#line 186 "builtin_ops.m"
                                {
#line 186 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_431_431 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "builtin_ops.m"
                                  if (backend_libs__builtin_ops__succeeded)
#line 186 "builtin_ops.m"
                                    {
#line 187 "builtin_ops.m"
                                      {
#line 187 "builtin_ops.m"
                                        MR_Word base;
#line 187 "builtin_ops.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 187 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 187 "builtin_ops.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (backend_libs__builtin_ops__HeadVar__4_4));
#line 187 "builtin_ops.m"
                                      }
#line 187 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 186 "builtin_ops.m"
                                    }
#line 186 "builtin_ops.m"
                                }
#line 186 "builtin_ops.m"
                              else
#line 186 "builtin_ops.m"
                                if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "trace_set_io_state") == 0))
#line 188 "builtin_ops.m"
                                  {
#line 188 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_12_12;

#line 188 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_431_431 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 188 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 188 "builtin_ops.m"
                                      {
#line 189 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "builtin_ops.m"
                                        *backend_libs__builtin_ops__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_2[2]);
#line 189 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 188 "builtin_ops.m"
                                      }
#line 188 "builtin_ops.m"
                                  }
#line 186 "builtin_ops.m"
                                else
#line 186 "builtin_ops.m"
                                  if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "builtin_compound_eq") == 0))
#line 210 "builtin_ops.m"
                                    {
#line 210 "builtin_ops.m"
                                      MR_Box backend_libs__builtin_ops__Y_48;
#line 210 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_50_50;
#line 210 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_51_51;
#line 210 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_52_52;
#line 210 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_53_53;
#line 210 "builtin_ops.m"
                                      MR_Word backend_libs__builtin_ops__V_54_54;

#line 210 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 210 "builtin_ops.m"
                                      if (backend_libs__builtin_ops__succeeded)
#line 210 "builtin_ops.m"
                                        {
#line 210 "builtin_ops.m"
                                          backend_libs__builtin_ops__Y_48 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 210 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 210 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 210 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 210 "builtin_ops.m"
                                            {
#line 211 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_52_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39));
#line 211 "builtin_ops.m"
                                              {
#line 211 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 211 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_53_53, 0) = backend_libs__builtin_ops__V_432_432;
#line 211 "builtin_ops.m"
                                              }
#line 211 "builtin_ops.m"
                                              {
#line 211 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 211 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_54_54, 0) = backend_libs__builtin_ops__Y_48;
#line 211 "builtin_ops.m"
                                              }
#line 211 "builtin_ops.m"
                                              {
#line 211 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 211 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 211 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_51_51, 1) = ((MR_Box) (backend_libs__builtin_ops__V_52_52));
#line 211 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_51_51, 2) = ((MR_Box) (backend_libs__builtin_ops__V_53_53));
#line 211 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_51_51, 3) = ((MR_Box) (backend_libs__builtin_ops__V_54_54));
#line 211 "builtin_ops.m"
                                              }
#line 211 "builtin_ops.m"
                                              {
#line 211 "builtin_ops.m"
                                                MR_Word base;
#line 211 "builtin_ops.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "builtin_ops.m"
                                                *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 211 "builtin_ops.m"
                                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_51_51));
#line 211 "builtin_ops.m"
                                              }
#line 211 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 210 "builtin_ops.m"
                                            }
#line 210 "builtin_ops.m"
                                        }
#line 210 "builtin_ops.m"
                                    }
#line 186 "builtin_ops.m"
                                  else
#line 186 "builtin_ops.m"
                                    if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "builtin_compound_lt") == 0))
#line 212 "builtin_ops.m"
                                      {
#line 212 "builtin_ops.m"
                                        MR_Box backend_libs__builtin_ops__Y_56;
#line 212 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_58_58;
#line 212 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_59_59;
#line 212 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_60_60;
#line 212 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_61_61;
#line 212 "builtin_ops.m"
                                        MR_Word backend_libs__builtin_ops__V_62_62;

#line 212 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 212 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 212 "builtin_ops.m"
                                          {
#line 212 "builtin_ops.m"
                                            backend_libs__builtin_ops__Y_56 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 212 "builtin_ops.m"
                                            backend_libs__builtin_ops__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 212 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "builtin_ops.m"
                                            if (backend_libs__builtin_ops__succeeded)
#line 212 "builtin_ops.m"
                                              {
#line 213 "builtin_ops.m"
                                                backend_libs__builtin_ops__V_60_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40));
#line 213 "builtin_ops.m"
                                                {
#line 213 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 213 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_61_61, 0) = backend_libs__builtin_ops__V_432_432;
#line 213 "builtin_ops.m"
                                                }
#line 213 "builtin_ops.m"
                                                {
#line 213 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 213 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_62_62, 0) = backend_libs__builtin_ops__Y_56;
#line 213 "builtin_ops.m"
                                                }
#line 213 "builtin_ops.m"
                                                {
#line 213 "builtin_ops.m"
                                                  backend_libs__builtin_ops__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 213 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 213 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_59_59, 1) = ((MR_Box) (backend_libs__builtin_ops__V_60_60));
#line 213 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_59_59, 2) = ((MR_Box) (backend_libs__builtin_ops__V_61_61));
#line 213 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_59_59, 3) = ((MR_Box) (backend_libs__builtin_ops__V_62_62));
#line 213 "builtin_ops.m"
                                                }
#line 213 "builtin_ops.m"
                                                {
#line 213 "builtin_ops.m"
                                                  MR_Word base;
#line 213 "builtin_ops.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 213 "builtin_ops.m"
                                                  *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 213 "builtin_ops.m"
                                                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (backend_libs__builtin_ops__V_59_59));
#line 213 "builtin_ops.m"
                                                }
#line 213 "builtin_ops.m"
                                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 212 "builtin_ops.m"
                                              }
#line 212 "builtin_ops.m"
                                          }
#line 212 "builtin_ops.m"
                                      }
#line 186 "builtin_ops.m"
                                    else
#line 186 "builtin_ops.m"
                                      if ((strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "store_at_ref_impure") == 0))
#line 193 "builtin_ops.m"
                                        {
#line 193 "builtin_ops.m"
                                          MR_Box backend_libs__builtin_ops__Y_18;
#line 193 "builtin_ops.m"
                                          MR_Word backend_libs__builtin_ops__V_20_20;

#line 193 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 193 "builtin_ops.m"
                                          if (backend_libs__builtin_ops__succeeded)
#line 193 "builtin_ops.m"
                                            {
#line 193 "builtin_ops.m"
                                              backend_libs__builtin_ops__Y_18 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 193 "builtin_ops.m"
                                              backend_libs__builtin_ops__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 193 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "builtin_ops.m"
                                              if (backend_libs__builtin_ops__succeeded)
#line 193 "builtin_ops.m"
                                                {
#line 194 "builtin_ops.m"
                                                  {
#line 194 "builtin_ops.m"
                                                    MR_Word base;
#line 194 "builtin_ops.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "builtin_ops.m"
                                                    *backend_libs__builtin_ops__HeadVar__5_5 = base;
#line 194 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(1), base, 0) = backend_libs__builtin_ops__V_432_432;
#line 194 "builtin_ops.m"
                                                    MR_hl_field(MR_mktag(1), base, 1) = backend_libs__builtin_ops__Y_18;
#line 194 "builtin_ops.m"
                                                  }
#line 194 "builtin_ops.m"
                                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 193 "builtin_ops.m"
                                                }
#line 193 "builtin_ops.m"
                                            }
#line 193 "builtin_ops.m"
                                        }
#line 186 "builtin_ops.m"
                                      else
#line 186 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 186 "builtin_ops.m"
                    }
#line 186 "builtin_ops.m"
                }
#line 186 "builtin_ops.m"
              else
#line 186 "builtin_ops.m"
                if ((strcmp(backend_libs__builtin_ops__HeadVar__1_1, (MR_String) "term_size_prof_builtin") == 0))
#line 215 "builtin_ops.m"
                  {
#line 215 "builtin_ops.m"
                    MR_Box backend_libs__builtin_ops__Y_64;
#line 215 "builtin_ops.m"
                    MR_Box backend_libs__builtin_ops__Z_65;
#line 215 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_67_67;
#line 215 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_68_68;
#line 215 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_69_69;
#line 215 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_70_70;
#line 215 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_71_71;
#line 215 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_72_72;

#line 215 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__HeadVar__2_2, (MR_String) "term_size_plus") == 0);
#line 215 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 215 "builtin_ops.m"
                      {
#line 215 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__3_3 == (MR_Integer) 0);
#line 215 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 215 "builtin_ops.m"
                          {
#line 215 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_431_431)) == (MR_mktag((MR_Integer) 1)));
#line 215 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 215 "builtin_ops.m"
                              {
#line 215 "builtin_ops.m"
                                backend_libs__builtin_ops__Y_64 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 0));
#line 215 "builtin_ops.m"
                                backend_libs__builtin_ops__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_431_431, (MR_Integer) 1)));
#line 215 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_67_67)) == (MR_mktag((MR_Integer) 1)));
#line 215 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 215 "builtin_ops.m"
                                  {
#line 215 "builtin_ops.m"
                                    backend_libs__builtin_ops__Z_65 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_67_67, (MR_Integer) 0));
#line 215 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_67_67, (MR_Integer) 1)));
#line 215 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "builtin_ops.m"
                                    if (backend_libs__builtin_ops__succeeded)
#line 215 "builtin_ops.m"
                                      {
#line 216 "builtin_ops.m"
                                        backend_libs__builtin_ops__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 216 "builtin_ops.m"
                                        {
#line 216 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 216 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_71_71, 0) = backend_libs__builtin_ops__V_432_432;
#line 216 "builtin_ops.m"
                                        }
#line 216 "builtin_ops.m"
                                        {
#line 216 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 216 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_72_72, 0) = backend_libs__builtin_ops__Y_64;
#line 216 "builtin_ops.m"
                                        }
#line 216 "builtin_ops.m"
                                        {
#line 216 "builtin_ops.m"
                                          backend_libs__builtin_ops__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 216 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 216 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 1) = ((MR_Box) (backend_libs__builtin_ops__V_70_70));
#line 216 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 2) = ((MR_Box) (backend_libs__builtin_ops__V_71_71));
#line 216 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 3) = ((MR_Box) (backend_libs__builtin_ops__V_72_72));
#line 216 "builtin_ops.m"
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
                                          MR_hl_field(MR_mktag(0), base, 0) = backend_libs__builtin_ops__Z_65;
#line 216 "builtin_ops.m"
                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__builtin_ops__V_69_69));
#line 216 "builtin_ops.m"
                                        }
#line 216 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 215 "builtin_ops.m"
                                      }
#line 215 "builtin_ops.m"
                                  }
#line 215 "builtin_ops.m"
                              }
#line 215 "builtin_ops.m"
                          }
#line 215 "builtin_ops.m"
                      }
#line 215 "builtin_ops.m"
                  }
#line 186 "builtin_ops.m"
                else
#line 186 "builtin_ops.m"
                  backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 202 "builtin_ops.m"
      }
#line 186 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 186 "builtin_ops.m"
  }
#line 183 "builtin_ops.m"
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
#line 6263 "backend_libs.builtin_ops.c"
  {
#line 6265 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 6268 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 6270 "backend_libs.builtin_ops.c"
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
#line 6307 "backend_libs.builtin_ops.c"
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
#line 6338 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                else
#line 135 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6344 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                  else
#line 135 "builtin_ops.m"
                    if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6350 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                    else
#line 6354 "backend_libs.builtin_ops.c"
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
#line 6369 "backend_libs.builtin_ops.c"
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
#line 6393 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                    else
#line 135 "builtin_ops.m"
                      if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6399 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                      else
#line 6403 "backend_libs.builtin_ops.c"
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
#line 6418 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                  else
#line 135 "builtin_ops.m"
                    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6424 "backend_libs.builtin_ops.c"
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
#line 6448 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 135 "builtin_ops.m"
                        else
#line 6452 "backend_libs.builtin_ops.c"
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
#line 6471 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                    else
#line 135 "builtin_ops.m"
                      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6477 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                      else
#line 135 "builtin_ops.m"
                        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6483 "backend_libs.builtin_ops.c"
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
#line 6505 "backend_libs.builtin_ops.c"
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
#line 6525 "backend_libs.builtin_ops.c"
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
#line 6562 "backend_libs.builtin_ops.c"
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
#line 6577 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                    else
#line 135 "builtin_ops.m"
                      if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6583 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                      else
#line 135 "builtin_ops.m"
                        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6589 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 135 "builtin_ops.m"
                        else
#line 135 "builtin_ops.m"
                          if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6595 "backend_libs.builtin_ops.c"
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
#line 6617 "backend_libs.builtin_ops.c"
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
#line 6712 "backend_libs.builtin_ops.c"
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
#line 6737 "backend_libs.builtin_ops.c"
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
#line 6762 "backend_libs.builtin_ops.c"
                      {
#line 6764 "backend_libs.builtin_ops.c"
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
#line 6802 "backend_libs.builtin_ops.c"
                        {
#line 6804 "backend_libs.builtin_ops.c"
                          backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_16_16);
                        }
#line 135 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 135 "builtin_ops.m"
                          {
#line 6811 "backend_libs.builtin_ops.c"
                            {
#line 6813 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_14_14, backend_libs__builtin_ops__V_17_17);
                            }
#line 135 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 6818 "backend_libs.builtin_ops.c"
                              {
#line 6820 "backend_libs.builtin_ops.c"
                                /* direct tailcall eliminated */
#line 6822 "backend_libs.builtin_ops.c"
                                {
#line 6824 "backend_libs.builtin_ops.c"
                                  MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_15_15;
#line 6826 "backend_libs.builtin_ops.c"
                                  MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_18_18;

#line 6829 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 6831 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 6833 "backend_libs.builtin_ops.c"
                                }
#line 6835 "backend_libs.builtin_ops.c"
                                continue;
#line 6837 "backend_libs.builtin_ops.c"
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
#line 6868 "backend_libs.builtin_ops.c"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_9_9 == backend_libs__builtin_ops__V_11_11);
#line 135 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 6872 "backend_libs.builtin_ops.c"
                          {
#line 6874 "backend_libs.builtin_ops.c"
                            /* direct tailcall eliminated */
#line 6876 "backend_libs.builtin_ops.c"
                            {
#line 6878 "backend_libs.builtin_ops.c"
                              MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_10_10;
#line 6880 "backend_libs.builtin_ops.c"
                              MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_12_12;

#line 6883 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 6885 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 6887 "backend_libs.builtin_ops.c"
                            }
#line 6889 "backend_libs.builtin_ops.c"
                            continue;
#line 6891 "backend_libs.builtin_ops.c"
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
#line 6934 "backend_libs.builtin_ops.c"
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
#line 6963 "backend_libs.builtin_ops.c"
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
#line 6986 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
            else
#line 129 "builtin_ops.m"
              if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6992 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
              else
#line 6996 "backend_libs.builtin_ops.c"
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
#line 7011 "backend_libs.builtin_ops.c"
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
#line 7035 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
                else
#line 7039 "backend_libs.builtin_ops.c"
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
#line 7056 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
              else
#line 129 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 7062 "backend_libs.builtin_ops.c"
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
#line 7082 "backend_libs.builtin_ops.c"
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
#line 7103 "backend_libs.builtin_ops.c"
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
#line 7116 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "builtin_ops.m"
              else
#line 129 "builtin_ops.m"
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 7122 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "builtin_ops.m"
                else
#line 129 "builtin_ops.m"
                  if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7128 "backend_libs.builtin_ops.c"
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
#line 7204 "backend_libs.builtin_ops.c"
              {
#line 7206 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_5_5);
              }
#line 129 "builtin_ops.m"
              if (backend_libs__builtin_ops__succeeded)
#line 7211 "backend_libs.builtin_ops.c"
                {
#line 7213 "backend_libs.builtin_ops.c"
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
#line 7239 "backend_libs.builtin_ops.c"
                {
#line 7241 "backend_libs.builtin_ops.c"
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
#line 7273 "backend_libs.builtin_ops.c"
                  {
#line 7275 "backend_libs.builtin_ops.c"
                    backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_9_9);
                  }
#line 129 "builtin_ops.m"
                  if (backend_libs__builtin_ops__succeeded)
#line 7280 "backend_libs.builtin_ops.c"
                    {
#line 7282 "backend_libs.builtin_ops.c"
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
#line 7306 "backend_libs.builtin_ops.c"
                  {
#line 7308 "backend_libs.builtin_ops.c"
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
#line 7363 "backend_libs.builtin_ops.c"
  {
#line 7365 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 7368 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 7370 "backend_libs.builtin_ops.c"
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
#line 7399 "backend_libs.builtin_ops.c"
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
#line 7424 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "builtin_ops.m"
        else
#line 44 "builtin_ops.m"
          {
#line 44 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 > backend_libs__builtin_ops__V_5_5);
#line 44 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 7434 "backend_libs.builtin_ops.c"
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
#line 8001 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 7;
#line 44 "builtin_ops.m"
    else
#line 44 "builtin_ops.m"
      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 8007 "backend_libs.builtin_ops.c"
        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 8;
#line 44 "builtin_ops.m"
      else
#line 44 "builtin_ops.m"
        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 8013 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 9;
#line 44 "builtin_ops.m"
        else
#line 44 "builtin_ops.m"
          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 8019 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 14;
#line 44 "builtin_ops.m"
          else
#line 44 "builtin_ops.m"
            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 8025 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 40;
#line 44 "builtin_ops.m"
            else
#line 44 "builtin_ops.m"
              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 8031 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 41;
#line 44 "builtin_ops.m"
              else
#line 44 "builtin_ops.m"
                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 8037 "backend_libs.builtin_ops.c"
                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 12;
#line 44 "builtin_ops.m"
                else
#line 44 "builtin_ops.m"
                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 8043 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 31;
#line 44 "builtin_ops.m"
                  else
#line 44 "builtin_ops.m"
                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 8049 "backend_libs.builtin_ops.c"
                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 32;
#line 44 "builtin_ops.m"
                    else
#line 44 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 8055 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 39;
#line 44 "builtin_ops.m"
                      else
#line 44 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 8061 "backend_libs.builtin_ops.c"
                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 37;
#line 44 "builtin_ops.m"
                        else
#line 44 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 8067 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 35;
#line 44 "builtin_ops.m"
                          else
#line 44 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 8073 "backend_libs.builtin_ops.c"
                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 36;
#line 44 "builtin_ops.m"
                            else
#line 44 "builtin_ops.m"
                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 8079 "backend_libs.builtin_ops.c"
                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 34;
#line 44 "builtin_ops.m"
                              else
#line 44 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 8085 "backend_libs.builtin_ops.c"
                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 29;
#line 44 "builtin_ops.m"
                                else
#line 44 "builtin_ops.m"
                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 8091 "backend_libs.builtin_ops.c"
                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 33;
#line 44 "builtin_ops.m"
                                  else
#line 44 "builtin_ops.m"
                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 8097 "backend_libs.builtin_ops.c"
                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 28;
#line 44 "builtin_ops.m"
                                    else
#line 44 "builtin_ops.m"
                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 8103 "backend_libs.builtin_ops.c"
                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 30;
#line 44 "builtin_ops.m"
                                      else
#line 44 "builtin_ops.m"
                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 8109 "backend_libs.builtin_ops.c"
                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 38;
#line 44 "builtin_ops.m"
                                        else
#line 44 "builtin_ops.m"
                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8115 "backend_libs.builtin_ops.c"
                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 0;
#line 44 "builtin_ops.m"
                                          else
#line 44 "builtin_ops.m"
                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 8121 "backend_libs.builtin_ops.c"
                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 3;
#line 44 "builtin_ops.m"
                                            else
#line 44 "builtin_ops.m"
                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 8127 "backend_libs.builtin_ops.c"
                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 26;
#line 44 "builtin_ops.m"
                                              else
#line 44 "builtin_ops.m"
                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 8133 "backend_libs.builtin_ops.c"
                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 24;
#line 44 "builtin_ops.m"
                                                else
#line 44 "builtin_ops.m"
                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 8139 "backend_libs.builtin_ops.c"
                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 25;
#line 44 "builtin_ops.m"
                                                  else
#line 44 "builtin_ops.m"
                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 8145 "backend_libs.builtin_ops.c"
                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 23;
#line 44 "builtin_ops.m"
                                                    else
#line 44 "builtin_ops.m"
                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 8151 "backend_libs.builtin_ops.c"
                                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 4;
#line 44 "builtin_ops.m"
                                                      else
#line 44 "builtin_ops.m"
                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 8157 "backend_libs.builtin_ops.c"
                                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 2;
#line 44 "builtin_ops.m"
                                                        else
#line 44 "builtin_ops.m"
                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8163 "backend_libs.builtin_ops.c"
                                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 1;
#line 44 "builtin_ops.m"
                                                          else
#line 44 "builtin_ops.m"
                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 8169 "backend_libs.builtin_ops.c"
                                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 10;
#line 44 "builtin_ops.m"
                                                            else
#line 44 "builtin_ops.m"
                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 8175 "backend_libs.builtin_ops.c"
                                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 11;
#line 44 "builtin_ops.m"
                                                              else
#line 44 "builtin_ops.m"
                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 8181 "backend_libs.builtin_ops.c"
                                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 13;
#line 44 "builtin_ops.m"
                                                                else
#line 44 "builtin_ops.m"
                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 8187 "backend_libs.builtin_ops.c"
                                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 22;
#line 44 "builtin_ops.m"
                                                                  else
#line 44 "builtin_ops.m"
                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 8193 "backend_libs.builtin_ops.c"
                                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 16;
#line 44 "builtin_ops.m"
                                                                    else
#line 44 "builtin_ops.m"
                                                                      if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 8199 "backend_libs.builtin_ops.c"
                                                                        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 21;
#line 44 "builtin_ops.m"
                                                                      else
#line 44 "builtin_ops.m"
                                                                        if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 8205 "backend_libs.builtin_ops.c"
                                                                          *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 19;
#line 44 "builtin_ops.m"
                                                                        else
#line 44 "builtin_ops.m"
                                                                          if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 8211 "backend_libs.builtin_ops.c"
                                                                            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 20;
#line 44 "builtin_ops.m"
                                                                          else
#line 44 "builtin_ops.m"
                                                                            if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 8217 "backend_libs.builtin_ops.c"
                                                                              *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 18;
#line 44 "builtin_ops.m"
                                                                            else
#line 44 "builtin_ops.m"
                                                                              if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 8223 "backend_libs.builtin_ops.c"
                                                                                *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 17;
#line 44 "builtin_ops.m"
                                                                              else
#line 44 "builtin_ops.m"
                                                                                if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 8229 "backend_libs.builtin_ops.c"
                                                                                  *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 5;
#line 44 "builtin_ops.m"
                                                                                else
#line 44 "builtin_ops.m"
                                                                                  if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 8235 "backend_libs.builtin_ops.c"
                                                                                    *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 6;
#line 44 "builtin_ops.m"
                                                                                  else
#line 44 "builtin_ops.m"
                                                                                    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 8241 "backend_libs.builtin_ops.c"
                                                                                      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 27;
#line 44 "builtin_ops.m"
                                                                                    else
#line 8245 "backend_libs.builtin_ops.c"
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
#line 8908 "backend_libs.builtin_ops.c"
                                                                                              {
#line 8910 "backend_libs.builtin_ops.c"
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
#line 8948 "backend_libs.builtin_ops.c"
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
#line 8981 "backend_libs.builtin_ops.c"
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
#line 8994 "backend_libs.builtin_ops.c"
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
#line 9062 "backend_libs.builtin_ops.c"
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
#line 9087 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__TypeInfo_9_9 = (MR_Word) &backend_libs__builtin_ops_scalar_common_1[0];
#line 9089 "backend_libs.builtin_ops.c"
              {
#line 9091 "backend_libs.builtin_ops.c"
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
#line 178 "builtin_ops.m"
  {
#line 178 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 178 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__ProcInt_11;
#line 178 "builtin_ops.m"
    MR_String backend_libs__builtin_ops__ModuleName_12;

#line 179 "builtin_ops.m"
    {
#line 179 "builtin_ops.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__builtin_ops__ProcId_8, &backend_libs__builtin_ops__ProcInt_11);
    }
#line 180 "builtin_ops.m"
    {
#line 180 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(backend_libs__builtin_ops__FullyQualifiedModule_6, &backend_libs__builtin_ops__ModuleName_12);
    }
#line 178 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 181 "builtin_ops.m"
      {
#line 181 "builtin_ops.m"
        return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_p_0(backend_libs__builtin_ops__ModuleName_12, backend_libs__builtin_ops__PredName_7, backend_libs__builtin_ops__ProcInt_11, backend_libs__builtin_ops__Args_9, backend_libs__builtin_ops__Code_10);
      }
#line 178 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 178 "builtin_ops.m"
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
