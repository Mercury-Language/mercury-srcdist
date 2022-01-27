/*
** Automatically generated from `builtin_ops.m'
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 139 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1];

#line 142 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0;

#line 145 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;

#line 148 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1];

#line 151 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1;

#line 154 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1];

#line 157 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1];

#line 160 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[2];

#line 163 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2];

#line 166 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2];

#line 169 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_0;

#line 172 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_1;

#line 175 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_2;

#line 178 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_3;

#line 181 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_4;

#line 184 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_5;

#line 187 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_6;

#line 190 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_7;

#line 193 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_8;

#line 196 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_9;

#line 199 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_10;

#line 202 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_11;

#line 205 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_12;

#line 208 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_13;

#line 211 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_14;

#line 214 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1];

#line 217 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15;

#line 220 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_16;

#line 223 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_17;

#line 226 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_18;

#line 229 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_19;

#line 232 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_20;

#line 235 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_21;

#line 238 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_22;

#line 241 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_23;

#line 244 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_24[1];

#line 247 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24;

#line 250 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_25;

#line 253 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_26;

#line 256 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_27;

#line 259 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_28;

#line 262 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_29;

#line 265 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_30;

#line 268 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_31;

#line 271 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_32;

#line 274 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_33;

#line 277 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_34;

#line 280 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_35;

#line 283 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_36;

#line 286 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_37;

#line 289 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_38;

#line 292 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_39;

#line 295 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_40;

#line 298 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_41;

#line 301 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_42;

#line 304 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_43;

#line 307 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_44;

#line 310 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[43];

#line 313 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1];

#line 316 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1];

#line 319 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[3];

#line 322 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_binary_op_0[45];

#line 325 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_binary_op_0[45];

#line 328 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0;

#line 331 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1;

#line 334 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2;

#line 337 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3];

#line 340 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3];

#line 343 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3];

#line 346 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1;

#line 349 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2];

#line 352 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0;

#line 355 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2];

#line 358 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1;

#line 361 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1];

#line 364 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2;

#line 367 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1;

#line 370 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1];

#line 373 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3;

#line 376 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1];

#line 379 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1];

#line 382 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1];

#line 385 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1];

#line 388 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[4];

#line 391 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4];

#line 394 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4];

#line 397 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1];

#line 400 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0;

#line 403 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1];

#line 406 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1;

#line 409 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1];

#line 412 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2;

#line 415 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2];

#line 418 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3;

#line 421 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3];

#line 424 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4;

#line 427 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1];

#line 430 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1];

#line 433 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1];

#line 436 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2];

#line 439 "backend_libs.builtin_ops.c"
static const MR_DuPtagLayout backend_libs__builtin_ops__backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[4];

#line 442 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5];

#line 445 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5];

#line 448 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0;

#line 451 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1;

#line 454 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2;

#line 457 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3;

#line 460 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4;

#line 463 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5;

#line 466 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6;

#line 469 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7;

#line 472 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8;

#line 475 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9;

#line 478 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10;

#line 481 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11;

#line 484 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12;

#line 487 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13;

#line 490 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_unary_op_0[14];

#line 493 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_unary_op_0[14];

#line 496 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_unary_op_0[14];

#line 499 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 502 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 504 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 507 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 510 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 512 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 514 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 517 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 520 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 522 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 525 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 528 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 530 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 532 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 535 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 538 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 540 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 543 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 546 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 548 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 550 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 553 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 556 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 558 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 560 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 563 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 566 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 568 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 570 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 572 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 575 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 578 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 580 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 582 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);

#line 585 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 588 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 590 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 592 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 594 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4);

#line 597 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 600 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 602 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2);

#line 605 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 608 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 610 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 612 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[1][2];

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_4[4][1];

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_5[1];


#line 236 "builtin_ops.m"
/* sealed */ struct backend_libs__builtin_ops__vector_common_type_2_0_s {
#line 236 "builtin_ops.m"
  const MR_String backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
#line 236 "builtin_ops.m"
  const MR_Integer backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
#line 236 "builtin_ops.m"
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_2_0_s backend_libs__builtin_ops_vector_common_2[76];

#line 374 "builtin_ops.m"
/* sealed */ struct backend_libs__builtin_ops__vector_common_type_3_0_s {
#line 374 "builtin_ops.m"
  const MR_String backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
#line 374 "builtin_ops.m"
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_3_0_s backend_libs__builtin_ops_vector_common_3[32];



static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0))
  },
};

static /* final */ const MR_Box backend_libs__builtin_ops_scalar_common_4[4][1] = {
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
    (MR_Box) &backend_libs__builtin_ops_scalar_common_5[0]
  },
  /* row 3 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Float backend_libs__builtin_ops_scalar_common_5[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
};


static /* final */ const struct backend_libs__builtin_ops__vector_common_type_2_0_s backend_libs__builtin_ops_vector_common_2[76] = {
  /* row 0 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 1 */
  {
    (MR_String) "pointer_equal",
    (MR_Integer) -1
  },
  /* row 2 */
  {
    (MR_String) "unsafe_type_cast",
    (MR_Integer) -1
  },
  /* row 3 */
  {
    (MR_String) "trace_get_io_state",
    (MR_Integer) -1
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 5 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 8 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 9 */
  {
    (MR_String) "builtin_int_gt",
    (MR_Integer) 2
  },
  /* row 10 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    (MR_String) "builtin_int_lt",
    (MR_Integer) -1
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 16 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 17 */
  {
    (MR_String) "store_at_ref",
    (MR_Integer) -1
  },
  /* row 18 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 19 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 20 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 21 */
  {
    (MR_String) "store_at_ref_impure",
    (MR_Integer) -1
  },
  /* row 22 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 23 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 24 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 25 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 26 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 27 */
  {
    (MR_String) "builtin_compound_eq",
    (MR_Integer) -1
  },
  /* row 28 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 29 */
  {
    (MR_String) "builtin_compound_lt",
    (MR_Integer) -1
  },
  /* row 30 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 31 */
  {
    (MR_String) "trace_set_io_state",
    (MR_Integer) -1
  },
  /* row 32 */
  {
    (MR_String) "builtin",
    (MR_Integer) 0
  },
  /* row 33 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 34 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 35 */
  {
    (MR_String) "io",
    (MR_Integer) 3
  },
  /* row 36 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 4
  },
  /* row 37 */
  {
    (MR_String) "term_size_prof_builtin",
    (MR_Integer) 5
  },
  /* row 38 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 39 */
  {
    (MR_String) "pointer_equal",
    (MR_Integer) -1
  },
  /* row 40 */
  {
    (MR_String) "unsafe_type_cast",
    (MR_Integer) -1
  },
  /* row 41 */
  {
    (MR_String) "trace_get_io_state",
    (MR_Integer) -1
  },
  /* row 42 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 43 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 44 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 45 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 46 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 47 */
  {
    (MR_String) "builtin_int_gt",
    (MR_Integer) 2
  },
  /* row 48 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 49 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 50 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 51 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 52 */
  {
    (MR_String) "builtin_int_lt",
    (MR_Integer) -1
  },
  /* row 53 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 54 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 55 */
  {
    (MR_String) "store_at_ref",
    (MR_Integer) -1
  },
  /* row 56 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 57 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 58 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 59 */
  {
    (MR_String) "store_at_ref_impure",
    (MR_Integer) -1
  },
  /* row 60 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 61 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 62 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 63 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 64 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 65 */
  {
    (MR_String) "builtin_compound_eq",
    (MR_Integer) -1
  },
  /* row 66 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 67 */
  {
    (MR_String) "builtin_compound_lt",
    (MR_Integer) -1
  },
  /* row 68 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 69 */
  {
    (MR_String) "trace_set_io_state",
    (MR_Integer) -1
  },
  /* row 70 */
  {
    (MR_String) "builtin",
    (MR_Integer) 0
  },
  /* row 71 */
  {
    (MR_String) "float",
    (MR_Integer) 1
  },
  /* row 72 */
  {
    (MR_String) "int",
    (MR_Integer) 2
  },
  /* row 73 */
  {
    (MR_String) "io",
    (MR_Integer) 3
  },
  /* row 74 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 4
  },
  /* row 75 */
  {
    (MR_String) "term_size_prof_builtin",
    (MR_Integer) 5
  },
};

static /* final */ const struct backend_libs__builtin_ops__vector_common_type_3_0_s backend_libs__builtin_ops_vector_common_3[32] = {
  /* row 0 */   {     NULL },
  /* row 1 */   {     (MR_String) ">=" },
  /* row 2 */   {     NULL },
  /* row 3 */   {     (MR_String) "=<" },
  /* row 4 */   {     NULL },
  /* row 5 */   {     NULL },
  /* row 6 */   {     NULL },
  /* row 7 */   {     NULL },
  /* row 8 */   {     (MR_String) "unchecked_quotient" },
  /* row 9 */   {     NULL },
  /* row 10 */   {     (MR_String) "+" },
  /* row 11 */   {     (MR_String) "*" },
  /* row 12 */   {     (MR_String) "-" },
  /* row 13 */   {     (MR_String) "<" },
  /* row 14 */   {     NULL },
  /* row 15 */   {     (MR_String) ">" },
  /* row 16 */   {     NULL },
  /* row 17 */   {     (MR_String) ">=" },
  /* row 18 */   {     NULL },
  /* row 19 */   {     (MR_String) "=<" },
  /* row 20 */   {     NULL },
  /* row 21 */   {     NULL },
  /* row 22 */   {     NULL },
  /* row 23 */   {     NULL },
  /* row 24 */   {     (MR_String) "unchecked_quotient" },
  /* row 25 */   {     NULL },
  /* row 26 */   {     (MR_String) "+" },
  /* row 27 */   {     (MR_String) "*" },
  /* row 28 */   {     (MR_String) "-" },
  /* row 29 */   {     (MR_String) "<" },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) ">" },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1106 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 1111 "backend_libs.builtin_ops.c"
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

#line 1126 "backend_libs.builtin_ops.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
  }
};

#line 1134 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_array_elem_type_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

#line 1139 "backend_libs.builtin_ops.c"
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

#line 1154 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0
};

#line 1159 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 1164 "backend_libs.builtin_ops.c"
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

#line 1178 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

#line 1184 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_array_elem_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1190 "backend_libs.builtin_ops.c"
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

#line 1207 "backend_libs.builtin_ops.c"
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

#line 1222 "backend_libs.builtin_ops.c"
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

#line 1237 "backend_libs.builtin_ops.c"
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

#line 1252 "backend_libs.builtin_ops.c"
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

#line 1267 "backend_libs.builtin_ops.c"
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

#line 1282 "backend_libs.builtin_ops.c"
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

#line 1297 "backend_libs.builtin_ops.c"
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

#line 1312 "backend_libs.builtin_ops.c"
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

#line 1327 "backend_libs.builtin_ops.c"
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

#line 1342 "backend_libs.builtin_ops.c"
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

#line 1357 "backend_libs.builtin_ops.c"
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

#line 1372 "backend_libs.builtin_ops.c"
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

#line 1387 "backend_libs.builtin_ops.c"
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

#line 1402 "backend_libs.builtin_ops.c"
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

#line 1417 "backend_libs.builtin_ops.c"
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

#line 1432 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_15[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_array_elem_type_0
};

#line 1437 "backend_libs.builtin_ops.c"
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

#line 1452 "backend_libs.builtin_ops.c"
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

#line 1467 "backend_libs.builtin_ops.c"
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

#line 1482 "backend_libs.builtin_ops.c"
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

#line 1497 "backend_libs.builtin_ops.c"
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

#line 1512 "backend_libs.builtin_ops.c"
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

#line 1527 "backend_libs.builtin_ops.c"
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

#line 1542 "backend_libs.builtin_ops.c"
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

#line 1557 "backend_libs.builtin_ops.c"
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

#line 1572 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_binary_op_0_24[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1577 "backend_libs.builtin_ops.c"
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

#line 1592 "backend_libs.builtin_ops.c"
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

#line 1607 "backend_libs.builtin_ops.c"
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

#line 1622 "backend_libs.builtin_ops.c"
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

#line 1637 "backend_libs.builtin_ops.c"
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

#line 1652 "backend_libs.builtin_ops.c"
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

#line 1667 "backend_libs.builtin_ops.c"
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

#line 1682 "backend_libs.builtin_ops.c"
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

#line 1697 "backend_libs.builtin_ops.c"
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

#line 1712 "backend_libs.builtin_ops.c"
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

#line 1727 "backend_libs.builtin_ops.c"
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

#line 1742 "backend_libs.builtin_ops.c"
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

#line 1757 "backend_libs.builtin_ops.c"
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

#line 1772 "backend_libs.builtin_ops.c"
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

#line 1787 "backend_libs.builtin_ops.c"
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

#line 1802 "backend_libs.builtin_ops.c"
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

#line 1817 "backend_libs.builtin_ops.c"
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

#line 1832 "backend_libs.builtin_ops.c"
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

#line 1847 "backend_libs.builtin_ops.c"
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

#line 1862 "backend_libs.builtin_ops.c"
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

#line 1877 "backend_libs.builtin_ops.c"
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

#line 1892 "backend_libs.builtin_ops.c"
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

#line 1939 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_15
};

#line 1944 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_binary_op_0_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_binary_op_0_24
};

#line 1949 "backend_libs.builtin_ops.c"
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

#line 1968 "backend_libs.builtin_ops.c"
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

#line 2017 "backend_libs.builtin_ops.c"
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

#line 2066 "backend_libs.builtin_ops.c"
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

#line 2083 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0 = {
  (MR_String) "scalar_elem_string",
  (MR_Integer) 0
};

#line 2089 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1 = {
  (MR_String) "scalar_elem_int",
  (MR_Integer) 1
};

#line 2095 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2 = {
  (MR_String) "scalar_elem_generic",
  (MR_Integer) 2
};

#line 2101 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2
};

#line 2108 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[3] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0
};

#line 2115 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2122 "backend_libs.builtin_ops.c"
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

#line 2139 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1 = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2147 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 2153 "backend_libs.builtin_ops.c"
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

#line 2168 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2174 "backend_libs.builtin_ops.c"
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

#line 2189 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 2194 "backend_libs.builtin_ops.c"
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

#line 2209 "backend_libs.builtin_ops.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__builtin_ops__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2217 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_code_1_3[1] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__list__pti_list_1__pseudo_1
};

#line 2222 "backend_libs.builtin_ops.c"
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

#line 2237 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0
};

#line 2242 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1
};

#line 2247 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 2252 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3
};

#line 2257 "backend_libs.builtin_ops.c"
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

#line 2281 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_code_1[4] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

#line 2289 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_code_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 2297 "backend_libs.builtin_ops.c"
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

#line 2314 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2319 "backend_libs.builtin_ops.c"
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

#line 2334 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2339 "backend_libs.builtin_ops.c"
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

#line 2354 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2359 "backend_libs.builtin_ops.c"
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

#line 2374 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_3[2] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 2380 "backend_libs.builtin_ops.c"
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

#line 2395 "backend_libs.builtin_ops.c"
static const MR_PseudoTypeInfo backend_libs__builtin_ops__backend_libs__builtin_ops__field_types_simple_expr_1_4[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

#line 2402 "backend_libs.builtin_ops.c"
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

#line 2417 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0
};

#line 2422 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1
};

#line 2427 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[1] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2
};

#line 2432 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[2] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4
};

#line 2438 "backend_libs.builtin_ops.c"
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

#line 2462 "backend_libs.builtin_ops.c"
static const MR_DuFunctorDescPtr backend_libs__builtin_ops__backend_libs__builtin_ops__du_name_ordered_simple_expr_1[5] = {
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0,
  &backend_libs__builtin_ops__backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3
};

#line 2471 "backend_libs.builtin_ops.c"
static const MR_Integer backend_libs__builtin_ops__backend_libs__builtin_ops__functor_number_map_simple_expr_1[5] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 2480 "backend_libs.builtin_ops.c"
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

#line 2497 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0 = {
  (MR_String) "mktag",
  (MR_Integer) 0
};

#line 2503 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1 = {
  (MR_String) "tag",
  (MR_Integer) 1
};

#line 2509 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2 = {
  (MR_String) "unmktag",
  (MR_Integer) 2
};

#line 2515 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3 = {
  (MR_String) "strip_tag",
  (MR_Integer) 3
};

#line 2521 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4 = {
  (MR_String) "mkbody",
  (MR_Integer) 4
};

#line 2527 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5 = {
  (MR_String) "unmkbody",
  (MR_Integer) 5
};

#line 2533 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6 = {
  (MR_String) "bitwise_complement",
  (MR_Integer) 6
};

#line 2539 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7 = {
  (MR_String) "logical_not",
  (MR_Integer) 7
};

#line 2545 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8 = {
  (MR_String) "hash_string",
  (MR_Integer) 8
};

#line 2551 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_9 = {
  (MR_String) "hash_string2",
  (MR_Integer) 9
};

#line 2557 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_10 = {
  (MR_String) "hash_string3",
  (MR_Integer) 10
};

#line 2563 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_11 = {
  (MR_String) "hash_string4",
  (MR_Integer) 11
};

#line 2569 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_12 = {
  (MR_String) "hash_string5",
  (MR_Integer) 12
};

#line 2575 "backend_libs.builtin_ops.c"
static const MR_EnumFunctorDesc backend_libs__builtin_ops__backend_libs__builtin_ops__enum_functor_desc_unary_op_0_13 = {
  (MR_String) "hash_string6",
  (MR_Integer) 13
};

#line 2581 "backend_libs.builtin_ops.c"
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

#line 2599 "backend_libs.builtin_ops.c"
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

#line 2617 "backend_libs.builtin_ops.c"
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

#line 2635 "backend_libs.builtin_ops.c"
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

#line 2652 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____array_elem_type_0_0_10001(
#line 2655 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2657 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2659 "backend_libs.builtin_ops.c"
{
#line 2661 "backend_libs.builtin_ops.c"
  {
#line 2663 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2666 "backend_libs.builtin_ops.c"
    {
#line 2668 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2671 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2673 "backend_libs.builtin_ops.c"
  }
#line 2675 "backend_libs.builtin_ops.c"
}

#line 2678 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____array_elem_type_0_0_10001(
#line 2681 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2683 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2685 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2687 "backend_libs.builtin_ops.c"
{
#line 2689 "backend_libs.builtin_ops.c"
  {
#line 2691 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2694 "backend_libs.builtin_ops.c"
    {
#line 2696 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2699 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2701 "backend_libs.builtin_ops.c"
  }
#line 2703 "backend_libs.builtin_ops.c"
}

#line 2706 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____binary_op_0_0_10001(
#line 2709 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2711 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2713 "backend_libs.builtin_ops.c"
{
#line 2715 "backend_libs.builtin_ops.c"
  {
#line 2717 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2720 "backend_libs.builtin_ops.c"
    {
#line 2722 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2725 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2727 "backend_libs.builtin_ops.c"
  }
#line 2729 "backend_libs.builtin_ops.c"
}

#line 2732 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____binary_op_0_0_10001(
#line 2735 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2737 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2739 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2741 "backend_libs.builtin_ops.c"
{
#line 2743 "backend_libs.builtin_ops.c"
  {
#line 2745 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2748 "backend_libs.builtin_ops.c"
    {
#line 2750 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____binary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2753 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2755 "backend_libs.builtin_ops.c"
  }
#line 2757 "backend_libs.builtin_ops.c"
}

#line 2760 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0_10001(
#line 2763 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2765 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2767 "backend_libs.builtin_ops.c"
{
#line 2769 "backend_libs.builtin_ops.c"
  {
#line 2771 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2774 "backend_libs.builtin_ops.c"
    {
#line 2776 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____scalar_array_elem_type_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2779 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2781 "backend_libs.builtin_ops.c"
  }
#line 2783 "backend_libs.builtin_ops.c"
}

#line 2786 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0_10001(
#line 2789 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2791 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2793 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2795 "backend_libs.builtin_ops.c"
{
#line 2797 "backend_libs.builtin_ops.c"
  {
#line 2799 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2802 "backend_libs.builtin_ops.c"
    {
#line 2804 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____scalar_array_elem_type_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2807 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2809 "backend_libs.builtin_ops.c"
  }
#line 2811 "backend_libs.builtin_ops.c"
}

#line 2814 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_code_1_0_10001(
#line 2817 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2819 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2821 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2823 "backend_libs.builtin_ops.c"
{
#line 2825 "backend_libs.builtin_ops.c"
  {
#line 2827 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2830 "backend_libs.builtin_ops.c"
    {
#line 2832 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2835 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2837 "backend_libs.builtin_ops.c"
  }
#line 2839 "backend_libs.builtin_ops.c"
}

#line 2842 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_code_1_0_10001(
#line 2845 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2847 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2849 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2851 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2853 "backend_libs.builtin_ops.c"
{
#line 2855 "backend_libs.builtin_ops.c"
  {
#line 2857 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2860 "backend_libs.builtin_ops.c"
    {
#line 2862 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_code_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2865 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2867 "backend_libs.builtin_ops.c"
  }
#line 2869 "backend_libs.builtin_ops.c"
}

#line 2872 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____simple_expr_1_0_10001(
#line 2875 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2877 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2879 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2881 "backend_libs.builtin_ops.c"
{
#line 2883 "backend_libs.builtin_ops.c"
  {
#line 2885 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2888 "backend_libs.builtin_ops.c"
    {
#line 2890 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2893 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2895 "backend_libs.builtin_ops.c"
  }
#line 2897 "backend_libs.builtin_ops.c"
}

#line 2900 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____simple_expr_1_0_10001(
#line 2903 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2905 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_2,
#line 2907 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3,
#line 2909 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_4)
#line 2911 "backend_libs.builtin_ops.c"
{
#line 2913 "backend_libs.builtin_ops.c"
  {
#line 2915 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2918 "backend_libs.builtin_ops.c"
    {
#line 2920 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____simple_expr_1_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), &backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_4));
    }
#line 2923 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_2 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2925 "backend_libs.builtin_ops.c"
  }
#line 2927 "backend_libs.builtin_ops.c"
}

#line 2930 "backend_libs.builtin_ops.c"
static MR_bool MR_CALL 
backend_libs__builtin_ops____Unify____unary_op_0_0_10001(
#line 2933 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_1,
#line 2935 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2)
#line 2937 "backend_libs.builtin_ops.c"
{
#line 2939 "backend_libs.builtin_ops.c"
  {
#line 2941 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded;

#line 2944 "backend_libs.builtin_ops.c"
    {
#line 2946 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____unary_op_0_0(((MR_Word) backend_libs__builtin_ops__wrapper_arg_1), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2));
    }
#line 2949 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 2951 "backend_libs.builtin_ops.c"
  }
#line 2953 "backend_libs.builtin_ops.c"
}

#line 2956 "backend_libs.builtin_ops.c"
static void MR_CALL 
backend_libs__builtin_ops____Compare____unary_op_0_0_10001(
#line 2959 "backend_libs.builtin_ops.c"
  MR_Box * backend_libs__builtin_ops__wrapper_arg_1,
#line 2961 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_2,
#line 2963 "backend_libs.builtin_ops.c"
  MR_Box backend_libs__builtin_ops__wrapper_arg_3)
#line 2965 "backend_libs.builtin_ops.c"
{
#line 2967 "backend_libs.builtin_ops.c"
  {
#line 2969 "backend_libs.builtin_ops.c"
    MR_Word backend_libs__builtin_ops__conv0_HeadVar__1_1;

#line 2972 "backend_libs.builtin_ops.c"
    {
#line 2974 "backend_libs.builtin_ops.c"
      backend_libs__builtin_ops____Compare____unary_op_0_0(&backend_libs__builtin_ops__conv0_HeadVar__1_1, ((MR_Word) backend_libs__builtin_ops__wrapper_arg_2), ((MR_Word) backend_libs__builtin_ops__wrapper_arg_3));
    }
#line 2977 "backend_libs.builtin_ops.c"
    *backend_libs__builtin_ops__wrapper_arg_1 = ((MR_Box) (backend_libs__builtin_ops__conv0_HeadVar__1_1));
#line 2979 "backend_libs.builtin_ops.c"
  }
#line 2981 "backend_libs.builtin_ops.c"
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
#line 3025 "backend_libs.builtin_ops.c"
  {
#line 3027 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 3030 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 3032 "backend_libs.builtin_ops.c"
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
#line 3069 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "builtin_ops.m"
        else
#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
          switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) {
#line 163 "builtin_ops.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
            case (MR_Integer) 0:
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                MR_Box backend_libs__builtin_ops__V_105_105 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 163 "builtin_ops.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                  case (MR_Integer) 0:
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
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 1:
#line 3110 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 2:
#line 3116 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 3:
#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
#line 163 "builtin_ops.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                      case (MR_Integer) 0:
#line 3129 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 1:
#line 3135 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                    }
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
              break;
#line 163 "builtin_ops.m"
            case (MR_Integer) 1:
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                MR_Integer backend_libs__builtin_ops__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 163 "builtin_ops.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                  case (MR_Integer) 0:
#line 3163 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 1:
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
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 2:
#line 3187 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 3:
#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
#line 163 "builtin_ops.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                      case (MR_Integer) 0:
#line 3200 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 1:
#line 3206 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                    }
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
              break;
#line 163 "builtin_ops.m"
            case (MR_Integer) 2:
#line 163 "builtin_ops.m"
              {
#line 163 "builtin_ops.m"
                MR_Float backend_libs__builtin_ops__V_103_103 = MR_unbox_float((MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 163 "builtin_ops.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                  case (MR_Integer) 0:
#line 3234 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 1:
#line 3240 "backend_libs.builtin_ops.c"
                    *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 2:
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
                    break;
#line 163 "builtin_ops.m"
                  case (MR_Integer) 3:
#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
#line 163 "builtin_ops.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                      case (MR_Integer) 0:
#line 3271 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 1:
#line 3277 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                    }
#line 163 "builtin_ops.m"
                    break;
#line 163 "builtin_ops.m"
                }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
              break;
#line 163 "builtin_ops.m"
            case (MR_Integer) 3:
#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)))) {
#line 163 "builtin_ops.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                case (MR_Integer) 0:
#line 163 "builtin_ops.m"
                  {
#line 163 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                    switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 163 "builtin_ops.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                      case (MR_Integer) 0:
#line 3314 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 1:
#line 3320 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 2:
#line 3326 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 3:
#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
#line 163 "builtin_ops.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                          case (MR_Integer) 0:
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
#line 3357 "backend_libs.builtin_ops.c"
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
                            break;
#line 163 "builtin_ops.m"
                          case (MR_Integer) 1:
#line 3394 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 163 "builtin_ops.m"
                            break;
#line 163 "builtin_ops.m"
                        }
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                    }
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
                  break;
#line 163 "builtin_ops.m"
                case (MR_Integer) 1:
#line 163 "builtin_ops.m"
                  {
#line 163 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 3)));
#line 163 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 2)));
#line 163 "builtin_ops.m"
                    MR_Word backend_libs__builtin_ops__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));

#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                    switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 163 "builtin_ops.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                      case (MR_Integer) 0:
#line 3426 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 1:
#line 3432 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 2:
#line 3438 "backend_libs.builtin_ops.c"
                        *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                      case (MR_Integer) 3:
#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__3_3, (MR_Integer) 0)))) {
#line 163 "builtin_ops.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                          case (MR_Integer) 0:
#line 3451 "backend_libs.builtin_ops.c"
                            *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 163 "builtin_ops.m"
                            break;
#line 163 "builtin_ops.m"
                          case (MR_Integer) 1:
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
#line 3473 "backend_libs.builtin_ops.c"
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
#line 3493 "backend_libs.builtin_ops.c"
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
                            break;
#line 163 "builtin_ops.m"
                        }
#line 163 "builtin_ops.m"
                        break;
#line 163 "builtin_ops.m"
                    }
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
                  break;
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
              break;
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
#line 163 "builtin_ops.m"
          switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) {
#line 163 "builtin_ops.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
            case (MR_Integer) 0:
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
#line 3611 "backend_libs.builtin_ops.c"
                    {
#line 3613 "backend_libs.builtin_ops.c"
                      return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_4_4);
                    }
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
              break;
#line 163 "builtin_ops.m"
            case (MR_Integer) 1:
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
#line 3639 "backend_libs.builtin_ops.c"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_5_5 == backend_libs__builtin_ops__V_6_6);
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
              break;
#line 163 "builtin_ops.m"
            case (MR_Integer) 2:
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
#line 3664 "backend_libs.builtin_ops.c"
                    backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_7_7 == backend_libs__builtin_ops__V_8_8);
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
              }
#line 163 "builtin_ops.m"
              break;
#line 163 "builtin_ops.m"
            case (MR_Integer) 3:
#line 163 "builtin_ops.m"
#line 163 "builtin_ops.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__1_1, (MR_Integer) 0)))) {
#line 163 "builtin_ops.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 163 "builtin_ops.m"
                case (MR_Integer) 0:
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
#line 3702 "backend_libs.builtin_ops.c"
                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_9_9 == backend_libs__builtin_ops__V_11_11);
#line 163 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 3706 "backend_libs.builtin_ops.c"
                          {
#line 3708 "backend_libs.builtin_ops.c"
                            /* direct tailcall eliminated */
#line 3710 "backend_libs.builtin_ops.c"
                            {
#line 3712 "backend_libs.builtin_ops.c"
                              MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_10_10;
#line 3714 "backend_libs.builtin_ops.c"
                              MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_12_12;

#line 3717 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 3719 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 3721 "backend_libs.builtin_ops.c"
                            }
#line 3723 "backend_libs.builtin_ops.c"
                            continue;
#line 3725 "backend_libs.builtin_ops.c"
                          }
#line 163 "builtin_ops.m"
                      }
#line 163 "builtin_ops.m"
                  }
#line 163 "builtin_ops.m"
                  break;
#line 163 "builtin_ops.m"
                case (MR_Integer) 1:
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
#line 3762 "backend_libs.builtin_ops.c"
                        {
#line 3764 "backend_libs.builtin_ops.c"
                          backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_16_16);
                        }
#line 163 "builtin_ops.m"
                        if (backend_libs__builtin_ops__succeeded)
#line 163 "builtin_ops.m"
                          {
#line 3771 "backend_libs.builtin_ops.c"
                            {
#line 3773 "backend_libs.builtin_ops.c"
                              backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_21, backend_libs__builtin_ops__V_14_14, backend_libs__builtin_ops__V_17_17);
                            }
#line 163 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 3778 "backend_libs.builtin_ops.c"
                              {
#line 3780 "backend_libs.builtin_ops.c"
                                /* direct tailcall eliminated */
#line 3782 "backend_libs.builtin_ops.c"
                                {
#line 3784 "backend_libs.builtin_ops.c"
                                  MR_Word backend_libs__builtin_ops__HeadVar__1__tmp_copy_1 = backend_libs__builtin_ops__V_15_15;
#line 3786 "backend_libs.builtin_ops.c"
                                  MR_Word backend_libs__builtin_ops__HeadVar__2__tmp_copy_2 = backend_libs__builtin_ops__V_18_18;

#line 3789 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__HeadVar__2_2 = backend_libs__builtin_ops__HeadVar__2__tmp_copy_2;
#line 3791 "backend_libs.builtin_ops.c"
                                  backend_libs__builtin_ops__HeadVar__1_1 = backend_libs__builtin_ops__HeadVar__1__tmp_copy_1;
#line 3793 "backend_libs.builtin_ops.c"
                                }
#line 3795 "backend_libs.builtin_ops.c"
                                continue;
#line 3797 "backend_libs.builtin_ops.c"
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
              break;
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
#line 3850 "backend_libs.builtin_ops.c"
      *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 0;
#line 157 "builtin_ops.m"
    else
#line 157 "builtin_ops.m"
#line 157 "builtin_ops.m"
      switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) {
#line 157 "builtin_ops.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 157 "builtin_ops.m"
        case (MR_Integer) 0:
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_64_64 = (MR_hl_field(MR_mktag(0), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 157 "builtin_ops.m"
#line 157 "builtin_ops.m"
            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 157 "builtin_ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 157 "builtin_ops.m"
              case (MR_Integer) 0:
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
#line 3889 "backend_libs.builtin_ops.c"
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
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 1:
#line 3912 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 2:
#line 3918 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 3:
#line 3924 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
            }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
          break;
#line 157 "builtin_ops.m"
        case (MR_Integer) 1:
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_66_66 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 1));
#line 157 "builtin_ops.m"
            MR_Box backend_libs__builtin_ops__V_67_67 = (MR_hl_field(MR_mktag(1), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0));

#line 157 "builtin_ops.m"
#line 157 "builtin_ops.m"
            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 157 "builtin_ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 157 "builtin_ops.m"
              case (MR_Integer) 0:
#line 3950 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 1:
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
#line 3970 "backend_libs.builtin_ops.c"
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
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 2:
#line 3993 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 3:
#line 3999 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
            }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
          break;
#line 157 "builtin_ops.m"
        case (MR_Integer) 2:
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 157 "builtin_ops.m"
#line 157 "builtin_ops.m"
            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 157 "builtin_ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 157 "builtin_ops.m"
              case (MR_Integer) 0:
#line 4023 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 1:
#line 4029 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 2:
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
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 3:
#line 4053 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
            }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
          break;
#line 157 "builtin_ops.m"
        case (MR_Integer) 3:
#line 157 "builtin_ops.m"
          {
#line 157 "builtin_ops.m"
            MR_Word backend_libs__builtin_ops__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__HeadVar__2_2, (MR_Integer) 0)));

#line 157 "builtin_ops.m"
#line 157 "builtin_ops.m"
            switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__3_3)) {
#line 157 "builtin_ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 157 "builtin_ops.m"
              case (MR_Integer) 0:
#line 4077 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 1:
#line 4083 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 2:
#line 4089 "backend_libs.builtin_ops.c"
                *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 157 "builtin_ops.m"
                break;
#line 157 "builtin_ops.m"
              case (MR_Integer) 3:
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
                break;
#line 157 "builtin_ops.m"
            }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
          break;
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
#line 157 "builtin_ops.m"
      switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) {
#line 157 "builtin_ops.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 157 "builtin_ops.m"
        case (MR_Integer) 0:
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
#line 4180 "backend_libs.builtin_ops.c"
                {
#line 4182 "backend_libs.builtin_ops.c"
                  backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_3_3, backend_libs__builtin_ops__V_5_5);
                }
#line 157 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 4187 "backend_libs.builtin_ops.c"
                  {
#line 4189 "backend_libs.builtin_ops.c"
                    return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_4_4, backend_libs__builtin_ops__V_6_6);
                  }
#line 157 "builtin_ops.m"
              }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
          break;
#line 157 "builtin_ops.m"
        case (MR_Integer) 1:
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
#line 4221 "backend_libs.builtin_ops.c"
                {
#line 4223 "backend_libs.builtin_ops.c"
                  backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_7_7, backend_libs__builtin_ops__V_9_9);
                }
#line 157 "builtin_ops.m"
                if (backend_libs__builtin_ops__succeeded)
#line 4228 "backend_libs.builtin_ops.c"
                  {
#line 4230 "backend_libs.builtin_ops.c"
                    return backend_libs__builtin_ops__succeeded = mercury__builtin__unify_2_p_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_8_8, backend_libs__builtin_ops__V_10_10);
                  }
#line 157 "builtin_ops.m"
              }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
          break;
#line 157 "builtin_ops.m"
        case (MR_Integer) 2:
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
#line 4256 "backend_libs.builtin_ops.c"
                {
#line 4258 "backend_libs.builtin_ops.c"
                  return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____simple_expr_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_11_11, backend_libs__builtin_ops__V_12_12);
                }
#line 157 "builtin_ops.m"
              }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
          break;
#line 157 "builtin_ops.m"
        case (MR_Integer) 3:
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
#line 4284 "backend_libs.builtin_ops.c"
                {
#line 4286 "backend_libs.builtin_ops.c"
                  return backend_libs__builtin_ops__succeeded = mercury__list____Unify____list_1_0(backend_libs__builtin_ops__TypeInfo_for_T_17, backend_libs__builtin_ops__V_13_13, backend_libs__builtin_ops__V_14_14);
                }
#line 157 "builtin_ops.m"
              }
#line 157 "builtin_ops.m"
          }
#line 157 "builtin_ops.m"
          break;
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
#line 4345 "backend_libs.builtin_ops.c"
  {
#line 4347 "backend_libs.builtin_ops.c"
    MR_bool backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__HeadVar__2_1 == backend_libs__builtin_ops__HeadVar__2_2);

#line 4350 "backend_libs.builtin_ops.c"
    return backend_libs__builtin_ops__succeeded;
#line 4352 "backend_libs.builtin_ops.c"
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
#line 4381 "backend_libs.builtin_ops.c"
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
#line 4406 "backend_libs.builtin_ops.c"
          *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "builtin_ops.m"
        else
#line 47 "builtin_ops.m"
          {
#line 47 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_4_4 > backend_libs__builtin_ops__V_5_5);
#line 47 "builtin_ops.m"
            if (backend_libs__builtin_ops__succeeded)
#line 4416 "backend_libs.builtin_ops.c"
              *backend_libs__builtin_ops__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "builtin_ops.m"
            else
#line 47 "builtin_ops.m"
              {
#line 47 "builtin_ops.m"
                MR_Word backend_libs__builtin_ops__V_6_6;

#line 47 "builtin_ops.m"
#line 47 "builtin_ops.m"
                switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__2_2)) {
#line 47 "builtin_ops.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "builtin_ops.m"
                  case (MR_Integer) 0:
#line 47 "builtin_ops.m"
#line 47 "builtin_ops.m"
                    switch (MR_unmkbody(backend_libs__builtin_ops__HeadVar__2_2)) {
#line 47 "builtin_ops.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "builtin_ops.m"
                      case (MR_Integer) 0:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 1:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 2:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 3:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 4:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 5:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 6:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 7:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 8:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 9:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 10:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 11:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 12:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 13:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 14:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 15:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 16:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 17:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 18:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 19:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 20:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 21:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 22:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 23:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 24:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 25:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 26:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 27:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 28:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 29:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 30:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 31:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 32:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 33:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 34:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 35:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 36:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 37:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 38:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 39:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 40:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 41:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                      case (MR_Integer) 42:
#line 47 "builtin_ops.m"
                        {
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__V_6_6 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
                          backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 47 "builtin_ops.m"
                        }
#line 47 "builtin_ops.m"
                        break;
#line 47 "builtin_ops.m"
                    }
#line 47 "builtin_ops.m"
                    break;
#line 47 "builtin_ops.m"
                  case (MR_Integer) 1:
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
                    break;
#line 47 "builtin_ops.m"
                  case (MR_Integer) 2:
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
                    break;
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
#line 47 "builtin_ops.m"
    switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) {
#line 47 "builtin_ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "builtin_ops.m"
      case (MR_Integer) 0:
#line 47 "builtin_ops.m"
#line 47 "builtin_ops.m"
        switch (MR_unmkbody(backend_libs__builtin_ops__HeadVar__1_1)) {
#line 47 "builtin_ops.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 47 "builtin_ops.m"
          case (MR_Integer) 0:
#line 5071 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 0;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 1:
#line 5077 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 1;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 2:
#line 5083 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 2;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 3:
#line 5089 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 3;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 4:
#line 5095 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 4;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 5:
#line 5101 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 5;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 6:
#line 5107 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 6;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 7:
#line 5113 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 7;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 8:
#line 5119 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 8;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 9:
#line 5125 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 9;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 10:
#line 5131 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 10;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 11:
#line 5137 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 11;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 12:
#line 5143 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 12;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 13:
#line 5149 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 13;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 14:
#line 5155 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 14;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 15:
#line 5161 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 16;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 16:
#line 5167 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 17;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 17:
#line 5173 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 18;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 18:
#line 5179 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 19;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 19:
#line 5185 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 20;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 20:
#line 5191 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 21;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 21:
#line 5197 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 22;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 22:
#line 5203 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 23;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 23:
#line 5209 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 25;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 24:
#line 5215 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 26;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 25:
#line 5221 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 27;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 26:
#line 5227 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 28;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 27:
#line 5233 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 29;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 28:
#line 5239 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 30;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 29:
#line 5245 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 31;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 30:
#line 5251 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 32;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 31:
#line 5257 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 33;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 32:
#line 5263 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 34;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 33:
#line 5269 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 35;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 34:
#line 5275 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 36;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 35:
#line 5281 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 37;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 36:
#line 5287 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 38;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 37:
#line 5293 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 39;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 38:
#line 5299 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 40;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 39:
#line 5305 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 41;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 40:
#line 5311 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 42;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 41:
#line 5317 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 43;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
          case (MR_Integer) 42:
#line 5323 "backend_libs.builtin_ops.c"
            *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 44;
#line 47 "builtin_ops.m"
            break;
#line 47 "builtin_ops.m"
        }
#line 47 "builtin_ops.m"
        break;
#line 47 "builtin_ops.m"
      case (MR_Integer) 1:
#line 5333 "backend_libs.builtin_ops.c"
        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 15;
#line 47 "builtin_ops.m"
        break;
#line 47 "builtin_ops.m"
      case (MR_Integer) 2:
#line 5339 "backend_libs.builtin_ops.c"
        *backend_libs__builtin_ops__HeadVar__2_2 = (MR_Integer) 24;
#line 47 "builtin_ops.m"
        break;
#line 47 "builtin_ops.m"
    }
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
#line 47 "builtin_ops.m"
      switch (MR_tag((MR_Word) backend_libs__builtin_ops__HeadVar__1_1)) {
#line 47 "builtin_ops.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 47 "builtin_ops.m"
        case (MR_Integer) 0:
#line 47 "builtin_ops.m"
#line 47 "builtin_ops.m"
          switch (MR_unmkbody(backend_libs__builtin_ops__HeadVar__1_1)) {
#line 47 "builtin_ops.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 47 "builtin_ops.m"
            case (MR_Integer) 0:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 1:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 2:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 3:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 4:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 5:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 6:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 7:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 8:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 9:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 10:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 11:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 12:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 13:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 14:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 15:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 16:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 17:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 18:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 19:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 20:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 21:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 22:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 23:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 24:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 25:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 26:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 27:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 28:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 29:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 30:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 31:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 32:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 33:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 34:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 35:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 36:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 37:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 38:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 39:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 40:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 41:
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
              break;
#line 47 "builtin_ops.m"
            case (MR_Integer) 42:
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
              break;
#line 47 "builtin_ops.m"
          }
#line 47 "builtin_ops.m"
          break;
#line 47 "builtin_ops.m"
        case (MR_Integer) 1:
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
#line 6054 "backend_libs.builtin_ops.c"
                {
#line 6056 "backend_libs.builtin_ops.c"
                  return backend_libs__builtin_ops__succeeded = backend_libs__builtin_ops____Unify____array_elem_type_0_0(backend_libs__builtin_ops__V_33_33, backend_libs__builtin_ops__V_34_34);
                }
#line 47 "builtin_ops.m"
              }
#line 47 "builtin_ops.m"
          }
#line 47 "builtin_ops.m"
          break;
#line 47 "builtin_ops.m"
        case (MR_Integer) 2:
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
#line 6082 "backend_libs.builtin_ops.c"
                backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_51_51 == backend_libs__builtin_ops__V_52_52);
#line 47 "builtin_ops.m"
              }
#line 47 "builtin_ops.m"
          }
#line 47 "builtin_ops.m"
          break;
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
#line 6123 "backend_libs.builtin_ops.c"
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
#line 6156 "backend_libs.builtin_ops.c"
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
#line 6169 "backend_libs.builtin_ops.c"
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
#line 6237 "backend_libs.builtin_ops.c"
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
#line 6262 "backend_libs.builtin_ops.c"
            backend_libs__builtin_ops__TypeInfo_9_9 = (MR_Word) &backend_libs__builtin_ops_scalar_common_1[0];
#line 6264 "backend_libs.builtin_ops.c"
            {
#line 6266 "backend_libs.builtin_ops.c"
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
#line 236 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__lo_0;
#line 236 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__hi_1;
#line 236 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__mid_2;
#line 236 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__result_3;

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
            /* binary string jump switch */
#line 236 "builtin_ops.m"
            backend_libs__builtin_ops__lo_0 = (MR_Integer) 0;
#line 236 "builtin_ops.m"
            backend_libs__builtin_ops__hi_1 = (MR_Integer) 5;
#line 236 "builtin_ops.m"
            do
#line 236 "builtin_ops.m"
              {
#line 236 "builtin_ops.m"
                backend_libs__builtin_ops__mid_2 = (((backend_libs__builtin_ops__lo_0 + backend_libs__builtin_ops__hi_1)) / (MR_Integer) 2);
#line 236 "builtin_ops.m"
                backend_libs__builtin_ops__result_3 = MR_strcmp(backend_libs__builtin_ops__ModuleName_11, ((&backend_libs__builtin_ops_vector_common_2[70 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0);
#line 236 "builtin_ops.m"
                if ((backend_libs__builtin_ops__result_3 == (MR_Integer) 0))
#line 236 "builtin_ops.m"
                  {
#line 236 "builtin_ops.m"
#line 236 "builtin_ops.m"
                    switch (((&backend_libs__builtin_ops_vector_common_2[70 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1) {
#line 236 "builtin_ops.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 236 "builtin_ops.m"
                      case (MR_Integer) 0:
#line 233 "builtin_ops.m"
                        {
#line 233 "builtin_ops.m"
                          /* case "builtin" */
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
#line 233 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 1:
#line 374 "builtin_ops.m"
                        {
#line 374 "builtin_ops.m"
                          /* case "float" */
#line 374 "builtin_ops.m"
                          {
#line 374 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_536_536;
#line 374 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__V_537_537;
#line 374 "builtin_ops.m"
                            MR_Integer backend_libs__builtin_ops__slot_7;
#line 374 "builtin_ops.m"
                            MR_String backend_libs__builtin_ops__str_8;

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
                                    /* hashed string jump switch */
#line 374 "builtin_ops.m"
                                    /* compute the hash value of the input string */
#line 374 "builtin_ops.m"
                                    backend_libs__builtin_ops__slot_7 = ((MR_hash_string4(backend_libs__builtin_ops__PredName_7)) & (MR_Integer) 15);
#line 374 "builtin_ops.m"
                                    /* no collisions; no hash chain loop */
#line 374 "builtin_ops.m"
                                    /* lookup the string for this hash slot */
#line 374 "builtin_ops.m"
                                    backend_libs__builtin_ops__str_8 = ((&backend_libs__builtin_ops_vector_common_3[16 + backend_libs__builtin_ops__slot_7]))->backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
#line 374 "builtin_ops.m"
                                    /* did we find a match? */
#line 374 "builtin_ops.m"
                                    if ((((backend_libs__builtin_ops__str_8 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_8, backend_libs__builtin_ops__PredName_7) == 0))))
#line 374 "builtin_ops.m"
                                      {
#line 374 "builtin_ops.m"
                                        /* we found a match; dispatch to the corresponding code */
#line 374 "builtin_ops.m"
#line 374 "builtin_ops.m"
                                        switch (backend_libs__builtin_ops__slot_7) {
#line 374 "builtin_ops.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 1:
#line 409 "builtin_ops.m"
                                            {
#line 409 "builtin_ops.m"
                                              /* case ">=" */
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
#line 409 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 3:
#line 409 "builtin_ops.m"
                                            {
#line 409 "builtin_ops.m"
                                              /* case "=<" */
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
#line 409 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 8:
#line 401 "builtin_ops.m"
                                            {
#line 401 "builtin_ops.m"
                                              /* case "unchecked_quotient" */
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
#line 401 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 10:
#line 376 "builtin_ops.m"
                                            {
#line 376 "builtin_ops.m"
                                              /* case "+" */
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
#line 376 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 11:
#line 401 "builtin_ops.m"
                                            {
#line 401 "builtin_ops.m"
                                              /* case "*" */
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
#line 401 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 12:
#line 387 "builtin_ops.m"
                                            {
#line 387 "builtin_ops.m"
                                              /* case "-" */
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
                                                    MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_75_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &backend_libs__builtin_ops_scalar_common_4[2])));
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
#line 387 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 13:
#line 409 "builtin_ops.m"
                                            {
#line 409 "builtin_ops.m"
                                              /* case "<" */
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
#line 409 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 15:
#line 409 "builtin_ops.m"
                                            {
#line 409 "builtin_ops.m"
                                              /* case ">" */
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
#line 409 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                        }
#line 374 "builtin_ops.m"
                                        /* jump out of search loop */
#line 374 "builtin_ops.m"
                                        goto label_1;
#line 374 "builtin_ops.m"
                                      }
#line 374 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 374 "builtin_ops.m"
                                  label_1:;
#line 402 "builtin_ops.m"
                                  }
#line 374 "builtin_ops.m"
                              }
#line 374 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 2:
#line 294 "builtin_ops.m"
                        {
#line 294 "builtin_ops.m"
                          /* case "int" */
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
                                {
#line 294 "builtin_ops.m"
                                  MR_Integer backend_libs__builtin_ops__case_num_6 = (MR_Integer) -1;

#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                  switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 0)) {
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 42:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "*"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 0;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 43:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "+"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 1;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 45:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "-"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 2;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 47:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "/\\"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 3;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 60:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "<"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 4;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 61:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "=<"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 5;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 62:
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) {
#line 294 "builtin_ops.m"
                                        case (MR_Integer) 0:
#line 294 "builtin_ops.m"
                                          backend_libs__builtin_ops__case_num_6 = (MR_Integer) 6;
#line 294 "builtin_ops.m"
                                          break;
#line 294 "builtin_ops.m"
                                        case (MR_Integer) 61:
#line 294 "builtin_ops.m"
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_7, (MR_String) ">="))
#line 294 "builtin_ops.m"
                                            backend_libs__builtin_ops__case_num_6 = (MR_Integer) 7;
#line 294 "builtin_ops.m"
                                          break;
#line 294 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 92:
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) {
#line 294 "builtin_ops.m"
                                        case (MR_Integer) 0:
#line 294 "builtin_ops.m"
                                          backend_libs__builtin_ops__case_num_6 = (MR_Integer) 8;
#line 294 "builtin_ops.m"
                                          break;
#line 294 "builtin_ops.m"
                                        case (MR_Integer) 47:
#line 294 "builtin_ops.m"
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_7, (MR_String) "\\/"))
#line 294 "builtin_ops.m"
                                            backend_libs__builtin_ops__case_num_6 = (MR_Integer) 9;
#line 294 "builtin_ops.m"
                                          break;
#line 294 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 109:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "minus"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 10;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 112:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "plus"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 11;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 116:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "times"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 12;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 117:
#line 294 "builtin_ops.m"
                                      if (((((((((((((((((((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 9)) == (MR_Integer) 95))))
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                        switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 10)) {
#line 294 "builtin_ops.m"
                                          case (MR_Integer) 108:
#line 294 "builtin_ops.m"
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_left_shift"))
#line 294 "builtin_ops.m"
                                              backend_libs__builtin_ops__case_num_6 = (MR_Integer) 13;
#line 294 "builtin_ops.m"
                                            break;
#line 294 "builtin_ops.m"
                                          case (MR_Integer) 113:
#line 294 "builtin_ops.m"
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_quotient"))
#line 294 "builtin_ops.m"
                                              backend_libs__builtin_ops__case_num_6 = (MR_Integer) 14;
#line 294 "builtin_ops.m"
                                            break;
#line 294 "builtin_ops.m"
                                          case (MR_Integer) 114:
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                            switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_7, 11)) {
#line 294 "builtin_ops.m"
                                              case (MR_Integer) 101:
#line 294 "builtin_ops.m"
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_rem"))
#line 294 "builtin_ops.m"
                                                  backend_libs__builtin_ops__case_num_6 = (MR_Integer) 15;
#line 294 "builtin_ops.m"
                                                break;
#line 294 "builtin_ops.m"
                                              case (MR_Integer) 105:
#line 294 "builtin_ops.m"
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_7, (MR_String) "unchecked_right_shift"))
#line 294 "builtin_ops.m"
                                                  backend_libs__builtin_ops__case_num_6 = (MR_Integer) 16;
#line 294 "builtin_ops.m"
                                                break;
#line 294 "builtin_ops.m"
                                            }
#line 294 "builtin_ops.m"
                                            break;
#line 294 "builtin_ops.m"
                                        }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 120:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_7, (MR_String) "xor"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 17;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                  }
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                  switch (backend_libs__builtin_ops__case_num_6) {
#line 294 "builtin_ops.m"
                                    default:
#line 294 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 0:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "*" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 1:
#line 296 "builtin_ops.m"
                                      {
#line 296 "builtin_ops.m"
                                        /* case "+" */
#line 296 "builtin_ops.m"
#line 296 "builtin_ops.m"
                                        switch (backend_libs__builtin_ops__ProcNum_12) {
#line 296 "builtin_ops.m"
                                          default:
#line 296 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 296 "builtin_ops.m"
                                            break;
#line 296 "builtin_ops.m"
                                          case (MR_Integer) 0:
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
                                            break;
#line 296 "builtin_ops.m"
                                          case (MR_Integer) 1:
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
                                            break;
#line 296 "builtin_ops.m"
                                          case (MR_Integer) 2:
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
                                            break;
#line 296 "builtin_ops.m"
                                        }
#line 296 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 2:
#line 315 "builtin_ops.m"
                                      {
#line 315 "builtin_ops.m"
                                        /* case "-" */
#line 315 "builtin_ops.m"
#line 315 "builtin_ops.m"
                                        switch (backend_libs__builtin_ops__ProcNum_12) {
#line 315 "builtin_ops.m"
                                          default:
#line 315 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 315 "builtin_ops.m"
                                            break;
#line 315 "builtin_ops.m"
                                          case (MR_Integer) 0:
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
                                                  MR_hl_field(MR_mktag(3), backend_libs__builtin_ops__V_123_123, 2) = ((MR_Box) (MR_mkword(MR_mktag(1), &backend_libs__builtin_ops_scalar_common_4[1])));
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
                                            break;
#line 315 "builtin_ops.m"
                                          case (MR_Integer) 1:
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
                                            break;
#line 315 "builtin_ops.m"
                                          case (MR_Integer) 2:
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
                                            break;
#line 315 "builtin_ops.m"
                                        }
#line 315 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 3:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "/\" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 4:
#line 369 "builtin_ops.m"
                                      {
#line 369 "builtin_ops.m"
                                        /* case "<" */
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
#line 369 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 5:
#line 369 "builtin_ops.m"
                                      {
#line 369 "builtin_ops.m"
                                        /* case "=<" */
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
#line 369 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 6:
#line 369 "builtin_ops.m"
                                      {
#line 369 "builtin_ops.m"
                                        /* case ">" */
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
#line 369 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 7:
#line 369 "builtin_ops.m"
                                      {
#line 369 "builtin_ops.m"
                                        /* case ">=" */
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
#line 369 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 8:
#line 362 "builtin_ops.m"
                                      {
#line 362 "builtin_ops.m"
                                        /* case "\" */
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
#line 362 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 9:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "\/" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 10:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "minus" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 11:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "plus" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 12:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "times" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 13:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "unchecked_left_shift" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 14:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "unchecked_quotient" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 15:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "unchecked_rem" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 16:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "unchecked_right_shift" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 17:
#line 334 "builtin_ops.m"
                                      {
#line 334 "builtin_ops.m"
                                        /* case "xor" */
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
#line 338 "builtin_ops.m"
                                                switch (backend_libs__builtin_ops__ProcNum_12) {
#line 338 "builtin_ops.m"
                                                  default:
#line 338 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 338 "builtin_ops.m"
                                                    break;
#line 338 "builtin_ops.m"
                                                  case (MR_Integer) 0:
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
                                                    break;
#line 338 "builtin_ops.m"
                                                  case (MR_Integer) 1:
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
                                                    break;
#line 338 "builtin_ops.m"
                                                  case (MR_Integer) 2:
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
                                                    break;
#line 338 "builtin_ops.m"
                                                }
#line 334 "builtin_ops.m"
                                            }
#line 334 "builtin_ops.m"
                                        }
#line 334 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                  }
#line 294 "builtin_ops.m"
                                }
#line 359 "builtin_ops.m"
                              }
#line 294 "builtin_ops.m"
                          }
#line 294 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 3:
#line 237 "builtin_ops.m"
                        {
#line 237 "builtin_ops.m"
                          /* case "io" */
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
                                      backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_4[0]);
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
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 4:
#line 246 "builtin_ops.m"
                        {
#line 246 "builtin_ops.m"
                          /* case "private_builtin" */
#line 246 "builtin_ops.m"
                          {
#line 250 "builtin_ops.m"
                            MR_Integer backend_libs__builtin_ops__slot_4;
#line 250 "builtin_ops.m"
                            MR_String backend_libs__builtin_ops__str_5;

#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_12 == (MR_Integer) 0);
#line 246 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 246 "builtin_ops.m"
                              {
#line 250 "builtin_ops.m"
                                /* hashed string jump switch */
#line 250 "builtin_ops.m"
                                /* compute the hash value of the input string */
#line 250 "builtin_ops.m"
                                backend_libs__builtin_ops__slot_4 = ((MR_hash_string5(backend_libs__builtin_ops__PredName_7)) & (MR_Integer) 31);
#line 250 "builtin_ops.m"
                                /* hash chain loop */
#line 250 "builtin_ops.m"
                                do
#line 250 "builtin_ops.m"
                                  {
#line 250 "builtin_ops.m"
                                    /* lookup the string for this hash slot */
#line 250 "builtin_ops.m"
                                    backend_libs__builtin_ops__str_5 = ((&backend_libs__builtin_ops_vector_common_2[38 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
#line 250 "builtin_ops.m"
                                    /* did we find a match? */
#line 250 "builtin_ops.m"
                                    if ((((backend_libs__builtin_ops__str_5 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_5, backend_libs__builtin_ops__PredName_7) == 0))))
#line 250 "builtin_ops.m"
                                      {
#line 250 "builtin_ops.m"
                                        /* we found a match; dispatch to the corresponding code */
#line 250 "builtin_ops.m"
#line 250 "builtin_ops.m"
                                        switch (backend_libs__builtin_ops__slot_4) {
#line 250 "builtin_ops.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 1:
#line 281 "builtin_ops.m"
                                            {
#line 281 "builtin_ops.m"
                                              /* case "pointer_equal" */
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
#line 281 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 2:
#line 260 "builtin_ops.m"
                                            {
#line 260 "builtin_ops.m"
                                              /* case "unsafe_type_cast" */
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
#line 260 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 3:
#line 248 "builtin_ops.m"
                                            {
#line 248 "builtin_ops.m"
                                              /* case "trace_get_io_state" */
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
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 9:
#line 270 "builtin_ops.m"
                                            {
#line 270 "builtin_ops.m"
                                              /* case "builtin_int_gt" */
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
#line 270 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 14:
#line 270 "builtin_ops.m"
                                            {
#line 270 "builtin_ops.m"
                                              /* case "builtin_int_lt" */
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
#line 270 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 17:
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 21:
#line 256 "builtin_ops.m"
                                            {
#line 256 "builtin_ops.m"
                                              /* case "store_at_ref", "store_at_ref_impure" */
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
#line 256 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 27:
#line 276 "builtin_ops.m"
                                            {
#line 276 "builtin_ops.m"
                                              /* case "builtin_compound_eq" */
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
#line 276 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 29:
#line 276 "builtin_ops.m"
                                            {
#line 276 "builtin_ops.m"
                                              /* case "builtin_compound_lt" */
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
#line 276 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 31:
#line 251 "builtin_ops.m"
                                            {
#line 251 "builtin_ops.m"
                                              /* case "trace_set_io_state" */
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
                                                    backend_libs__builtin_ops__CodePrime_13 = (MR_Word) MR_mkword(MR_mktag(3), &backend_libs__builtin_ops_scalar_common_4[0]);
#line 252 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 251 "builtin_ops.m"
                                                  }
#line 251 "builtin_ops.m"
                                              }
#line 251 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                        }
#line 250 "builtin_ops.m"
                                        /* jump out of search loop */
#line 250 "builtin_ops.m"
                                        goto label_0;
#line 250 "builtin_ops.m"
                                      }
#line 250 "builtin_ops.m"
                                    else
#line 250 "builtin_ops.m"
                                      {
#line 250 "builtin_ops.m"
                                        /* no match yet, so get next slot in hash chain */
#line 250 "builtin_ops.m"
                                        backend_libs__builtin_ops__slot_4 = ((&backend_libs__builtin_ops_vector_common_2[38 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
#line 250 "builtin_ops.m"
                                      }
#line 250 "builtin_ops.m"
                                  }
#line 250 "builtin_ops.m"
                                while ((backend_libs__builtin_ops__slot_4 >= (MR_Integer) 0));
#line 250 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 250 "builtin_ops.m"
                              label_0:;
#line 246 "builtin_ops.m"
                              }
#line 246 "builtin_ops.m"
                          }
#line 246 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 5:
#line 290 "builtin_ops.m"
                        {
#line 290 "builtin_ops.m"
                          /* case "term_size_prof_builtin" */
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
#line 290 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                    }
#line 236 "builtin_ops.m"
                    /* jump out of search loop */
#line 236 "builtin_ops.m"
                    goto label_2;
#line 236 "builtin_ops.m"
                  }
#line 236 "builtin_ops.m"
                else
#line 236 "builtin_ops.m"
                if ((backend_libs__builtin_ops__result_3 < (MR_Integer) 0))
#line 236 "builtin_ops.m"
                  backend_libs__builtin_ops__hi_1 = (backend_libs__builtin_ops__mid_2 - (MR_Integer) 1);
#line 236 "builtin_ops.m"
                else
#line 236 "builtin_ops.m"
                  backend_libs__builtin_ops__lo_0 = (backend_libs__builtin_ops__mid_2 + (MR_Integer) 1);
#line 236 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            while ((backend_libs__builtin_ops__lo_0 <= backend_libs__builtin_ops__hi_1));
#line 236 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 236 "builtin_ops.m"
          label_2:;
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
#line 10620 "backend_libs.builtin_ops.c"
        backend_libs__builtin_ops__V_31_31 = (MR_Word) &backend_libs__builtin_ops_scalar_common_4[3];
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
#line 236 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__lo_0;
#line 236 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__hi_1;
#line 236 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__mid_2;
#line 236 "builtin_ops.m"
    MR_Integer backend_libs__builtin_ops__result_3;

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
            /* binary string jump switch */
#line 236 "builtin_ops.m"
            backend_libs__builtin_ops__lo_0 = (MR_Integer) 0;
#line 236 "builtin_ops.m"
            backend_libs__builtin_ops__hi_1 = (MR_Integer) 5;
#line 236 "builtin_ops.m"
            do
#line 236 "builtin_ops.m"
              {
#line 236 "builtin_ops.m"
                backend_libs__builtin_ops__mid_2 = (((backend_libs__builtin_ops__lo_0 + backend_libs__builtin_ops__hi_1)) / (MR_Integer) 2);
#line 236 "builtin_ops.m"
                backend_libs__builtin_ops__result_3 = MR_strcmp(backend_libs__builtin_ops__ModuleName_9, ((&backend_libs__builtin_ops_vector_common_2[32 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0);
#line 236 "builtin_ops.m"
                if ((backend_libs__builtin_ops__result_3 == (MR_Integer) 0))
#line 236 "builtin_ops.m"
                  {
#line 236 "builtin_ops.m"
#line 236 "builtin_ops.m"
                    switch (((&backend_libs__builtin_ops_vector_common_2[32 + backend_libs__builtin_ops__mid_2]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1) {
#line 236 "builtin_ops.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 236 "builtin_ops.m"
                      case (MR_Integer) 0:
#line 233 "builtin_ops.m"
                        {
#line 233 "builtin_ops.m"
                          /* case "builtin" */
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
#line 233 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 1:
#line 374 "builtin_ops.m"
                        {
#line 374 "builtin_ops.m"
                          /* case "float" */
#line 374 "builtin_ops.m"
                          {
#line 374 "builtin_ops.m"
                            MR_Word backend_libs__builtin_ops__V_506_506;
#line 402 "builtin_ops.m"
                            MR_Box backend_libs__builtin_ops__V_507_507;
#line 374 "builtin_ops.m"
                            MR_Integer backend_libs__builtin_ops__slot_7;
#line 374 "builtin_ops.m"
                            MR_String backend_libs__builtin_ops__str_8;

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
                                    /* hashed string jump switch */
#line 374 "builtin_ops.m"
                                    /* compute the hash value of the input string */
#line 374 "builtin_ops.m"
                                    backend_libs__builtin_ops__slot_7 = ((MR_hash_string4(backend_libs__builtin_ops__PredName_6)) & (MR_Integer) 15);
#line 374 "builtin_ops.m"
                                    /* no collisions; no hash chain loop */
#line 374 "builtin_ops.m"
                                    /* lookup the string for this hash slot */
#line 374 "builtin_ops.m"
                                    backend_libs__builtin_ops__str_8 = ((&backend_libs__builtin_ops_vector_common_3[0 + backend_libs__builtin_ops__slot_7]))->backend_libs__builtin_ops__vector_common_type_3_0__vct_3_f_0;
#line 374 "builtin_ops.m"
                                    /* did we find a match? */
#line 374 "builtin_ops.m"
                                    if ((((backend_libs__builtin_ops__str_8 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_8, backend_libs__builtin_ops__PredName_6) == 0))))
#line 374 "builtin_ops.m"
                                      {
#line 374 "builtin_ops.m"
                                        /* we found a match; dispatch to the corresponding code */
#line 374 "builtin_ops.m"
#line 374 "builtin_ops.m"
                                        switch (backend_libs__builtin_ops__slot_7) {
#line 374 "builtin_ops.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 1:
#line 410 "builtin_ops.m"
                                            {
#line 410 "builtin_ops.m"
                                              /* case ">=" */
#line 410 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 3:
#line 410 "builtin_ops.m"
                                            {
#line 410 "builtin_ops.m"
                                              /* case "=<" */
#line 410 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 8:
#line 401 "builtin_ops.m"
                                            {
#line 401 "builtin_ops.m"
                                              /* case "unchecked_quotient" */
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
#line 401 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 10:
#line 376 "builtin_ops.m"
                                            {
#line 376 "builtin_ops.m"
                                              /* case "+" */
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
#line 376 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 11:
#line 401 "builtin_ops.m"
                                            {
#line 401 "builtin_ops.m"
                                              /* case "*" */
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
#line 401 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 12:
#line 387 "builtin_ops.m"
                                            {
#line 387 "builtin_ops.m"
                                              /* case "-" */
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
#line 387 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 13:
#line 410 "builtin_ops.m"
                                            {
#line 410 "builtin_ops.m"
                                              /* case "<" */
#line 410 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                          case (MR_Integer) 15:
#line 410 "builtin_ops.m"
                                            {
#line 410 "builtin_ops.m"
                                              /* case ">" */
#line 410 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_506_506 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "builtin_ops.m"
                                            }
#line 374 "builtin_ops.m"
                                            break;
#line 374 "builtin_ops.m"
                                        }
#line 374 "builtin_ops.m"
                                        /* jump out of search loop */
#line 374 "builtin_ops.m"
                                        goto label_1;
#line 374 "builtin_ops.m"
                                      }
#line 374 "builtin_ops.m"
                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 374 "builtin_ops.m"
                                  label_1:;
#line 402 "builtin_ops.m"
                                  }
#line 374 "builtin_ops.m"
                              }
#line 374 "builtin_ops.m"
                          }
#line 374 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 2:
#line 294 "builtin_ops.m"
                        {
#line 294 "builtin_ops.m"
                          /* case "int" */
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
                                {
#line 294 "builtin_ops.m"
                                  MR_Integer backend_libs__builtin_ops__case_num_6 = (MR_Integer) -1;

#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                  switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 0)) {
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 42:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "*"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 0;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 43:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "+"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 1;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 45:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "-"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 2;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 47:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "/\\"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 3;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 60:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "<"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 4;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 61:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "=<"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 5;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 62:
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) {
#line 294 "builtin_ops.m"
                                        case (MR_Integer) 0:
#line 294 "builtin_ops.m"
                                          backend_libs__builtin_ops__case_num_6 = (MR_Integer) 6;
#line 294 "builtin_ops.m"
                                          break;
#line 294 "builtin_ops.m"
                                        case (MR_Integer) 61:
#line 294 "builtin_ops.m"
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_6, (MR_String) ">="))
#line 294 "builtin_ops.m"
                                            backend_libs__builtin_ops__case_num_6 = (MR_Integer) 7;
#line 294 "builtin_ops.m"
                                          break;
#line 294 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 92:
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                      switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) {
#line 294 "builtin_ops.m"
                                        case (MR_Integer) 0:
#line 294 "builtin_ops.m"
                                          backend_libs__builtin_ops__case_num_6 = (MR_Integer) 8;
#line 294 "builtin_ops.m"
                                          break;
#line 294 "builtin_ops.m"
                                        case (MR_Integer) 47:
#line 294 "builtin_ops.m"
                                          if (MR_offset_streq(2, backend_libs__builtin_ops__PredName_6, (MR_String) "\\/"))
#line 294 "builtin_ops.m"
                                            backend_libs__builtin_ops__case_num_6 = (MR_Integer) 9;
#line 294 "builtin_ops.m"
                                          break;
#line 294 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 109:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "minus"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 10;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 112:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "plus"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 11;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 116:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "times"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 12;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 117:
#line 294 "builtin_ops.m"
                                      if (((((((((((((((((((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 1)) == (MR_Integer) 110)) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 2)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 3)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 5)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 6)) == (MR_Integer) 107)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 7)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 8)) == (MR_Integer) 100)))) && (((MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 9)) == (MR_Integer) 95))))
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                        switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 10)) {
#line 294 "builtin_ops.m"
                                          case (MR_Integer) 108:
#line 294 "builtin_ops.m"
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_left_shift"))
#line 294 "builtin_ops.m"
                                              backend_libs__builtin_ops__case_num_6 = (MR_Integer) 13;
#line 294 "builtin_ops.m"
                                            break;
#line 294 "builtin_ops.m"
                                          case (MR_Integer) 113:
#line 294 "builtin_ops.m"
                                            if (MR_offset_streq(11, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_quotient"))
#line 294 "builtin_ops.m"
                                              backend_libs__builtin_ops__case_num_6 = (MR_Integer) 14;
#line 294 "builtin_ops.m"
                                            break;
#line 294 "builtin_ops.m"
                                          case (MR_Integer) 114:
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                            switch (MR_nth_code_unit(backend_libs__builtin_ops__PredName_6, 11)) {
#line 294 "builtin_ops.m"
                                              case (MR_Integer) 101:
#line 294 "builtin_ops.m"
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_rem"))
#line 294 "builtin_ops.m"
                                                  backend_libs__builtin_ops__case_num_6 = (MR_Integer) 15;
#line 294 "builtin_ops.m"
                                                break;
#line 294 "builtin_ops.m"
                                              case (MR_Integer) 105:
#line 294 "builtin_ops.m"
                                                if (MR_offset_streq(12, backend_libs__builtin_ops__PredName_6, (MR_String) "unchecked_right_shift"))
#line 294 "builtin_ops.m"
                                                  backend_libs__builtin_ops__case_num_6 = (MR_Integer) 16;
#line 294 "builtin_ops.m"
                                                break;
#line 294 "builtin_ops.m"
                                            }
#line 294 "builtin_ops.m"
                                            break;
#line 294 "builtin_ops.m"
                                        }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 120:
#line 294 "builtin_ops.m"
                                      if (MR_offset_streq(1, backend_libs__builtin_ops__PredName_6, (MR_String) "xor"))
#line 294 "builtin_ops.m"
                                        backend_libs__builtin_ops__case_num_6 = (MR_Integer) 17;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                  }
#line 294 "builtin_ops.m"
#line 294 "builtin_ops.m"
                                  switch (backend_libs__builtin_ops__case_num_6) {
#line 294 "builtin_ops.m"
                                    default:
#line 294 "builtin_ops.m"
                                      backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 0:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "*" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 1:
#line 296 "builtin_ops.m"
                                      {
#line 296 "builtin_ops.m"
                                        /* case "+" */
#line 296 "builtin_ops.m"
#line 296 "builtin_ops.m"
                                        switch (backend_libs__builtin_ops__ProcNum_10) {
#line 296 "builtin_ops.m"
                                          default:
#line 296 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 296 "builtin_ops.m"
                                            break;
#line 296 "builtin_ops.m"
                                          case (MR_Integer) 0:
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
                                            break;
#line 296 "builtin_ops.m"
                                          case (MR_Integer) 1:
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
                                            break;
#line 296 "builtin_ops.m"
                                          case (MR_Integer) 2:
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
                                            break;
#line 296 "builtin_ops.m"
                                        }
#line 296 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 2:
#line 315 "builtin_ops.m"
                                      {
#line 315 "builtin_ops.m"
                                        /* case "-" */
#line 315 "builtin_ops.m"
#line 315 "builtin_ops.m"
                                        switch (backend_libs__builtin_ops__ProcNum_10) {
#line 315 "builtin_ops.m"
                                          default:
#line 315 "builtin_ops.m"
                                            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 315 "builtin_ops.m"
                                            break;
#line 315 "builtin_ops.m"
                                          case (MR_Integer) 0:
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
                                            break;
#line 315 "builtin_ops.m"
                                          case (MR_Integer) 1:
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
                                            break;
#line 315 "builtin_ops.m"
                                          case (MR_Integer) 2:
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
                                            break;
#line 315 "builtin_ops.m"
                                        }
#line 315 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 3:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "/\" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 4:
#line 369 "builtin_ops.m"
                                      {
#line 369 "builtin_ops.m"
                                        /* case "<" */
#line 370 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 5:
#line 369 "builtin_ops.m"
                                      {
#line 369 "builtin_ops.m"
                                        /* case "=<" */
#line 370 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 6:
#line 369 "builtin_ops.m"
                                      {
#line 369 "builtin_ops.m"
                                        /* case ">" */
#line 370 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 7:
#line 369 "builtin_ops.m"
                                      {
#line 369 "builtin_ops.m"
                                        /* case ">=" */
#line 370 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 369 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 370 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 8:
#line 362 "builtin_ops.m"
                                      {
#line 362 "builtin_ops.m"
                                        /* case "\" */
#line 362 "builtin_ops.m"
                                        backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 362 "builtin_ops.m"
                                        if (backend_libs__builtin_ops__succeeded)
#line 362 "builtin_ops.m"
                                          backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_508_508 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 9:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "\/" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 10:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "minus" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 11:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "plus" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 12:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "times" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 13:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "unchecked_left_shift" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 14:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "unchecked_quotient" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 15:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "unchecked_rem" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 16:
#line 358 "builtin_ops.m"
                                      {
#line 358 "builtin_ops.m"
                                        /* case "unchecked_right_shift" */
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
#line 358 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                    case (MR_Integer) 17:
#line 334 "builtin_ops.m"
                                      {
#line 334 "builtin_ops.m"
                                        /* case "xor" */
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
#line 338 "builtin_ops.m"
                                                switch (backend_libs__builtin_ops__ProcNum_10) {
#line 338 "builtin_ops.m"
                                                  default:
#line 338 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 338 "builtin_ops.m"
                                                    break;
#line 338 "builtin_ops.m"
                                                  case (MR_Integer) 0:
#line 336 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 338 "builtin_ops.m"
                                                    break;
#line 338 "builtin_ops.m"
                                                  case (MR_Integer) 1:
#line 339 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 338 "builtin_ops.m"
                                                    break;
#line 338 "builtin_ops.m"
                                                  case (MR_Integer) 2:
#line 342 "builtin_ops.m"
                                                    backend_libs__builtin_ops__succeeded = MR_TRUE;
#line 338 "builtin_ops.m"
                                                    break;
#line 338 "builtin_ops.m"
                                                }
#line 334 "builtin_ops.m"
                                            }
#line 334 "builtin_ops.m"
                                        }
#line 334 "builtin_ops.m"
                                      }
#line 294 "builtin_ops.m"
                                      break;
#line 294 "builtin_ops.m"
                                  }
#line 294 "builtin_ops.m"
                                }
#line 359 "builtin_ops.m"
                              }
#line 294 "builtin_ops.m"
                          }
#line 294 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 3:
#line 237 "builtin_ops.m"
                        {
#line 237 "builtin_ops.m"
                          /* case "io" */
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
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 4:
#line 246 "builtin_ops.m"
                        {
#line 246 "builtin_ops.m"
                          /* case "private_builtin" */
#line 246 "builtin_ops.m"
                          {
#line 250 "builtin_ops.m"
                            MR_Integer backend_libs__builtin_ops__slot_4;
#line 250 "builtin_ops.m"
                            MR_String backend_libs__builtin_ops__str_5;

#line 277 "builtin_ops.m"
                            backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__ProcNum_10 == (MR_Integer) 0);
#line 246 "builtin_ops.m"
                            if (backend_libs__builtin_ops__succeeded)
#line 246 "builtin_ops.m"
                              {
#line 250 "builtin_ops.m"
                                /* hashed string jump switch */
#line 250 "builtin_ops.m"
                                /* compute the hash value of the input string */
#line 250 "builtin_ops.m"
                                backend_libs__builtin_ops__slot_4 = ((MR_hash_string5(backend_libs__builtin_ops__PredName_6)) & (MR_Integer) 31);
#line 250 "builtin_ops.m"
                                /* hash chain loop */
#line 250 "builtin_ops.m"
                                do
#line 250 "builtin_ops.m"
                                  {
#line 250 "builtin_ops.m"
                                    /* lookup the string for this hash slot */
#line 250 "builtin_ops.m"
                                    backend_libs__builtin_ops__str_5 = ((&backend_libs__builtin_ops_vector_common_2[0 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_0;
#line 250 "builtin_ops.m"
                                    /* did we find a match? */
#line 250 "builtin_ops.m"
                                    if ((((backend_libs__builtin_ops__str_5 != NULL)) && ((strcmp(backend_libs__builtin_ops__str_5, backend_libs__builtin_ops__PredName_6) == 0))))
#line 250 "builtin_ops.m"
                                      {
#line 250 "builtin_ops.m"
                                        /* we found a match; dispatch to the corresponding code */
#line 250 "builtin_ops.m"
#line 250 "builtin_ops.m"
                                        switch (backend_libs__builtin_ops__slot_4) {
#line 250 "builtin_ops.m"
                                          default: /*NOTREACHED*/ MR_assert(0);
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 1:
#line 281 "builtin_ops.m"
                                            {
#line 281 "builtin_ops.m"
                                              /* case "pointer_equal" */
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
#line 281 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 2:
#line 260 "builtin_ops.m"
                                            {
#line 260 "builtin_ops.m"
                                              /* case "unsafe_type_cast" */
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
#line 260 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 3:
#line 248 "builtin_ops.m"
                                            {
#line 248 "builtin_ops.m"
                                              /* case "trace_get_io_state" */
#line 248 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 9:
#line 270 "builtin_ops.m"
                                            {
#line 270 "builtin_ops.m"
                                              /* case "builtin_int_gt" */
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
#line 270 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 14:
#line 270 "builtin_ops.m"
                                            {
#line 270 "builtin_ops.m"
                                              /* case "builtin_int_lt" */
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
#line 270 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 17:
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 21:
#line 256 "builtin_ops.m"
                                            {
#line 256 "builtin_ops.m"
                                              /* case "store_at_ref", "store_at_ref_impure" */
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
#line 256 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 27:
#line 276 "builtin_ops.m"
                                            {
#line 276 "builtin_ops.m"
                                              /* case "builtin_compound_eq" */
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
#line 276 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 29:
#line 276 "builtin_ops.m"
                                            {
#line 276 "builtin_ops.m"
                                              /* case "builtin_compound_lt" */
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
#line 276 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                          case (MR_Integer) 31:
#line 251 "builtin_ops.m"
                                            {
#line 251 "builtin_ops.m"
                                              /* case "trace_set_io_state" */
#line 251 "builtin_ops.m"
                                              backend_libs__builtin_ops__succeeded = (backend_libs__builtin_ops__V_496_496 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "builtin_ops.m"
                                            }
#line 250 "builtin_ops.m"
                                            break;
#line 250 "builtin_ops.m"
                                        }
#line 250 "builtin_ops.m"
                                        /* jump out of search loop */
#line 250 "builtin_ops.m"
                                        goto label_0;
#line 250 "builtin_ops.m"
                                      }
#line 250 "builtin_ops.m"
                                    else
#line 250 "builtin_ops.m"
                                      {
#line 250 "builtin_ops.m"
                                        /* no match yet, so get next slot in hash chain */
#line 250 "builtin_ops.m"
                                        backend_libs__builtin_ops__slot_4 = ((&backend_libs__builtin_ops_vector_common_2[0 + backend_libs__builtin_ops__slot_4]))->backend_libs__builtin_ops__vector_common_type_2_0__vct_2_f_1;
#line 250 "builtin_ops.m"
                                      }
#line 250 "builtin_ops.m"
                                  }
#line 250 "builtin_ops.m"
                                while ((backend_libs__builtin_ops__slot_4 >= (MR_Integer) 0));
#line 250 "builtin_ops.m"
                                backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 250 "builtin_ops.m"
                              label_0:;
#line 246 "builtin_ops.m"
                              }
#line 246 "builtin_ops.m"
                          }
#line 246 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                      case (MR_Integer) 5:
#line 290 "builtin_ops.m"
                        {
#line 290 "builtin_ops.m"
                          /* case "term_size_prof_builtin" */
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
#line 290 "builtin_ops.m"
                        }
#line 236 "builtin_ops.m"
                        break;
#line 236 "builtin_ops.m"
                    }
#line 236 "builtin_ops.m"
                    /* jump out of search loop */
#line 236 "builtin_ops.m"
                    goto label_2;
#line 236 "builtin_ops.m"
                  }
#line 236 "builtin_ops.m"
                else
#line 236 "builtin_ops.m"
                if ((backend_libs__builtin_ops__result_3 < (MR_Integer) 0))
#line 236 "builtin_ops.m"
                  backend_libs__builtin_ops__hi_1 = (backend_libs__builtin_ops__mid_2 - (MR_Integer) 1);
#line 236 "builtin_ops.m"
                else
#line 236 "builtin_ops.m"
                  backend_libs__builtin_ops__lo_0 = (backend_libs__builtin_ops__mid_2 + (MR_Integer) 1);
#line 236 "builtin_ops.m"
              }
#line 236 "builtin_ops.m"
            while ((backend_libs__builtin_ops__lo_0 <= backend_libs__builtin_ops__hi_1));
#line 236 "builtin_ops.m"
            backend_libs__builtin_ops__succeeded = MR_FALSE;
#line 236 "builtin_ops.m"
          label_2:;
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
