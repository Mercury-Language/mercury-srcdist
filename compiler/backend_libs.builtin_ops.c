/*
** Automatically generated from `builtin_ops.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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




#line 137 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1];

#line 140 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0;

#line 143 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;

#line 146 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1];

#line 149 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1;

#line 152 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1];

#line 155 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1];

#line 158 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2];

#line 161 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2];

#line 164 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2];

#line 167 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0;

#line 170 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1;

#line 173 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2;

#line 176 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3;

#line 179 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4;

#line 182 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5;

#line 185 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6;

#line 188 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7;

#line 191 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8;

#line 194 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9;

#line 197 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10;

#line 200 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11;

#line 203 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12;

#line 206 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13;

#line 209 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14;

#line 212 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1];

#line 215 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15;

#line 218 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16;

#line 221 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17;

#line 224 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18;

#line 227 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19;

#line 230 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20;

#line 233 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21;

#line 236 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22;

#line 239 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23;

#line 242 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_24[1];

#line 245 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24;

#line 248 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25;

#line 251 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26;

#line 254 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27;

#line 257 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28;

#line 260 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29;

#line 263 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30;

#line 266 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31;

#line 269 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32;

#line 272 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33;

#line 275 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34;

#line 278 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35;

#line 281 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36;

#line 284 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37;

#line 287 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38;

#line 290 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39;

#line 293 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40;

#line 296 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41;

#line 299 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42;

#line 302 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43;

#line 305 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44;

#line 308 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[43];

#line 311 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

#line 314 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1];

#line 317 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3];

#line 320 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[45];

#line 323 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[45];

#line 326 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0;

#line 329 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1;

#line 332 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2;

#line 335 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3];

#line 338 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3];

#line 341 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3];

#line 344 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1;

#line 347 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2];

#line 350 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0;

#line 353 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2];

#line 356 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1;

#line 359 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1];

#line 362 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2;

#line 365 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1;

#line 368 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1];

#line 371 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3;

#line 374 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1];

#line 377 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1];

#line 380 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1];

#line 383 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1];

#line 386 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4];

#line 389 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4];

#line 392 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4];

#line 395 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1];

#line 398 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0;

#line 401 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1];

#line 404 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1;

#line 407 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1];

#line 410 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2;

#line 413 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2];

#line 416 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3;

#line 419 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3];

#line 422 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4;

#line 425 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1];

#line 428 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1];

#line 431 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1];

#line 434 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2];

#line 437 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4];

#line 440 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5];

#line 443 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5];

#line 446 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0;

#line 449 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1;

#line 452 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2;

#line 455 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3;

#line 458 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4;

#line 461 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5;

#line 464 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6;

#line 467 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7;

#line 470 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8;

#line 473 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9;

#line 476 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10;

#line 479 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11;

#line 482 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12;

#line 485 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13;

#line 488 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[14];

#line 491 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[14];

#line 494 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[14];

#line 497 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 500 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 502 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 505 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 508 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 510 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 512 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 515 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 518 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 520 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 523 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 526 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 528 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 530 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 533 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 536 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 538 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 541 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 544 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 546 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 548 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 551 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 554 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 556 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 558 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 561 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 564 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 566 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 568 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 570 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 573 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 576 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 578 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 580 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 583 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 586 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 588 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 590 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 592 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 595 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 598 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 600 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 603 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 606 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 608 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 610 "backend_libs.builtin_ops.c"
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



#line 672 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 677 "backend_libs.builtin_ops.c"
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

#line 692 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
  }
};

#line 700 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 705 "backend_libs.builtin_ops.c"
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

#line 720 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0
};

#line 725 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 730 "backend_libs.builtin_ops.c"
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

#line 744 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 750 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 756 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "array_elem_type",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0
};

#line 773 "backend_libs.builtin_ops.c"
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

#line 788 "backend_libs.builtin_ops.c"
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

#line 803 "backend_libs.builtin_ops.c"
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

#line 818 "backend_libs.builtin_ops.c"
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

#line 833 "backend_libs.builtin_ops.c"
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

#line 848 "backend_libs.builtin_ops.c"
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

#line 863 "backend_libs.builtin_ops.c"
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

#line 878 "backend_libs.builtin_ops.c"
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

#line 893 "backend_libs.builtin_ops.c"
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

#line 908 "backend_libs.builtin_ops.c"
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

#line 923 "backend_libs.builtin_ops.c"
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

#line 938 "backend_libs.builtin_ops.c"
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

#line 953 "backend_libs.builtin_ops.c"
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

#line 968 "backend_libs.builtin_ops.c"
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

#line 983 "backend_libs.builtin_ops.c"
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

#line 998 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0
};

#line 1003 "backend_libs.builtin_ops.c"
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

#line 1018 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16 = {
  (MR_String) "string_unsafe_index_code_unit",
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

#line 1033 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17 = {
  (MR_String) "str_eq",
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

#line 1048 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18 = {
  (MR_String) "str_ne",
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

#line 1063 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19 = {
  (MR_String) "str_lt",
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

#line 1078 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20 = {
  (MR_String) "str_gt",
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

#line 1093 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21 = {
  (MR_String) "str_le",
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

#line 1108 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22 = {
  (MR_String) "str_ge",
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

#line 1123 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23 = {
  (MR_String) "str_cmp",
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

#line 1138 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_24[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1143 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24 = {
  (MR_String) "offset_str_eq",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 24,
  backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_24,
  NULL,
  NULL,
  NULL
};

#line 1158 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25 = {
  (MR_String) "int_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 23,
  (MR_Integer) 25,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1173 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26 = {
  (MR_String) "int_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 24,
  (MR_Integer) 26,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1188 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27 = {
  (MR_String) "int_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 25,
  (MR_Integer) 27,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1203 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28 = {
  (MR_String) "int_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 26,
  (MR_Integer) 28,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1218 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29 = {
  (MR_String) "unsigned_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 27,
  (MR_Integer) 29,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1233 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30 = {
  (MR_String) "float_plus",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 28,
  (MR_Integer) 30,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1248 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31 = {
  (MR_String) "float_minus",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 29,
  (MR_Integer) 31,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1263 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32 = {
  (MR_String) "float_times",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 30,
  (MR_Integer) 32,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1278 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33 = {
  (MR_String) "float_divide",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 31,
  (MR_Integer) 33,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1293 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34 = {
  (MR_String) "float_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 32,
  (MR_Integer) 34,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1308 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35 = {
  (MR_String) "float_ne",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 33,
  (MR_Integer) 35,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1323 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36 = {
  (MR_String) "float_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 34,
  (MR_Integer) 36,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1338 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37 = {
  (MR_String) "float_gt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 35,
  (MR_Integer) 37,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1353 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38 = {
  (MR_String) "float_le",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 36,
  (MR_Integer) 38,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1368 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39 = {
  (MR_String) "float_ge",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 37,
  (MR_Integer) 39,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1383 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40 = {
  (MR_String) "float_word_bits",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 38,
  (MR_Integer) 40,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1398 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41 = {
  (MR_String) "float_from_dword",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 39,
  (MR_Integer) 41,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1413 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42 = {
  (MR_String) "pointer_equal_conservative",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 40,
  (MR_Integer) 42,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1428 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43 = {
  (MR_String) "compound_eq",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 41,
  (MR_Integer) 43,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1443 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44 = {
  (MR_String) "compound_lt",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 42,
  (MR_Integer) 44,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1458 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[43] = {
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
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44
};

#line 1505 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15
};

#line 1510 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24
};

#line 1515 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3] = {
  {
    (MR_Integer) 43,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2
  }
};

#line 1534 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[45] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29
};

#line 1583 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[45] = {
  (MR_Integer) 20,
  (MR_Integer) 28,
  (MR_Integer) 27,
  (MR_Integer) 21,
  (MR_Integer) 26,
  (MR_Integer) 42,
  (MR_Integer) 43,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 29,
  (MR_Integer) 30,
  (MR_Integer) 7,
  (MR_Integer) 31,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 41,
  (MR_Integer) 35,
  (MR_Integer) 40,
  (MR_Integer) 39,
  (MR_Integer) 37,
  (MR_Integer) 38,
  (MR_Integer) 36,
  (MR_Integer) 34,
  (MR_Integer) 32,
  (MR_Integer) 25,
  (MR_Integer) 23,
  (MR_Integer) 24,
  (MR_Integer) 22,
  (MR_Integer) 44,
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
  (MR_Integer) 33,
  (MR_Integer) 5,
  (MR_Integer) 6
};

#line 1632 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____binary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____binary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "binary_op",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0 },
  (MR_Integer) 45,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0
};

#line 1649 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0 = {
  (MR_String) "scalar_elem_string",
  (MR_Integer) 0
};

#line 1655 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1 = {
  (MR_String) "scalar_elem_int",
  (MR_Integer) 1
};

#line 1661 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2 = {
  (MR_String) "scalar_elem_generic",
  (MR_Integer) 2
};

#line 1667 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2
};

#line 1674 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0
};

#line 1681 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1688 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "scalar_array_elem_type",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0
};

#line 1705 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1 = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1713 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1719 "backend_libs.builtin_ops.c"
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

#line 1734 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1740 "backend_libs.builtin_ops.c"
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

#line 1755 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1760 "backend_libs.builtin_ops.c"
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

#line 1775 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1783 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__pti_list_1__pseudo_1
};

#line 1788 "backend_libs.builtin_ops.c"
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

#line 1803 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0
};

#line 1808 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1
};

#line 1813 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 1818 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3
};

#line 1823 "backend_libs.builtin_ops.c"
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

#line 1847 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 1855 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 1863 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_code_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_code_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_code_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_code",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1
};

#line 1880 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1885 "backend_libs.builtin_ops.c"
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

#line 1900 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1905 "backend_libs.builtin_ops.c"
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

#line 1920 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1925 "backend_libs.builtin_ops.c"
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

#line 1940 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1946 "backend_libs.builtin_ops.c"
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

#line 1961 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 1968 "backend_libs.builtin_ops.c"
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

#line 1983 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0
};

#line 1988 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1
};

#line 1993 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2
};

#line 1998 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4
};

#line 2004 "backend_libs.builtin_ops.c"
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

#line 2028 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3
};

#line 2037 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 2046 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__builtin_ops____Unify____simple_expr_1_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____simple_expr_1_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "simple_expr",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1
};

#line 2063 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0 = {
  (MR_String) "mktag",
  (MR_Integer) 0
};

#line 2069 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1 = {
  (MR_String) "tag",
  (MR_Integer) 1
};

#line 2075 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2 = {
  (MR_String) "unmktag",
  (MR_Integer) 2
};

#line 2081 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3 = {
  (MR_String) "strip_tag",
  (MR_Integer) 3
};

#line 2087 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4 = {
  (MR_String) "mkbody",
  (MR_Integer) 4
};

#line 2093 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5 = {
  (MR_String) "unmkbody",
  (MR_Integer) 5
};

#line 2099 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6 = {
  (MR_String) "bitwise_complement",
  (MR_Integer) 6
};

#line 2105 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7 = {
  (MR_String) "logical_not",
  (MR_Integer) 7
};

#line 2111 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8 = {
  (MR_String) "hash_string",
  (MR_Integer) 8
};

#line 2117 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9 = {
  (MR_String) "hash_string2",
  (MR_Integer) 9
};

#line 2123 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10 = {
  (MR_String) "hash_string3",
  (MR_Integer) 10
};

#line 2129 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11 = {
  (MR_String) "hash_string4",
  (MR_Integer) 11
};

#line 2135 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12 = {
  (MR_String) "hash_string5",
  (MR_Integer) 12
};

#line 2141 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13 = {
  (MR_String) "hash_string6",
  (MR_Integer) 13
};

#line 2147 "backend_libs.builtin_ops.c"
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

#line 2165 "backend_libs.builtin_ops.c"
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

#line 2183 "backend_libs.builtin_ops.c"
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

#line 2201 "backend_libs.builtin_ops.c"
const MR_TypeCtorInfo_Struct backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__builtin_ops____Unify____unary_op_0_0_10001)),
  ((MR_Box) (backend_libs__builtin_ops____Compare____unary_op_0_0_10001)),
  (MR_String) "backend_libs.builtin_ops",
  (MR_String) "unary_op",
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0 },
  {     backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0
};

#line 2218 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 2221 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2223 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2225 "backend_libs.builtin_ops.c"
{
#line 2227 "backend_libs.builtin_ops.c"
  {
#line 2229 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2232 "backend_libs.builtin_ops.c"
    {
#line 2234 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2237 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2239 "backend_libs.builtin_ops.c"
  }
#line 2241 "backend_libs.builtin_ops.c"
}

#line 2244 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 2247 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2249 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2251 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2253 "backend_libs.builtin_ops.c"
{
#line 2255 "backend_libs.builtin_ops.c"
  {
#line 2257 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2260 "backend_libs.builtin_ops.c"
    {
#line 2262 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2265 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2267 "backend_libs.builtin_ops.c"
  }
#line 2269 "backend_libs.builtin_ops.c"
}

#line 2272 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 2275 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2277 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2279 "backend_libs.builtin_ops.c"
{
#line 2281 "backend_libs.builtin_ops.c"
  {
#line 2283 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2286 "backend_libs.builtin_ops.c"
    {
#line 2288 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2291 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2293 "backend_libs.builtin_ops.c"
  }
#line 2295 "backend_libs.builtin_ops.c"
}

#line 2298 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 2301 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2303 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2305 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2307 "backend_libs.builtin_ops.c"
{
#line 2309 "backend_libs.builtin_ops.c"
  {
#line 2311 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2314 "backend_libs.builtin_ops.c"
    {
#line 2316 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2319 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2321 "backend_libs.builtin_ops.c"
  }
#line 2323 "backend_libs.builtin_ops.c"
}

#line 2326 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 2329 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2331 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2333 "backend_libs.builtin_ops.c"
{
#line 2335 "backend_libs.builtin_ops.c"
  {
#line 2337 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2340 "backend_libs.builtin_ops.c"
    {
#line 2342 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2345 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2347 "backend_libs.builtin_ops.c"
  }
#line 2349 "backend_libs.builtin_ops.c"
}

#line 2352 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 2355 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2357 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2359 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2361 "backend_libs.builtin_ops.c"
{
#line 2363 "backend_libs.builtin_ops.c"
  {
#line 2365 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2368 "backend_libs.builtin_ops.c"
    {
#line 2370 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2373 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2375 "backend_libs.builtin_ops.c"
  }
#line 2377 "backend_libs.builtin_ops.c"
}

#line 2380 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 2383 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2385 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2387 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2389 "backend_libs.builtin_ops.c"
{
#line 2391 "backend_libs.builtin_ops.c"
  {
#line 2393 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2396 "backend_libs.builtin_ops.c"
    {
#line 2398 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2401 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2403 "backend_libs.builtin_ops.c"
  }
#line 2405 "backend_libs.builtin_ops.c"
}

#line 2408 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 2411 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2413 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2415 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2417 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2419 "backend_libs.builtin_ops.c"
{
#line 2421 "backend_libs.builtin_ops.c"
  {
#line 2423 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2426 "backend_libs.builtin_ops.c"
    {
#line 2428 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2431 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2433 "backend_libs.builtin_ops.c"
  }
#line 2435 "backend_libs.builtin_ops.c"
}

#line 2438 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 2441 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2443 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2445 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2447 "backend_libs.builtin_ops.c"
{
#line 2449 "backend_libs.builtin_ops.c"
  {
#line 2451 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2454 "backend_libs.builtin_ops.c"
    {
#line 2456 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2459 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2461 "backend_libs.builtin_ops.c"
  }
#line 2463 "backend_libs.builtin_ops.c"
}

#line 2466 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 2469 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2471 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2473 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2475 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2477 "backend_libs.builtin_ops.c"
{
#line 2479 "backend_libs.builtin_ops.c"
  {
#line 2481 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2484 "backend_libs.builtin_ops.c"
    {
#line 2486 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2489 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2491 "backend_libs.builtin_ops.c"
  }
#line 2493 "backend_libs.builtin_ops.c"
}

#line 2496 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 2499 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2501 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2503 "backend_libs.builtin_ops.c"
{
#line 2505 "backend_libs.builtin_ops.c"
  {
#line 2507 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2510 "backend_libs.builtin_ops.c"
    {
#line 2512 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2515 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2517 "backend_libs.builtin_ops.c"
  }
#line 2519 "backend_libs.builtin_ops.c"
}

#line 2522 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 2525 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2527 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2529 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2531 "backend_libs.builtin_ops.c"
{
#line 2533 "backend_libs.builtin_ops.c"
  {
#line 2535 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2538 "backend_libs.builtin_ops.c"
    {
#line 2540 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____unary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2543 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2545 "backend_libs.builtin_ops.c"
  }
#line 2547 "backend_libs.builtin_ops.c"
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
#line 2591 "backend_libs.builtin_ops.c"
  {
#line 2593 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 2596 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2598 "backend_libs.builtin_ops.c"
  }
#line 31 "builtin_ops.m"
}

#line 163 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0(
#line 163 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_89,
#line 163 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 163 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 163 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 163 "builtin_ops.m"
{
#line 163 "builtin_ops.m"
  while (MR_TRUE)
#line 163 "builtin_ops.m"
    {
#line 163 "builtin_ops.m"
      /* tailcall optimized into a loop */
#line 163 "builtin_ops.m"
      {
#line 163 "builtin_ops.m"
        MR_bool backend_libs__builtin_ops__succeeded;
#line 163 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastX_87 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 163 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastY_88 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 163 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_87 == backend_libs__builtin_ops__CastY_88);
#line 163 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 2635 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Float backend_libs__builtin_ops__V_103_103 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                MR_Float backend_libs__builtin_ops__V_35_35 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 163 "builtin_ops.m"
                {
#line 163 "builtin_ops.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_103_103, backend_libs__builtin_ops__V_35_35);
#line 163 "builtin_ops.m"
                  return;
                }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2666 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2672 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2678 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
            else
#line 2682 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2697 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 163 "builtin_ops.m"
                {
#line 163 "builtin_ops.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_104_104, backend_libs__builtin_ops__V_20_20);
#line 163 "builtin_ops.m"
                  return;
                }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2721 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2727 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
            else
#line 2731 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_105_105 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2746 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2752 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));

#line 163 "builtin_ops.m"
                {
#line 163 "builtin_ops.m"
                  mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_89, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_105_105, backend_libs__builtin_ops__V_5_5);
#line 163 "builtin_ops.m"
                  return;
                }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2776 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
            else
#line 2780 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
        if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2799 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2805 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2811 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 163 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 3)));
#line 163 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_85_85;

#line 163 "builtin_ops.m"
                {
#line 163 "builtin_ops.m"
                  backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__V_85_85, backend_libs__builtin_ops__V_102_102, backend_libs__builtin_ops__V_82_82);
                }
#line 2833 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_85_85 == (MR_Integer) 0);
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 163 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
                  *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_85_85;
#line 163 "builtin_ops.m"
                else
#line 163 "builtin_ops.m"
                  {
#line 163 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_86_86;

#line 163 "builtin_ops.m"
                    {
#line 163 "builtin_ops.m"
                      backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_89, &backend_libs__builtin_ops__V_86_86, backend_libs__builtin_ops__V_101_101, backend_libs__builtin_ops__V_83_83);
                    }
#line 2853 "backend_libs.builtin_ops.c"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_86_86 == (MR_Integer) 0);
#line 163 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 163 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
                      *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_86_86;
#line 163 "builtin_ops.m"
                    else
#line 163 "builtin_ops.m"
                      {
#line 163 "builtin_ops.m"
                        /* direct tailcall eliminated */
#line 163 "builtin_ops.m"
                        {
#line 163 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_100_100;
#line 163 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_84_84;

#line 163 "builtin_ops.m"
                          backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
#line 163 "builtin_ops.m"
                          backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 163 "builtin_ops.m"
                        }
#line 163 "builtin_ops.m"
                        continue;
#line 163 "builtin_ops.m"
                      }
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
            else
#line 2890 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2905 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2911 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2917 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
            if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2923 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
            else
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 163 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_56_56;
#line 163 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_108_108 = (MR_Integer) backend_libs__builtin_ops__V_107_107;
#line 163 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_109_109 = (MR_Integer) backend_libs__builtin_ops__V_54_54;

#line 163 "builtin_ops.m"
                {
#line 163 "builtin_ops.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__V_56_56, backend_libs__builtin_ops__V_108_108, backend_libs__builtin_ops__V_109_109);
                }
#line 2945 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_56_56 == (MR_Integer) 0);
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 163 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
                  *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_56_56;
#line 163 "builtin_ops.m"
                else
#line 163 "builtin_ops.m"
                  {
#line 163 "builtin_ops.m"
                    /* direct tailcall eliminated */
#line 163 "builtin_ops.m"
                    {
#line 163 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_106_106;
#line 163 "builtin_ops.m"
                      MR_Word backend_libs__builtin_ops__HeadVar__3__tmp_copy_3 = backend_libs__builtin_ops__V_55_55;

#line 163 "builtin_ops.m"
                      backend_libs__builtin_ops__HeadVar__3_3 = backend_libs__builtin_ops__HeadVar__3__tmp_copy_3;
#line 163 "builtin_ops.m"
                      backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 163 "builtin_ops.m"
                    }
#line 163 "builtin_ops.m"
                    continue;
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
      }
#line 163 "builtin_ops.m"
      break;
#line 163 "builtin_ops.m"
    }
#line 163 "builtin_ops.m"
}

#line 163 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0(
#line 163 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_21,
#line 163 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 163 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 163 "builtin_ops.m"
{
#line 163 "builtin_ops.m"
  while (MR_TRUE)
#line 163 "builtin_ops.m"
    {
#line 163 "builtin_ops.m"
      /* tailcall optimized into a loop */
#line 163 "builtin_ops.m"
      {
#line 163 "builtin_ops.m"
        MR_bool backend_libs__builtin_ops__succeeded;
#line 163 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastX_19 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 163 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastY_20 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 163 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_19 == backend_libs__builtin_ops__CastY_20);
#line 163 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Float backend_libs__builtin_ops__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 163 "builtin_ops.m"
            MR_Float backend_libs__builtin_ops__V_8_8;

#line 163 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 163 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 3040 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_7_7 == backend_libs__builtin_ops__V_8_8);
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 163 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__V_6_6;

#line 163 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 163 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 3065 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_5_5 == backend_libs__builtin_ops__V_6_6);
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_3_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 163 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_4_4;

#line 163 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 163 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__V_4_4 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 3090 "backend_libs.builtin_ops.c"
                {
#line 3092 "backend_libs.builtin_ops.c"
                  return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_4_4);
                }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
        if (((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 3)));
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_16_16;
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_17_17;
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_18_18;

#line 163 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 163 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
#line 3130 "backend_libs.builtin_ops.c"
                {
#line 3132 "backend_libs.builtin_ops.c"
                  backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_16_16);
                }
#line 163 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
                  {
#line 3139 "backend_libs.builtin_ops.c"
                    {
#line 3141 "backend_libs.builtin_ops.c"
                      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_14_14, backend_libs__builtin_ops__V_17_17);
                    }
#line 163 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 3146 "backend_libs.builtin_ops.c"
                      {
#line 3148 "backend_libs.builtin_ops.c"
                        /* direct tailcall eliminated */
#line 3150 "backend_libs.builtin_ops.c"
                        {
#line 3152 "backend_libs.builtin_ops.c"
                          MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_15_15;
#line 3154 "backend_libs.builtin_ops.c"
                          MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_18_18;

#line 3157 "backend_libs.builtin_ops.c"
                          backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 3159 "backend_libs.builtin_ops.c"
                          backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 3161 "backend_libs.builtin_ops.c"
                        }
#line 3163 "backend_libs.builtin_ops.c"
                        continue;
#line 3165 "backend_libs.builtin_ops.c"
                      }
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
          {
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_11_11;
#line 163 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_12_12;

#line 163 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = ((((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 163 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "builtin_ops.m"
                backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 3196 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_9_9 == backend_libs__builtin_ops__V_11_11);
#line 163 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 3200 "backend_libs.builtin_ops.c"
                  {
#line 3202 "backend_libs.builtin_ops.c"
                    /* direct tailcall eliminated */
#line 3204 "backend_libs.builtin_ops.c"
                    {
#line 3206 "backend_libs.builtin_ops.c"
                      MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_10_10;
#line 3208 "backend_libs.builtin_ops.c"
                      MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_12_12;

#line 3211 "backend_libs.builtin_ops.c"
                      backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 3213 "backend_libs.builtin_ops.c"
                      backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 3215 "backend_libs.builtin_ops.c"
                    }
#line 3217 "backend_libs.builtin_ops.c"
                    continue;
#line 3219 "backend_libs.builtin_ops.c"
                  }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
          }
#line 163 "builtin_ops.m"
        return backend_libs__builtin_ops__succeeded;
#line 163 "builtin_ops.m"
      }
#line 163 "builtin_ops.m"
      break;
#line 163 "builtin_ops.m"
    }
#line 163 "builtin_ops.m"
}

#line 157 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0(
#line 157 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_56,
#line 157 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 157 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 157 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 157 "builtin_ops.m"
{
#line 157 "builtin_ops.m"
  {
#line 157 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 157 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_54 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 157 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_55 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 157 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_54 == backend_libs__builtin_ops__CastY_55);
#line 157 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 3262 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 157 "builtin_ops.m"
      {
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_64_64 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_6_6 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
#line 157 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1)));
#line 157 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_8_8;

#line 157 "builtin_ops.m"
            {
#line 157 "builtin_ops.m"
              mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_64_64, backend_libs__builtin_ops__V_6_6);
            }
#line 3291 "backend_libs.builtin_ops.c"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_8_8 == (MR_Integer) 0);
#line 157 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 157 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 157 "builtin_ops.m"
              *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_8_8;
#line 157 "builtin_ops.m"
            else
#line 157 "builtin_ops.m"
              {
#line 157 "builtin_ops.m"
                backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_63_63, backend_libs__builtin_ops__V_7_7);
#line 157 "builtin_ops.m"
                return;
              }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3314 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3320 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
        else
#line 3324 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
      }
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 157 "builtin_ops.m"
      {
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3339 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 157 "builtin_ops.m"
            {
#line 157 "builtin_ops.m"
              mercury__list____Compare____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_65_65, backend_libs__builtin_ops__V_53_53);
#line 157 "builtin_ops.m"
              return;
            }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3363 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
        else
#line 3367 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
      }
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 157 "builtin_ops.m"
      {
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_66_66 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_67_67 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3384 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3390 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_25_25 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0));
#line 157 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_26_26 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 1));
#line 157 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_27_27;

#line 157 "builtin_ops.m"
            {
#line 157 "builtin_ops.m"
              mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, &backend_libs__builtin_ops__V_27_27, backend_libs__builtin_ops__V_67_67, backend_libs__builtin_ops__V_25_25);
            }
#line 3410 "backend_libs.builtin_ops.c"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_27_27 == (MR_Integer) 0);
#line 157 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = !(backend_libs__builtin_ops__succeeded);
#line 157 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 157 "builtin_ops.m"
              *backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__V_27_27;
#line 157 "builtin_ops.m"
            else
#line 157 "builtin_ops.m"
              {
#line 157 "builtin_ops.m"
                mercury__builtin__compare_3_p_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_66_66, backend_libs__builtin_ops__V_26_26);
#line 157 "builtin_ops.m"
                return;
              }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
        else
#line 3431 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
      }
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
      {
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3444 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3450 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3456 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
        else
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 157 "builtin_ops.m"
            {
#line 157 "builtin_ops.m"
              backend_libs__builtin_ops____Compare____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_56, backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_68_68, backend_libs__builtin_ops__V_41_41);
#line 157 "builtin_ops.m"
              return;
            }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
      }
#line 157 "builtin_ops.m"
  }
#line 157 "builtin_ops.m"
}

#line 157 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0(
#line 157 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_17,
#line 157 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 157 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 157 "builtin_ops.m"
{
#line 157 "builtin_ops.m"
  {
#line 157 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 157 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_15 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 157 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_16 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 157 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_15 == backend_libs__builtin_ops__CastY_16);
#line 157 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 157 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 157 "builtin_ops.m"
      {
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_3_3 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1)));
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_5_5;
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_6_6;

#line 157 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 157 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            backend_libs__builtin_ops__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 157 "builtin_ops.m"
            backend_libs__builtin_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 3532 "backend_libs.builtin_ops.c"
            {
#line 3534 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_5_5);
            }
#line 157 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 3539 "backend_libs.builtin_ops.c"
              {
#line 3541 "backend_libs.builtin_ops.c"
                return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_4_4, backend_libs__builtin_ops__V_6_6);
              }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
      }
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 157 "builtin_ops.m"
      {
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_14_14;

#line 157 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 157 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            backend_libs__builtin_ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 3567 "backend_libs.builtin_ops.c"
            {
#line 3569 "backend_libs.builtin_ops.c"
              return backend_libs__builtin_ops__succeeded = mercury__list____Unify____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_14_14);
            }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
      }
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 157 "builtin_ops.m"
      {
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_7_7 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0));
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_8_8 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 1));
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_9_9;
#line 157 "builtin_ops.m"
        MR_Box backend_libs__builtin_ops__V_10_10;

#line 157 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 157 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            backend_libs__builtin_ops__V_9_9 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));
#line 157 "builtin_ops.m"
            backend_libs__builtin_ops__V_10_10 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
#line 3601 "backend_libs.builtin_ops.c"
            {
#line 3603 "backend_libs.builtin_ops.c"
              backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_9_9);
            }
#line 157 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 3608 "backend_libs.builtin_ops.c"
              {
#line 3610 "backend_libs.builtin_ops.c"
                return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_10_10);
              }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
      }
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
      {
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 157 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_12_12;

#line 157 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 157 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            backend_libs__builtin_ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 3634 "backend_libs.builtin_ops.c"
            {
#line 3636 "backend_libs.builtin_ops.c"
              return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_11_11, backend_libs__builtin_ops__V_12_12);
            }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
      }
#line 157 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 157 "builtin_ops.m"
  }
#line 157 "builtin_ops.m"
}

#line 126 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(
#line 126 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 126 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 126 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 126 "builtin_ops.m"
{
#line 126 "builtin_ops.m"
  {
#line 126 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 126 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar1_4 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 126 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__Cast_HeadVar2_5 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 126 "builtin_ops.m"
    {
#line 126 "builtin_ops.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__Cast_HeadVar1_4, backend_libs__builtin_ops__Cast_HeadVar2_5);
#line 126 "builtin_ops.m"
      return;
    }
#line 126 "builtin_ops.m"
  }
#line 126 "builtin_ops.m"
}

#line 126 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(
#line 126 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_1,
#line 126 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 126 "builtin_ops.m"
{
#line 3691 "backend_libs.builtin_ops.c"
  {
#line 3693 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 3696 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 3698 "backend_libs.builtin_ops.c"
  }
#line 126 "builtin_ops.m"
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
    MR_Integer backend_libs__builtin_ops__CastX_11 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 47 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 47 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_11 == backend_libs__builtin_ops__CastY_12);
#line 47 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 3727 "backend_libs.builtin_ops.c"
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
#line 3752 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "builtin_ops.m"
        else
#line 47 "builtin_ops.m"
          {
#line 47 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 > backend_libs__builtin_ops__V_5_5);
#line 47 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 3762 "backend_libs.builtin_ops.c"
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
                if ((backend_libs__builtin_ops__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42)))))
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
                if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
                else
#line 47 "builtin_ops.m"
                  {
#line 47 "builtin_ops.m"
                    MR_Integer backend_libs__builtin_ops__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "builtin_ops.m"
                    MR_Integer backend_libs__builtin_ops__V_10_10;

#line 47 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 47 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 47 "builtin_ops.m"
                      {
#line 47 "builtin_ops.m"
                        backend_libs__builtin_ops__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__builtin_ops__V_6_6, backend_libs__builtin_ops__V_9_9, backend_libs__builtin_ops__V_10_10);
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
#line 4383 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 7;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 4389 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 8;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 4395 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 9;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 4401 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 14;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41)))))
#line 4407 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 43;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42)))))
#line 4413 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 44;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 4419 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 12;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 4425 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 33;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 4431 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 34;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 4437 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 41;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 4443 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 39;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 4449 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 37;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 4455 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 38;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 4461 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 36;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 4467 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 31;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 4473 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 35;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 4479 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 30;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 4485 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 32;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 4491 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 40;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4497 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 4503 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 3;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 4509 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 28;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 4515 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 26;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 4521 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 27;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 4527 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 25;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4533 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 4;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4539 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 2;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4545 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 1;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 4551 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 10;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 4557 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 11;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 4563 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 13;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 4569 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 42;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 4575 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 23;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 4581 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 17;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 4587 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 22;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 4593 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 20;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 4599 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 21;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 4605 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 19;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 4611 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 18;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 4617 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 16;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4623 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 5;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 4629 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 6;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 4635 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 29;
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 4641 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 15;
#line 47 "builtin_ops.m"
    else
#line 4645 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 24;
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
    MR_Integer backend_libs__builtin_ops__CastX_93 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_94 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_93 == backend_libs__builtin_ops__CastY_94);
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41)))))
#line 47 "builtin_ops.m"
      {
#line 47 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastX_89 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastY_90 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_90 == backend_libs__builtin_ops__CastX_89);
#line 47 "builtin_ops.m"
      }
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42)))))
#line 47 "builtin_ops.m"
      {
#line 47 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastX_91 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 47 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__CastY_92 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 47 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastY_92 == backend_libs__builtin_ops__CastX_91);
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
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
    if ((backend_libs__builtin_ops__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
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
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 5340 "backend_libs.builtin_ops.c"
            {
#line 5342 "backend_libs.builtin_ops.c"
              return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(backend_libs__builtin_ops__V_33_33, backend_libs__builtin_ops__V_34_34);
            }
#line 47 "builtin_ops.m"
          }
#line 47 "builtin_ops.m"
      }
#line 47 "builtin_ops.m"
    else
#line 47 "builtin_ops.m"
      {
#line 47 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__V_52_52;

#line 47 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 47 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 47 "builtin_ops.m"
          {
#line 47 "builtin_ops.m"
            backend_libs__builtin_ops__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 5366 "backend_libs.builtin_ops.c"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_51_51 == backend_libs__builtin_ops__V_52_52);
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

#line 122 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0(
#line 122 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__HeadVar__1_1,
#line 122 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2,
#line 122 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__3_3)
#line 122 "builtin_ops.m"
{
#line 122 "builtin_ops.m"
  {
#line 122 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 122 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_12 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;
#line 122 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_13 = (MR_Integer) backend_libs__builtin_ops__HeadVar__3_3;

#line 122 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_12 == backend_libs__builtin_ops__CastY_13);
#line 122 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 5403 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 122 "builtin_ops.m"
    else
#line 122 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 122 "builtin_ops.m"
      {
#line 122 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 122 "builtin_ops.m"
          {
#line 122 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));
#line 122 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__V_18_18 = (MR_Integer) backend_libs__builtin_ops__V_16_16;
#line 122 "builtin_ops.m"
            MR_Integer backend_libs__builtin_ops__V_19_19 = (MR_Integer) backend_libs__builtin_ops__V_5_5;

#line 122 "builtin_ops.m"
            {
#line 122 "builtin_ops.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__builtin_ops__HeadVar__1_1, backend_libs__builtin_ops__V_18_18, backend_libs__builtin_ops__V_19_19);
#line 122 "builtin_ops.m"
              return;
            }
#line 122 "builtin_ops.m"
          }
#line 122 "builtin_ops.m"
        else
#line 5436 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "builtin_ops.m"
      }
#line 122 "builtin_ops.m"
    else
#line 122 "builtin_ops.m"
      {
#line 122 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "builtin_ops.m"
        if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5449 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "builtin_ops.m"
        else
#line 122 "builtin_ops.m"
          {
#line 122 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)));

#line 122 "builtin_ops.m"
            {
#line 122 "builtin_ops.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__builtin_ops_scalar_common_1[0], backend_libs__builtin_ops__HeadVar__1_1, ((MR_Box) (backend_libs__builtin_ops__V_17_17)), ((MR_Box) (backend_libs__builtin_ops__V_11_11)));
#line 122 "builtin_ops.m"
              return;
            }
#line 122 "builtin_ops.m"
          }
#line 122 "builtin_ops.m"
      }
#line 122 "builtin_ops.m"
  }
#line 122 "builtin_ops.m"
}

#line 122 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0(
#line 122 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__1_1,
#line 122 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__HeadVar__2_2)
#line 122 "builtin_ops.m"
{
#line 122 "builtin_ops.m"
  {
#line 122 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 122 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastX_7 = (MR_Integer) backend_libs__builtin_ops__HeadVar__1_1;
#line 122 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__CastY_8 = (MR_Integer) backend_libs__builtin_ops__HeadVar__2_2;

#line 122 "builtin_ops.m"
    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__CastX_7 == backend_libs__builtin_ops__CastY_8);
#line 122 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 122 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 122 "builtin_ops.m"
    else
#line 122 "builtin_ops.m"
    if (((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 122 "builtin_ops.m"
      {
#line 122 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_4_4;

#line 122 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 122 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 122 "builtin_ops.m"
          {
#line 122 "builtin_ops.m"
            backend_libs__builtin_ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 5517 "backend_libs.builtin_ops.c"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_3_3 == backend_libs__builtin_ops__V_4_4);
#line 122 "builtin_ops.m"
          }
#line 122 "builtin_ops.m"
      }
#line 122 "builtin_ops.m"
    else
#line 122 "builtin_ops.m"
      {
#line 122 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__TypeInfo_9_9;
#line 122 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_6_6;

#line 122 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 122 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 122 "builtin_ops.m"
          {
#line 122 "builtin_ops.m"
            backend_libs__builtin_ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));
#line 5542 "backend_libs.builtin_ops.c"
            backend_libs__builtin_ops__TypeInfo_9_9 = (MR_Word) &backend_libs__builtin_ops_scalar_common_1[0];
#line 5544 "backend_libs.builtin_ops.c"
            {
#line 5546 "backend_libs.builtin_ops.c"
              return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_9_9, ((MR_Box) (backend_libs__builtin_ops__V_5_5)), ((MR_Box) (backend_libs__builtin_ops__V_6_6)));
            }
#line 122 "builtin_ops.m"
          }
#line 122 "builtin_ops.m"
      }
#line 122 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 122 "builtin_ops.m"
  }
#line 122 "builtin_ops.m"
}

#line 154 "builtin_ops.m"
void MR_CALL 
backend_libs__builtin_ops__translate_builtin_5_p_0(
#line 154 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_24,
#line 154 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__FullyQualifiedModule_6,
#line 154 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__PredName_7,
#line 154 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__ProcId_8,
#line 154 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__Args_9,
#line 154 "builtin_ops.m"
  MR_Word * backend_libs__builtin_ops__Code_10)
#line 154 "builtin_ops.m"
{
#line 221 "builtin_ops.m"
  {
#line 221 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 221 "builtin_ops.m"
    MR_Word backend_libs__builtin_ops__CodePrime_13;
#line 216 "builtin_ops.m"
    MR_String backend_libs__builtin_ops__ModuleName_11;
#line 216 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__ProcNum_12;
#line 216 "builtin_ops.m"
    MR_Word backend_libs__builtin_ops__V_526_526;
#line 216 "builtin_ops.m"
    MR_Box backend_libs__builtin_ops__V_527_527;

#line 216 "builtin_ops.m"
    {
#line 216 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(backend_libs__builtin_ops__FullyQualifiedModule_6, &backend_libs__builtin_ops__ModuleName_11);
    }
#line 216 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 216 "builtin_ops.m"
      {
#line 217 "builtin_ops.m"
        {
#line 217 "builtin_ops.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__builtin_ops__ProcId_8, &backend_libs__builtin_ops__ProcNum_12);
        }
#line 234 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 234 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
          {
#line 234 "builtin_ops.m"
            backend_libs__builtin_ops__V_527_527 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 0));
#line 234 "builtin_ops.m"
            backend_libs__builtin_ops__V_526_526 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_9, (MR_Integer) 1)));
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "io") == 0))
#line 237 "builtin_ops.m"
              {
#line 239 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 237 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 237 "builtin_ops.m"
                  {
#line 239 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 241 "builtin_ops.m"
                      {
#line 241 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_get_io_state") == 0))
#line 240 "builtin_ops.m"
                          {
#line 240 "builtin_ops.m"
                            {
#line 240 "builtin_ops.m"
                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Args_9));
#line 240 "builtin_ops.m"
                            }
#line 240 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 240 "builtin_ops.m"
                          }
#line 241 "builtin_ops.m"
                        else
#line 241 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_set_io_state") == 0))
#line 242 "builtin_ops.m"
                          {
#line 243 "builtin_ops.m"
                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_2[0]);
#line 242 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 242 "builtin_ops.m"
                          }
#line 241 "builtin_ops.m"
                        else
#line 241 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 241 "builtin_ops.m"
                      }
#line 237 "builtin_ops.m"
                  }
#line 237 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "int") == 0))
#line 294 "builtin_ops.m"
              {
#line 294 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_538_538;
#line 294 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__V_539_539;

#line 359 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                  {
#line 359 "builtin_ops.m"
                    backend_libs__builtin_ops__V_539_539 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                    backend_libs__builtin_ops__V_538_538 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "*") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_54;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_102_102;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_103_103;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_104_104;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_105_105;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_257;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 348 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_257 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_104_104, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_105_105, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_54));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 2) = ((MR_Box) (backend_libs__builtin_ops__V_104_104));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_103_103, 3) = ((MR_Box) (backend_libs__builtin_ops__V_105_105));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_257;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_103_103));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "+") == 0))
#line 296 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0))
#line 309 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "builtin_ops.m"
                          {
#line 310 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_145_145;

#line 312 "builtin_ops.m"
                            {
#line 312 "builtin_ops.m"
                              backend_libs__builtin_ops__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 312 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_145_145, 0) = backend_libs__builtin_ops__V_527_527;
#line 312 "builtin_ops.m"
                            }
#line 312 "builtin_ops.m"
                            {
#line 312 "builtin_ops.m"
                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 312 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 312 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_145_145));
#line 312 "builtin_ops.m"
                            }
#line 310 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 310 "builtin_ops.m"
                          }
#line 309 "builtin_ops.m"
                        else
#line 298 "builtin_ops.m"
                          {
#line 298 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 298 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_157_157;
#line 298 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_158_158;
#line 298 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_159_159;
#line 298 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_160_160;
#line 298 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_232 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));

#line 298 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 298 "builtin_ops.m"
                              {
#line 301 "builtin_ops.m"
                                backend_libs__builtin_ops__V_158_158 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 301 "builtin_ops.m"
                                {
#line 301 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 301 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_159_159, 0) = backend_libs__builtin_ops__V_527_527;
#line 301 "builtin_ops.m"
                                }
#line 301 "builtin_ops.m"
                                {
#line 301 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 301 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_160_160, 0) = backend_libs__builtin_ops__V_539_539;
#line 301 "builtin_ops.m"
                                }
#line 301 "builtin_ops.m"
                                {
#line 301 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_157_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 301 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 301 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 1) = ((MR_Box) (backend_libs__builtin_ops__V_158_158));
#line 301 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 2) = ((MR_Box) (backend_libs__builtin_ops__V_159_159));
#line 301 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_157_157, 3) = ((MR_Box) (backend_libs__builtin_ops__V_160_160));
#line 301 "builtin_ops.m"
                                }
#line 301 "builtin_ops.m"
                                {
#line 301 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 301 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_232;
#line 301 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_157_157));
#line 301 "builtin_ops.m"
                                }
#line 301 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 298 "builtin_ops.m"
                              }
#line 298 "builtin_ops.m"
                          }
#line 296 "builtin_ops.m"
                      else
#line 296 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 1))
#line 298 "builtin_ops.m"
                        {
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_153_153;
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_154_154;
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_155_155;
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_156_156;
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_346_346;
#line 298 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_349;

#line 298 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 298 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 298 "builtin_ops.m"
                            {
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_349 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_346_346 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 298 "builtin_ops.m"
                                {
#line 304 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_154_154 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 304 "builtin_ops.m"
                                  {
#line 304 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_155_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 304 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_155_155, 0) = backend_libs__builtin_ops__Z_349;
#line 304 "builtin_ops.m"
                                  }
#line 304 "builtin_ops.m"
                                  {
#line 304 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 304 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_156_156, 0) = backend_libs__builtin_ops__V_539_539;
#line 304 "builtin_ops.m"
                                  }
#line 304 "builtin_ops.m"
                                  {
#line 304 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_153_153 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 304 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 304 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 1) = ((MR_Box) (backend_libs__builtin_ops__V_154_154));
#line 304 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 2) = ((MR_Box) (backend_libs__builtin_ops__V_155_155));
#line 304 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_153_153, 3) = ((MR_Box) (backend_libs__builtin_ops__V_156_156));
#line 304 "builtin_ops.m"
                                  }
#line 304 "builtin_ops.m"
                                  {
#line 304 "builtin_ops.m"
                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 304 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
#line 304 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_153_153));
#line 304 "builtin_ops.m"
                                  }
#line 304 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 298 "builtin_ops.m"
                                }
#line 298 "builtin_ops.m"
                            }
#line 298 "builtin_ops.m"
                        }
#line 296 "builtin_ops.m"
                      else
#line 296 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 2))
#line 298 "builtin_ops.m"
                        {
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_149_149;
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_150_150;
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_151_151;
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_152_152;
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_352_352;
#line 298 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_355;

#line 298 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 298 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 298 "builtin_ops.m"
                            {
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_355 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_352_352 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 298 "builtin_ops.m"
                                {
#line 307 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_150_150 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 307 "builtin_ops.m"
                                  {
#line 307 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 307 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_151_151, 0) = backend_libs__builtin_ops__Z_355;
#line 307 "builtin_ops.m"
                                  }
#line 307 "builtin_ops.m"
                                  {
#line 307 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 307 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_152_152, 0) = backend_libs__builtin_ops__V_527_527;
#line 307 "builtin_ops.m"
                                  }
#line 307 "builtin_ops.m"
                                  {
#line 307 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_149_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 307 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 307 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 1) = ((MR_Box) (backend_libs__builtin_ops__V_150_150));
#line 307 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 2) = ((MR_Box) (backend_libs__builtin_ops__V_151_151));
#line 307 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_149_149, 3) = ((MR_Box) (backend_libs__builtin_ops__V_152_152));
#line 307 "builtin_ops.m"
                                  }
#line 307 "builtin_ops.m"
                                  {
#line 307 "builtin_ops.m"
                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 307 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 307 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_149_149));
#line 307 "builtin_ops.m"
                                  }
#line 307 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 298 "builtin_ops.m"
                                }
#line 298 "builtin_ops.m"
                            }
#line 298 "builtin_ops.m"
                        }
#line 296 "builtin_ops.m"
                      else
#line 296 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "-") == 0))
#line 315 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0))
#line 328 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "builtin_ops.m"
                          {
#line 329 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_123_123;
#line 329 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_127_127;

#line 331 "builtin_ops.m"
                            {
#line 331 "builtin_ops.m"
                              backend_libs__builtin_ops__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 331 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_127_127, 0) = backend_libs__builtin_ops__V_527_527;
#line 331 "builtin_ops.m"
                            }
#line 331 "builtin_ops.m"
                            {
#line 331 "builtin_ops.m"
                              backend_libs__builtin_ops__V_123_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 331 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 331 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 331 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_2[1])));
#line 331 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 3) = ((MR_Box) (backend_libs__builtin_ops__V_127_127));
#line 331 "builtin_ops.m"
                            }
#line 331 "builtin_ops.m"
                            {
#line 331 "builtin_ops.m"
                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 331 "builtin_ops.m"
                              MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_123_123));
#line 331 "builtin_ops.m"
                            }
#line 329 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 329 "builtin_ops.m"
                          }
#line 328 "builtin_ops.m"
                        else
#line 317 "builtin_ops.m"
                          {
#line 317 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 317 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_139_139;
#line 317 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_140_140;
#line 317 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_141_141;
#line 317 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_142_142;
#line 317 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_243 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));

#line 317 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_130_130 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 317 "builtin_ops.m"
                              {
#line 320 "builtin_ops.m"
                                backend_libs__builtin_ops__V_140_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 320 "builtin_ops.m"
                                {
#line 320 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_141_141, 0) = backend_libs__builtin_ops__V_527_527;
#line 320 "builtin_ops.m"
                                }
#line 320 "builtin_ops.m"
                                {
#line 320 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_142_142, 0) = backend_libs__builtin_ops__V_539_539;
#line 320 "builtin_ops.m"
                                }
#line 320 "builtin_ops.m"
                                {
#line 320 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 320 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 320 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 1) = ((MR_Box) (backend_libs__builtin_ops__V_140_140));
#line 320 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 2) = ((MR_Box) (backend_libs__builtin_ops__V_141_141));
#line 320 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_139_139, 3) = ((MR_Box) (backend_libs__builtin_ops__V_142_142));
#line 320 "builtin_ops.m"
                                }
#line 320 "builtin_ops.m"
                                {
#line 320 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_243;
#line 320 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_139_139));
#line 320 "builtin_ops.m"
                                }
#line 320 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 317 "builtin_ops.m"
                              }
#line 317 "builtin_ops.m"
                          }
#line 315 "builtin_ops.m"
                      else
#line 315 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 1))
#line 317 "builtin_ops.m"
                        {
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_135_135;
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_136_136;
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_137_137;
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_138_138;
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_358_358;
#line 317 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_361;

#line 317 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 317 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 317 "builtin_ops.m"
                            {
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_361 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_358_358 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 317 "builtin_ops.m"
                                {
#line 323 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_136_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 323 "builtin_ops.m"
                                  {
#line 323 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 323 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_137_137, 0) = backend_libs__builtin_ops__V_539_539;
#line 323 "builtin_ops.m"
                                  }
#line 323 "builtin_ops.m"
                                  {
#line 323 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_138_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 323 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_138_138, 0) = backend_libs__builtin_ops__Z_361;
#line 323 "builtin_ops.m"
                                  }
#line 323 "builtin_ops.m"
                                  {
#line 323 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_135_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 323 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 323 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 1) = ((MR_Box) (backend_libs__builtin_ops__V_136_136));
#line 323 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 2) = ((MR_Box) (backend_libs__builtin_ops__V_137_137));
#line 323 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_135_135, 3) = ((MR_Box) (backend_libs__builtin_ops__V_138_138));
#line 323 "builtin_ops.m"
                                  }
#line 323 "builtin_ops.m"
                                  {
#line 323 "builtin_ops.m"
                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
#line 323 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_135_135));
#line 323 "builtin_ops.m"
                                  }
#line 323 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 317 "builtin_ops.m"
                                }
#line 317 "builtin_ops.m"
                            }
#line 317 "builtin_ops.m"
                        }
#line 315 "builtin_ops.m"
                      else
#line 315 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 2))
#line 317 "builtin_ops.m"
                        {
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_131_131;
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_132_132;
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_133_133;
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_134_134;
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_364_364;
#line 317 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_367;

#line 317 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 317 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 317 "builtin_ops.m"
                            {
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_367 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_364_364 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 317 "builtin_ops.m"
                                {
#line 326 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_132_132 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 326 "builtin_ops.m"
                                  {
#line 326 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 326 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_133_133, 0) = backend_libs__builtin_ops__V_527_527;
#line 326 "builtin_ops.m"
                                  }
#line 326 "builtin_ops.m"
                                  {
#line 326 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 326 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_134_134, 0) = backend_libs__builtin_ops__Z_367;
#line 326 "builtin_ops.m"
                                  }
#line 326 "builtin_ops.m"
                                  {
#line 326 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 326 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 326 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 1) = ((MR_Box) (backend_libs__builtin_ops__V_132_132));
#line 326 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 2) = ((MR_Box) (backend_libs__builtin_ops__V_133_133));
#line 326 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_131_131, 3) = ((MR_Box) (backend_libs__builtin_ops__V_134_134));
#line 326 "builtin_ops.m"
                                  }
#line 326 "builtin_ops.m"
                                  {
#line 326 "builtin_ops.m"
                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 326 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_131_131));
#line 326 "builtin_ops.m"
                                  }
#line 326 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 317 "builtin_ops.m"
                                }
#line 317 "builtin_ops.m"
                            }
#line 317 "builtin_ops.m"
                        }
#line 315 "builtin_ops.m"
                      else
#line 315 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "<") == 0))
#line 369 "builtin_ops.m"
                      {
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_92_92;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_93_93;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_94_94;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__CompareOp_262;

#line 370 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 369 "builtin_ops.m"
                          {
#line 370 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 369 "builtin_ops.m"
                              {
#line 366 "builtin_ops.m"
                                backend_libs__builtin_ops__CompareOp_262 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_93_93, 0) = backend_libs__builtin_ops__V_527_527;
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_94_94, 0) = backend_libs__builtin_ops__V_539_539;
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_262));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 2) = ((MR_Box) (backend_libs__builtin_ops__V_93_93));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_92_92, 3) = ((MR_Box) (backend_libs__builtin_ops__V_94_94));
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_92_92));
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 369 "builtin_ops.m"
                              }
#line 369 "builtin_ops.m"
                          }
#line 369 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) ">") == 0))
#line 369 "builtin_ops.m"
                      {
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_388_388;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_389_389;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_390_390;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__CompareOp_393;

#line 370 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 369 "builtin_ops.m"
                          {
#line 370 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 369 "builtin_ops.m"
                              {
#line 365 "builtin_ops.m"
                                backend_libs__builtin_ops__CompareOp_393 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_389_389 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_389_389, 0) = backend_libs__builtin_ops__V_527_527;
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_390_390 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_390_390, 0) = backend_libs__builtin_ops__V_539_539;
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_388_388 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_393));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 2) = ((MR_Box) (backend_libs__builtin_ops__V_389_389));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_388_388, 3) = ((MR_Box) (backend_libs__builtin_ops__V_390_390));
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_388_388));
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 369 "builtin_ops.m"
                              }
#line 369 "builtin_ops.m"
                          }
#line 369 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "\\") == 0))
#line 362 "builtin_ops.m"
                      {
#line 362 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_97_97;
#line 362 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_98_98;
#line 362 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_99_99;

#line 362 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 362 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 362 "builtin_ops.m"
                          {
#line 362 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 362 "builtin_ops.m"
                              {
#line 363 "builtin_ops.m"
                                backend_libs__builtin_ops__V_98_98 = (MR_Integer) 6;
#line 363 "builtin_ops.m"
                                {
#line 363 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 363 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_99_99, 0) = backend_libs__builtin_ops__V_527_527;
#line 363 "builtin_ops.m"
                                }
#line 363 "builtin_ops.m"
                                {
#line 363 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 363 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 363 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 1) = ((MR_Box) (backend_libs__builtin_ops__V_98_98));
#line 363 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_97_97, 2) = ((MR_Box) (backend_libs__builtin_ops__V_99_99));
#line 363 "builtin_ops.m"
                                }
#line 363 "builtin_ops.m"
                                {
#line 363 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 363 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_97_97));
#line 363 "builtin_ops.m"
                                }
#line 363 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 362 "builtin_ops.m"
                              }
#line 362 "builtin_ops.m"
                          }
#line 362 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "/\\") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_368;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_371_371;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_372_372;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_373_373;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_374_374;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_377;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 356 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_368 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_377 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_371_371 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_371_371 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_373_373 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_373_373, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_374_374 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_374_374, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_372_372 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_368));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 2) = ((MR_Box) (backend_libs__builtin_ops__V_373_373));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_372_372, 3) = ((MR_Box) (backend_libs__builtin_ops__V_374_374));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_377;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_372_372));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "=<") == 0))
#line 369 "builtin_ops.m"
                      {
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_380_380;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_381_381;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_382_382;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__CompareOp_385;

#line 370 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 369 "builtin_ops.m"
                          {
#line 370 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 369 "builtin_ops.m"
                              {
#line 368 "builtin_ops.m"
                                backend_libs__builtin_ops__CompareOp_385 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_381_381 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_381_381, 0) = backend_libs__builtin_ops__V_527_527;
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_382_382 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_382_382, 0) = backend_libs__builtin_ops__V_539_539;
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_380_380 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_385));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 2) = ((MR_Box) (backend_libs__builtin_ops__V_381_381));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_380_380, 3) = ((MR_Box) (backend_libs__builtin_ops__V_382_382));
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_380_380));
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 369 "builtin_ops.m"
                              }
#line 369 "builtin_ops.m"
                          }
#line 369 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) ">=") == 0))
#line 369 "builtin_ops.m"
                      {
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_396_396;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_397_397;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_398_398;
#line 369 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__CompareOp_401;

#line 370 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 369 "builtin_ops.m"
                          {
#line 370 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_538_538 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 369 "builtin_ops.m"
                              {
#line 367 "builtin_ops.m"
                                backend_libs__builtin_ops__CompareOp_401 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_397_397 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_397_397, 0) = backend_libs__builtin_ops__V_527_527;
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_398_398 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_398_398, 0) = backend_libs__builtin_ops__V_539_539;
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_396_396 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_401));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 2) = ((MR_Box) (backend_libs__builtin_ops__V_397_397));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_396_396, 3) = ((MR_Box) (backend_libs__builtin_ops__V_398_398));
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                {
#line 371 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_396_396));
#line 371 "builtin_ops.m"
                                }
#line 371 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 369 "builtin_ops.m"
                              }
#line 369 "builtin_ops.m"
                          }
#line 369 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "\\/") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_402;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_405_405;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_406_406;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_407_407;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_408_408;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_411;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 357 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_402 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_411 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_407_407 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_407_407, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_408_408 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_408_408, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_406_406 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_402));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 2) = ((MR_Box) (backend_libs__builtin_ops__V_407_407));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_406_406, 3) = ((MR_Box) (backend_libs__builtin_ops__V_408_408));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_411;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_406_406));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "xor") == 0))
#line 334 "builtin_ops.m"
                      {
#line 334 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_108_108;
#line 334 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_254;

#line 334 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 334 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 334 "builtin_ops.m"
                          {
#line 334 "builtin_ops.m"
                            backend_libs__builtin_ops__Z_254 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 334 "builtin_ops.m"
                            backend_libs__builtin_ops__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 334 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 338 "builtin_ops.m"
                              {
#line 338 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0))
#line 336 "builtin_ops.m"
                                  {
#line 336 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_117_117;
#line 336 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_119_119;
#line 336 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_120_120;

#line 337 "builtin_ops.m"
                                    {
#line 337 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_119_119, 0) = backend_libs__builtin_ops__V_527_527;
#line 337 "builtin_ops.m"
                                    }
#line 337 "builtin_ops.m"
                                    {
#line 337 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 337 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_120_120, 0) = backend_libs__builtin_ops__V_539_539;
#line 337 "builtin_ops.m"
                                    }
#line 337 "builtin_ops.m"
                                    {
#line 337 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_117_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 337 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 337 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 337 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 2) = ((MR_Box) (backend_libs__builtin_ops__V_119_119));
#line 337 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_117_117, 3) = ((MR_Box) (backend_libs__builtin_ops__V_120_120));
#line 337 "builtin_ops.m"
                                    }
#line 337 "builtin_ops.m"
                                    {
#line 337 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 337 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_254;
#line 337 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_117_117));
#line 337 "builtin_ops.m"
                                    }
#line 336 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 336 "builtin_ops.m"
                                  }
#line 338 "builtin_ops.m"
                                else
#line 338 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 1))
#line 339 "builtin_ops.m"
                                  {
#line 339 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_113_113;
#line 339 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_115_115;
#line 339 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_116_116;

#line 340 "builtin_ops.m"
                                    {
#line 340 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 340 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_115_115, 0) = backend_libs__builtin_ops__V_527_527;
#line 340 "builtin_ops.m"
                                    }
#line 340 "builtin_ops.m"
                                    {
#line 340 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 340 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_116_116, 0) = backend_libs__builtin_ops__Z_254;
#line 340 "builtin_ops.m"
                                    }
#line 340 "builtin_ops.m"
                                    {
#line 340 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 340 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 340 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 340 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 2) = ((MR_Box) (backend_libs__builtin_ops__V_115_115));
#line 340 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_113_113, 3) = ((MR_Box) (backend_libs__builtin_ops__V_116_116));
#line 340 "builtin_ops.m"
                                    }
#line 340 "builtin_ops.m"
                                    {
#line 340 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 340 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_539_539;
#line 340 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_113_113));
#line 340 "builtin_ops.m"
                                    }
#line 339 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 339 "builtin_ops.m"
                                  }
#line 338 "builtin_ops.m"
                                else
#line 338 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 2))
#line 342 "builtin_ops.m"
                                  {
#line 342 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_109_109;
#line 342 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_111_111;
#line 342 "builtin_ops.m"
                                    MR_Word backend_libs__builtin_ops__V_112_112;

#line 343 "builtin_ops.m"
                                    {
#line 343 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 343 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_111_111, 0) = backend_libs__builtin_ops__V_539_539;
#line 343 "builtin_ops.m"
                                    }
#line 343 "builtin_ops.m"
                                    {
#line 343 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 343 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_112_112, 0) = backend_libs__builtin_ops__Z_254;
#line 343 "builtin_ops.m"
                                    }
#line 343 "builtin_ops.m"
                                    {
#line 343 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 343 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 343 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 343 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 2) = ((MR_Box) (backend_libs__builtin_ops__V_111_111));
#line 343 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_109_109, 3) = ((MR_Box) (backend_libs__builtin_ops__V_112_112));
#line 343 "builtin_ops.m"
                                    }
#line 343 "builtin_ops.m"
                                    {
#line 343 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 343 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
#line 343 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_109_109));
#line 343 "builtin_ops.m"
                                    }
#line 342 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 342 "builtin_ops.m"
                                  }
#line 338 "builtin_ops.m"
                                else
#line 338 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 338 "builtin_ops.m"
                              }
#line 334 "builtin_ops.m"
                          }
#line 334 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "plus") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_422;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_425_425;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_426_426;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_427_427;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_428_428;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_431;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 346 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_422 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_431 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_425_425 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_427_427 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_427_427, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_428_428 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_428_428, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_426_426 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_422));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 2) = ((MR_Box) (backend_libs__builtin_ops__V_427_427));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_426_426, 3) = ((MR_Box) (backend_libs__builtin_ops__V_428_428));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_431;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_426_426));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "minus") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_412;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_415_415;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_416_416;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_417_417;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_418_418;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_421;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 347 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_412 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_421 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_415_415 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_417_417 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_417_417, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_418_418 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_418_418, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_416_416 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_412));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 2) = ((MR_Box) (backend_libs__builtin_ops__V_417_417));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_416_416, 3) = ((MR_Box) (backend_libs__builtin_ops__V_418_418));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_421;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_416_416));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "times") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_432;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_435_435;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_436_436;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_437_437;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_438_438;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_441;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 349 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_432 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_441 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_435_435 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_437_437 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_437_437, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_438_438 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_438_438, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_436_436 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_432));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 2) = ((MR_Box) (backend_libs__builtin_ops__V_437_437));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_436_436, 3) = ((MR_Box) (backend_libs__builtin_ops__V_438_438));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_441;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_436_436));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_rem") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_462;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_465_465;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_466_466;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_467_467;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_468_468;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_471;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 351 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_462 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_471 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_465_465 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_467_467 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_467_467, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_468_468 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_468_468, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_466_466 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_462));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 2) = ((MR_Box) (backend_libs__builtin_ops__V_467_467));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_466_466, 3) = ((MR_Box) (backend_libs__builtin_ops__V_468_468));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_471;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_466_466));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_quotient") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_452;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_455_455;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_456_456;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_457_457;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_458_458;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_461;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 350 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_452 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_461 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_455_455 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_457_457 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_457_457, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_458_458 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_458_458, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_456_456 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_452));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 2) = ((MR_Box) (backend_libs__builtin_ops__V_457_457));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_456_456, 3) = ((MR_Box) (backend_libs__builtin_ops__V_458_458));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_461;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_456_456));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_left_shift") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_442;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_445_445;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_446_446;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_447_447;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_448_448;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_451;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 353 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_442 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_451 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_445_445 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_447_447 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_447_447, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_448_448 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_448_448, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_446_446 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_442));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 2) = ((MR_Box) (backend_libs__builtin_ops__V_447_447));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_446_446, 3) = ((MR_Box) (backend_libs__builtin_ops__V_448_448));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_451;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_446_446));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_right_shift") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__ArithOp_472;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_475_475;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_476_476;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_477_477;
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_478_478;
#line 358 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_481;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 355 "builtin_ops.m"
                            backend_libs__builtin_ops__ArithOp_472 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_538_538)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_481 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_538_538, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_475_475 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 358 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                                  {
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_477_477 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_477_477, 0) = backend_libs__builtin_ops__V_527_527;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_478_478 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_478_478, 0) = backend_libs__builtin_ops__V_539_539;
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_476_476 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 1) = ((MR_Box) (backend_libs__builtin_ops__ArithOp_472));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 2) = ((MR_Box) (backend_libs__builtin_ops__V_477_477));
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_476_476, 3) = ((MR_Box) (backend_libs__builtin_ops__V_478_478));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    {
#line 360 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_481;
#line 360 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_476_476));
#line 360 "builtin_ops.m"
                                    }
#line 360 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 358 "builtin_ops.m"
                                  }
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 359 "builtin_ops.m"
                  }
#line 294 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "float") == 0))
#line 374 "builtin_ops.m"
              {
#line 374 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_536_536;
#line 374 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__V_537_537;

#line 402 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 374 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 374 "builtin_ops.m"
                  {
#line 402 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 402 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 402 "builtin_ops.m"
                      {
#line 402 "builtin_ops.m"
                        backend_libs__builtin_ops__V_537_537 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 402 "builtin_ops.m"
                        backend_libs__builtin_ops__V_536_536 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "*") == 0))
#line 401 "builtin_ops.m"
                          {
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_62_62;
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_63_63;
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_64_64;
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_65_65;
#line 401 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_295;

#line 402 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_536_536)) == (MR_mktag((MR_Integer) 1)));
#line 402 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 402 "builtin_ops.m"
                              {
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_295 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 401 "builtin_ops.m"
                                  {
#line 403 "builtin_ops.m"
                                    {
#line 403 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_64_64, 0) = backend_libs__builtin_ops__V_527_527;
#line 403 "builtin_ops.m"
                                    }
#line 403 "builtin_ops.m"
                                    {
#line 403 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_65_65, 0) = backend_libs__builtin_ops__V_537_537;
#line 403 "builtin_ops.m"
                                    }
#line 403 "builtin_ops.m"
                                    {
#line 403 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30))));
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 2) = ((MR_Box) (backend_libs__builtin_ops__V_64_64));
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_63_63, 3) = ((MR_Box) (backend_libs__builtin_ops__V_65_65));
#line 403 "builtin_ops.m"
                                    }
#line 403 "builtin_ops.m"
                                    {
#line 403 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_295;
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_63_63));
#line 403 "builtin_ops.m"
                                    }
#line 403 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 401 "builtin_ops.m"
                                  }
#line 402 "builtin_ops.m"
                              }
#line 401 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "+") == 0))
#line 376 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "builtin_ops.m"
                            {
#line 378 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_89_89;

#line 380 "builtin_ops.m"
                              {
#line 380 "builtin_ops.m"
                                backend_libs__builtin_ops__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 380 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_89_89, 0) = backend_libs__builtin_ops__V_527_527;
#line 380 "builtin_ops.m"
                              }
#line 380 "builtin_ops.m"
                              {
#line 380 "builtin_ops.m"
                                backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 380 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_537_537;
#line 380 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_89_89));
#line 380 "builtin_ops.m"
                              }
#line 378 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 378 "builtin_ops.m"
                            }
#line 376 "builtin_ops.m"
                          else
#line 382 "builtin_ops.m"
                            {
#line 382 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
#line 382 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_83_83;
#line 382 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_84_84;
#line 382 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_85_85;
#line 382 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_86_86;
#line 382 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Z_275 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));

#line 382 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_82_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 382 "builtin_ops.m"
                                {
#line 384 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_84_84 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28));
#line 384 "builtin_ops.m"
                                  {
#line 384 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 384 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_85_85, 0) = backend_libs__builtin_ops__V_527_527;
#line 384 "builtin_ops.m"
                                  }
#line 384 "builtin_ops.m"
                                  {
#line 384 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 384 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_86_86, 0) = backend_libs__builtin_ops__V_537_537;
#line 384 "builtin_ops.m"
                                  }
#line 384 "builtin_ops.m"
                                  {
#line 384 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 384 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 384 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 1) = ((MR_Box) (backend_libs__builtin_ops__V_84_84));
#line 384 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 2) = ((MR_Box) (backend_libs__builtin_ops__V_85_85));
#line 384 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_83_83, 3) = ((MR_Box) (backend_libs__builtin_ops__V_86_86));
#line 384 "builtin_ops.m"
                                  }
#line 384 "builtin_ops.m"
                                  {
#line 384 "builtin_ops.m"
                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_275;
#line 384 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_83_83));
#line 384 "builtin_ops.m"
                                  }
#line 384 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 382 "builtin_ops.m"
                                }
#line 382 "builtin_ops.m"
                            }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "-") == 0))
#line 387 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "builtin_ops.m"
                            {
#line 389 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_75_75;
#line 389 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_79_79;

#line 392 "builtin_ops.m"
                              {
#line 392 "builtin_ops.m"
                                backend_libs__builtin_ops__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 392 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_79_79, 0) = backend_libs__builtin_ops__V_527_527;
#line 392 "builtin_ops.m"
                              }
#line 392 "builtin_ops.m"
                              {
#line 392 "builtin_ops.m"
                                backend_libs__builtin_ops__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 392 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 392 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29))));
#line 392 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &backend_libs__builtin_ops_scalar_common_2[2])));
#line 392 "builtin_ops.m"
                                MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 3) = ((MR_Box) (backend_libs__builtin_ops__V_79_79));
#line 392 "builtin_ops.m"
                              }
#line 391 "builtin_ops.m"
                              {
#line 391 "builtin_ops.m"
                                backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_537_537;
#line 391 "builtin_ops.m"
                                MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_75_75));
#line 391 "builtin_ops.m"
                              }
#line 389 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 389 "builtin_ops.m"
                            }
#line 387 "builtin_ops.m"
                          else
#line 394 "builtin_ops.m"
                            {
#line 394 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
#line 394 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_69_69;
#line 394 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_70_70;
#line 394 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_71_71;
#line 394 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_72_72;
#line 394 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Z_286 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));

#line 394 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "builtin_ops.m"
                              if (backend_libs__builtin_ops__succeeded)
#line 394 "builtin_ops.m"
                                {
#line 396 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29));
#line 396 "builtin_ops.m"
                                  {
#line 396 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 396 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_71_71, 0) = backend_libs__builtin_ops__V_527_527;
#line 396 "builtin_ops.m"
                                  }
#line 396 "builtin_ops.m"
                                  {
#line 396 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 396 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_72_72, 0) = backend_libs__builtin_ops__V_537_537;
#line 396 "builtin_ops.m"
                                  }
#line 396 "builtin_ops.m"
                                  {
#line 396 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 396 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 396 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 1) = ((MR_Box) (backend_libs__builtin_ops__V_70_70));
#line 396 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 2) = ((MR_Box) (backend_libs__builtin_ops__V_71_71));
#line 396 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_69_69, 3) = ((MR_Box) (backend_libs__builtin_ops__V_72_72));
#line 396 "builtin_ops.m"
                                  }
#line 396 "builtin_ops.m"
                                  {
#line 396 "builtin_ops.m"
                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_286;
#line 396 "builtin_ops.m"
                                    MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_69_69));
#line 396 "builtin_ops.m"
                                  }
#line 396 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 394 "builtin_ops.m"
                                }
#line 394 "builtin_ops.m"
                            }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "<") == 0))
#line 409 "builtin_ops.m"
                          {
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_57_57;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_58_58;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_59_59;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__CompareOp_299;

#line 410 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 409 "builtin_ops.m"
                              {
#line 406 "builtin_ops.m"
                                backend_libs__builtin_ops__CompareOp_299 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34));
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_58_58, 0) = backend_libs__builtin_ops__V_527_527;
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_59_59, 0) = backend_libs__builtin_ops__V_537_537;
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_299));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 2) = ((MR_Box) (backend_libs__builtin_ops__V_58_58));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_57_57, 3) = ((MR_Box) (backend_libs__builtin_ops__V_59_59));
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_57_57));
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 409 "builtin_ops.m"
                              }
#line 409 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) ">") == 0))
#line 409 "builtin_ops.m"
                          {
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_320_320;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_321_321;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_322_322;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__CompareOp_325;

#line 410 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 409 "builtin_ops.m"
                              {
#line 405 "builtin_ops.m"
                                backend_libs__builtin_ops__CompareOp_325 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35));
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_321_321 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_321_321, 0) = backend_libs__builtin_ops__V_527_527;
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_322_322 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_322_322, 0) = backend_libs__builtin_ops__V_537_537;
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_320_320 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_325));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 2) = ((MR_Box) (backend_libs__builtin_ops__V_321_321));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_320_320, 3) = ((MR_Box) (backend_libs__builtin_ops__V_322_322));
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_320_320));
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 409 "builtin_ops.m"
                              }
#line 409 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "=<") == 0))
#line 409 "builtin_ops.m"
                          {
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_312_312;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_313_313;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_314_314;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__CompareOp_317;

#line 410 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 409 "builtin_ops.m"
                              {
#line 408 "builtin_ops.m"
                                backend_libs__builtin_ops__CompareOp_317 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36));
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_313_313 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_313_313, 0) = backend_libs__builtin_ops__V_527_527;
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_314_314 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_314_314, 0) = backend_libs__builtin_ops__V_537_537;
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_312_312 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_317));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 2) = ((MR_Box) (backend_libs__builtin_ops__V_313_313));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_312_312, 3) = ((MR_Box) (backend_libs__builtin_ops__V_314_314));
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_312_312));
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 409 "builtin_ops.m"
                              }
#line 409 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) ">=") == 0))
#line 409 "builtin_ops.m"
                          {
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_328_328;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_329_329;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_330_330;
#line 409 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__CompareOp_333;

#line 410 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_536_536 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 409 "builtin_ops.m"
                              {
#line 407 "builtin_ops.m"
                                backend_libs__builtin_ops__CompareOp_333 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37));
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_329_329 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_329_329, 0) = backend_libs__builtin_ops__V_527_527;
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_330_330 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_330_330, 0) = backend_libs__builtin_ops__V_537_537;
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_328_328 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 1) = ((MR_Box) (backend_libs__builtin_ops__CompareOp_333));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 2) = ((MR_Box) (backend_libs__builtin_ops__V_329_329));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_328_328, 3) = ((MR_Box) (backend_libs__builtin_ops__V_330_330));
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                {
#line 411 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 411 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_328_328));
#line 411 "builtin_ops.m"
                                }
#line 411 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 409 "builtin_ops.m"
                              }
#line 409 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_quotient") == 0))
#line 401 "builtin_ops.m"
                          {
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_336_336;
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_337_337;
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_338_338;
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_339_339;
#line 401 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_342;

#line 402 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_536_536)) == (MR_mktag((MR_Integer) 1)));
#line 402 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 402 "builtin_ops.m"
                              {
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_342 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 0));
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_536_536, (MR_Integer) 1)));
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_336_336 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 401 "builtin_ops.m"
                                  {
#line 403 "builtin_ops.m"
                                    {
#line 403 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_338_338 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_338_338, 0) = backend_libs__builtin_ops__V_527_527;
#line 403 "builtin_ops.m"
                                    }
#line 403 "builtin_ops.m"
                                    {
#line 403 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_339_339 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_339_339, 0) = backend_libs__builtin_ops__V_537_537;
#line 403 "builtin_ops.m"
                                    }
#line 403 "builtin_ops.m"
                                    {
#line 403 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_337_337 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31))));
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 2) = ((MR_Box) (backend_libs__builtin_ops__V_338_338));
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_337_337, 3) = ((MR_Box) (backend_libs__builtin_ops__V_339_339));
#line 403 "builtin_ops.m"
                                    }
#line 403 "builtin_ops.m"
                                    {
#line 403 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_342;
#line 403 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_337_337));
#line 403 "builtin_ops.m"
                                    }
#line 403 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 401 "builtin_ops.m"
                                  }
#line 402 "builtin_ops.m"
                              }
#line 401 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 402 "builtin_ops.m"
                      }
#line 374 "builtin_ops.m"
                  }
#line 374 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "builtin") == 0))
#line 233 "builtin_ops.m"
              {
#line 233 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__Y_49;
#line 233 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_203_203;
#line 233 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_204_204;

#line 234 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_promise_unique") == 0);
#line 233 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 233 "builtin_ops.m"
                  {
#line 234 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 233 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 233 "builtin_ops.m"
                      {
#line 234 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 234 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
                          {
#line 234 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_49 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 234 "builtin_ops.m"
                            backend_libs__builtin_ops__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 234 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_203_203 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 233 "builtin_ops.m"
                              {
#line 235 "builtin_ops.m"
                                {
#line 235 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_204_204 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_204_204, 0) = backend_libs__builtin_ops__V_527_527;
#line 235 "builtin_ops.m"
                                }
#line 235 "builtin_ops.m"
                                {
#line 235 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_49;
#line 235 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_204_204));
#line 235 "builtin_ops.m"
                                }
#line 235 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 233 "builtin_ops.m"
                              }
#line 234 "builtin_ops.m"
                          }
#line 233 "builtin_ops.m"
                      }
#line 233 "builtin_ops.m"
                  }
#line 233 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "private_builtin") == 0))
#line 246 "builtin_ops.m"
              {
#line 277 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 246 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 250 "builtin_ops.m"
                  {
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "pointer_equal") == 0))
#line 281 "builtin_ops.m"
                      {
#line 281 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_173_173;
#line 281 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_174_174;
#line 281 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_175_175;
#line 281 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_176_176;
#line 281 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__X_220;
#line 281 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_221;
#line 281 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_524_524;
#line 281 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__V_525_525;

#line 284 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 284 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 284 "builtin_ops.m"
                          {
#line 284 "builtin_ops.m"
                            backend_libs__builtin_ops__V_525_525 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 284 "builtin_ops.m"
                            backend_libs__builtin_ops__V_524_524 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 285 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__V_524_524 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "builtin_ops.m"
                              {
#line 284 "builtin_ops.m"
                                backend_libs__builtin_ops__X_220 = backend_libs__builtin_ops__V_527_527;
#line 284 "builtin_ops.m"
                                backend_libs__builtin_ops__Y_221 = backend_libs__builtin_ops__V_525_525;
#line 284 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 284 "builtin_ops.m"
                              }
#line 285 "builtin_ops.m"
                            else
#line 285 "builtin_ops.m"
                              {
#line 285 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_170_170;

#line 285 "builtin_ops.m"
                                backend_libs__builtin_ops__X_220 = backend_libs__builtin_ops__V_525_525;
#line 285 "builtin_ops.m"
                                backend_libs__builtin_ops__Y_221 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_524_524, (MR_Integer) 0));
#line 285 "builtin_ops.m"
                                backend_libs__builtin_ops__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_524_524, (MR_Integer) 1)));
#line 285 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_170_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "builtin_ops.m"
                              }
#line 281 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 281 "builtin_ops.m"
                              {
#line 287 "builtin_ops.m"
                                backend_libs__builtin_ops__V_174_174 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40));
#line 287 "builtin_ops.m"
                                {
#line 287 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 287 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_175_175, 0) = backend_libs__builtin_ops__X_220;
#line 287 "builtin_ops.m"
                                }
#line 287 "builtin_ops.m"
                                {
#line 287 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 287 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_176_176, 0) = backend_libs__builtin_ops__Y_221;
#line 287 "builtin_ops.m"
                                }
#line 287 "builtin_ops.m"
                                {
#line 287 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 287 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 287 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 1) = ((MR_Box) (backend_libs__builtin_ops__V_174_174));
#line 287 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 2) = ((MR_Box) (backend_libs__builtin_ops__V_175_175));
#line 287 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_173_173, 3) = ((MR_Box) (backend_libs__builtin_ops__V_176_176));
#line 287 "builtin_ops.m"
                                }
#line 287 "builtin_ops.m"
                                {
#line 287 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_173_173));
#line 287 "builtin_ops.m"
                                }
#line 287 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 281 "builtin_ops.m"
                              }
#line 284 "builtin_ops.m"
                          }
#line 281 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "builtin_int_gt") == 0))
#line 270 "builtin_ops.m"
                      {
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_183_183;
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_184_184;
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_185_185;
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_186_186;
#line 270 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_216;

#line 271 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 271 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 271 "builtin_ops.m"
                          {
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_216 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_183_183 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 270 "builtin_ops.m"
                              {
#line 272 "builtin_ops.m"
                                {
#line 272 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_185_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_185_185, 0) = backend_libs__builtin_ops__V_527_527;
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                                {
#line 272 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_186_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_186_186, 0) = backend_libs__builtin_ops__Y_216;
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                                {
#line 272 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_184_184 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24))));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 2) = ((MR_Box) (backend_libs__builtin_ops__V_185_185));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_184_184, 3) = ((MR_Box) (backend_libs__builtin_ops__V_186_186));
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                                {
#line 272 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_184_184));
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 270 "builtin_ops.m"
                              }
#line 271 "builtin_ops.m"
                          }
#line 270 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "builtin_int_lt") == 0))
#line 270 "builtin_ops.m"
                      {
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_492_492;
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_493_493;
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_494_494;
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_495_495;
#line 270 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_497;

#line 271 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 271 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 271 "builtin_ops.m"
                          {
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_497 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__V_492_492 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_492_492 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 270 "builtin_ops.m"
                              {
#line 272 "builtin_ops.m"
                                {
#line 272 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_494_494 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_494_494, 0) = backend_libs__builtin_ops__V_527_527;
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                                {
#line 272 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_495_495 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_495_495, 0) = backend_libs__builtin_ops__Y_497;
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                                {
#line 272 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_493_493 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 2) = ((MR_Box) (backend_libs__builtin_ops__V_494_494));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_493_493, 3) = ((MR_Box) (backend_libs__builtin_ops__V_495_495));
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                                {
#line 272 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 272 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_493_493));
#line 272 "builtin_ops.m"
                                }
#line 272 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 270 "builtin_ops.m"
                              }
#line 271 "builtin_ops.m"
                          }
#line 270 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "unsafe_type_cast") == 0))
#line 260 "builtin_ops.m"
                      {
#line 260 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_188_188;
#line 260 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_189_189;
#line 260 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_214;

#line 260 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 260 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 260 "builtin_ops.m"
                          {
#line 260 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_214 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 260 "builtin_ops.m"
                            backend_libs__builtin_ops__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 260 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_188_188 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 260 "builtin_ops.m"
                              {
#line 266 "builtin_ops.m"
                                {
#line 266 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_189_189 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_189_189, 0) = backend_libs__builtin_ops__V_527_527;
#line 266 "builtin_ops.m"
                                }
#line 266 "builtin_ops.m"
                                {
#line 266 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 266 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Y_214;
#line 266 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_189_189));
#line 266 "builtin_ops.m"
                                }
#line 266 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 260 "builtin_ops.m"
                              }
#line 260 "builtin_ops.m"
                          }
#line 260 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "trace_get_io_state") == 0))
#line 248 "builtin_ops.m"
                      {
#line 248 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 248 "builtin_ops.m"
                          {
#line 249 "builtin_ops.m"
                            {
#line 249 "builtin_ops.m"
                              backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 249 "builtin_ops.m"
                              MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__Args_9));
#line 249 "builtin_ops.m"
                            }
#line 249 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 248 "builtin_ops.m"
                          }
#line 248 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "trace_set_io_state") == 0))
#line 251 "builtin_ops.m"
                      {
#line 251 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_193_193;

#line 251 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_526_526 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 251 "builtin_ops.m"
                          {
#line 252 "builtin_ops.m"
                            backend_libs__builtin_ops__V_193_193 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "builtin_ops.m"
                            backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_2[0]);
#line 252 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 251 "builtin_ops.m"
                          }
#line 251 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "builtin_compound_eq") == 0))
#line 276 "builtin_ops.m"
                      {
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_178_178;
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_179_179;
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_180_180;
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_181_181;
#line 276 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_218;

#line 277 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 277 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 277 "builtin_ops.m"
                          {
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_218 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_178_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 276 "builtin_ops.m"
                              {
#line 278 "builtin_ops.m"
                                {
#line 278 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_180_180, 0) = backend_libs__builtin_ops__V_527_527;
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                                {
#line 278 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_181_181, 0) = backend_libs__builtin_ops__Y_218;
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                                {
#line 278 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_179_179 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41))));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 2) = ((MR_Box) (backend_libs__builtin_ops__V_180_180));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_179_179, 3) = ((MR_Box) (backend_libs__builtin_ops__V_181_181));
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                                {
#line 278 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_179_179));
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 276 "builtin_ops.m"
                              }
#line 277 "builtin_ops.m"
                          }
#line 276 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "builtin_compound_lt") == 0))
#line 276 "builtin_ops.m"
                      {
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_483_483;
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_484_484;
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_485_485;
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_486_486;
#line 276 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_488;

#line 277 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 277 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 277 "builtin_ops.m"
                          {
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_488 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_483_483 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 276 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 276 "builtin_ops.m"
                              {
#line 278 "builtin_ops.m"
                                {
#line 278 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_485_485 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_485_485, 0) = backend_libs__builtin_ops__V_527_527;
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                                {
#line 278 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_486_486 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_486_486, 0) = backend_libs__builtin_ops__Y_488;
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                                {
#line 278 "builtin_ops.m"
                                  backend_libs__builtin_ops__V_484_484 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42))));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 2) = ((MR_Box) (backend_libs__builtin_ops__V_485_485));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_484_484, 3) = ((MR_Box) (backend_libs__builtin_ops__V_486_486));
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                                {
#line 278 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__CodePrime_13, 0) = ((MR_Box) (backend_libs__builtin_ops__V_484_484));
#line 278 "builtin_ops.m"
                                }
#line 278 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 276 "builtin_ops.m"
                              }
#line 277 "builtin_ops.m"
                          }
#line 276 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "store_at_ref") == 0)) || ((strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "store_at_ref_impure") == 0))))
#line 256 "builtin_ops.m"
                      {
#line 256 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_191_191;
#line 256 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_212;

#line 257 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 257 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 257 "builtin_ops.m"
                          {
#line 257 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_212 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 257 "builtin_ops.m"
                            backend_libs__builtin_ops__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 257 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_191_191 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 256 "builtin_ops.m"
                              {
#line 258 "builtin_ops.m"
                                {
#line 258 "builtin_ops.m"
                                  backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__V_527_527;
#line 258 "builtin_ops.m"
                                  MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__CodePrime_13, 1) = backend_libs__builtin_ops__Y_212;
#line 258 "builtin_ops.m"
                                }
#line 258 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 256 "builtin_ops.m"
                              }
#line 257 "builtin_ops.m"
                          }
#line 256 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 250 "builtin_ops.m"
                  }
#line 246 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_11, (MR_String) "term_size_prof_builtin") == 0))
#line 290 "builtin_ops.m"
              {
#line 290 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__Z_53;
#line 290 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_162_162;
#line 290 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_163_163;
#line 290 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_164_164;
#line 290 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_165_165;
#line 290 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_166_166;
#line 290 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_167_167;
#line 290 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__Y_229;

#line 291 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_7, (MR_String) "term_size_plus") == 0);
#line 290 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 290 "builtin_ops.m"
                  {
#line 291 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 290 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 290 "builtin_ops.m"
                      {
#line 291 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_526_526)) == (MR_mktag((MR_Integer) 1)));
#line 291 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 291 "builtin_ops.m"
                          {
#line 291 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_229 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 0));
#line 291 "builtin_ops.m"
                            backend_libs__builtin_ops__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_526_526, (MR_Integer) 1)));
#line 291 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_162_162)) == (MR_mktag((MR_Integer) 1)));
#line 291 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 291 "builtin_ops.m"
                              {
#line 291 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_53 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_162_162, (MR_Integer) 0));
#line 291 "builtin_ops.m"
                                backend_libs__builtin_ops__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_162_162, (MR_Integer) 1)));
#line 291 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_163_163 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 290 "builtin_ops.m"
                                if (backend_libs__builtin_ops__succeeded)
#line 290 "builtin_ops.m"
                                  {
#line 292 "builtin_ops.m"
                                    backend_libs__builtin_ops__V_165_165 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 292 "builtin_ops.m"
                                    {
#line 292 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 292 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_166_166, 0) = backend_libs__builtin_ops__V_527_527;
#line 292 "builtin_ops.m"
                                    }
#line 292 "builtin_ops.m"
                                    {
#line 292 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 292 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__V_167_167, 0) = backend_libs__builtin_ops__Y_229;
#line 292 "builtin_ops.m"
                                    }
#line 292 "builtin_ops.m"
                                    {
#line 292 "builtin_ops.m"
                                      backend_libs__builtin_ops__V_164_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 292 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 292 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 1) = ((MR_Box) (backend_libs__builtin_ops__V_165_165));
#line 292 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 2) = ((MR_Box) (backend_libs__builtin_ops__V_166_166));
#line 292 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_164_164, 3) = ((MR_Box) (backend_libs__builtin_ops__V_167_167));
#line 292 "builtin_ops.m"
                                    }
#line 292 "builtin_ops.m"
                                    {
#line 292 "builtin_ops.m"
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 0) = backend_libs__builtin_ops__Z_53;
#line 292 "builtin_ops.m"
                                      MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__CodePrime_13, 1) = ((MR_Box) (backend_libs__builtin_ops__V_164_164));
#line 292 "builtin_ops.m"
                                    }
#line 292 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 290 "builtin_ops.m"
                                  }
#line 291 "builtin_ops.m"
                              }
#line 291 "builtin_ops.m"
                          }
#line 290 "builtin_ops.m"
                      }
#line 290 "builtin_ops.m"
                  }
#line 290 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 234 "builtin_ops.m"
          }
#line 216 "builtin_ops.m"
      }
#line 221 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 220 "builtin_ops.m"
      *backend_libs__builtin_ops__Code_10 = backend_libs__builtin_ops__CodePrime_13;
#line 221 "builtin_ops.m"
    else
#line 222 "builtin_ops.m"
      {
#line 222 "builtin_ops.m"
        MR_Integer backend_libs__builtin_ops__Arity_14;
#line 222 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__Msg_15;
#line 222 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__V_25_25;
#line 222 "builtin_ops.m"
        MR_Word backend_libs__builtin_ops__V_31_31;
#line 222 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__V_33_33;
#line 222 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__V_34_34;
#line 222 "builtin_ops.m"
        MR_String backend_libs__builtin_ops__V_41_41;

#line 222 "builtin_ops.m"
        {
#line 222 "builtin_ops.m"
          mercury__list__length_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_24, backend_libs__builtin_ops__Args_9, &backend_libs__builtin_ops__Arity_14);
        }
#line 9286 "backend_libs.builtin_ops.c"
        backend_libs__builtin_ops__V_31_31 = (MR_Word) &backend_libs__builtin_ops_scalar_common_2[3];
#line 223 "builtin_ops.m"
        {
#line 223 "builtin_ops.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(backend_libs__builtin_ops__V_31_31, backend_libs__builtin_ops__Arity_14, &backend_libs__builtin_ops__V_25_25);
        }
#line 223 "builtin_ops.m"
        {
#line 223 "builtin_ops.m"
          backend_libs__builtin_ops__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "/", backend_libs__builtin_ops__V_25_25);
        }
#line 223 "builtin_ops.m"
        {
#line 223 "builtin_ops.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(backend_libs__builtin_ops__V_31_31, backend_libs__builtin_ops__PredName_7, &backend_libs__builtin_ops__V_34_34);
        }
#line 223 "builtin_ops.m"
        {
#line 223 "builtin_ops.m"
          backend_libs__builtin_ops__V_41_41 = mercury__string__f_43_43_2_f_0(backend_libs__builtin_ops__V_34_34, backend_libs__builtin_ops__V_33_33);
        }
#line 223 "builtin_ops.m"
        {
#line 223 "builtin_ops.m"
          backend_libs__builtin_ops__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "unknown builtin ", backend_libs__builtin_ops__V_41_41);
        }
#line 224 "builtin_ops.m"
        {
#line 224 "builtin_ops.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.builtin_ops", (MR_String) "predicate \140backend_libs.builtin_ops.translate_builtin\'/5", backend_libs__builtin_ops__Msg_15);
#line 224 "builtin_ops.m"
          return;
        }
#line 222 "builtin_ops.m"
      }
#line 221 "builtin_ops.m"
  }
#line 154 "builtin_ops.m"
}

#line 137 "builtin_ops.m"
MR_bool MR_CALL 
backend_libs__builtin_ops__test_if_builtin_4_p_0(
#line 137 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__TypeInfo_for_T_12,
#line 137 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__FullyQualifiedModule_5,
#line 137 "builtin_ops.m"
  MR_String backend_libs__builtin_ops__PredName_6,
#line 137 "builtin_ops.m"
  MR_Integer backend_libs__builtin_ops__ProcId_7,
#line 137 "builtin_ops.m"
  MR_Word backend_libs__builtin_ops__Args_8)
#line 137 "builtin_ops.m"
{
#line 209 "builtin_ops.m"
  {
#line 209 "builtin_ops.m"
    MR_bool backend_libs__builtin_ops__succeeded;
#line 209 "builtin_ops.m"
    MR_String backend_libs__builtin_ops__ModuleName_9;
#line 209 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__ProcNum_10;
#line 209 "builtin_ops.m"
    MR_Word backend_libs__builtin_ops__V_496_496;
#line 234 "builtin_ops.m"
    MR_Box backend_libs__builtin_ops__V_497_497;

#line 210 "builtin_ops.m"
    {
#line 210 "builtin_ops.m"
      backend_libs__builtin_ops__succeeded = mdbcomp__builtin_modules__is_std_lib_module_name_2_p_0(backend_libs__builtin_ops__FullyQualifiedModule_5, &backend_libs__builtin_ops__ModuleName_9);
    }
#line 209 "builtin_ops.m"
    if (backend_libs__builtin_ops__succeeded)
#line 209 "builtin_ops.m"
      {
#line 211 "builtin_ops.m"
        {
#line 211 "builtin_ops.m"
          hlds__hlds_pred__proc_id_to_int_2_p_0(backend_libs__builtin_ops__ProcId_7, &backend_libs__builtin_ops__ProcNum_10);
        }
#line 234 "builtin_ops.m"
        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__Args_8)) == (MR_mktag((MR_Integer) 1)));
#line 234 "builtin_ops.m"
        if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
          {
#line 234 "builtin_ops.m"
            backend_libs__builtin_ops__V_497_497 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 0));
#line 234 "builtin_ops.m"
            backend_libs__builtin_ops__V_496_496 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__Args_8, (MR_Integer) 1)));
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "io") == 0))
#line 237 "builtin_ops.m"
              {
#line 239 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 237 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 237 "builtin_ops.m"
                  {
#line 239 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 241 "builtin_ops.m"
                      {
#line 241 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_get_io_state") == 0))
#line 240 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 241 "builtin_ops.m"
                        else
#line 241 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_set_io_state") == 0))
#line 242 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 241 "builtin_ops.m"
                        else
#line 241 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 241 "builtin_ops.m"
                      }
#line 237 "builtin_ops.m"
                  }
#line 237 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "int") == 0))
#line 294 "builtin_ops.m"
              {
#line 294 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_508_508;
#line 359 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__V_509_509;

#line 359 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                  {
#line 359 "builtin_ops.m"
                    backend_libs__builtin_ops__V_509_509 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                    backend_libs__builtin_ops__V_508_508 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "*") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_72_72;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_227;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_227 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "+") == 0))
#line 296 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0))
#line 309 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 309 "builtin_ops.m"
                        else
#line 298 "builtin_ops.m"
                          {
#line 298 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 298 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_202 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));

#line 298 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_118_118 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "builtin_ops.m"
                          }
#line 296 "builtin_ops.m"
                      else
#line 296 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 1))
#line 298 "builtin_ops.m"
                        {
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_316_316;
#line 298 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_319;

#line 298 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 298 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 298 "builtin_ops.m"
                            {
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_319 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_316_316 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "builtin_ops.m"
                            }
#line 298 "builtin_ops.m"
                        }
#line 296 "builtin_ops.m"
                      else
#line 296 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 2))
#line 298 "builtin_ops.m"
                        {
#line 298 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_322_322;
#line 298 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_325;

#line 298 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 298 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 298 "builtin_ops.m"
                            {
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_325 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 298 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_322_322 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "builtin_ops.m"
                            }
#line 298 "builtin_ops.m"
                        }
#line 296 "builtin_ops.m"
                      else
#line 296 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "-") == 0))
#line 315 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0))
#line 328 "builtin_ops.m"
                        if ((backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 328 "builtin_ops.m"
                        else
#line 317 "builtin_ops.m"
                          {
#line 317 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 317 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_213 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));

#line 317 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "builtin_ops.m"
                          }
#line 315 "builtin_ops.m"
                      else
#line 315 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 1))
#line 317 "builtin_ops.m"
                        {
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_328_328;
#line 317 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_331;

#line 317 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 317 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 317 "builtin_ops.m"
                            {
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_331 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_328_328 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "builtin_ops.m"
                            }
#line 317 "builtin_ops.m"
                        }
#line 315 "builtin_ops.m"
                      else
#line 315 "builtin_ops.m"
                      if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 2))
#line 317 "builtin_ops.m"
                        {
#line 317 "builtin_ops.m"
                          MR_Word backend_libs__builtin_ops__V_334_334;
#line 317 "builtin_ops.m"
                          MR_Box backend_libs__builtin_ops__Z_337;

#line 317 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 317 "builtin_ops.m"
                          if (backend_libs__builtin_ops__succeeded)
#line 317 "builtin_ops.m"
                            {
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__Z_337 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 317 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_334_334 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 317 "builtin_ops.m"
                            }
#line 317 "builtin_ops.m"
                        }
#line 315 "builtin_ops.m"
                      else
#line 315 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "<") == 0))
#line 369 "builtin_ops.m"
                      {
#line 370 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) ">") == 0))
#line 369 "builtin_ops.m"
                      {
#line 370 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "\\") == 0))
#line 362 "builtin_ops.m"
                      {
#line 362 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 362 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 362 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "/\\") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_341_341;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_347;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_347 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_341_341 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "=<") == 0))
#line 369 "builtin_ops.m"
                      {
#line 370 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) ">=") == 0))
#line 369 "builtin_ops.m"
                      {
#line 370 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "\\/") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_375_375;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_381;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_381 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_375_375 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_375_375 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "xor") == 0))
#line 334 "builtin_ops.m"
                      {
#line 334 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_78_78;
#line 334 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_224;

#line 334 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 334 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 334 "builtin_ops.m"
                          {
#line 334 "builtin_ops.m"
                            backend_libs__builtin_ops__Z_224 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 334 "builtin_ops.m"
                            backend_libs__builtin_ops__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 334 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 334 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 338 "builtin_ops.m"
                              {
#line 338 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0))
#line 336 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 338 "builtin_ops.m"
                                else
#line 338 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 1))
#line 339 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 338 "builtin_ops.m"
                                else
#line 338 "builtin_ops.m"
                                if ((backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 2))
#line 342 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 338 "builtin_ops.m"
                                else
#line 338 "builtin_ops.m"
                                  backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 338 "builtin_ops.m"
                              }
#line 334 "builtin_ops.m"
                          }
#line 334 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "plus") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_395_395;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_401;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_401 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_395_395 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_395_395 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "minus") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_385_385;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_391;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_391 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_385_385 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_385_385 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "times") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_405_405;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_411;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_411 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_405_405 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_405_405 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_rem") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_435_435;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_441;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_441 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_435_435 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_quotient") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_425_425;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_431;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_431 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_425_425 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_425_425 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_left_shift") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_415_415;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_421;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_421 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_415_415 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_415_415 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_right_shift") == 0))
#line 358 "builtin_ops.m"
                      {
#line 358 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_445_445;
#line 359 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Z_451;

#line 359 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 358 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 358 "builtin_ops.m"
                          {
#line 359 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_508_508)) == (MR_mktag((MR_Integer) 1)));
#line 359 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 359 "builtin_ops.m"
                              {
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_451 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 0));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__V_445_445 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_508_508, (MR_Integer) 1)));
#line 359 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_445_445 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 359 "builtin_ops.m"
                              }
#line 358 "builtin_ops.m"
                          }
#line 358 "builtin_ops.m"
                      }
#line 294 "builtin_ops.m"
                    else
#line 294 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 359 "builtin_ops.m"
                  }
#line 294 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "float") == 0))
#line 374 "builtin_ops.m"
              {
#line 374 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_506_506;
#line 402 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__V_507_507;

#line 402 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 374 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 374 "builtin_ops.m"
                  {
#line 402 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 402 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 402 "builtin_ops.m"
                      {
#line 402 "builtin_ops.m"
                        backend_libs__builtin_ops__V_507_507 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 402 "builtin_ops.m"
                        backend_libs__builtin_ops__V_506_506 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "*") == 0))
#line 401 "builtin_ops.m"
                          {
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_32_32;
#line 402 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_265;

#line 402 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_506_506)) == (MR_mktag((MR_Integer) 1)));
#line 402 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 402 "builtin_ops.m"
                              {
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_265 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "builtin_ops.m"
                              }
#line 401 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "+") == 0))
#line 376 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 376 "builtin_ops.m"
                          else
#line 382 "builtin_ops.m"
                            {
#line 382 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
#line 382 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Z_245 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));

#line 382 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_52_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "builtin_ops.m"
                            }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "-") == 0))
#line 387 "builtin_ops.m"
                          if ((backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 387 "builtin_ops.m"
                          else
#line 394 "builtin_ops.m"
                            {
#line 394 "builtin_ops.m"
                              MR_Word backend_libs__builtin_ops__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
#line 394 "builtin_ops.m"
                              MR_Box backend_libs__builtin_ops__Z_256 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));

#line 394 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "builtin_ops.m"
                            }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "<") == 0))
#line 410 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) ">") == 0))
#line 410 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "=<") == 0))
#line 410 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) ">=") == 0))
#line 410 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                        if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_quotient") == 0))
#line 401 "builtin_ops.m"
                          {
#line 401 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_306_306;
#line 402 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__Z_312;

#line 402 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_506_506)) == (MR_mktag((MR_Integer) 1)));
#line 402 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 402 "builtin_ops.m"
                              {
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_312 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 0));
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_506_506, (MR_Integer) 1)));
#line 402 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_306_306 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "builtin_ops.m"
                              }
#line 401 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        else
#line 374 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 402 "builtin_ops.m"
                      }
#line 374 "builtin_ops.m"
                  }
#line 374 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "builtin") == 0))
#line 233 "builtin_ops.m"
              {
#line 233 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_173_173;
#line 234 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__Y_19;

#line 234 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_promise_unique") == 0);
#line 233 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 233 "builtin_ops.m"
                  {
#line 234 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 233 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 233 "builtin_ops.m"
                      {
#line 234 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 234 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 234 "builtin_ops.m"
                          {
#line 234 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_19 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 234 "builtin_ops.m"
                            backend_libs__builtin_ops__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 234 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_173_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 234 "builtin_ops.m"
                          }
#line 233 "builtin_ops.m"
                      }
#line 233 "builtin_ops.m"
                  }
#line 233 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "private_builtin") == 0))
#line 246 "builtin_ops.m"
              {
#line 277 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 246 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 250 "builtin_ops.m"
                  {
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "pointer_equal") == 0))
#line 281 "builtin_ops.m"
                      {
#line 281 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_494_494;
#line 284 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__V_495_495;

#line 284 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 284 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 284 "builtin_ops.m"
                          {
#line 284 "builtin_ops.m"
                            backend_libs__builtin_ops__V_495_495 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 284 "builtin_ops.m"
                            backend_libs__builtin_ops__V_494_494 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 285 "builtin_ops.m"
                            if ((backend_libs__builtin_ops__V_494_494 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 284 "builtin_ops.m"
                              backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 285 "builtin_ops.m"
                            else
#line 285 "builtin_ops.m"
                              {
#line 285 "builtin_ops.m"
                                MR_Word backend_libs__builtin_ops__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_494_494, (MR_Integer) 1)));
#line 285 "builtin_ops.m"
                                MR_Box backend_libs__builtin_ops__Y_191 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_494_494, (MR_Integer) 0));

#line 285 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_140_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "builtin_ops.m"
                              }
#line 284 "builtin_ops.m"
                          }
#line 281 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "builtin_int_gt") == 0))
#line 270 "builtin_ops.m"
                      {
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_153_153;
#line 271 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_186;

#line 271 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 271 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 271 "builtin_ops.m"
                          {
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_186 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_153_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "builtin_ops.m"
                          }
#line 270 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "builtin_int_lt") == 0))
#line 270 "builtin_ops.m"
                      {
#line 270 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_462_462;
#line 271 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_467;

#line 271 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 271 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 271 "builtin_ops.m"
                          {
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_467 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 271 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_462_462 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "builtin_ops.m"
                          }
#line 270 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "unsafe_type_cast") == 0))
#line 260 "builtin_ops.m"
                      {
#line 260 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_158_158;
#line 260 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_184;

#line 260 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 260 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 260 "builtin_ops.m"
                          {
#line 260 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_184 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 260 "builtin_ops.m"
                            backend_libs__builtin_ops__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 260 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "builtin_ops.m"
                          }
#line 260 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "trace_get_io_state") == 0))
#line 248 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "trace_set_io_state") == 0))
#line 251 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "builtin_compound_eq") == 0))
#line 276 "builtin_ops.m"
                      {
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_148_148;
#line 277 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_188;

#line 277 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 277 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 277 "builtin_ops.m"
                          {
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_188 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_148_148 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "builtin_ops.m"
                          }
#line 276 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "builtin_compound_lt") == 0))
#line 276 "builtin_ops.m"
                      {
#line 276 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_453_453;
#line 277 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_458;

#line 277 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 277 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 277 "builtin_ops.m"
                          {
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_458 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_453_453 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "builtin_ops.m"
                          }
#line 276 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                    if ((((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "store_at_ref") == 0)) || ((strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "store_at_ref_impure") == 0))))
#line 256 "builtin_ops.m"
                      {
#line 256 "builtin_ops.m"
                        MR_Word backend_libs__builtin_ops__V_161_161;
#line 257 "builtin_ops.m"
                        MR_Box backend_libs__builtin_ops__Y_182;

#line 257 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 257 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 257 "builtin_ops.m"
                          {
#line 257 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_182 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 257 "builtin_ops.m"
                            backend_libs__builtin_ops__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 257 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_161_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "builtin_ops.m"
                          }
#line 256 "builtin_ops.m"
                      }
#line 250 "builtin_ops.m"
                    else
#line 250 "builtin_ops.m"
                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 250 "builtin_ops.m"
                  }
#line 246 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
            if ((strcmp(backend_libs__builtin_ops__ModuleName_9, (MR_String) "term_size_prof_builtin") == 0))
#line 290 "builtin_ops.m"
              {
#line 290 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_132_132;
#line 290 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_133_133;
#line 291 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__Y_199;
#line 291 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__Z_23;

#line 291 "builtin_ops.m"
                backend_libs__builtin_ops__succeeded = (strcmp(backend_libs__builtin_ops__PredName_6, (MR_String) "term_size_plus") == 0);
#line 290 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 290 "builtin_ops.m"
                  {
#line 291 "builtin_ops.m"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 290 "builtin_ops.m"
                    if (backend_libs__builtin_ops__succeeded)
#line 290 "builtin_ops.m"
                      {
#line 291 "builtin_ops.m"
                        backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_496_496)) == (MR_mktag((MR_Integer) 1)));
#line 291 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 291 "builtin_ops.m"
                          {
#line 291 "builtin_ops.m"
                            backend_libs__builtin_ops__Y_199 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 0));
#line 291 "builtin_ops.m"
                            backend_libs__builtin_ops__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_496_496, (MR_Integer) 1)));
#line 291 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = ((MR_tag((MR_Word) backend_libs__builtin_ops__V_132_132)) == (MR_mktag((MR_Integer) 1)));
#line 291 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 291 "builtin_ops.m"
                              {
#line 291 "builtin_ops.m"
                                backend_libs__builtin_ops__Z_23 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_132_132, (MR_Integer) 0));
#line 291 "builtin_ops.m"
                                backend_libs__builtin_ops__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__V_132_132, (MR_Integer) 1)));
#line 291 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_133_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "builtin_ops.m"
                              }
#line 291 "builtin_ops.m"
                          }
#line 290 "builtin_ops.m"
                      }
#line 290 "builtin_ops.m"
                  }
#line 290 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            else
#line 236 "builtin_ops.m"
              backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 234 "builtin_ops.m"
          }
#line 209 "builtin_ops.m"
      }
#line 209 "builtin_ops.m"
    return backend_libs__builtin_ops__succeeded;
#line 209 "builtin_ops.m"
  }
#line 137 "builtin_ops.m"
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
