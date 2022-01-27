/*
** Automatically generated from `bytecode.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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


/* :- module bytecode_backend.bytecode. */
/* :- implementation. */

/*
INIT mercury__bytecode_backend__bytecode__init
ENDINIT
*/

#include "bytecode_backend.bytecode.mih"


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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.bytecode_data.mih"
#include "backend_libs.c_util.mih"
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




#line 138 "bytecode_backend.bytecode.c"
static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;

#line 141 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_0[1];

#line 144 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0;

#line 147 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_1[1];

#line 150 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1;

#line 153 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_2[1];

#line 156 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2;

#line 159 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0[1];

#line 162 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1[1];

#line 165 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2[1];

#line 168 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0[3];

#line 171 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_arg_0[3];

#line 174 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_arg_0[3];

#line 177 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_0[4];

#line 180 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0;

#line 183 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_1;

#line 186 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_var_info_0;

#line 189 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_2[6];

#line 192 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2;

#line 195 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_3;

#line 198 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_4[1];

#line 201 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_4;

#line 204 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_5[1];

#line 207 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_5;

#line 210 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_6;

#line 213 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_7[1];

#line 216 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_7;

#line 219 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_8[1];

#line 222 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_8;

#line 225 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_9[2];

#line 228 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_9;

#line 231 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_10;

#line 234 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;

#line 237 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_11[3];

#line 240 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_11;

#line 243 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_12[1];

#line 246 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_12;

#line 249 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_13[3];

#line 252 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_13;

#line 255 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_14[1];

#line 258 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_14;

#line 261 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_15[1];

#line 264 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_15;

#line 267 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_16[1];

#line 270 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_16;

#line 273 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_17;

#line 276 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_18[2];

#line 279 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_18;

#line 282 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_19[1];

#line 285 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_19;

#line 288 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_20;

#line 291 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_21[1];

#line 294 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_21;

#line 297 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_22[1];

#line 300 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_22;

#line 303 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_23[2];

#line 306 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_23;

#line 309 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_24[3];

#line 312 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_24;

#line 315 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1builtin__type_ctor_info_int_0;

#line 318 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_25[3];

#line 321 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_25;

#line 324 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_26[3];

#line 327 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_26;

#line 330 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode__pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0;

#line 333 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0;

#line 336 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_27[3];

#line 339 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_27;

#line 342 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_28[3];

#line 345 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_28;

#line 348 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_29[3];

#line 351 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_29;

#line 354 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_30[3];

#line 357 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_30;

#line 360 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_31[5];

#line 363 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_31;

#line 366 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_32[4];

#line 369 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_32;

#line 372 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_33[4];

#line 375 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_33;

#line 378 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_34[3];

#line 381 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_34;

#line 384 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_35[3];

#line 387 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_35;

#line 390 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_36[2];

#line 393 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_36;

#line 396 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_37;

#line 399 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_38;

#line 402 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_39;

#line 405 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_40[1];

#line 408 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_40;

#line 411 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_41;

#line 414 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_0[10];

#line 417 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1[1];

#line 420 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2[1];

#line 423 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3[30];

#line 426 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_code_0[4];

#line 429 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_code_0[42];

#line 432 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_code_0[42];

#line 435 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_0[4];

#line 438 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0;

#line 441 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_1[1];

#line 444 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1;

#line 447 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_2[1];

#line 450 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2;

#line 453 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_3[1];

#line 456 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3;

#line 459 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_4[1];

#line 462 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4;

#line 465 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_5[5];

#line 468 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5;

#line 471 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_6[3];

#line 474 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6;

#line 477 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_7[3];

#line 480 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7;

#line 483 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8;

#line 486 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9;

#line 489 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_0[2];

#line 492 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1[1];

#line 495 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2[1];

#line 498 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3[6];

#line 501 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0[4];

#line 504 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0[10];

#line 507 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_id_0[10];

#line 510 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0;

#line 513 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_1[1];

#line 516 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1;

#line 519 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_2[2];

#line 522 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2;

#line 525 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_3[2];

#line 528 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3;

#line 531 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_4[1];

#line 534 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4;

#line 537 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0[1];

#line 540 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1[1];

#line 543 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2[1];

#line 546 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3[2];

#line 549 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0[4];

#line 552 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0[5];

#line 555 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0[5];

#line 558 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0;

#line 561 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1;

#line 564 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2;

#line 567 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_dir_0[3];

#line 570 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_dir_0[3];

#line 573 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_dir_0[3];

#line 576 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0;

#line 579 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_reg_type_0[1];

#line 582 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0[1];

#line 585 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0[1];

#line 588 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0;

#line 591 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1;

#line 594 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2;

#line 597 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3;

#line 600 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4;

#line 603 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5;

#line 606 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_test_id_0[6];

#line 609 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0[6];

#line 612 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_test_id_0[6];

#line 615 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0;

#line 618 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_var_info_0_0[2];

#line 621 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0;

#line 624 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0[1];

#line 627 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0[1];

#line 630 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_var_info_0[1];

#line 633 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_var_info_0[1];

#line 636 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_arg_0_0_10001(
#line 639 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 641 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 644 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_arg_0_0_10001(
#line 647 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 649 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 651 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 654 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_code_0_0_10001(
#line 657 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 659 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 662 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_code_0_0_10001(
#line 665 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 667 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 669 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 672 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_id_0_0_10001(
#line 675 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 677 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 680 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_id_0_0_10001(
#line 683 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 685 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 687 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 690 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_tag_0_0_10001(
#line 693 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 695 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 698 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_tag_0_0_10001(
#line 701 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 703 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 705 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 708 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_dir_0_0_10001(
#line 711 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 713 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 716 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_dir_0_0_10001(
#line 719 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 721 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 723 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 726 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_is_func_0_0_10001(
#line 729 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 731 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 734 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_is_func_0_0_10001(
#line 737 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 739 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 741 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 744 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_label_id_0_0_10001(
#line 747 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 749 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 752 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_label_id_0_0_10001(
#line 755 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 757 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 759 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 762 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_module_id_0_0_10001(
#line 765 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 767 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 770 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_module_id_0_0_10001(
#line 773 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 775 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 777 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 780 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_pred_id_0_0_10001(
#line 783 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 785 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 788 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_pred_id_0_0_10001(
#line 791 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 793 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 795 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 798 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_proc_id_0_0_10001(
#line 801 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 803 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 806 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_proc_id_0_0_10001(
#line 809 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 811 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 813 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 816 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_reg_type_0_0_10001(
#line 819 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 821 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 824 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_reg_type_0_0_10001(
#line 827 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 829 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 831 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 834 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_temp_0_0_10001(
#line 837 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 839 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 842 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_temp_0_0_10001(
#line 845 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 847 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 849 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 852 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_test_id_0_0_10001(
#line 855 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 857 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 860 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_test_id_0_0_10001(
#line 863 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 865 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 867 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 870 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_tree_0_0_10001(
#line 873 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 875 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 878 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_tree_0_0_10001(
#line 881 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 883 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 885 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 888 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_0_0_10001(
#line 891 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 893 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 896 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_0_0_10001(
#line 899 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 901 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 903 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 906 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_info_0_0_10001(
#line 909 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 911 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2);

#line 914 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_info_0_0_10001(
#line 917 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 919 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 921 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3);

#line 542 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_p_0(
#line 542 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__N_5);

#line 537 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_p_0(
#line 537 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__N_5);

#line 266 "bytecode.m"
static MR_bool MR_CALL 
bytecode_backend__bytecode__IntroducedFrom__pred__output_args__266__1_2_p_0(
#line 266 "bytecode.m"
  MR_Word bytecode_backend__bytecode__OtherConsIds_72,
#line 266 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_82);

#line 1194 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_sym_name_3_p_0(
#line 1194 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 1188 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_float_3_p_0(
#line 1188 "bytecode.m"
  MR_Float bytecode_backend__bytecode__Val_4);

#line 1182 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_int_3_p_0(
#line 1182 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Val_4);

#line 1176 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_string_3_p_0(
#line 1176 "bytecode.m"
  MR_String bytecode_backend__bytecode__Val_4);

#line 1166 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_cstring_3_p_0(
#line 1166 "bytecode.m"
  MR_String bytecode_backend__bytecode__Str_4);

#line 912 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_unop_3_p_0(
#line 912 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Unop_4);

#line 906 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_unop_3_p_0(
#line 906 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Unop_4);

#line 898 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_binop_3_p_0(
#line 898 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Binop_4);

#line 892 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_binop_3_p_0(
#line 892 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Binop_4);

#line 871 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_tag_3_p_0(
#line 871 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 852 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_tag_3_p_0(
#line 852 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 803 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_cons_id_3_p_0(
#line 803 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 755 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_cons_id_3_p_0(
#line 755 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 748 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_label_id_3_p_0(
#line 748 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__LabelId_4);

#line 743 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_label_id_3_p_0(
#line 743 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__LabelId_4);

#line 736 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_proc_id_3_p_0(
#line 736 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__ProcId_4);

#line 731 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_proc_id_3_p_0(
#line 731 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__ProcId_4);

#line 724 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_pred_id_3_p_0(
#line 724 "bytecode.m"
  MR_String bytecode_backend__bytecode__PredId_4);

#line 719 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_pred_id_3_p_0(
#line 719 "bytecode.m"
  MR_String bytecode_backend__bytecode__PredId_4);

#line 712 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_module_id_3_p_0(
#line 712 "bytecode.m"
  MR_Word bytecode_backend__bytecode__ModuleId_4);

#line 707 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_module_id_3_p_0(
#line 707 "bytecode.m"
  MR_Word bytecode_backend__bytecode__ModuleId_4);

#line 696 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_test_id_3_p_0(
#line 696 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 687 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_test_id_3_p_0(
#line 687 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 676 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_var_dirs_3_p_0(
#line 676 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 658 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_var_dirs_3_p_0(
#line 658 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 642 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_temp_3_p_0(
#line 642 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Var_4);

#line 637 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_temp_3_p_0(
#line 637 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Var_4);

#line 628 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_vars_3_p_0(
#line 628 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 623 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_var_3_p_0(
#line 623 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Var_4);

#line 616 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_vars_3_p_0(
#line 616 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 611 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_var_3_p_0(
#line 611 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Var_4);

#line 597 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_arg_3_p_0(
#line 597 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 585 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_arg_3_p_0(
#line 585 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 578 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_length_3_p_0(
#line 578 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Length_4);

#line 573 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_length_3_p_0(
#line 573 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Length_4);

#line 559 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_is_func_3_p_0(
#line 559 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__IsFunc_4);

#line 549 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_is_func_3_p_0(
#line 549 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__IsFunc_4);

#line 529 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_determinism_3_p_0(
#line 529 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Detism_4);

#line 523 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_determinism_3_p_0(
#line 523 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Detism_4);

#line 509 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_var_infos_3_p_0(
#line 509 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 497 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_var_infos_3_p_0(
#line 497 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 398 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_args_3_p_0_1(
#line 398 "bytecode.m"
  MR_Box bytecode_backend__bytecode__closure_arg,
#line 398 "bytecode.m"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 398 "bytecode.m"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 398 "bytecode.m"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_3);

#line 363 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_args_3_p_0(
#line 363 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 266 "bytecode.m"
static MR_bool MR_CALL 
bytecode_backend__bytecode__output_args_3_p_0_1(
#line 266 "bytecode.m"
  MR_Box bytecode_backend__bytecode__closure_arg);

#line 229 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_args_3_p_0(
#line 229 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 219 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_list_3_p_0(
#line 219 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);

#line 210 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_bytecode_list_3_p_0(
#line 210 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1);


static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_1[5][2];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_2[2][3];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_3[1][5];

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_4[1][6];


#line 1012 "bytecode.m"
/* sealed */ struct bytecode_backend__bytecode__vector_common_type_5_0_s {
#line 1012 "bytecode.m"
  const MR_Integer bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;
#line 1012 "bytecode.m"
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_5_0_s bytecode_backend__bytecode_vector_common_5[22];

#line 1023 "bytecode.m"
/* sealed */ struct bytecode_backend__bytecode__vector_common_type_6_0_s {
#line 1023 "bytecode.m"
  const MR_String bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;
#line 1023 "bytecode.m"
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_6_0_s bytecode_backend__bytecode_vector_common_6[22];



static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&bytecode_backend__bytecode_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&bytecode_backend__bytecode_scalar_common_4[0])),
    ((MR_Box) (bytecode_backend__bytecode__debug_args_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0)),
    ((MR_Box) (&bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0))
  },
};

static /* final */ const MR_Box bytecode_backend__bytecode_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct bytecode_backend__bytecode__vector_common_type_5_0_s bytecode_backend__bytecode_vector_common_5[22] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
  /* row 8 */   {     (MR_Integer) 0 },
  /* row 9 */   {     (MR_Integer) 1 },
  /* row 10 */   {     (MR_Integer) 2 },
  /* row 11 */   {     (MR_Integer) 5 },
  /* row 12 */   {     (MR_Integer) 3 },
  /* row 13 */   {     (MR_Integer) 4 },
  /* row 14 */   {     (MR_Integer) 6 },
  /* row 15 */   {     (MR_Integer) 7 },
  /* row 16 */   {     (MR_Integer) 8 },
  /* row 17 */   {     (MR_Integer) 9 },
  /* row 18 */   {     (MR_Integer) 10 },
  /* row 19 */   {     (MR_Integer) 11 },
  /* row 20 */   {     (MR_Integer) 12 },
  /* row 21 */   {     (MR_Integer) 13 },
};

static /* final */ const struct bytecode_backend__bytecode__vector_common_type_6_0_s bytecode_backend__bytecode_vector_common_6[22] = {
  /* row 0 */   {     (MR_String) "det" },
  /* row 1 */   {     (MR_String) "semidet" },
  /* row 2 */   {     (MR_String) "multidet" },
  /* row 3 */   {     (MR_String) "nondet" },
  /* row 4 */   {     (MR_String) "cc_multidet" },
  /* row 5 */   {     (MR_String) "cc_nondet" },
  /* row 6 */   {     (MR_String) "erroneous" },
  /* row 7 */   {     (MR_String) "failure" },
  /* row 8 */   {     (MR_String) "mktag" },
  /* row 9 */   {     (MR_String) "tag" },
  /* row 10 */   {     (MR_String) "unmktag" },
  /* row 11 */   {     (MR_String) "strip_tag" },
  /* row 12 */   {     (MR_String) "mkbody" },
  /* row 13 */   {     (MR_String) "unmkbody" },
  /* row 14 */   {     (MR_String) "bitwise_complement" },
  /* row 15 */   {     (MR_String) "not" },
  /* row 16 */   {     (MR_String) "hash_string" },
  /* row 17 */   {     (MR_String) "hash_string2" },
  /* row 18 */   {     (MR_String) "hash_string3" },
  /* row 19 */   {     (MR_String) "hash_string4" },
  /* row 20 */   {     (MR_String) "hash_string5" },
  /* row 21 */   {     (MR_String) "hash_string6" },
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



#line 1395 "bytecode_backend.bytecode.c"
static const MR_FA_PseudoTypeInfo_Struct1 bytecode_backend__bytecode__list__pti_list_1__plain_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0
  }
};

#line 1403 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1408 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0 = {
  (MR_String) "byte_arg_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_0,
  NULL,
  NULL,
  NULL
};

#line 1423 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1428 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1 = {
  (MR_String) "byte_arg_int_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_1,
  NULL,
  NULL,
  NULL
};

#line 1443 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1448 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2 = {
  (MR_String) "byte_arg_float_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_arg_0_2,
  NULL,
  NULL,
  NULL
};

#line 1463 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0
};

#line 1468 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1
};

#line 1473 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2
};

#line 1478 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_arg_0_2
  }
};

#line 1497 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_arg_0[3] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_arg_0_0
};

#line 1504 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_arg_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1511 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_arg_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_arg_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_arg",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_arg_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_arg_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_arg_0
};

#line 1528 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1536 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0 = {
  (MR_String) "byte_enter_pred",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_0,
  NULL,
  NULL,
  NULL
};

#line 1551 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_1 = {
  (MR_String) "byte_endof_pred",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1566 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_var_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0
  }
};

#line 1574 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_2[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_var_info_0
};

#line 1584 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2 = {
  (MR_String) "byte_enter_proc",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_2,
  NULL,
  NULL,
  NULL
};

#line 1599 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_3 = {
  (MR_String) "byte_endof_proc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1614 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1619 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_4 = {
  (MR_String) "byte_label",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_4,
  NULL,
  NULL,
  NULL
};

#line 1634 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1639 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_5 = {
  (MR_String) "byte_enter_disjunction",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_5,
  NULL,
  NULL,
  NULL
};

#line 1654 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_6 = {
  (MR_String) "byte_endof_disjunction",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1669 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1674 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_7 = {
  (MR_String) "byte_enter_disjunct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 7,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_7,
  NULL,
  NULL,
  NULL
};

#line 1689 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_8[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1694 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_8 = {
  (MR_String) "byte_endof_disjunct",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 8,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_8,
  NULL,
  NULL,
  NULL
};

#line 1709 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_9[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1715 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_9 = {
  (MR_String) "byte_enter_switch",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 9,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_9,
  NULL,
  NULL,
  NULL
};

#line 1730 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_10 = {
  (MR_String) "byte_endof_switch",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1745 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0
  }
};

#line 1753 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_11[3] = {
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__list__ti_list_1bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1760 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_11 = {
  (MR_String) "byte_enter_switch_arm",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 11,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_11,
  NULL,
  NULL,
  NULL
};

#line 1775 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1780 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_12 = {
  (MR_String) "byte_endof_switch_arm",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 12,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_12,
  NULL,
  NULL,
  NULL
};

#line 1795 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_13[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1802 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_13 = {
  (MR_String) "byte_enter_if",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 13,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_13,
  NULL,
  NULL,
  NULL
};

#line 1817 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_14[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1822 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_14 = {
  (MR_String) "byte_enter_then",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 14,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_14,
  NULL,
  NULL,
  NULL
};

#line 1837 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1842 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_15 = {
  (MR_String) "byte_endof_then",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 15,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_15,
  NULL,
  NULL,
  NULL
};

#line 1857 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1862 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_16 = {
  (MR_String) "byte_enter_else",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 16,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_16,
  NULL,
  NULL,
  NULL
};

#line 1877 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_17 = {
  (MR_String) "byte_endof_if",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 17,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1892 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_18[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1898 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_18 = {
  (MR_String) "byte_enter_negation",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 11,
  (MR_Integer) 18,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_18,
  NULL,
  NULL,
  NULL
};

#line 1913 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_19[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1918 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_19 = {
  (MR_String) "byte_endof_negation_goal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 19,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_19,
  NULL,
  NULL,
  NULL
};

#line 1933 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_20 = {
  (MR_String) "byte_endof_negation",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 20,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1948 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1953 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_21 = {
  (MR_String) "byte_enter_commit",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 13,
  (MR_Integer) 21,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_21,
  NULL,
  NULL,
  NULL
};

#line 1968 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_22[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1973 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_22 = {
  (MR_String) "byte_endof_commit",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 14,
  (MR_Integer) 22,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_22,
  NULL,
  NULL,
  NULL
};

#line 1988 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_23[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1994 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_23 = {
  (MR_String) "byte_assign",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 23,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_23,
  NULL,
  NULL,
  NULL
};

#line 2009 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_24[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_test_id_0
};

#line 2016 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_24 = {
  (MR_String) "byte_test",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 16,
  (MR_Integer) 24,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_24,
  NULL,
  NULL,
  NULL
};

#line 2031 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2039 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_25[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2046 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_25 = {
  (MR_String) "byte_construct",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 17,
  (MR_Integer) 25,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_25,
  NULL,
  NULL,
  NULL
};

#line 2061 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_26[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2068 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_26 = {
  (MR_String) "byte_deconstruct",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 18,
  (MR_Integer) 26,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_26,
  NULL,
  NULL,
  NULL
};

#line 2083 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct2 bytecode_backend__bytecode__pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0
  }
};

#line 2092 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &bytecode_backend__bytecode__pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0
  }
};

#line 2100 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_27[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0
};

#line 2107 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_27 = {
  (MR_String) "byte_complex_construct",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 19,
  (MR_Integer) 27,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_27,
  NULL,
  NULL,
  NULL
};

#line 2122 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_28[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0bytecode_backend__bytecode__type_ctor_info_byte_dir_0
};

#line 2129 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_28 = {
  (MR_String) "byte_complex_deconstruct",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 20,
  (MR_Integer) 28,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_28,
  NULL,
  NULL,
  NULL
};

#line 2144 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_29[3] = {
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2151 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_29 = {
  (MR_String) "byte_place_arg",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 21,
  (MR_Integer) 29,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_29,
  NULL,
  NULL,
  NULL
};

#line 2166 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_30[3] = {
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2173 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_30 = {
  (MR_String) "byte_pickup_arg",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 22,
  (MR_Integer) 30,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_30,
  NULL,
  NULL,
  NULL
};

#line 2188 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_31[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2197 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_31 = {
  (MR_String) "byte_call",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 23,
  (MR_Integer) 31,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_31,
  NULL,
  NULL,
  NULL
};

#line 2212 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_32[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
};

#line 2220 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_32 = {
  (MR_String) "byte_higher_order_call",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 24,
  (MR_Integer) 32,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_32,
  NULL,
  NULL,
  NULL
};

#line 2235 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_33[4] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2243 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_33 = {
  (MR_String) "byte_builtin_binop",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 25,
  (MR_Integer) 33,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_33,
  NULL,
  NULL,
  NULL
};

#line 2258 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_34[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2265 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_34 = {
  (MR_String) "byte_builtin_unop",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 26,
  (MR_Integer) 34,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_34,
  NULL,
  NULL,
  NULL
};

#line 2280 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_35[3] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_binary_op_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0
};

#line 2287 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_35 = {
  (MR_String) "byte_builtin_bintest",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 27,
  (MR_Integer) 35,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_35,
  NULL,
  NULL,
  NULL
};

#line 2302 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_36[2] = {
  (MR_PseudoTypeInfo) &backend_libs__builtin_ops__backend_libs__builtin_ops__type_ctor_info_unary_op_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0
};

#line 2308 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_36 = {
  (MR_String) "byte_builtin_untest",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 28,
  (MR_Integer) 36,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_36,
  NULL,
  NULL,
  NULL
};

#line 2323 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_37 = {
  (MR_String) "byte_semidet_succeed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 37,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2338 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_38 = {
  (MR_String) "byte_semidet_success_check",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 38,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2353 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_39 = {
  (MR_String) "byte_fail",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 39,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2368 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_40[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2373 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_40 = {
  (MR_String) "byte_context",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 29,
  (MR_Integer) 40,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_code_0_40,
  NULL,
  NULL,
  NULL
};

#line 2388 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_41 = {
  (MR_String) "byte_not_supported",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 41,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2403 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_0[10] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_10,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_17,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_20,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_37,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_38,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_39,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_41
};

#line 2417 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0
};

#line 2422 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2
};

#line 2427 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3[30] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_7,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_9,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_11,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_12,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_13,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_14,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_15,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_16,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_18,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_19,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_21,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_22,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_23,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_24,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_25,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_26,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_27,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_28,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_29,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_30,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_31,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_32,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_33,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_34,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_35,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_36,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_40
};

#line 2461 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_code_0[4] = {
  {
    (MR_Integer) 10,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_2
  },
  {
    (MR_Integer) 30,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_code_0_3
  }
};

#line 2485 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_code_0[42] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_23,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_33,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_35,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_34,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_36,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_31,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_27,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_28,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_25,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_40,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_26,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_22,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_17,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_20,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_19,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_10,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_12,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_15,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_21,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_7,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_16,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_13,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_18,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_9,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_11,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_14,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_39,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_32,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_41,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_30,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_29,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_37,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_38,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_code_0_24
};

#line 2531 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_code_0[42] = {
  (MR_Integer) 28,
  (MR_Integer) 17,
  (MR_Integer) 29,
  (MR_Integer) 18,
  (MR_Integer) 35,
  (MR_Integer) 24,
  (MR_Integer) 13,
  (MR_Integer) 23,
  (MR_Integer) 12,
  (MR_Integer) 30,
  (MR_Integer) 19,
  (MR_Integer) 31,
  (MR_Integer) 20,
  (MR_Integer) 26,
  (MR_Integer) 32,
  (MR_Integer) 21,
  (MR_Integer) 25,
  (MR_Integer) 14,
  (MR_Integer) 27,
  (MR_Integer) 16,
  (MR_Integer) 15,
  (MR_Integer) 22,
  (MR_Integer) 11,
  (MR_Integer) 0,
  (MR_Integer) 41,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 38,
  (MR_Integer) 37,
  (MR_Integer) 5,
  (MR_Integer) 34,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 39,
  (MR_Integer) 40,
  (MR_Integer) 33,
  (MR_Integer) 9,
  (MR_Integer) 36
};

#line 2577 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_code_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_code_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_code",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_code_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_code_0 },
  (MR_Integer) 42,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_code_0
};

#line 2594 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0
};

#line 2602 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0 = {
  (MR_String) "byte_cons",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_0,
  NULL,
  NULL,
  NULL
};

#line 2617 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2622 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1 = {
  (MR_String) "byte_int_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_1,
  NULL,
  NULL,
  NULL
};

#line 2637 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2642 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2 = {
  (MR_String) "byte_string_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_2,
  NULL,
  NULL,
  NULL
};

#line 2657 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2662 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3 = {
  (MR_String) "byte_float_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_3,
  NULL,
  NULL,
  NULL
};

#line 2677 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 2682 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4 = {
  (MR_String) "byte_char_const",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_4,
  NULL,
  NULL,
  NULL
};

#line 2697 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_5[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2706 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5 = {
  (MR_String) "byte_pred_const",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_5,
  NULL,
  NULL,
  NULL
};

#line 2721 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_6[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2728 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6 = {
  (MR_String) "byte_type_ctor_info_const",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_6,
  NULL,
  NULL,
  NULL
};

#line 2743 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_7[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2750 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7 = {
  (MR_String) "byte_base_typeclass_info_const",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 7,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_id_0_7,
  NULL,
  NULL,
  NULL
};

#line 2765 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8 = {
  (MR_String) "byte_type_info_cell_constructor",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2780 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9 = {
  (MR_String) "byte_typeclass_info_cell_constructor",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2795 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_0[2] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9
};

#line 2801 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0
};

#line 2806 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1
};

#line 2811 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3[6] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7
};

#line 2821 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_2
  },
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_id_0_3
  }
};

#line 2845 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0[10] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_7,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_6,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_8,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_id_0_9
};

#line 2859 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_id_0[10] = {
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9
};

#line 2873 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_cons_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_cons_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_cons_id",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_id_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_id_0 },
  (MR_Integer) 10,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_id_0
};

#line 2890 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0 = {
  (MR_String) "byte_no_tag",
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

#line 2905 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2910 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1 = {
  (MR_String) "byte_unshared_tag",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_1,
  NULL,
  NULL,
  NULL
};

#line 2925 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2931 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2 = {
  (MR_String) "byte_shared_remote_tag",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_2,
  NULL,
  NULL,
  NULL
};

#line 2946 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2952 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3 = {
  (MR_String) "byte_shared_local_tag",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_3,
  NULL,
  NULL,
  NULL
};

#line 2967 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2972 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4 = {
  (MR_String) "byte_enum_tag",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_cons_tag_0_4,
  NULL,
  NULL,
  NULL
};

#line 2987 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0
};

#line 2992 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1
};

#line 2997 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2
};

#line 3002 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3[2] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4
};

#line 3008 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_cons_tag_0_3
  }
};

#line 3032 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0[5] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_cons_tag_0_1
};

#line 3041 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 3050 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_cons_tag_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_cons_tag_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_cons_tag",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_cons_tag_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_cons_tag_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_cons_tag_0
};

#line 3067 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0 = {
  (MR_String) "to_arg",
  (MR_Integer) 0
};

#line 3073 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1 = {
  (MR_String) "to_var",
  (MR_Integer) 1
};

#line 3079 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2 = {
  (MR_String) "to_none",
  (MR_Integer) 2
};

#line 3085 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_dir_0[3] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2
};

#line 3092 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_dir_0[3] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_dir_0_1
};

#line 3099 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_dir_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3106 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_dir_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_dir_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_dir",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_dir_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_dir_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_dir_0
};

#line 3123 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_is_func_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_is_func_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_is_func_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_is_func",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3140 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_label_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_label_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_label_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_label_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3157 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_module_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_module_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_module_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_module_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3174 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_pred_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_pred_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_pred_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3191 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_proc_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_proc_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_proc_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3208 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0 = {
  (MR_String) "byte_reg_r",
  (MR_Integer) 0
};

#line 3214 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_reg_type_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0
};

#line 3219 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_reg_type_0_0
};

#line 3224 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0[1] = {
  (MR_Integer) 0
};

#line 3229 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_reg_type_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_reg_type_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_reg_type",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_reg_type_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_reg_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_reg_type_0
};

#line 3246 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_temp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_temp_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_temp_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_temp",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3263 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0 = {
  (MR_String) "int_test",
  (MR_Integer) 0
};

#line 3269 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1 = {
  (MR_String) "char_test",
  (MR_Integer) 1
};

#line 3275 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2 = {
  (MR_String) "string_test",
  (MR_Integer) 2
};

#line 3281 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3 = {
  (MR_String) "float_test",
  (MR_Integer) 3
};

#line 3287 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4 = {
  (MR_String) "enum_test",
  (MR_Integer) 4
};

#line 3293 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5 = {
  (MR_String) "dummy_test",
  (MR_Integer) 5
};

#line 3299 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_test_id_0[6] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5
};

#line 3309 "bytecode_backend.bytecode.c"
static const MR_EnumFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0[6] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_1,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_5,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_4,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_3,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_0,
  &bytecode_backend__bytecode__bytecode_backend__bytecode__enum_functor_desc_byte_test_id_0_2
};

#line 3319 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_test_id_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3329 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_test_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_test_id_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_test_id_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_test_id",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_name_ordered_byte_test_id_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__enum_value_ordered_byte_test_id_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_test_id_0
};

#line 3346 "bytecode_backend.bytecode.c"
static const MR_FA_TypeInfo_Struct1 bytecode_backend__bytecode__cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0
  }
};

#line 3354 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_tree_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_tree_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_tree_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_tree",
  {     NULL },
  {     (MR_PseudoTypeInfo) &bytecode_backend__bytecode__cord__ti_cord_1bytecode_backend__bytecode__type_ctor_info_byte_code_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3371 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_var_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_var_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3388 "bytecode_backend.bytecode.c"
static const MR_PseudoTypeInfo bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 3394 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDesc bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0 = {
  (MR_String) "var_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  bytecode_backend__bytecode__bytecode_backend__bytecode__field_types_byte_var_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 3409 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0
};

#line 3414 "bytecode_backend.bytecode.c"
static const MR_DuPtagLayout bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    bytecode_backend__bytecode__bytecode_backend__bytecode__du_stag_ordered_byte_var_info_0_0
  }
};

#line 3423 "bytecode_backend.bytecode.c"
static const MR_DuFunctorDescPtr bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_var_info_0[1] = {
  &bytecode_backend__bytecode__bytecode_backend__bytecode__du_functor_desc_byte_var_info_0_0
};

#line 3428 "bytecode_backend.bytecode.c"
static const MR_Integer bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_var_info_0[1] = {
  (MR_Integer) 0
};

#line 3433 "bytecode_backend.bytecode.c"
const MR_TypeCtorInfo_Struct bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (bytecode_backend__bytecode____Unify____byte_var_info_0_0_10001)),
  ((MR_Box) (bytecode_backend__bytecode____Compare____byte_var_info_0_0_10001)),
  (MR_String) "bytecode_backend.bytecode",
  (MR_String) "byte_var_info",
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_name_ordered_byte_var_info_0 },
  {     bytecode_backend__bytecode__bytecode_backend__bytecode__du_ptag_ordered_byte_var_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  bytecode_backend__bytecode__bytecode_backend__bytecode__functor_number_map_byte_var_info_0
};

#line 3450 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_arg_0_0_10001(
#line 3453 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3455 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3457 "bytecode_backend.bytecode.c"
{
#line 3459 "bytecode_backend.bytecode.c"
  {
#line 3461 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3464 "bytecode_backend.bytecode.c"
    {
#line 3466 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3469 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3471 "bytecode_backend.bytecode.c"
  }
#line 3473 "bytecode_backend.bytecode.c"
}

#line 3476 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_arg_0_0_10001(
#line 3479 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3481 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3483 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3485 "bytecode_backend.bytecode.c"
{
#line 3487 "bytecode_backend.bytecode.c"
  {
#line 3489 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3492 "bytecode_backend.bytecode.c"
    {
#line 3494 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_arg_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3497 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3499 "bytecode_backend.bytecode.c"
  }
#line 3501 "bytecode_backend.bytecode.c"
}

#line 3504 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_code_0_0_10001(
#line 3507 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3509 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3511 "bytecode_backend.bytecode.c"
{
#line 3513 "bytecode_backend.bytecode.c"
  {
#line 3515 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3518 "bytecode_backend.bytecode.c"
    {
#line 3520 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_code_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3523 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3525 "bytecode_backend.bytecode.c"
  }
#line 3527 "bytecode_backend.bytecode.c"
}

#line 3530 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_code_0_0_10001(
#line 3533 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3535 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3537 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3539 "bytecode_backend.bytecode.c"
{
#line 3541 "bytecode_backend.bytecode.c"
  {
#line 3543 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3546 "bytecode_backend.bytecode.c"
    {
#line 3548 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_code_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3551 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3553 "bytecode_backend.bytecode.c"
  }
#line 3555 "bytecode_backend.bytecode.c"
}

#line 3558 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_id_0_0_10001(
#line 3561 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3563 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3565 "bytecode_backend.bytecode.c"
{
#line 3567 "bytecode_backend.bytecode.c"
  {
#line 3569 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3572 "bytecode_backend.bytecode.c"
    {
#line 3574 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3577 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3579 "bytecode_backend.bytecode.c"
  }
#line 3581 "bytecode_backend.bytecode.c"
}

#line 3584 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_id_0_0_10001(
#line 3587 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3589 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3591 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3593 "bytecode_backend.bytecode.c"
{
#line 3595 "bytecode_backend.bytecode.c"
  {
#line 3597 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3600 "bytecode_backend.bytecode.c"
    {
#line 3602 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3605 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3607 "bytecode_backend.bytecode.c"
  }
#line 3609 "bytecode_backend.bytecode.c"
}

#line 3612 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_tag_0_0_10001(
#line 3615 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3617 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3619 "bytecode_backend.bytecode.c"
{
#line 3621 "bytecode_backend.bytecode.c"
  {
#line 3623 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3626 "bytecode_backend.bytecode.c"
    {
#line 3628 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_cons_tag_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3631 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3633 "bytecode_backend.bytecode.c"
  }
#line 3635 "bytecode_backend.bytecode.c"
}

#line 3638 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_tag_0_0_10001(
#line 3641 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3643 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3645 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3647 "bytecode_backend.bytecode.c"
{
#line 3649 "bytecode_backend.bytecode.c"
  {
#line 3651 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3654 "bytecode_backend.bytecode.c"
    {
#line 3656 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_cons_tag_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3659 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3661 "bytecode_backend.bytecode.c"
  }
#line 3663 "bytecode_backend.bytecode.c"
}

#line 3666 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_dir_0_0_10001(
#line 3669 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3671 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3673 "bytecode_backend.bytecode.c"
{
#line 3675 "bytecode_backend.bytecode.c"
  {
#line 3677 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3680 "bytecode_backend.bytecode.c"
    {
#line 3682 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_dir_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3685 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3687 "bytecode_backend.bytecode.c"
  }
#line 3689 "bytecode_backend.bytecode.c"
}

#line 3692 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_dir_0_0_10001(
#line 3695 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3697 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3699 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3701 "bytecode_backend.bytecode.c"
{
#line 3703 "bytecode_backend.bytecode.c"
  {
#line 3705 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3708 "bytecode_backend.bytecode.c"
    {
#line 3710 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_dir_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3713 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3715 "bytecode_backend.bytecode.c"
  }
#line 3717 "bytecode_backend.bytecode.c"
}

#line 3720 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_is_func_0_0_10001(
#line 3723 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3725 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3727 "bytecode_backend.bytecode.c"
{
#line 3729 "bytecode_backend.bytecode.c"
  {
#line 3731 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3734 "bytecode_backend.bytecode.c"
    {
#line 3736 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_is_func_0_0(((MR_Integer) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3739 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3741 "bytecode_backend.bytecode.c"
  }
#line 3743 "bytecode_backend.bytecode.c"
}

#line 3746 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_is_func_0_0_10001(
#line 3749 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3751 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3753 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3755 "bytecode_backend.bytecode.c"
{
#line 3757 "bytecode_backend.bytecode.c"
  {
#line 3759 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3762 "bytecode_backend.bytecode.c"
    {
#line 3764 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_is_func_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3767 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3769 "bytecode_backend.bytecode.c"
  }
#line 3771 "bytecode_backend.bytecode.c"
}

#line 3774 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_label_id_0_0_10001(
#line 3777 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3779 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3781 "bytecode_backend.bytecode.c"
{
#line 3783 "bytecode_backend.bytecode.c"
  {
#line 3785 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3788 "bytecode_backend.bytecode.c"
    {
#line 3790 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_label_id_0_0(((MR_Integer) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3793 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3795 "bytecode_backend.bytecode.c"
  }
#line 3797 "bytecode_backend.bytecode.c"
}

#line 3800 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_label_id_0_0_10001(
#line 3803 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3805 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3807 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3809 "bytecode_backend.bytecode.c"
{
#line 3811 "bytecode_backend.bytecode.c"
  {
#line 3813 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3816 "bytecode_backend.bytecode.c"
    {
#line 3818 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_label_id_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3821 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3823 "bytecode_backend.bytecode.c"
  }
#line 3825 "bytecode_backend.bytecode.c"
}

#line 3828 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_module_id_0_0_10001(
#line 3831 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3833 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3835 "bytecode_backend.bytecode.c"
{
#line 3837 "bytecode_backend.bytecode.c"
  {
#line 3839 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3842 "bytecode_backend.bytecode.c"
    {
#line 3844 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_module_id_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3847 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3849 "bytecode_backend.bytecode.c"
  }
#line 3851 "bytecode_backend.bytecode.c"
}

#line 3854 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_module_id_0_0_10001(
#line 3857 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3859 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3861 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3863 "bytecode_backend.bytecode.c"
{
#line 3865 "bytecode_backend.bytecode.c"
  {
#line 3867 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3870 "bytecode_backend.bytecode.c"
    {
#line 3872 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_module_id_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3875 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3877 "bytecode_backend.bytecode.c"
  }
#line 3879 "bytecode_backend.bytecode.c"
}

#line 3882 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_pred_id_0_0_10001(
#line 3885 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3887 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3889 "bytecode_backend.bytecode.c"
{
#line 3891 "bytecode_backend.bytecode.c"
  {
#line 3893 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3896 "bytecode_backend.bytecode.c"
    {
#line 3898 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_pred_id_0_0(((MR_String) bytecode_backend__bytecode__wrapper_arg_1), ((MR_String) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3901 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3903 "bytecode_backend.bytecode.c"
  }
#line 3905 "bytecode_backend.bytecode.c"
}

#line 3908 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_pred_id_0_0_10001(
#line 3911 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3913 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3915 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3917 "bytecode_backend.bytecode.c"
{
#line 3919 "bytecode_backend.bytecode.c"
  {
#line 3921 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3924 "bytecode_backend.bytecode.c"
    {
#line 3926 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_pred_id_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_String) bytecode_backend__bytecode__wrapper_arg_2), ((MR_String) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3929 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3931 "bytecode_backend.bytecode.c"
  }
#line 3933 "bytecode_backend.bytecode.c"
}

#line 3936 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_proc_id_0_0_10001(
#line 3939 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3941 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3943 "bytecode_backend.bytecode.c"
{
#line 3945 "bytecode_backend.bytecode.c"
  {
#line 3947 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 3950 "bytecode_backend.bytecode.c"
    {
#line 3952 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_proc_id_0_0(((MR_Integer) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 3955 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 3957 "bytecode_backend.bytecode.c"
  }
#line 3959 "bytecode_backend.bytecode.c"
}

#line 3962 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_proc_id_0_0_10001(
#line 3965 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 3967 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 3969 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 3971 "bytecode_backend.bytecode.c"
{
#line 3973 "bytecode_backend.bytecode.c"
  {
#line 3975 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 3978 "bytecode_backend.bytecode.c"
    {
#line 3980 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_proc_id_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 3983 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 3985 "bytecode_backend.bytecode.c"
  }
#line 3987 "bytecode_backend.bytecode.c"
}

#line 3990 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_reg_type_0_0_10001(
#line 3993 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 3995 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 3997 "bytecode_backend.bytecode.c"
{
#line 3999 "bytecode_backend.bytecode.c"
  {
#line 4001 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 4004 "bytecode_backend.bytecode.c"
    {
#line 4006 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_reg_type_0_0();
    }
#line 4009 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 4011 "bytecode_backend.bytecode.c"
  }
#line 4013 "bytecode_backend.bytecode.c"
}

#line 4016 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_reg_type_0_0_10001(
#line 4019 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 4021 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 4023 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 4025 "bytecode_backend.bytecode.c"
{
#line 4027 "bytecode_backend.bytecode.c"
  {
#line 4029 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 4032 "bytecode_backend.bytecode.c"
    {
#line 4034 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_reg_type_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1);
    }
#line 4037 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 4039 "bytecode_backend.bytecode.c"
  }
#line 4041 "bytecode_backend.bytecode.c"
}

#line 4044 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_temp_0_0_10001(
#line 4047 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 4049 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 4051 "bytecode_backend.bytecode.c"
{
#line 4053 "bytecode_backend.bytecode.c"
  {
#line 4055 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 4058 "bytecode_backend.bytecode.c"
    {
#line 4060 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_temp_0_0(((MR_Integer) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 4063 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 4065 "bytecode_backend.bytecode.c"
  }
#line 4067 "bytecode_backend.bytecode.c"
}

#line 4070 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_temp_0_0_10001(
#line 4073 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 4075 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 4077 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 4079 "bytecode_backend.bytecode.c"
{
#line 4081 "bytecode_backend.bytecode.c"
  {
#line 4083 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 4086 "bytecode_backend.bytecode.c"
    {
#line 4088 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_temp_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 4091 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 4093 "bytecode_backend.bytecode.c"
  }
#line 4095 "bytecode_backend.bytecode.c"
}

#line 4098 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_test_id_0_0_10001(
#line 4101 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 4103 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 4105 "bytecode_backend.bytecode.c"
{
#line 4107 "bytecode_backend.bytecode.c"
  {
#line 4109 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 4112 "bytecode_backend.bytecode.c"
    {
#line 4114 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_test_id_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 4117 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 4119 "bytecode_backend.bytecode.c"
  }
#line 4121 "bytecode_backend.bytecode.c"
}

#line 4124 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_test_id_0_0_10001(
#line 4127 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 4129 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 4131 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 4133 "bytecode_backend.bytecode.c"
{
#line 4135 "bytecode_backend.bytecode.c"
  {
#line 4137 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 4140 "bytecode_backend.bytecode.c"
    {
#line 4142 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_test_id_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 4145 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 4147 "bytecode_backend.bytecode.c"
  }
#line 4149 "bytecode_backend.bytecode.c"
}

#line 4152 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_tree_0_0_10001(
#line 4155 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 4157 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 4159 "bytecode_backend.bytecode.c"
{
#line 4161 "bytecode_backend.bytecode.c"
  {
#line 4163 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 4166 "bytecode_backend.bytecode.c"
    {
#line 4168 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_tree_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 4171 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 4173 "bytecode_backend.bytecode.c"
  }
#line 4175 "bytecode_backend.bytecode.c"
}

#line 4178 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_tree_0_0_10001(
#line 4181 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 4183 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 4185 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 4187 "bytecode_backend.bytecode.c"
{
#line 4189 "bytecode_backend.bytecode.c"
  {
#line 4191 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 4194 "bytecode_backend.bytecode.c"
    {
#line 4196 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_tree_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 4199 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 4201 "bytecode_backend.bytecode.c"
  }
#line 4203 "bytecode_backend.bytecode.c"
}

#line 4206 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_0_0_10001(
#line 4209 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 4211 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 4213 "bytecode_backend.bytecode.c"
{
#line 4215 "bytecode_backend.bytecode.c"
  {
#line 4217 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 4220 "bytecode_backend.bytecode.c"
    {
#line 4222 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_var_0_0(((MR_Integer) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 4225 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 4227 "bytecode_backend.bytecode.c"
  }
#line 4229 "bytecode_backend.bytecode.c"
}

#line 4232 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_0_0_10001(
#line 4235 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 4237 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 4239 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 4241 "bytecode_backend.bytecode.c"
{
#line 4243 "bytecode_backend.bytecode.c"
  {
#line 4245 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 4248 "bytecode_backend.bytecode.c"
    {
#line 4250 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_var_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Integer) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 4253 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 4255 "bytecode_backend.bytecode.c"
  }
#line 4257 "bytecode_backend.bytecode.c"
}

#line 4260 "bytecode_backend.bytecode.c"
static MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_info_0_0_10001(
#line 4263 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 4265 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2)
#line 4267 "bytecode_backend.bytecode.c"
{
#line 4269 "bytecode_backend.bytecode.c"
  {
#line 4271 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 4274 "bytecode_backend.bytecode.c"
    {
#line 4276 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_var_info_0_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2));
    }
#line 4279 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 4281 "bytecode_backend.bytecode.c"
  }
#line 4283 "bytecode_backend.bytecode.c"
}

#line 4286 "bytecode_backend.bytecode.c"
static void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_info_0_0_10001(
#line 4289 "bytecode_backend.bytecode.c"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_1,
#line 4291 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 4293 "bytecode_backend.bytecode.c"
  MR_Box bytecode_backend__bytecode__wrapper_arg_3)
#line 4295 "bytecode_backend.bytecode.c"
{
#line 4297 "bytecode_backend.bytecode.c"
  {
#line 4299 "bytecode_backend.bytecode.c"
    MR_Word bytecode_backend__bytecode__conv0_HeadVar__1_1;

#line 4302 "bytecode_backend.bytecode.c"
    {
#line 4304 "bytecode_backend.bytecode.c"
      bytecode_backend__bytecode____Compare____byte_var_info_0_0(&bytecode_backend__bytecode__conv0_HeadVar__1_1, ((MR_Word) bytecode_backend__bytecode__wrapper_arg_2), ((MR_Word) bytecode_backend__bytecode__wrapper_arg_3));
    }
#line 4307 "bytecode_backend.bytecode.c"
    *bytecode_backend__bytecode__wrapper_arg_1 = ((MR_Box) (bytecode_backend__bytecode__conv0_HeadVar__1_1));
#line 4309 "bytecode_backend.bytecode.c"
  }
#line 4311 "bytecode_backend.bytecode.c"
}

#line 90 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 90 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1)
#line 90 "bytecode.m"
{
#line 90 "bytecode.m"
  {
#line 90 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 90 "bytecode.m"
    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 90 "bytecode.m"
  }
#line 90 "bytecode.m"
}

#line 90 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 90 "bytecode.m"
{
#line 90 "bytecode.m"
  {
#line 90 "bytecode.m"
    return MR_TRUE;
#line 90 "bytecode.m"
  }
#line 90 "bytecode.m"
}

#line 542 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_p_0(
#line 542 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__N_5)
#line 542 "bytecode.m"
{
#line 1184 "bytecode.m"
  {
#line 1184 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1185 "bytecode.m"
    {
#line 1185 "bytecode.m"
      mercury__io__write_int_3_p_0(bytecode_backend__bytecode__N_5);
    }
#line 1186 "bytecode.m"
    {
#line 1186 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
      return;
    }
#line 1184 "bytecode.m"
  }
#line 542 "bytecode.m"
}

#line 537 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_p_0(
#line 537 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__N_5)
#line 537 "bytecode.m"
{
#line 540 "bytecode.m"
  {
#line 540 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 540 "bytecode.m"
    {
#line 540 "bytecode.m"
      backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__N_5);
#line 540 "bytecode.m"
      return;
    }
#line 540 "bytecode.m"
  }
#line 537 "bytecode.m"
}

#line 266 "bytecode.m"
static MR_bool MR_CALL 
bytecode_backend__bytecode__IntroducedFrom__pred__output_args__266__1_2_p_0(
#line 266 "bytecode.m"
  MR_Word bytecode_backend__bytecode__OtherConsIds_72,
#line 266 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_82)
#line 266 "bytecode.m"
{
#line 266 "bytecode.m"
  {
#line 266 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 266 "bytecode.m"
    {
#line 266 "bytecode.m"
      return bytecode_backend__bytecode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[0], ((MR_Box) (bytecode_backend__bytecode__OtherConsIds_72)), ((MR_Box) (bytecode_backend__bytecode__HeadVar__2_82)));
    }
#line 266 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 266 "bytecode.m"
  }
#line 266 "bytecode.m"
}

#line 106 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_info_0_0(
#line 106 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 106 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 106 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 106 "bytecode.m"
{
#line 106 "bytecode.m"
  {
#line 106 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 106 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_9 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;
#line 106 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_10 = (MR_Integer) bytecode_backend__bytecode__HeadVar__3_3;

#line 106 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_9 == bytecode_backend__bytecode__CastY_10);
#line 106 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 4450 "bytecode_backend.bytecode.c"
      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 106 "bytecode.m"
    else
#line 106 "bytecode.m"
      {
#line 106 "bytecode.m"
        MR_String bytecode_backend__bytecode__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "bytecode.m"
        MR_Word bytecode_backend__bytecode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 106 "bytecode.m"
        MR_String bytecode_backend__bytecode__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));
#line 106 "bytecode.m"
        MR_Word bytecode_backend__bytecode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 106 "bytecode.m"
        MR_Word bytecode_backend__bytecode__V_8_8;

#line 106 "bytecode.m"
        {
#line 106 "bytecode.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&bytecode_backend__bytecode__V_8_8, bytecode_backend__bytecode__V_4_4, bytecode_backend__bytecode__V_6_6);
        }
#line 4472 "bytecode_backend.bytecode.c"
        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_8_8 == (MR_Integer) 0);
#line 106 "bytecode.m"
        bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 106 "bytecode.m"
        if (bytecode_backend__bytecode__succeeded)
#line 106 "bytecode.m"
          *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_8_8;
#line 106 "bytecode.m"
        else
#line 106 "bytecode.m"
          {
#line 106 "bytecode.m"
            parse_tree__prog_data____Compare____mer_type_0_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_5_5, bytecode_backend__bytecode__V_7_7);
#line 106 "bytecode.m"
            return;
          }
#line 106 "bytecode.m"
      }
#line 106 "bytecode.m"
  }
#line 106 "bytecode.m"
}

#line 106 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_info_0_0(
#line 106 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1,
#line 106 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 106 "bytecode.m"
{
#line 106 "bytecode.m"
  {
#line 106 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 106 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_7 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 106 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_8 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 106 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_7 == bytecode_backend__bytecode__CastY_8);
#line 106 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 106 "bytecode.m"
      bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 106 "bytecode.m"
    else
#line 106 "bytecode.m"
      {
#line 106 "bytecode.m"
        MR_String bytecode_backend__bytecode__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 106 "bytecode.m"
        MR_Word bytecode_backend__bytecode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 106 "bytecode.m"
        MR_String bytecode_backend__bytecode__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 106 "bytecode.m"
        MR_Word bytecode_backend__bytecode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 4533 "bytecode_backend.bytecode.c"
        bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__V_3_3, bytecode_backend__bytecode__V_5_5) == 0);
#line 106 "bytecode.m"
        if (bytecode_backend__bytecode__succeeded)
#line 4537 "bytecode_backend.bytecode.c"
          {
#line 4539 "bytecode_backend.bytecode.c"
            return bytecode_backend__bytecode__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(bytecode_backend__bytecode__V_4_4, bytecode_backend__bytecode__V_6_6);
          }
#line 106 "bytecode.m"
      }
#line 106 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 106 "bytecode.m"
  }
#line 106 "bytecode.m"
}

#line 138 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_var_0_0(
#line 138 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 138 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2,
#line 138 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__3_3)
#line 138 "bytecode.m"
{
#line 138 "bytecode.m"
  {
#line 138 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 138 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_4 = bytecode_backend__bytecode__HeadVar__2_2;
#line 138 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_5 = bytecode_backend__bytecode__HeadVar__3_3;

#line 138 "bytecode.m"
    {
#line 138 "bytecode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 138 "bytecode.m"
      return;
    }
#line 138 "bytecode.m"
  }
#line 138 "bytecode.m"
}

#line 138 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_var_0_0(
#line 138 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__1_1,
#line 138 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2)
#line 138 "bytecode.m"
{
#line 138 "bytecode.m"
  {
#line 138 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 138 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_3 = bytecode_backend__bytecode__HeadVar__1_1;
#line 138 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_4 = bytecode_backend__bytecode__HeadVar__2_2;

#line 138 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__Cast_HeadVar1_3 == bytecode_backend__bytecode__Cast_HeadVar2_4);
#line 138 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 138 "bytecode.m"
  }
#line 138 "bytecode.m"
}

#line 36 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_tree_0_0(
#line 36 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 36 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 36 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 36 "bytecode.m"
{
#line 36 "bytecode.m"
  {
#line 36 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 36 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Cast_HeadVar1_4 = bytecode_backend__bytecode__HeadVar__2_2;
#line 36 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Cast_HeadVar2_5 = bytecode_backend__bytecode__HeadVar__3_3;

#line 36 "bytecode.m"
    {
#line 36 "bytecode.m"
      mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[4], bytecode_backend__bytecode__HeadVar__1_1, ((MR_Box) (bytecode_backend__bytecode__Cast_HeadVar1_4)), ((MR_Box) (bytecode_backend__bytecode__Cast_HeadVar2_5)));
#line 36 "bytecode.m"
      return;
    }
#line 36 "bytecode.m"
  }
#line 36 "bytecode.m"
}

#line 36 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_tree_0_0(
#line 36 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1,
#line 36 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 36 "bytecode.m"
{
#line 36 "bytecode.m"
  {
#line 36 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 36 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Cast_HeadVar1_3 = bytecode_backend__bytecode__HeadVar__1_1;
#line 36 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Cast_HeadVar2_4 = bytecode_backend__bytecode__HeadVar__2_2;

#line 36 "bytecode.m"
    {
#line 36 "bytecode.m"
      return bytecode_backend__bytecode__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[4], ((MR_Box) (bytecode_backend__bytecode__Cast_HeadVar1_3)), ((MR_Box) (bytecode_backend__bytecode__Cast_HeadVar2_4)));
    }
#line 36 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 36 "bytecode.m"
  }
#line 36 "bytecode.m"
}

#line 126 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_test_id_0_0(
#line 126 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 126 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 126 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 126 "bytecode.m"
{
#line 126 "bytecode.m"
  {
#line 126 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 126 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_4 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;
#line 126 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_5 = (MR_Integer) bytecode_backend__bytecode__HeadVar__3_3;

#line 126 "bytecode.m"
    {
#line 126 "bytecode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 126 "bytecode.m"
      return;
    }
#line 126 "bytecode.m"
  }
#line 126 "bytecode.m"
}

#line 126 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_test_id_0_0(
#line 126 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_1,
#line 126 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 126 "bytecode.m"
{
#line 4713 "bytecode_backend.bytecode.c"
  {
#line 4715 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__HeadVar__2_1 == bytecode_backend__bytecode__HeadVar__2_2);

#line 4718 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 4720 "bytecode_backend.bytecode.c"
  }
#line 126 "bytecode.m"
}

#line 139 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_temp_0_0(
#line 139 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 139 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2,
#line 139 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__3_3)
#line 139 "bytecode.m"
{
#line 139 "bytecode.m"
  {
#line 139 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 139 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_4 = bytecode_backend__bytecode__HeadVar__2_2;
#line 139 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_5 = bytecode_backend__bytecode__HeadVar__3_3;

#line 139 "bytecode.m"
    {
#line 139 "bytecode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 139 "bytecode.m"
      return;
    }
#line 139 "bytecode.m"
  }
#line 139 "bytecode.m"
}

#line 139 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_temp_0_0(
#line 139 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__1_1,
#line 139 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2)
#line 139 "bytecode.m"
{
#line 139 "bytecode.m"
  {
#line 139 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 139 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_3 = bytecode_backend__bytecode__HeadVar__1_1;
#line 139 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_4 = bytecode_backend__bytecode__HeadVar__2_2;

#line 139 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__Cast_HeadVar1_3 == bytecode_backend__bytecode__Cast_HeadVar2_4);
#line 139 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 139 "bytecode.m"
  }
#line 139 "bytecode.m"
}

#line 90 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_reg_type_0_0(
#line 90 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1)
#line 90 "bytecode.m"
{
#line 90 "bytecode.m"
  {
#line 90 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 90 "bytecode.m"
    {
#line 90 "bytecode.m"
      bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(bytecode_backend__bytecode__HeadVar__1_1);
#line 90 "bytecode.m"
      return;
    }
#line 90 "bytecode.m"
  }
#line 90 "bytecode.m"
}

#line 90 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_reg_type_0_0(void)
#line 90 "bytecode.m"
{
#line 90 "bytecode.m"
  {
#line 90 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 90 "bytecode.m"
    {
#line 90 "bytecode.m"
      return bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_95_98_121_116_101_95_114_101_103_95_116_121_112_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 90 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 90 "bytecode.m"
  }
#line 90 "bytecode.m"
}

#line 136 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_proc_id_0_0(
#line 136 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 136 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2,
#line 136 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__3_3)
#line 136 "bytecode.m"
{
#line 136 "bytecode.m"
  {
#line 136 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 136 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_4 = bytecode_backend__bytecode__HeadVar__2_2;
#line 136 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_5 = bytecode_backend__bytecode__HeadVar__3_3;

#line 136 "bytecode.m"
    {
#line 136 "bytecode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 136 "bytecode.m"
      return;
    }
#line 136 "bytecode.m"
  }
#line 136 "bytecode.m"
}

#line 136 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_proc_id_0_0(
#line 136 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__1_1,
#line 136 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2)
#line 136 "bytecode.m"
{
#line 136 "bytecode.m"
  {
#line 136 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 136 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_3 = bytecode_backend__bytecode__HeadVar__1_1;
#line 136 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_4 = bytecode_backend__bytecode__HeadVar__2_2;

#line 136 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__Cast_HeadVar1_3 == bytecode_backend__bytecode__Cast_HeadVar2_4);
#line 136 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 136 "bytecode.m"
  }
#line 136 "bytecode.m"
}

#line 135 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_pred_id_0_0(
#line 135 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 135 "bytecode.m"
  MR_String bytecode_backend__bytecode__HeadVar__2_2,
#line 135 "bytecode.m"
  MR_String bytecode_backend__bytecode__HeadVar__3_3)
#line 135 "bytecode.m"
{
#line 135 "bytecode.m"
  {
#line 135 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 135 "bytecode.m"
    MR_String bytecode_backend__bytecode__Cast_HeadVar1_4 = bytecode_backend__bytecode__HeadVar__2_2;
#line 135 "bytecode.m"
    MR_String bytecode_backend__bytecode__Cast_HeadVar2_5 = bytecode_backend__bytecode__HeadVar__3_3;

#line 135 "bytecode.m"
    {
#line 135 "bytecode.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 135 "bytecode.m"
      return;
    }
#line 135 "bytecode.m"
  }
#line 135 "bytecode.m"
}

#line 135 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_pred_id_0_0(
#line 135 "bytecode.m"
  MR_String bytecode_backend__bytecode__HeadVar__1_1,
#line 135 "bytecode.m"
  MR_String bytecode_backend__bytecode__HeadVar__2_2)
#line 135 "bytecode.m"
{
#line 135 "bytecode.m"
  {
#line 135 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 135 "bytecode.m"
    MR_String bytecode_backend__bytecode__Cast_HeadVar1_3 = bytecode_backend__bytecode__HeadVar__1_1;
#line 135 "bytecode.m"
    MR_String bytecode_backend__bytecode__Cast_HeadVar2_4 = bytecode_backend__bytecode__HeadVar__2_2;

#line 135 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__Cast_HeadVar1_3, bytecode_backend__bytecode__Cast_HeadVar2_4) == 0);
#line 135 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 135 "bytecode.m"
  }
#line 135 "bytecode.m"
}

#line 134 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_module_id_0_0(
#line 134 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 134 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 134 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 134 "bytecode.m"
{
#line 134 "bytecode.m"
  {
#line 134 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 134 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Cast_HeadVar1_4 = bytecode_backend__bytecode__HeadVar__2_2;
#line 134 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Cast_HeadVar2_5 = bytecode_backend__bytecode__HeadVar__3_3;

#line 134 "bytecode.m"
    {
#line 134 "bytecode.m"
      mdbcomp__sym_name____Compare____sym_name_0_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 134 "bytecode.m"
      return;
    }
#line 134 "bytecode.m"
  }
#line 134 "bytecode.m"
}

#line 134 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_module_id_0_0(
#line 134 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1,
#line 134 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 134 "bytecode.m"
{
#line 134 "bytecode.m"
  {
#line 134 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 134 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Cast_HeadVar1_3 = bytecode_backend__bytecode__HeadVar__1_1;
#line 134 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Cast_HeadVar2_4 = bytecode_backend__bytecode__HeadVar__2_2;

#line 134 "bytecode.m"
    {
#line 134 "bytecode.m"
      return bytecode_backend__bytecode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(bytecode_backend__bytecode__Cast_HeadVar1_3, bytecode_backend__bytecode__Cast_HeadVar2_4);
    }
#line 134 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 134 "bytecode.m"
  }
#line 134 "bytecode.m"
}

#line 137 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_label_id_0_0(
#line 137 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 137 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2,
#line 137 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__3_3)
#line 137 "bytecode.m"
{
#line 137 "bytecode.m"
  {
#line 137 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 137 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_4 = bytecode_backend__bytecode__HeadVar__2_2;
#line 137 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_5 = bytecode_backend__bytecode__HeadVar__3_3;

#line 137 "bytecode.m"
    {
#line 137 "bytecode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 137 "bytecode.m"
      return;
    }
#line 137 "bytecode.m"
  }
#line 137 "bytecode.m"
}

#line 137 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_label_id_0_0(
#line 137 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__1_1,
#line 137 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2)
#line 137 "bytecode.m"
{
#line 137 "bytecode.m"
  {
#line 137 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 137 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_3 = bytecode_backend__bytecode__HeadVar__1_1;
#line 137 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_4 = bytecode_backend__bytecode__HeadVar__2_2;

#line 137 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__Cast_HeadVar1_3 == bytecode_backend__bytecode__Cast_HeadVar2_4);
#line 137 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 137 "bytecode.m"
  }
#line 137 "bytecode.m"
}

#line 140 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_is_func_0_0(
#line 140 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 140 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2,
#line 140 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__3_3)
#line 140 "bytecode.m"
{
#line 140 "bytecode.m"
  {
#line 140 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 140 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_4 = bytecode_backend__bytecode__HeadVar__2_2;
#line 140 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_5 = bytecode_backend__bytecode__HeadVar__3_3;

#line 140 "bytecode.m"
    {
#line 140 "bytecode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 140 "bytecode.m"
      return;
    }
#line 140 "bytecode.m"
  }
#line 140 "bytecode.m"
}

#line 140 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_is_func_0_0(
#line 140 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__1_1,
#line 140 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__HeadVar__2_2)
#line 140 "bytecode.m"
{
#line 140 "bytecode.m"
  {
#line 140 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 140 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_3 = bytecode_backend__bytecode__HeadVar__1_1;
#line 140 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_4 = bytecode_backend__bytecode__HeadVar__2_2;

#line 140 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__Cast_HeadVar1_3 == bytecode_backend__bytecode__Cast_HeadVar2_4);
#line 140 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 140 "bytecode.m"
  }
#line 140 "bytecode.m"
}

#line 121 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_dir_0_0(
#line 121 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 121 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 121 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 121 "bytecode.m"
{
#line 121 "bytecode.m"
  {
#line 121 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 121 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar1_4 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;
#line 121 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Cast_HeadVar2_5 = (MR_Integer) bytecode_backend__bytecode__HeadVar__3_3;

#line 121 "bytecode.m"
    {
#line 121 "bytecode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__Cast_HeadVar1_4, bytecode_backend__bytecode__Cast_HeadVar2_5);
#line 121 "bytecode.m"
      return;
    }
#line 121 "bytecode.m"
  }
#line 121 "bytecode.m"
}

#line 121 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_dir_0_0(
#line 121 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_1,
#line 121 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 121 "bytecode.m"
{
#line 5169 "bytecode_backend.bytecode.c"
  {
#line 5171 "bytecode_backend.bytecode.c"
    MR_bool bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__HeadVar__2_1 == bytecode_backend__bytecode__HeadVar__2_2);

#line 5174 "bytecode_backend.bytecode.c"
    return bytecode_backend__bytecode__succeeded;
#line 5176 "bytecode_backend.bytecode.c"
  }
#line 121 "bytecode.m"
}

#line 109 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_tag_0_0(
#line 109 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 109 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 109 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 109 "bytecode.m"
{
#line 109 "bytecode.m"
  {
#line 109 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 109 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_66 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;
#line 109 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_67 = (MR_Integer) bytecode_backend__bytecode__HeadVar__3_3;

#line 109 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_66 == bytecode_backend__bytecode__CastY_67);
#line 109 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 5205 "bytecode_backend.bytecode.c"
      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "bytecode.m"
    else
#line 109 "bytecode.m"
#line 109 "bytecode.m"
      switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) {
#line 109 "bytecode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
        case (MR_Integer) 0:
#line 109 "bytecode.m"
#line 109 "bytecode.m"
          switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 109 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
            case (MR_Integer) 0:
#line 109 "bytecode.m"
              *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "bytecode.m"
              break;
#line 109 "bytecode.m"
            case (MR_Integer) 1:
#line 5229 "bytecode_backend.bytecode.c"
              *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
              break;
#line 109 "bytecode.m"
            case (MR_Integer) 2:
#line 5235 "bytecode_backend.bytecode.c"
              *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
              break;
#line 109 "bytecode.m"
            case (MR_Integer) 3:
#line 109 "bytecode.m"
#line 109 "bytecode.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 109 "bytecode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
                case (MR_Integer) 0:
#line 5248 "bytecode_backend.bytecode.c"
                  *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
                  break;
#line 109 "bytecode.m"
                case (MR_Integer) 1:
#line 5254 "bytecode_backend.bytecode.c"
                  *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
                  break;
#line 109 "bytecode.m"
              }
#line 109 "bytecode.m"
              break;
#line 109 "bytecode.m"
          }
#line 109 "bytecode.m"
          break;
#line 109 "bytecode.m"
        case (MR_Integer) 1:
#line 109 "bytecode.m"
          {
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));

#line 109 "bytecode.m"
#line 109 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 109 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
              case (MR_Integer) 0:
#line 5280 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                break;
#line 109 "bytecode.m"
              case (MR_Integer) 1:
#line 109 "bytecode.m"
                {
#line 109 "bytecode.m"
                  MR_Integer bytecode_backend__bytecode__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));

#line 109 "bytecode.m"
                  {
#line 109 "bytecode.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_79_79, bytecode_backend__bytecode__V_12_12);
#line 109 "bytecode.m"
                    return;
                  }
#line 109 "bytecode.m"
                }
#line 109 "bytecode.m"
                break;
#line 109 "bytecode.m"
              case (MR_Integer) 2:
#line 5304 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
                break;
#line 109 "bytecode.m"
              case (MR_Integer) 3:
#line 109 "bytecode.m"
#line 109 "bytecode.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 109 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
                  case (MR_Integer) 0:
#line 5317 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                  case (MR_Integer) 1:
#line 5323 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                }
#line 109 "bytecode.m"
                break;
#line 109 "bytecode.m"
            }
#line 109 "bytecode.m"
          }
#line 109 "bytecode.m"
          break;
#line 109 "bytecode.m"
        case (MR_Integer) 2:
#line 109 "bytecode.m"
          {
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));

#line 109 "bytecode.m"
#line 109 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 109 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
              case (MR_Integer) 0:
#line 5353 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                break;
#line 109 "bytecode.m"
              case (MR_Integer) 1:
#line 5359 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                break;
#line 109 "bytecode.m"
              case (MR_Integer) 2:
#line 109 "bytecode.m"
                {
#line 109 "bytecode.m"
                  MR_Integer bytecode_backend__bytecode__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));
#line 109 "bytecode.m"
                  MR_Integer bytecode_backend__bytecode__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 109 "bytecode.m"
                  MR_Word bytecode_backend__bytecode__V_30_30;

#line 109 "bytecode.m"
                  {
#line 109 "bytecode.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_30_30, bytecode_backend__bytecode__V_78_78, bytecode_backend__bytecode__V_28_28);
                  }
#line 5379 "bytecode_backend.bytecode.c"
                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_30_30 == (MR_Integer) 0);
#line 109 "bytecode.m"
                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 109 "bytecode.m"
                  if (bytecode_backend__bytecode__succeeded)
#line 109 "bytecode.m"
                    *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_30_30;
#line 109 "bytecode.m"
                  else
#line 109 "bytecode.m"
                    {
#line 109 "bytecode.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_77_77, bytecode_backend__bytecode__V_29_29);
#line 109 "bytecode.m"
                      return;
                    }
#line 109 "bytecode.m"
                }
#line 109 "bytecode.m"
                break;
#line 109 "bytecode.m"
              case (MR_Integer) 3:
#line 109 "bytecode.m"
#line 109 "bytecode.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 109 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
                  case (MR_Integer) 0:
#line 5409 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                  case (MR_Integer) 1:
#line 5415 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                }
#line 109 "bytecode.m"
                break;
#line 109 "bytecode.m"
            }
#line 109 "bytecode.m"
          }
#line 109 "bytecode.m"
          break;
#line 109 "bytecode.m"
        case (MR_Integer) 3:
#line 109 "bytecode.m"
#line 109 "bytecode.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) {
#line 109 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
            case (MR_Integer) 0:
#line 109 "bytecode.m"
              {
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 109 "bytecode.m"
#line 109 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 109 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
                  case (MR_Integer) 0:
#line 5452 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                  case (MR_Integer) 1:
#line 5458 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                  case (MR_Integer) 2:
#line 5464 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                  case (MR_Integer) 3:
#line 109 "bytecode.m"
#line 109 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 109 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
                      case (MR_Integer) 0:
#line 109 "bytecode.m"
                        {
#line 109 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 109 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 109 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_51_51;

#line 109 "bytecode.m"
                          {
#line 109 "bytecode.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_51_51, bytecode_backend__bytecode__V_76_76, bytecode_backend__bytecode__V_49_49);
                          }
#line 5491 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_51_51 == (MR_Integer) 0);
#line 109 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 109 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 109 "bytecode.m"
                            *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_51_51;
#line 109 "bytecode.m"
                          else
#line 109 "bytecode.m"
                            {
#line 109 "bytecode.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_75_75, bytecode_backend__bytecode__V_50_50);
#line 109 "bytecode.m"
                              return;
                            }
#line 109 "bytecode.m"
                        }
#line 109 "bytecode.m"
                        break;
#line 109 "bytecode.m"
                      case (MR_Integer) 1:
#line 5514 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 109 "bytecode.m"
                        break;
#line 109 "bytecode.m"
                    }
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                }
#line 109 "bytecode.m"
              }
#line 109 "bytecode.m"
              break;
#line 109 "bytecode.m"
            case (MR_Integer) 1:
#line 109 "bytecode.m"
              {
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 109 "bytecode.m"
#line 109 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 109 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
                  case (MR_Integer) 0:
#line 5542 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                  case (MR_Integer) 1:
#line 5548 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                  case (MR_Integer) 2:
#line 5554 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                  case (MR_Integer) 3:
#line 109 "bytecode.m"
#line 109 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 109 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
                      case (MR_Integer) 0:
#line 5567 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 109 "bytecode.m"
                        break;
#line 109 "bytecode.m"
                      case (MR_Integer) 1:
#line 109 "bytecode.m"
                        {
#line 109 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));

#line 109 "bytecode.m"
                          {
#line 109 "bytecode.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_74_74, bytecode_backend__bytecode__V_65_65);
#line 109 "bytecode.m"
                            return;
                          }
#line 109 "bytecode.m"
                        }
#line 109 "bytecode.m"
                        break;
#line 109 "bytecode.m"
                    }
#line 109 "bytecode.m"
                    break;
#line 109 "bytecode.m"
                }
#line 109 "bytecode.m"
              }
#line 109 "bytecode.m"
              break;
#line 109 "bytecode.m"
          }
#line 109 "bytecode.m"
          break;
#line 109 "bytecode.m"
      }
#line 109 "bytecode.m"
  }
#line 109 "bytecode.m"
}

#line 109 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_tag_0_0(
#line 109 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1,
#line 109 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 109 "bytecode.m"
{
#line 109 "bytecode.m"
  {
#line 109 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 109 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_17 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 109 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_18 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 109 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_17 == bytecode_backend__bytecode__CastY_18);
#line 109 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 109 "bytecode.m"
      bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 109 "bytecode.m"
    else
#line 109 "bytecode.m"
#line 109 "bytecode.m"
      switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 109 "bytecode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
        case (MR_Integer) 0:
#line 109 "bytecode.m"
          {
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__CastX_3 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__CastY_4 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 109 "bytecode.m"
            bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_4 == bytecode_backend__bytecode__CastX_3);
#line 109 "bytecode.m"
          }
#line 109 "bytecode.m"
          break;
#line 109 "bytecode.m"
        case (MR_Integer) 1:
#line 109 "bytecode.m"
          {
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_6_6;

#line 109 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 109 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 109 "bytecode.m"
              {
#line 109 "bytecode.m"
                bytecode_backend__bytecode__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 5673 "bytecode_backend.bytecode.c"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_5_5 == bytecode_backend__bytecode__V_6_6);
#line 109 "bytecode.m"
              }
#line 109 "bytecode.m"
          }
#line 109 "bytecode.m"
          break;
#line 109 "bytecode.m"
        case (MR_Integer) 2:
#line 109 "bytecode.m"
          {
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_9_9;
#line 109 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_10_10;

#line 109 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 109 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 109 "bytecode.m"
              {
#line 109 "bytecode.m"
                bytecode_backend__bytecode__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "bytecode.m"
                bytecode_backend__bytecode__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 5704 "bytecode_backend.bytecode.c"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_7_7 == bytecode_backend__bytecode__V_9_9);
#line 109 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 5708 "bytecode_backend.bytecode.c"
                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_8_8 == bytecode_backend__bytecode__V_10_10);
#line 109 "bytecode.m"
              }
#line 109 "bytecode.m"
          }
#line 109 "bytecode.m"
          break;
#line 109 "bytecode.m"
        case (MR_Integer) 3:
#line 109 "bytecode.m"
#line 109 "bytecode.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 109 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 109 "bytecode.m"
            case (MR_Integer) 0:
#line 109 "bytecode.m"
              {
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_13_13;
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_14_14;

#line 109 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 109 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 109 "bytecode.m"
                  {
#line 109 "bytecode.m"
                    bytecode_backend__bytecode__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 109 "bytecode.m"
                    bytecode_backend__bytecode__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 5746 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_11_11 == bytecode_backend__bytecode__V_13_13);
#line 109 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 5750 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_12_12 == bytecode_backend__bytecode__V_14_14);
#line 109 "bytecode.m"
                  }
#line 109 "bytecode.m"
              }
#line 109 "bytecode.m"
              break;
#line 109 "bytecode.m"
            case (MR_Integer) 1:
#line 109 "bytecode.m"
              {
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 109 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_16_16;

#line 109 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 109 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 109 "bytecode.m"
                  {
#line 109 "bytecode.m"
                    bytecode_backend__bytecode__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 5775 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_15_15 == bytecode_backend__bytecode__V_16_16);
#line 109 "bytecode.m"
                  }
#line 109 "bytecode.m"
              }
#line 109 "bytecode.m"
              break;
#line 109 "bytecode.m"
          }
#line 109 "bytecode.m"
          break;
#line 109 "bytecode.m"
      }
#line 109 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 109 "bytecode.m"
  }
#line 109 "bytecode.m"
}

#line 93 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_cons_id_0_0(
#line 93 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 93 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 93 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 93 "bytecode.m"
{
#line 93 "bytecode.m"
  {
#line 93 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 93 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_395 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;
#line 93 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_396 = (MR_Integer) bytecode_backend__bytecode__HeadVar__3_3;

#line 93 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_395 == bytecode_backend__bytecode__CastY_396);
#line 93 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 5820 "bytecode_backend.bytecode.c"
      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "bytecode.m"
    else
#line 93 "bytecode.m"
#line 93 "bytecode.m"
      switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) {
#line 93 "bytecode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
        case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
          switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__2_2)) {
#line 93 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
            case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
              switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                  switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                    case (MR_Integer) 0:
#line 93 "bytecode.m"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 1:
#line 93 "bytecode.m"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
                  break;
#line 93 "bytecode.m"
                case (MR_Integer) 1:
#line 5868 "bytecode_backend.bytecode.c"
                  *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                  break;
#line 93 "bytecode.m"
                case (MR_Integer) 2:
#line 5874 "bytecode_backend.bytecode.c"
                  *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                  break;
#line 93 "bytecode.m"
                case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                    case (MR_Integer) 0:
#line 5887 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 1:
#line 5893 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 2:
#line 5899 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 3:
#line 5905 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 4:
#line 5911 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 5:
#line 5917 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
                  break;
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 1:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
              switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                  switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                    case (MR_Integer) 0:
#line 93 "bytecode.m"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 1:
#line 93 "bytecode.m"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
                  break;
#line 93 "bytecode.m"
                case (MR_Integer) 1:
#line 5961 "bytecode_backend.bytecode.c"
                  *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                  break;
#line 93 "bytecode.m"
                case (MR_Integer) 2:
#line 5967 "bytecode_backend.bytecode.c"
                  *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                  break;
#line 93 "bytecode.m"
                case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                    case (MR_Integer) 0:
#line 5980 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 1:
#line 5986 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 2:
#line 5992 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 3:
#line 5998 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 4:
#line 6004 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                    case (MR_Integer) 5:
#line 6010 "bytecode_backend.bytecode.c"
                      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                      break;
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
                  break;
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
          }
#line 93 "bytecode.m"
          break;
#line 93 "bytecode.m"
        case (MR_Integer) 1:
#line 93 "bytecode.m"
          {
#line 93 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_420_420 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 93 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_421_421 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "bytecode.m"
            MR_String bytecode_backend__bytecode__V_422_422 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_423_423 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));

#line 93 "bytecode.m"
#line 93 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
              case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 6053 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6059 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
                break;
#line 93 "bytecode.m"
              case (MR_Integer) 1:
#line 93 "bytecode.m"
                {
#line 93 "bytecode.m"
                  MR_Word bytecode_backend__bytecode__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));
#line 93 "bytecode.m"
                  MR_String bytecode_backend__bytecode__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "bytecode.m"
                  MR_Integer bytecode_backend__bytecode__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 93 "bytecode.m"
                  MR_Word bytecode_backend__bytecode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 93 "bytecode.m"
                  MR_Word bytecode_backend__bytecode__V_12_12;

#line 93 "bytecode.m"
                  {
#line 93 "bytecode.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&bytecode_backend__bytecode__V_12_12, bytecode_backend__bytecode__V_423_423, bytecode_backend__bytecode__V_8_8);
                  }
#line 6087 "bytecode_backend.bytecode.c"
                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_12_12 == (MR_Integer) 0);
#line 93 "bytecode.m"
                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                  if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                    *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_12_12;
#line 93 "bytecode.m"
                  else
#line 93 "bytecode.m"
                    {
#line 93 "bytecode.m"
                      MR_Word bytecode_backend__bytecode__V_13_13;

#line 93 "bytecode.m"
                      {
#line 93 "bytecode.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(&bytecode_backend__bytecode__V_13_13, bytecode_backend__bytecode__V_422_422, bytecode_backend__bytecode__V_9_9);
                      }
#line 6107 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_13_13 == (MR_Integer) 0);
#line 93 "bytecode.m"
                      bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                      if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                        *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_13_13;
#line 93 "bytecode.m"
                      else
#line 93 "bytecode.m"
                        {
#line 93 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_14_14;

#line 93 "bytecode.m"
                          {
#line 93 "bytecode.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_14_14, bytecode_backend__bytecode__V_421_421, bytecode_backend__bytecode__V_10_10);
                          }
#line 6127 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_14_14 == (MR_Integer) 0);
#line 93 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                            *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_14_14;
#line 93 "bytecode.m"
                          else
#line 93 "bytecode.m"
                            {
#line 93 "bytecode.m"
                              bytecode_backend__bytecode____Compare____byte_cons_tag_0_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_420_420, bytecode_backend__bytecode__V_11_11);
#line 93 "bytecode.m"
                              return;
                            }
#line 93 "bytecode.m"
                        }
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
                break;
#line 93 "bytecode.m"
              case (MR_Integer) 2:
#line 6154 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                break;
#line 93 "bytecode.m"
              case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 6167 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6173 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 2:
#line 6179 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 3:
#line 6185 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 4:
#line 6191 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 5:
#line 6197 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
                break;
#line 93 "bytecode.m"
            }
#line 93 "bytecode.m"
          }
#line 93 "bytecode.m"
          break;
#line 93 "bytecode.m"
        case (MR_Integer) 2:
#line 93 "bytecode.m"
          {
#line 93 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_425_425 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));

#line 93 "bytecode.m"
#line 93 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
              case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 6232 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6238 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
                break;
#line 93 "bytecode.m"
              case (MR_Integer) 1:
#line 6248 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                break;
#line 93 "bytecode.m"
              case (MR_Integer) 2:
#line 93 "bytecode.m"
                {
#line 93 "bytecode.m"
                  MR_Integer bytecode_backend__bytecode__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));

#line 93 "bytecode.m"
                  {
#line 93 "bytecode.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_425_425, bytecode_backend__bytecode__V_72_72);
#line 93 "bytecode.m"
                    return;
                  }
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
                break;
#line 93 "bytecode.m"
              case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 6279 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6285 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 2:
#line 6291 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 3:
#line 6297 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 4:
#line 6303 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 5:
#line 6309 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
                break;
#line 93 "bytecode.m"
            }
#line 93 "bytecode.m"
          }
#line 93 "bytecode.m"
          break;
#line 93 "bytecode.m"
        case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
            case (MR_Integer) 0:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_431_431 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6351 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6357 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6367 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 2:
#line 6373 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 93 "bytecode.m"
                        {
#line 93 "bytecode.m"
                          MR_String bytecode_backend__bytecode__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));

#line 93 "bytecode.m"
                          {
#line 93 "bytecode.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_431_431, bytecode_backend__bytecode__V_103_103);
#line 93 "bytecode.m"
                            return;
                          }
#line 93 "bytecode.m"
                        }
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6404 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 2:
#line 6410 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 3:
#line 6416 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 4:
#line 6422 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 5:
#line 6428 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 1:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Float bytecode_backend__bytecode__V_424_424 = MR_unbox_float((MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6463 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6469 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6479 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 2:
#line 6485 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6498 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 93 "bytecode.m"
                        {
#line 93 "bytecode.m"
                          MR_Float bytecode_backend__bytecode__V_134_134 = MR_unbox_float((MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));

#line 93 "bytecode.m"
                          {
#line 93 "bytecode.m"
                            mercury__private_builtin__builtin_compare_float_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_424_424, bytecode_backend__bytecode__V_134_134);
#line 93 "bytecode.m"
                            return;
                          }
#line 93 "bytecode.m"
                        }
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 2:
#line 6522 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 3:
#line 6528 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 4:
#line 6534 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 5:
#line 6540 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 2:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Char bytecode_backend__bytecode__V_419_419 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6575 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6581 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6591 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 2:
#line 6597 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6610 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6616 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 2:
#line 93 "bytecode.m"
                        {
#line 93 "bytecode.m"
                          MR_Char bytecode_backend__bytecode__V_165_165 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));

#line 93 "bytecode.m"
                          {
#line 93 "bytecode.m"
                            mercury__private_builtin__builtin_compare_character_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_419_419, bytecode_backend__bytecode__V_165_165);
#line 93 "bytecode.m"
                            return;
                          }
#line 93 "bytecode.m"
                        }
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 3:
#line 6640 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 4:
#line 6646 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 5:
#line 6652 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 3:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_426_426 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 5)));
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_427_427 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_428_428 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_429_429 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_430_430 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6695 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6701 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6711 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 2:
#line 6717 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6730 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6736 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 2:
#line 6742 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 3:
#line 93 "bytecode.m"
                        {
#line 93 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "bytecode.m"
                          MR_String bytecode_backend__bytecode__V_221_221 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 93 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_222_222 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 93 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_223_223 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 4)));
#line 93 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 5)));
#line 93 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_225_225;

#line 93 "bytecode.m"
                          {
#line 93 "bytecode.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&bytecode_backend__bytecode__V_225_225, bytecode_backend__bytecode__V_430_430, bytecode_backend__bytecode__V_220_220);
                          }
#line 6768 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_225_225 == (MR_Integer) 0);
#line 93 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                            *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_225_225;
#line 93 "bytecode.m"
                          else
#line 93 "bytecode.m"
                            {
#line 93 "bytecode.m"
                              MR_Word bytecode_backend__bytecode__V_226_226;

#line 93 "bytecode.m"
                              {
#line 93 "bytecode.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&bytecode_backend__bytecode__V_226_226, bytecode_backend__bytecode__V_429_429, bytecode_backend__bytecode__V_221_221);
                              }
#line 6788 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_226_226 == (MR_Integer) 0);
#line 93 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                                *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_226_226;
#line 93 "bytecode.m"
                              else
#line 93 "bytecode.m"
                                {
#line 93 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_227_227;

#line 93 "bytecode.m"
                                  {
#line 93 "bytecode.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_227_227, bytecode_backend__bytecode__V_428_428, bytecode_backend__bytecode__V_222_222);
                                  }
#line 6808 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_227_227 == (MR_Integer) 0);
#line 93 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                                    *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_227_227;
#line 93 "bytecode.m"
                                  else
#line 93 "bytecode.m"
                                    {
#line 93 "bytecode.m"
                                      MR_Word bytecode_backend__bytecode__V_228_228;

#line 93 "bytecode.m"
                                      {
#line 93 "bytecode.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_228_228, bytecode_backend__bytecode__V_427_427, bytecode_backend__bytecode__V_223_223);
                                      }
#line 6828 "bytecode_backend.bytecode.c"
                                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_228_228 == (MR_Integer) 0);
#line 93 "bytecode.m"
                                      bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                                      if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                                        *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_228_228;
#line 93 "bytecode.m"
                                      else
#line 93 "bytecode.m"
                                        {
#line 93 "bytecode.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_426_426, bytecode_backend__bytecode__V_224_224);
#line 93 "bytecode.m"
                                          return;
                                        }
#line 93 "bytecode.m"
                                    }
#line 93 "bytecode.m"
                                }
#line 93 "bytecode.m"
                            }
#line 93 "bytecode.m"
                        }
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 4:
#line 6857 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 5:
#line 6863 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 4:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_432_432 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_433_433 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6902 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6908 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 6918 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 2:
#line 6924 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 6937 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 6943 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 2:
#line 6949 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 3:
#line 6955 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 4:
#line 93 "bytecode.m"
                        {
#line 93 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "bytecode.m"
                          MR_String bytecode_backend__bytecode__V_290_290 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 93 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_291_291 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 93 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_292_292;

#line 93 "bytecode.m"
                          {
#line 93 "bytecode.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&bytecode_backend__bytecode__V_292_292, bytecode_backend__bytecode__V_434_434, bytecode_backend__bytecode__V_289_289);
                          }
#line 6977 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_292_292 == (MR_Integer) 0);
#line 93 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                            *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_292_292;
#line 93 "bytecode.m"
                          else
#line 93 "bytecode.m"
                            {
#line 93 "bytecode.m"
                              MR_Word bytecode_backend__bytecode__V_293_293;

#line 93 "bytecode.m"
                              {
#line 93 "bytecode.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&bytecode_backend__bytecode__V_293_293, bytecode_backend__bytecode__V_433_433, bytecode_backend__bytecode__V_290_290);
                              }
#line 6997 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_293_293 == (MR_Integer) 0);
#line 93 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                                *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_293_293;
#line 93 "bytecode.m"
                              else
#line 93 "bytecode.m"
                                {
#line 93 "bytecode.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_432_432, bytecode_backend__bytecode__V_291_291);
#line 93 "bytecode.m"
                                  return;
                                }
#line 93 "bytecode.m"
                            }
#line 93 "bytecode.m"
                        }
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 5:
#line 7022 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 5:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_416_416 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_417_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_418_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));

#line 93 "bytecode.m"
#line 93 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                  case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__3_3)) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 7061 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 7067 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 1:
#line 7077 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 2:
#line 7083 "bytecode_backend.bytecode.c"
                    *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                  case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
                      case (MR_Integer) 0:
#line 7096 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 1:
#line 7102 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 2:
#line 7108 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 3:
#line 7114 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 4:
#line 7120 "bytecode_backend.bytecode.c"
                        *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                      case (MR_Integer) 5:
#line 93 "bytecode.m"
                        {
#line 93 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 93 "bytecode.m"
                          MR_String bytecode_backend__bytecode__V_348_348 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 93 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_349_349;

#line 93 "bytecode.m"
                          {
#line 93 "bytecode.m"
                            mdbcomp__sym_name____Compare____sym_name_0_0(&bytecode_backend__bytecode__V_349_349, bytecode_backend__bytecode__V_418_418, bytecode_backend__bytecode__V_346_346);
                          }
#line 7142 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_349_349 == (MR_Integer) 0);
#line 93 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                            *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_349_349;
#line 93 "bytecode.m"
                          else
#line 93 "bytecode.m"
                            {
#line 93 "bytecode.m"
                              MR_Word bytecode_backend__bytecode__V_350_350;

#line 93 "bytecode.m"
                              {
#line 93 "bytecode.m"
                                parse_tree__prog_data____Compare____class_id_0_0(&bytecode_backend__bytecode__V_350_350, bytecode_backend__bytecode__V_417_417, bytecode_backend__bytecode__V_347_347);
                              }
#line 7162 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_350_350 == (MR_Integer) 0);
#line 93 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 93 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                                *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_350_350;
#line 93 "bytecode.m"
                              else
#line 93 "bytecode.m"
                                {
#line 93 "bytecode.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_416_416, bytecode_backend__bytecode__V_348_348);
#line 93 "bytecode.m"
                                  return;
                                }
#line 93 "bytecode.m"
                            }
#line 93 "bytecode.m"
                        }
#line 93 "bytecode.m"
                        break;
#line 93 "bytecode.m"
                    }
#line 93 "bytecode.m"
                    break;
#line 93 "bytecode.m"
                }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
          }
#line 93 "bytecode.m"
          break;
#line 93 "bytecode.m"
      }
#line 93 "bytecode.m"
  }
#line 93 "bytecode.m"
}

#line 93 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_cons_id_0_0(
#line 93 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1,
#line 93 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 93 "bytecode.m"
{
#line 93 "bytecode.m"
  {
#line 93 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 93 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_45 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 93 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_46 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 93 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_45 == bytecode_backend__bytecode__CastY_46);
#line 93 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
      bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 93 "bytecode.m"
    else
#line 93 "bytecode.m"
#line 93 "bytecode.m"
      switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 93 "bytecode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
        case (MR_Integer) 0:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
          switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__1_1)) {
#line 93 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
            case (MR_Integer) 0:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_41 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_42 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 93 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_42 == bytecode_backend__bytecode__CastX_41);
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 1:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_43 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_44 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 93 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_44 == bytecode_backend__bytecode__CastX_43);
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
          }
#line 93 "bytecode.m"
          break;
#line 93 "bytecode.m"
        case (MR_Integer) 1:
#line 93 "bytecode.m"
          {
#line 93 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "bytecode.m"
            MR_String bytecode_backend__bytecode__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 93 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 93 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_7_7;
#line 93 "bytecode.m"
            MR_String bytecode_backend__bytecode__V_8_8;
#line 93 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_9_9;
#line 93 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_10_10;

#line 93 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 93 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                bytecode_backend__bytecode__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "bytecode.m"
                bytecode_backend__bytecode__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "bytecode.m"
                bytecode_backend__bytecode__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "bytecode.m"
                bytecode_backend__bytecode__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 7313 "bytecode_backend.bytecode.c"
                {
#line 7315 "bytecode_backend.bytecode.c"
                  bytecode_backend__bytecode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(bytecode_backend__bytecode__V_3_3, bytecode_backend__bytecode__V_7_7);
                }
#line 93 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                  {
#line 7322 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__V_4_4, bytecode_backend__bytecode__V_8_8) == 0);
#line 93 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                      {
#line 7328 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_5_5 == bytecode_backend__bytecode__V_9_9);
#line 93 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 7332 "bytecode_backend.bytecode.c"
                          {
#line 7334 "bytecode_backend.bytecode.c"
                            return bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_cons_tag_0_0(bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_10_10);
                          }
#line 93 "bytecode.m"
                      }
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
          }
#line 93 "bytecode.m"
          break;
#line 93 "bytecode.m"
        case (MR_Integer) 2:
#line 93 "bytecode.m"
          {
#line 93 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_12_12;

#line 93 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 93 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                bytecode_backend__bytecode__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 7364 "bytecode_backend.bytecode.c"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_11_11 == bytecode_backend__bytecode__V_12_12);
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
          }
#line 93 "bytecode.m"
          break;
#line 93 "bytecode.m"
        case (MR_Integer) 3:
#line 93 "bytecode.m"
#line 93 "bytecode.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 93 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 93 "bytecode.m"
            case (MR_Integer) 0:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_14_14;

#line 93 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 93 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                  {
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 7396 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__V_13_13, bytecode_backend__bytecode__V_14_14) == 0);
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 1:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Float bytecode_backend__bytecode__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "bytecode.m"
                MR_Float bytecode_backend__bytecode__V_16_16;

#line 93 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 93 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                  {
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 7421 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_15_15 == bytecode_backend__bytecode__V_16_16);
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 2:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Char bytecode_backend__bytecode__V_17_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "bytecode.m"
                MR_Char bytecode_backend__bytecode__V_18_18;

#line 93 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 93 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                  {
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_18_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 7446 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_17_17 == bytecode_backend__bytecode__V_18_18);
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 3:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_24_24;
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_25_25;
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_26_26;
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_27_27;
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_28_28;

#line 93 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 93 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                  {
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 5)));
#line 7495 "bytecode_backend.bytecode.c"
                    {
#line 7497 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(bytecode_backend__bytecode__V_19_19, bytecode_backend__bytecode__V_24_24);
                    }
#line 93 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                      {
#line 7504 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__V_20_20, bytecode_backend__bytecode__V_25_25) == 0);
#line 93 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                          {
#line 7510 "bytecode_backend.bytecode.c"
                            bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_21_21 == bytecode_backend__bytecode__V_26_26);
#line 93 "bytecode.m"
                            if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                              {
#line 7516 "bytecode_backend.bytecode.c"
                                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_22_22 == bytecode_backend__bytecode__V_27_27);
#line 93 "bytecode.m"
                                if (bytecode_backend__bytecode__succeeded)
#line 7520 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_23_23 == bytecode_backend__bytecode__V_28_28);
#line 93 "bytecode.m"
                              }
#line 93 "bytecode.m"
                          }
#line 93 "bytecode.m"
                      }
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 4:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_32_32;
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_33_33;
#line 93 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_34_34;

#line 93 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 93 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                  {
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 7563 "bytecode_backend.bytecode.c"
                    {
#line 7565 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(bytecode_backend__bytecode__V_29_29, bytecode_backend__bytecode__V_32_32);
                    }
#line 93 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                      {
#line 7572 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__V_30_30, bytecode_backend__bytecode__V_33_33) == 0);
#line 93 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 7576 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_31_31 == bytecode_backend__bytecode__V_34_34);
#line 93 "bytecode.m"
                      }
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
            case (MR_Integer) 5:
#line 93 "bytecode.m"
              {
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_38_38;
#line 93 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_39_39;
#line 93 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_40_40;

#line 93 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 93 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                  {
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 93 "bytecode.m"
                    bytecode_backend__bytecode__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 7615 "bytecode_backend.bytecode.c"
                    {
#line 7617 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(bytecode_backend__bytecode__V_35_35, bytecode_backend__bytecode__V_38_38);
                    }
#line 93 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 93 "bytecode.m"
                      {
#line 7624 "bytecode_backend.bytecode.c"
                        {
#line 7626 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = parse_tree__prog_data____Unify____class_id_0_0(bytecode_backend__bytecode__V_36_36, bytecode_backend__bytecode__V_39_39);
                        }
#line 93 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 7631 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__V_37_37, bytecode_backend__bytecode__V_40_40) == 0);
#line 93 "bytecode.m"
                      }
#line 93 "bytecode.m"
                  }
#line 93 "bytecode.m"
              }
#line 93 "bytecode.m"
              break;
#line 93 "bytecode.m"
          }
#line 93 "bytecode.m"
          break;
#line 93 "bytecode.m"
      }
#line 93 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 93 "bytecode.m"
  }
#line 93 "bytecode.m"
}

#line 38 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_code_0_0(
#line 38 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 38 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 38 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 38 "bytecode.m"
{
#line 38 "bytecode.m"
  {
#line 38 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 38 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_201 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;
#line 38 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_202 = (MR_Integer) bytecode_backend__bytecode__HeadVar__3_3;

#line 38 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_201 == bytecode_backend__bytecode__CastY_202);
#line 38 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 7678 "bytecode_backend.bytecode.c"
      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "bytecode.m"
    else
#line 38 "bytecode.m"
      {
#line 38 "bytecode.m"
        MR_Integer bytecode_backend__bytecode__V_4_4;
#line 38 "bytecode.m"
        MR_Integer bytecode_backend__bytecode__V_5_5;

#line 38 "bytecode.m"
        {
#line 38 "bytecode.m"
          bytecode_backend__bytecode____Index____byte_code_0_0(bytecode_backend__bytecode__HeadVar__2_2, &bytecode_backend__bytecode__V_4_4);
        }
#line 38 "bytecode.m"
        {
#line 38 "bytecode.m"
          bytecode_backend__bytecode____Index____byte_code_0_0(bytecode_backend__bytecode__HeadVar__3_3, &bytecode_backend__bytecode__V_5_5);
        }
#line 38 "bytecode.m"
        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_4_4 < bytecode_backend__bytecode__V_5_5);
#line 38 "bytecode.m"
        if (bytecode_backend__bytecode__succeeded)
#line 7703 "bytecode_backend.bytecode.c"
          *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "bytecode.m"
        else
#line 38 "bytecode.m"
          {
#line 38 "bytecode.m"
            bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_4_4 > bytecode_backend__bytecode__V_5_5);
#line 38 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 7713 "bytecode_backend.bytecode.c"
              *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 38 "bytecode.m"
            else
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_6_6;

#line 38 "bytecode.m"
#line 38 "bytecode.m"
                switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) {
#line 38 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
                  case (MR_Integer) 0:
#line 38 "bytecode.m"
#line 38 "bytecode.m"
                    switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__2_2)) {
#line 38 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
                      case (MR_Integer) 0:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 1:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 2:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 3:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 4:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 5:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 6:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 7:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 8:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 9:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_6_6 = (MR_Integer) 0;
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                    }
#line 38 "bytecode.m"
                    break;
#line 38 "bytecode.m"
                  case (MR_Integer) 1:
#line 38 "bytecode.m"
                    {
#line 38 "bytecode.m"
                      MR_String bytecode_backend__bytecode__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                      MR_String bytecode_backend__bytecode__V_11_11;
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_12_12;
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_13_13;
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_14_14;
#line 38 "bytecode.m"
                      MR_Word bytecode_backend__bytecode__V_15_15;

#line 38 "bytecode.m"
                      bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 38 "bytecode.m"
                      if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          {
#line 38 "bytecode.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(&bytecode_backend__bytecode__V_15_15, bytecode_backend__bytecode__V_7_7, bytecode_backend__bytecode__V_11_11);
                          }
#line 7900 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_15_15 == (MR_Integer) 0);
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_15_15;
#line 38 "bytecode.m"
                          else
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              MR_Word bytecode_backend__bytecode__V_16_16;

#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_16_16, bytecode_backend__bytecode__V_8_8, bytecode_backend__bytecode__V_12_12);
                              }
#line 7920 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_16_16 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_16_16;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_17_17;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_17_17, bytecode_backend__bytecode__V_9_9, bytecode_backend__bytecode__V_13_13);
                                  }
#line 7940 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_17_17 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_17_17;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_10_10, bytecode_backend__bytecode__V_14_14);
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                    }
#line 38 "bytecode.m"
                    break;
#line 38 "bytecode.m"
                  case (MR_Integer) 2:
#line 38 "bytecode.m"
                    {
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "bytecode.m"
                      MR_Word bytecode_backend__bytecode__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "bytecode.m"
                      MR_Word bytecode_backend__bytecode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 5)));
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_24_24;
#line 38 "bytecode.m"
                      MR_Word bytecode_backend__bytecode__V_25_25;
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_26_26;
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_27_27;
#line 38 "bytecode.m"
                      MR_Integer bytecode_backend__bytecode__V_28_28;
#line 38 "bytecode.m"
                      MR_Word bytecode_backend__bytecode__V_29_29;
#line 38 "bytecode.m"
                      MR_Word bytecode_backend__bytecode__V_30_30;

#line 38 "bytecode.m"
                      bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 38 "bytecode.m"
                      if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 4)));
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 5)));
#line 38 "bytecode.m"
                          {
#line 38 "bytecode.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_30_30, bytecode_backend__bytecode__V_18_18, bytecode_backend__bytecode__V_24_24);
                          }
#line 8021 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_30_30 == (MR_Integer) 0);
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_30_30;
#line 38 "bytecode.m"
                          else
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              MR_Word bytecode_backend__bytecode__V_31_31;
#line 38 "bytecode.m"
                              MR_Integer bytecode_backend__bytecode__V_281_281 = (MR_Integer) bytecode_backend__bytecode__V_19_19;
#line 38 "bytecode.m"
                              MR_Integer bytecode_backend__bytecode__V_282_282 = (MR_Integer) bytecode_backend__bytecode__V_25_25;

#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_31_31, bytecode_backend__bytecode__V_281_281, bytecode_backend__bytecode__V_282_282);
                              }
#line 8045 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_31_31 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_31_31;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_32_32;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_32_32, bytecode_backend__bytecode__V_20_20, bytecode_backend__bytecode__V_26_26);
                                  }
#line 8065 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_32_32 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_32_32;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      MR_Word bytecode_backend__bytecode__V_33_33;

#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_33_33, bytecode_backend__bytecode__V_21_21, bytecode_backend__bytecode__V_27_27);
                                      }
#line 8085 "bytecode_backend.bytecode.c"
                                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_33_33 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                      bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                      if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                        bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_33_33;
#line 38 "bytecode.m"
                                      else
#line 38 "bytecode.m"
                                        {
#line 38 "bytecode.m"
                                          MR_Word bytecode_backend__bytecode__V_34_34;

#line 38 "bytecode.m"
                                          {
#line 38 "bytecode.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_34_34, bytecode_backend__bytecode__V_22_22, bytecode_backend__bytecode__V_28_28);
                                          }
#line 8105 "bytecode_backend.bytecode.c"
                                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_34_34 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                            bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_34_34;
#line 38 "bytecode.m"
                                          else
#line 38 "bytecode.m"
                                            {
#line 38 "bytecode.m"
                                              {
#line 38 "bytecode.m"
                                                mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[1], &bytecode_backend__bytecode__V_6_6, ((MR_Box) (bytecode_backend__bytecode__V_23_23)), ((MR_Box) (bytecode_backend__bytecode__V_29_29)));
                                              }
#line 38 "bytecode.m"
                                            }
#line 38 "bytecode.m"
                                        }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                    }
#line 38 "bytecode.m"
                    break;
#line 38 "bytecode.m"
                  case (MR_Integer) 3:
#line 38 "bytecode.m"
#line 38 "bytecode.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) {
#line 38 "bytecode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
                      case (MR_Integer) 0:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_36_36;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_35_35, bytecode_backend__bytecode__V_36_36);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 1:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_38_38;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_37_37, bytecode_backend__bytecode__V_38_38);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 2:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_40_40;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_39_39, bytecode_backend__bytecode__V_40_40);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 3:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_42_42;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_41_41, bytecode_backend__bytecode__V_42_42);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 4:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_45_45;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_46_46;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_47_47;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_47_47, bytecode_backend__bytecode__V_43_43, bytecode_backend__bytecode__V_45_45);
                              }
#line 8297 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_47_47 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_47_47;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_44_44, bytecode_backend__bytecode__V_46_46);
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 5:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_51_51;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_52_52;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_53_53;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_54_54;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&bytecode_backend__bytecode__V_54_54, bytecode_backend__bytecode__V_48_48, bytecode_backend__bytecode__V_51_51);
                              }
#line 8356 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_54_54 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_54_54;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_55_55;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[0], &bytecode_backend__bytecode__V_55_55, ((MR_Box) (bytecode_backend__bytecode__V_49_49)), ((MR_Box) (bytecode_backend__bytecode__V_52_52)));
                                  }
#line 8376 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_55_55 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_55_55;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_50_50, bytecode_backend__bytecode__V_53_53);
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 6:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_57_57;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_56_56, bytecode_backend__bytecode__V_57_57);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 7:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_61_61;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_62_62;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_63_63;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_64_64;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_64_64, bytecode_backend__bytecode__V_58_58, bytecode_backend__bytecode__V_61_61);
                              }
#line 8467 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_64_64 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_64_64;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_65_65;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_65_65, bytecode_backend__bytecode__V_59_59, bytecode_backend__bytecode__V_62_62);
                                  }
#line 8487 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_65_65 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_65_65;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_60_60, bytecode_backend__bytecode__V_63_63);
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 8:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_67_67;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_66_66, bytecode_backend__bytecode__V_67_67);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 9:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_69_69;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_68_68, bytecode_backend__bytecode__V_69_69);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 10:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_71_71;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_70_70, bytecode_backend__bytecode__V_71_71);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 11:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_74_74;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_75_75;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_76_76;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_76_76, bytecode_backend__bytecode__V_72_72, bytecode_backend__bytecode__V_74_74);
                              }
#line 8632 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_76_76 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_76_76;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_73_73, bytecode_backend__bytecode__V_75_75);
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 12:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_78_78;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_77_77, bytecode_backend__bytecode__V_78_78);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 13:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_80_80;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_79_79, bytecode_backend__bytecode__V_80_80);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 14:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_82_82;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_81_81, bytecode_backend__bytecode__V_82_82);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 15:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_85_85;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_86_86;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_87_87;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_87_87, bytecode_backend__bytecode__V_83_83, bytecode_backend__bytecode__V_85_85);
                              }
#line 8775 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_87_87 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_87_87;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_84_84, bytecode_backend__bytecode__V_86_86);
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 16:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_91_91;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_92_92;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_93_93;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_94_94;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_94_94, bytecode_backend__bytecode__V_88_88, bytecode_backend__bytecode__V_91_91);
                              }
#line 8834 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_94_94 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_94_94;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_95_95;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_95_95, bytecode_backend__bytecode__V_89_89, bytecode_backend__bytecode__V_92_92);
                                  }
#line 8854 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_95_95 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_95_95;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      MR_Integer bytecode_backend__bytecode__V_285_285 = (MR_Integer) bytecode_backend__bytecode__V_90_90;
#line 38 "bytecode.m"
                                      MR_Integer bytecode_backend__bytecode__V_286_286 = (MR_Integer) bytecode_backend__bytecode__V_93_93;

#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_285_285, bytecode_backend__bytecode__V_286_286);
                                      }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 17:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_99_99;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_100_100;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_101_101;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_102_102;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 17)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_102_102, bytecode_backend__bytecode__V_96_96, bytecode_backend__bytecode__V_99_99);
                              }
#line 8924 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_102_102 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_102_102;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_103_103;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&bytecode_backend__bytecode__V_103_103, bytecode_backend__bytecode__V_97_97, bytecode_backend__bytecode__V_100_100);
                                  }
#line 8944 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_103_103 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_103_103;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[2], &bytecode_backend__bytecode__V_6_6, ((MR_Box) (bytecode_backend__bytecode__V_98_98)), ((MR_Box) (bytecode_backend__bytecode__V_101_101)));
                                      }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 18:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_107_107;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_108_108;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_109_109;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_110_110;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 18)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_110_110, bytecode_backend__bytecode__V_104_104, bytecode_backend__bytecode__V_107_107);
                              }
#line 9009 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_110_110 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_110_110;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_111_111;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&bytecode_backend__bytecode__V_111_111, bytecode_backend__bytecode__V_105_105, bytecode_backend__bytecode__V_108_108);
                                  }
#line 9029 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_111_111 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_111_111;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[2], &bytecode_backend__bytecode__V_6_6, ((MR_Box) (bytecode_backend__bytecode__V_106_106)), ((MR_Box) (bytecode_backend__bytecode__V_109_109)));
                                      }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 19:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_115_115;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_116_116;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_117_117;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_118_118;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 19)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_118_118, bytecode_backend__bytecode__V_112_112, bytecode_backend__bytecode__V_115_115);
                              }
#line 9094 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_118_118 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_118_118;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_119_119;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&bytecode_backend__bytecode__V_119_119, bytecode_backend__bytecode__V_113_113, bytecode_backend__bytecode__V_116_116);
                                  }
#line 9114 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_119_119 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_119_119;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[3], &bytecode_backend__bytecode__V_6_6, ((MR_Box) (bytecode_backend__bytecode__V_114_114)), ((MR_Box) (bytecode_backend__bytecode__V_117_117)));
                                      }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 20:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_123_123;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_124_124;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_125_125;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_126_126;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_126_126, bytecode_backend__bytecode__V_120_120, bytecode_backend__bytecode__V_123_123);
                              }
#line 9179 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_126_126 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_126_126;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_127_127;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode____Compare____byte_cons_id_0_0(&bytecode_backend__bytecode__V_127_127, bytecode_backend__bytecode__V_121_121, bytecode_backend__bytecode__V_124_124);
                                  }
#line 9199 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_127_127 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_127_127;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_1[3], &bytecode_backend__bytecode__V_6_6, ((MR_Box) (bytecode_backend__bytecode__V_122_122)), ((MR_Box) (bytecode_backend__bytecode__V_125_125)));
                                      }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 21:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_132_132;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_133_133;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_134_134;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_134_134, bytecode_backend__bytecode__V_129_129, bytecode_backend__bytecode__V_132_132);
                              }
#line 9258 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_134_134 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_134_134;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_130_130, bytecode_backend__bytecode__V_133_133);
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 22:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_139_139;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_140_140;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_141_141;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 22)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_141_141, bytecode_backend__bytecode__V_136_136, bytecode_backend__bytecode__V_139_139);
                              }
#line 9311 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_141_141 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_141_141;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_137_137, bytecode_backend__bytecode__V_140_140);
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 23:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_String bytecode_backend__bytecode__V_143_143 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_145_145 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_146_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 5)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_147_147;
#line 38 "bytecode.m"
                          MR_String bytecode_backend__bytecode__V_148_148;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_149_149;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_150_150;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_151_151;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_152_152;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 23)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_148_148 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 4)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 5)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mdbcomp__sym_name____Compare____sym_name_0_0(&bytecode_backend__bytecode__V_152_152, bytecode_backend__bytecode__V_142_142, bytecode_backend__bytecode__V_147_147);
                              }
#line 9382 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_152_152 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_152_152;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_153_153;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&bytecode_backend__bytecode__V_153_153, bytecode_backend__bytecode__V_143_143, bytecode_backend__bytecode__V_148_148);
                                  }
#line 9402 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_153_153 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_153_153;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      MR_Word bytecode_backend__bytecode__V_154_154;

#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_154_154, bytecode_backend__bytecode__V_144_144, bytecode_backend__bytecode__V_149_149);
                                      }
#line 9422 "bytecode_backend.bytecode.c"
                                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_154_154 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                      bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                      if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                        bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_154_154;
#line 38 "bytecode.m"
                                      else
#line 38 "bytecode.m"
                                        {
#line 38 "bytecode.m"
                                          MR_Word bytecode_backend__bytecode__V_155_155;

#line 38 "bytecode.m"
                                          {
#line 38 "bytecode.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_155_155, bytecode_backend__bytecode__V_145_145, bytecode_backend__bytecode__V_150_150);
                                          }
#line 9442 "bytecode_backend.bytecode.c"
                                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_155_155 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                          bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                            bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_155_155;
#line 38 "bytecode.m"
                                          else
#line 38 "bytecode.m"
                                            {
#line 38 "bytecode.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_146_146, bytecode_backend__bytecode__V_151_151);
                                            }
#line 38 "bytecode.m"
                                        }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 24:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_156_156 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_160_160;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_161_161;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_162_162;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_163_163;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_164_164;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 24)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_160_160 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_161_161 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 4)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_164_164, bytecode_backend__bytecode__V_156_156, bytecode_backend__bytecode__V_160_160);
                              }
#line 9513 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_164_164 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_164_164;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_165_165;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_165_165, bytecode_backend__bytecode__V_157_157, bytecode_backend__bytecode__V_161_161);
                                  }
#line 9533 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_165_165 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_165_165;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      MR_Word bytecode_backend__bytecode__V_166_166;

#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_166_166, bytecode_backend__bytecode__V_158_158, bytecode_backend__bytecode__V_162_162);
                                      }
#line 9553 "bytecode_backend.bytecode.c"
                                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_166_166 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                      bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                      if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                        bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_166_166;
#line 38 "bytecode.m"
                                      else
#line 38 "bytecode.m"
                                        {
#line 38 "bytecode.m"
                                          MR_Integer bytecode_backend__bytecode__V_283_283 = (MR_Integer) bytecode_backend__bytecode__V_159_159;
#line 38 "bytecode.m"
                                          MR_Integer bytecode_backend__bytecode__V_284_284 = (MR_Integer) bytecode_backend__bytecode__V_163_163;

#line 38 "bytecode.m"
                                          {
#line 38 "bytecode.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_283_283, bytecode_backend__bytecode__V_284_284);
                                          }
#line 38 "bytecode.m"
                                        }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 25:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_170_170 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_171_171;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_172_172;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_173_173;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_174_174;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_175_175;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 25)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_174_174 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 4)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                backend_libs__builtin_ops____Compare____binary_op_0_0(&bytecode_backend__bytecode__V_175_175, bytecode_backend__bytecode__V_167_167, bytecode_backend__bytecode__V_171_171);
                              }
#line 9631 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_175_175 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_175_175;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_176_176;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode____Compare____byte_arg_0_0(&bytecode_backend__bytecode__V_176_176, bytecode_backend__bytecode__V_168_168, bytecode_backend__bytecode__V_172_172);
                                  }
#line 9651 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_176_176 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_176_176;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      MR_Word bytecode_backend__bytecode__V_177_177;

#line 38 "bytecode.m"
                                      {
#line 38 "bytecode.m"
                                        bytecode_backend__bytecode____Compare____byte_arg_0_0(&bytecode_backend__bytecode__V_177_177, bytecode_backend__bytecode__V_169_169, bytecode_backend__bytecode__V_173_173);
                                      }
#line 9671 "bytecode_backend.bytecode.c"
                                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_177_177 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                      bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                      if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                        bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_177_177;
#line 38 "bytecode.m"
                                      else
#line 38 "bytecode.m"
                                        {
#line 38 "bytecode.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_170_170, bytecode_backend__bytecode__V_174_174);
                                        }
#line 38 "bytecode.m"
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 26:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_180_180 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_181_181;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_182_182;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_183_183;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_184_184;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_277_277;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_278_278;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 26)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_183_183 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_277_277 = (MR_Integer) bytecode_backend__bytecode__V_178_178;
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_278_278 = (MR_Integer) bytecode_backend__bytecode__V_181_181;
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_184_184, bytecode_backend__bytecode__V_277_277, bytecode_backend__bytecode__V_278_278);
                              }
#line 9742 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_184_184 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_184_184;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_185_185;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode____Compare____byte_arg_0_0(&bytecode_backend__bytecode__V_185_185, bytecode_backend__bytecode__V_179_179, bytecode_backend__bytecode__V_182_182);
                                  }
#line 9762 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_185_185 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_185_185;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_180_180, bytecode_backend__bytecode__V_183_183);
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 27:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_189_189;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_190_190;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_191_191;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_192_192;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                backend_libs__builtin_ops____Compare____binary_op_0_0(&bytecode_backend__bytecode__V_192_192, bytecode_backend__bytecode__V_186_186, bytecode_backend__bytecode__V_189_189);
                              }
#line 9823 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_192_192 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_192_192;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  MR_Word bytecode_backend__bytecode__V_193_193;

#line 38 "bytecode.m"
                                  {
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode____Compare____byte_arg_0_0(&bytecode_backend__bytecode__V_193_193, bytecode_backend__bytecode__V_187_187, bytecode_backend__bytecode__V_190_190);
                                  }
#line 9843 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_193_193 == (MR_Integer) 0);
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                                  if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                    bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_193_193;
#line 38 "bytecode.m"
                                  else
#line 38 "bytecode.m"
                                    {
#line 38 "bytecode.m"
                                      bytecode_backend__bytecode____Compare____byte_arg_0_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_188_188, bytecode_backend__bytecode__V_191_191);
                                    }
#line 38 "bytecode.m"
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 28:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_196_196;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_197_197;
#line 38 "bytecode.m"
                          MR_Word bytecode_backend__bytecode__V_198_198;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_279_279;
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_280_280;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 28)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_279_279 = (MR_Integer) bytecode_backend__bytecode__V_194_194;
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_280_280 = (MR_Integer) bytecode_backend__bytecode__V_196_196;
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_198_198, bytecode_backend__bytecode__V_279_279, bytecode_backend__bytecode__V_280_280);
                              }
#line 9906 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_198_198 == (MR_Integer) 0);
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = !(bytecode_backend__bytecode__succeeded);
#line 38 "bytecode.m"
                              if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                bytecode_backend__bytecode__V_6_6 = bytecode_backend__bytecode__V_198_198;
#line 38 "bytecode.m"
                              else
#line 38 "bytecode.m"
                                {
#line 38 "bytecode.m"
                                  bytecode_backend__bytecode____Compare____byte_arg_0_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_195_195, bytecode_backend__bytecode__V_197_197);
                                }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                      case (MR_Integer) 29:
#line 38 "bytecode.m"
                        {
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_199_199 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                          MR_Integer bytecode_backend__bytecode__V_200_200;

#line 38 "bytecode.m"
                          bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 29)));
#line 38 "bytecode.m"
                          if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                            {
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__V_200_200 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "bytecode.m"
                              {
#line 38 "bytecode.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&bytecode_backend__bytecode__V_6_6, bytecode_backend__bytecode__V_199_199, bytecode_backend__bytecode__V_200_200);
                              }
#line 38 "bytecode.m"
                              bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
                            }
#line 38 "bytecode.m"
                        }
#line 38 "bytecode.m"
                        break;
#line 38 "bytecode.m"
                    }
#line 38 "bytecode.m"
                    break;
#line 38 "bytecode.m"
                }
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  *bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__V_6_6;
#line 38 "bytecode.m"
                else
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 38 "bytecode.m"
                    return;
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
          }
#line 38 "bytecode.m"
      }
#line 38 "bytecode.m"
  }
#line 38 "bytecode.m"
}

#line 38 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Index____byte_code_0_0(
#line 38 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1,
#line 38 "bytecode.m"
  MR_Integer * bytecode_backend__bytecode__HeadVar__2_2)
#line 38 "bytecode.m"
{
#line 38 "bytecode.m"
  {
#line 38 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 38 "bytecode.m"
#line 38 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 38 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
      case (MR_Integer) 0:
#line 38 "bytecode.m"
#line 38 "bytecode.m"
        switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__1_1)) {
#line 38 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
          case (MR_Integer) 0:
#line 10017 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 1;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 1:
#line 10023 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 3;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 2:
#line 10029 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 6;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 3:
#line 10035 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 10;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 4:
#line 10041 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 17;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 5:
#line 10047 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 20;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 6:
#line 10053 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 37;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 7:
#line 10059 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 38;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 8:
#line 10065 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 39;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 9:
#line 10071 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 41;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
        }
#line 38 "bytecode.m"
        break;
#line 38 "bytecode.m"
      case (MR_Integer) 1:
#line 10081 "bytecode_backend.bytecode.c"
        *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 0;
#line 38 "bytecode.m"
        break;
#line 38 "bytecode.m"
      case (MR_Integer) 2:
#line 10087 "bytecode_backend.bytecode.c"
        *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 2;
#line 38 "bytecode.m"
        break;
#line 38 "bytecode.m"
      case (MR_Integer) 3:
#line 38 "bytecode.m"
#line 38 "bytecode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 38 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
          case (MR_Integer) 0:
#line 10100 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 4;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 1:
#line 10106 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 5;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 2:
#line 10112 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 7;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 3:
#line 10118 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 8;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 4:
#line 10124 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 9;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 5:
#line 10130 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 11;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 6:
#line 10136 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 12;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 7:
#line 10142 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 13;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 8:
#line 10148 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 14;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 9:
#line 10154 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 15;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 10:
#line 10160 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 16;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 11:
#line 10166 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 18;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 12:
#line 10172 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 19;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 13:
#line 10178 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 21;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 14:
#line 10184 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 22;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 15:
#line 10190 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 23;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 16:
#line 10196 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 24;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 17:
#line 10202 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 25;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 18:
#line 10208 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 26;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 19:
#line 10214 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 27;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 20:
#line 10220 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 28;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 21:
#line 10226 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 29;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 22:
#line 10232 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 30;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 23:
#line 10238 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 31;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 24:
#line 10244 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 32;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 25:
#line 10250 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 33;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 26:
#line 10256 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 34;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 27:
#line 10262 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 35;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 28:
#line 10268 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 36;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
          case (MR_Integer) 29:
#line 10274 "bytecode_backend.bytecode.c"
            *bytecode_backend__bytecode__HeadVar__2_2 = (MR_Integer) 40;
#line 38 "bytecode.m"
            break;
#line 38 "bytecode.m"
        }
#line 38 "bytecode.m"
        break;
#line 38 "bytecode.m"
    }
#line 38 "bytecode.m"
  }
#line 38 "bytecode.m"
}

#line 38 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_code_0_0(
#line 38 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1,
#line 38 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 38 "bytecode.m"
{
#line 38 "bytecode.m"
  {
#line 38 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 38 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_175 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_176 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_175 == bytecode_backend__bytecode__CastY_176);
#line 38 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
      bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 38 "bytecode.m"
    else
#line 38 "bytecode.m"
#line 38 "bytecode.m"
      switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 38 "bytecode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
        case (MR_Integer) 0:
#line 38 "bytecode.m"
#line 38 "bytecode.m"
          switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__1_1)) {
#line 38 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
            case (MR_Integer) 0:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_11 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_12 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_12 == bytecode_backend__bytecode__CastX_11);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 1:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_25 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_26 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_26 == bytecode_backend__bytecode__CastX_25);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 2:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_31 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_32 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_32 == bytecode_backend__bytecode__CastX_31);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 3:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_41 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_42 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_42 == bytecode_backend__bytecode__CastX_41);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 4:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_63 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_64 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_64 == bytecode_backend__bytecode__CastX_63);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 5:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_71 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_72 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_72 == bytecode_backend__bytecode__CastX_71);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 6:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_165 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_166 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_166 == bytecode_backend__bytecode__CastX_165);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 7:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_167 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_168 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_168 == bytecode_backend__bytecode__CastX_167);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 8:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_169 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_170 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_170 == bytecode_backend__bytecode__CastX_169);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 9:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastX_173 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__CastY_174 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastY_174 == bytecode_backend__bytecode__CastX_173);
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
          }
#line 38 "bytecode.m"
          break;
#line 38 "bytecode.m"
        case (MR_Integer) 1:
#line 38 "bytecode.m"
          {
#line 38 "bytecode.m"
            MR_String bytecode_backend__bytecode__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
            MR_String bytecode_backend__bytecode__V_7_7;
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_8_8;
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_9_9;
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_10_10;

#line 38 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 38 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 10516 "bytecode_backend.bytecode.c"
                bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__V_3_3, bytecode_backend__bytecode__V_7_7) == 0);
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 10522 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_4_4 == bytecode_backend__bytecode__V_8_8);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 10528 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_5_5 == bytecode_backend__bytecode__V_9_9);
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 10532 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_6_6 == bytecode_backend__bytecode__V_10_10);
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
          }
#line 38 "bytecode.m"
          break;
#line 38 "bytecode.m"
        case (MR_Integer) 2:
#line 38 "bytecode.m"
          {
#line 38 "bytecode.m"
            MR_Word bytecode_backend__bytecode__TypeInfo_184_184;
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 38 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_19_19;
#line 38 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_20_20;
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_21_21;
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_22_22;
#line 38 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_23_23;
#line 38 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_24_24;

#line 38 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 38 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "bytecode.m"
                bytecode_backend__bytecode__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 5)));
#line 10593 "bytecode_backend.bytecode.c"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_13_13 == bytecode_backend__bytecode__V_19_19);
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 10599 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_14_14 == bytecode_backend__bytecode__V_20_20);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 10605 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_15_15 == bytecode_backend__bytecode__V_21_21);
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                          {
#line 10611 "bytecode_backend.bytecode.c"
                            bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_16_16 == bytecode_backend__bytecode__V_22_22);
#line 38 "bytecode.m"
                            if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                              {
#line 10617 "bytecode_backend.bytecode.c"
                                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_17_17 == bytecode_backend__bytecode__V_23_23);
#line 38 "bytecode.m"
                                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                                  {
#line 10623 "bytecode_backend.bytecode.c"
                                    bytecode_backend__bytecode__TypeInfo_184_184 = (MR_Word) &bytecode_backend__bytecode_scalar_common_1[1];
#line 10625 "bytecode_backend.bytecode.c"
                                    {
#line 10627 "bytecode_backend.bytecode.c"
                                      return bytecode_backend__bytecode__succeeded = mercury__builtin__unify_2_p_0(bytecode_backend__bytecode__TypeInfo_184_184, ((MR_Box) (bytecode_backend__bytecode__V_18_18)), ((MR_Box) (bytecode_backend__bytecode__V_24_24)));
                                    }
#line 38 "bytecode.m"
                                  }
#line 38 "bytecode.m"
                              }
#line 38 "bytecode.m"
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
          }
#line 38 "bytecode.m"
          break;
#line 38 "bytecode.m"
        case (MR_Integer) 3:
#line 38 "bytecode.m"
#line 38 "bytecode.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 38 "bytecode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 38 "bytecode.m"
            case (MR_Integer) 0:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_28_28;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 10670 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_27_27 == bytecode_backend__bytecode__V_28_28);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 1:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_30_30;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 10695 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_29_29 == bytecode_backend__bytecode__V_30_30);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 2:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_34_34;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 10720 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_33_33 == bytecode_backend__bytecode__V_34_34);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 3:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_36_36;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 10745 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_35_35 == bytecode_backend__bytecode__V_36_36);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 4:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_39_39;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_40_40;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 10776 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_37_37 == bytecode_backend__bytecode__V_39_39);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 10780 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_38_38 == bytecode_backend__bytecode__V_40_40);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 5:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__TypeInfo_185_185;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_46_46;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_47_47;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_48_48;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 10819 "bytecode_backend.bytecode.c"
                    {
#line 10821 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(bytecode_backend__bytecode__V_43_43, bytecode_backend__bytecode__V_46_46);
                    }
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 10828 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__TypeInfo_185_185 = (MR_Word) &bytecode_backend__bytecode_scalar_common_1[0];
#line 10830 "bytecode_backend.bytecode.c"
                        {
#line 10832 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = mercury__builtin__unify_2_p_0(bytecode_backend__bytecode__TypeInfo_185_185, ((MR_Box) (bytecode_backend__bytecode__V_44_44)), ((MR_Box) (bytecode_backend__bytecode__V_47_47)));
                        }
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 10837 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_45_45 == bytecode_backend__bytecode__V_48_48);
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 6:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_50_50;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 10864 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_49_49 == bytecode_backend__bytecode__V_50_50);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 7:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_54_54;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_55_55;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_56_56;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 10901 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_51_51 == bytecode_backend__bytecode__V_54_54);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 10907 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_52_52 == bytecode_backend__bytecode__V_55_55);
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 10911 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_53_53 == bytecode_backend__bytecode__V_56_56);
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 8:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_58_58;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 10938 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_57_57 == bytecode_backend__bytecode__V_58_58);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 9:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_60_60;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 10963 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_59_59 == bytecode_backend__bytecode__V_60_60);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 10:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_62_62;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 10988 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_61_61 == bytecode_backend__bytecode__V_62_62);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 11:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_67_67;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_68_68;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 11019 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_65_65 == bytecode_backend__bytecode__V_67_67);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 11023 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_66_66 == bytecode_backend__bytecode__V_68_68);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 12:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_70_70;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 11048 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_69_69 == bytecode_backend__bytecode__V_70_70);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 13:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_74_74;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 11073 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_73_73 == bytecode_backend__bytecode__V_74_74);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 14:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_76_76;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 11098 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_75_75 == bytecode_backend__bytecode__V_76_76);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 15:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_79_79;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_80_80;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 11129 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_77_77 == bytecode_backend__bytecode__V_79_79);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 11133 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_78_78 == bytecode_backend__bytecode__V_80_80);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 16:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_84_84;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_85_85;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_86_86;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11170 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_81_81 == bytecode_backend__bytecode__V_84_84);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11176 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_82_82 == bytecode_backend__bytecode__V_85_85);
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 11180 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_83_83 == bytecode_backend__bytecode__V_86_86);
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 17:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__TypeInfo_182_182;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_90_90;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_91_91;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_92_92;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 17)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11221 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_87_87 == bytecode_backend__bytecode__V_90_90);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11227 "bytecode_backend.bytecode.c"
                        {
#line 11229 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(bytecode_backend__bytecode__V_88_88, bytecode_backend__bytecode__V_91_91);
                        }
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                          {
#line 11236 "bytecode_backend.bytecode.c"
                            bytecode_backend__bytecode__TypeInfo_182_182 = (MR_Word) &bytecode_backend__bytecode_scalar_common_1[2];
#line 11238 "bytecode_backend.bytecode.c"
                            {
#line 11240 "bytecode_backend.bytecode.c"
                              return bytecode_backend__bytecode__succeeded = mercury__builtin__unify_2_p_0(bytecode_backend__bytecode__TypeInfo_182_182, ((MR_Box) (bytecode_backend__bytecode__V_89_89)), ((MR_Box) (bytecode_backend__bytecode__V_92_92)));
                            }
#line 38 "bytecode.m"
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 18:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__TypeInfo_183_183;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_96_96;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_97_97;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_98_98;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 18)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11284 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_93_93 == bytecode_backend__bytecode__V_96_96);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11290 "bytecode_backend.bytecode.c"
                        {
#line 11292 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(bytecode_backend__bytecode__V_94_94, bytecode_backend__bytecode__V_97_97);
                        }
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                          {
#line 11299 "bytecode_backend.bytecode.c"
                            bytecode_backend__bytecode__TypeInfo_183_183 = (MR_Word) &bytecode_backend__bytecode_scalar_common_1[2];
#line 11301 "bytecode_backend.bytecode.c"
                            {
#line 11303 "bytecode_backend.bytecode.c"
                              return bytecode_backend__bytecode__succeeded = mercury__builtin__unify_2_p_0(bytecode_backend__bytecode__TypeInfo_183_183, ((MR_Box) (bytecode_backend__bytecode__V_95_95)), ((MR_Box) (bytecode_backend__bytecode__V_98_98)));
                            }
#line 38 "bytecode.m"
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 19:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__TypeInfo_180_180;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_102_102;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_103_103;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_104_104;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 19)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11347 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_99_99 == bytecode_backend__bytecode__V_102_102);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11353 "bytecode_backend.bytecode.c"
                        {
#line 11355 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(bytecode_backend__bytecode__V_100_100, bytecode_backend__bytecode__V_103_103);
                        }
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                          {
#line 11362 "bytecode_backend.bytecode.c"
                            bytecode_backend__bytecode__TypeInfo_180_180 = (MR_Word) &bytecode_backend__bytecode_scalar_common_1[3];
#line 11364 "bytecode_backend.bytecode.c"
                            {
#line 11366 "bytecode_backend.bytecode.c"
                              return bytecode_backend__bytecode__succeeded = mercury__builtin__unify_2_p_0(bytecode_backend__bytecode__TypeInfo_180_180, ((MR_Box) (bytecode_backend__bytecode__V_101_101)), ((MR_Box) (bytecode_backend__bytecode__V_104_104)));
                            }
#line 38 "bytecode.m"
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 20:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__TypeInfo_181_181;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_108_108;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_109_109;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_110_110;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 20)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11410 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_105_105 == bytecode_backend__bytecode__V_108_108);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11416 "bytecode_backend.bytecode.c"
                        {
#line 11418 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_cons_id_0_0(bytecode_backend__bytecode__V_106_106, bytecode_backend__bytecode__V_109_109);
                        }
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                          {
#line 11425 "bytecode_backend.bytecode.c"
                            bytecode_backend__bytecode__TypeInfo_181_181 = (MR_Word) &bytecode_backend__bytecode_scalar_common_1[3];
#line 11427 "bytecode_backend.bytecode.c"
                            {
#line 11429 "bytecode_backend.bytecode.c"
                              return bytecode_backend__bytecode__succeeded = mercury__builtin__unify_2_p_0(bytecode_backend__bytecode__TypeInfo_181_181, ((MR_Box) (bytecode_backend__bytecode__V_107_107)), ((MR_Box) (bytecode_backend__bytecode__V_110_110)));
                            }
#line 38 "bytecode.m"
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 21:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_115_115;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_116_116;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 21)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11465 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_112_112 == bytecode_backend__bytecode__V_115_115);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 11469 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_113_113 == bytecode_backend__bytecode__V_116_116);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 22:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_121_121;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_122_122;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 22)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11500 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_118_118 == bytecode_backend__bytecode__V_121_121);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 11504 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_119_119 == bytecode_backend__bytecode__V_122_122);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 23:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_128_128;
#line 38 "bytecode.m"
                MR_String bytecode_backend__bytecode__V_129_129;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_130_130;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_131_131;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_132_132;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 23)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 5)));
#line 11553 "bytecode_backend.bytecode.c"
                    {
#line 11555 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(bytecode_backend__bytecode__V_123_123, bytecode_backend__bytecode__V_128_128);
                    }
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11562 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (strcmp(bytecode_backend__bytecode__V_124_124, bytecode_backend__bytecode__V_129_129) == 0);
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                          {
#line 11568 "bytecode_backend.bytecode.c"
                            bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_125_125 == bytecode_backend__bytecode__V_130_130);
#line 38 "bytecode.m"
                            if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                              {
#line 11574 "bytecode_backend.bytecode.c"
                                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_126_126 == bytecode_backend__bytecode__V_131_131);
#line 38 "bytecode.m"
                                if (bytecode_backend__bytecode__succeeded)
#line 11578 "bytecode_backend.bytecode.c"
                                  bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_127_127 == bytecode_backend__bytecode__V_132_132);
#line 38 "bytecode.m"
                              }
#line 38 "bytecode.m"
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 24:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_137_137;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_138_138;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_139_139;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_140_140;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 24)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 11627 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_133_133 == bytecode_backend__bytecode__V_137_137);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11633 "bytecode_backend.bytecode.c"
                        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_134_134 == bytecode_backend__bytecode__V_138_138);
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                          {
#line 11639 "bytecode_backend.bytecode.c"
                            bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_135_135 == bytecode_backend__bytecode__V_139_139);
#line 38 "bytecode.m"
                            if (bytecode_backend__bytecode__succeeded)
#line 11643 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_136_136 == bytecode_backend__bytecode__V_140_140);
#line 38 "bytecode.m"
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 25:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_145_145;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_146_146;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_147_147;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_148_148;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 25)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 4)));
#line 11690 "bytecode_backend.bytecode.c"
                    {
#line 11692 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(bytecode_backend__bytecode__V_141_141, bytecode_backend__bytecode__V_145_145);
                    }
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11699 "bytecode_backend.bytecode.c"
                        {
#line 11701 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(bytecode_backend__bytecode__V_142_142, bytecode_backend__bytecode__V_146_146);
                        }
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                          {
#line 11708 "bytecode_backend.bytecode.c"
                            {
#line 11710 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(bytecode_backend__bytecode__V_143_143, bytecode_backend__bytecode__V_147_147);
                            }
#line 38 "bytecode.m"
                            if (bytecode_backend__bytecode__succeeded)
#line 11715 "bytecode_backend.bytecode.c"
                              bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_144_144 == bytecode_backend__bytecode__V_148_148);
#line 38 "bytecode.m"
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 26:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_152_152;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_153_153;
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_154_154;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 26)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11756 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_149_149 == bytecode_backend__bytecode__V_152_152);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11762 "bytecode_backend.bytecode.c"
                        {
#line 11764 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(bytecode_backend__bytecode__V_150_150, bytecode_backend__bytecode__V_153_153);
                        }
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 11769 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_151_151 == bytecode_backend__bytecode__V_154_154);
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 27:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_158_158;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_159_159;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_160_160;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 27)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 3)));
#line 11808 "bytecode_backend.bytecode.c"
                    {
#line 11810 "bytecode_backend.bytecode.c"
                      bytecode_backend__bytecode__succeeded = backend_libs__builtin_ops____Unify____binary_op_0_0(bytecode_backend__bytecode__V_155_155, bytecode_backend__bytecode__V_158_158);
                    }
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                      {
#line 11817 "bytecode_backend.bytecode.c"
                        {
#line 11819 "bytecode_backend.bytecode.c"
                          bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(bytecode_backend__bytecode__V_156_156, bytecode_backend__bytecode__V_159_159);
                        }
#line 38 "bytecode.m"
                        if (bytecode_backend__bytecode__succeeded)
#line 11824 "bytecode_backend.bytecode.c"
                          {
#line 11826 "bytecode_backend.bytecode.c"
                            return bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(bytecode_backend__bytecode__V_157_157, bytecode_backend__bytecode__V_160_160);
                          }
#line 38 "bytecode.m"
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 28:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_163_163;
#line 38 "bytecode.m"
                MR_Word bytecode_backend__bytecode__V_164_164;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 28)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 2)));
#line 11860 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_161_161 == bytecode_backend__bytecode__V_163_163);
#line 38 "bytecode.m"
                    if (bytecode_backend__bytecode__succeeded)
#line 11864 "bytecode_backend.bytecode.c"
                      {
#line 11866 "bytecode_backend.bytecode.c"
                        return bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode____Unify____byte_arg_0_0(bytecode_backend__bytecode__V_162_162, bytecode_backend__bytecode__V_164_164);
                      }
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
            case (MR_Integer) 29:
#line 38 "bytecode.m"
              {
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_171_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "bytecode.m"
                MR_Integer bytecode_backend__bytecode__V_172_172;

#line 38 "bytecode.m"
                bytecode_backend__bytecode__succeeded = ((((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 29)));
#line 38 "bytecode.m"
                if (bytecode_backend__bytecode__succeeded)
#line 38 "bytecode.m"
                  {
#line 38 "bytecode.m"
                    bytecode_backend__bytecode__V_172_172 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 1)));
#line 11892 "bytecode_backend.bytecode.c"
                    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_171_171 == bytecode_backend__bytecode__V_172_172);
#line 38 "bytecode.m"
                  }
#line 38 "bytecode.m"
              }
#line 38 "bytecode.m"
              break;
#line 38 "bytecode.m"
          }
#line 38 "bytecode.m"
          break;
#line 38 "bytecode.m"
      }
#line 38 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 38 "bytecode.m"
  }
#line 38 "bytecode.m"
}

#line 116 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode____Compare____byte_arg_0_0(
#line 116 "bytecode.m"
  MR_Word * bytecode_backend__bytecode__HeadVar__1_1,
#line 116 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2,
#line 116 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__3_3)
#line 116 "bytecode.m"
{
#line 116 "bytecode.m"
  {
#line 116 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 116 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_22 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;
#line 116 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_23 = (MR_Integer) bytecode_backend__bytecode__HeadVar__3_3;

#line 116 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_22 == bytecode_backend__bytecode__CastY_23);
#line 116 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 11937 "bytecode_backend.bytecode.c"
      *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 0;
#line 116 "bytecode.m"
    else
#line 116 "bytecode.m"
#line 116 "bytecode.m"
      switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) {
#line 116 "bytecode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 116 "bytecode.m"
        case (MR_Integer) 0:
#line 116 "bytecode.m"
          {
#line 116 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));

#line 116 "bytecode.m"
#line 116 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 116 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 116 "bytecode.m"
              case (MR_Integer) 0:
#line 116 "bytecode.m"
                {
#line 116 "bytecode.m"
                  MR_Integer bytecode_backend__bytecode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));

#line 116 "bytecode.m"
                  {
#line 116 "bytecode.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_29_29, bytecode_backend__bytecode__V_5_5);
#line 116 "bytecode.m"
                    return;
                  }
#line 116 "bytecode.m"
                }
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
              case (MR_Integer) 1:
#line 11978 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
              case (MR_Integer) 2:
#line 11984 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
            }
#line 116 "bytecode.m"
          }
#line 116 "bytecode.m"
          break;
#line 116 "bytecode.m"
        case (MR_Integer) 1:
#line 116 "bytecode.m"
          {
#line 116 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));

#line 116 "bytecode.m"
#line 116 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 116 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 116 "bytecode.m"
              case (MR_Integer) 0:
#line 12008 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
              case (MR_Integer) 1:
#line 116 "bytecode.m"
                {
#line 116 "bytecode.m"
                  MR_Integer bytecode_backend__bytecode__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));

#line 116 "bytecode.m"
                  {
#line 116 "bytecode.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_28_28, bytecode_backend__bytecode__V_13_13);
#line 116 "bytecode.m"
                    return;
                  }
#line 116 "bytecode.m"
                }
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
              case (MR_Integer) 2:
#line 12032 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 1;
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
            }
#line 116 "bytecode.m"
          }
#line 116 "bytecode.m"
          break;
#line 116 "bytecode.m"
        case (MR_Integer) 2:
#line 116 "bytecode.m"
          {
#line 116 "bytecode.m"
            MR_Float bytecode_backend__bytecode__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));

#line 116 "bytecode.m"
#line 116 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__3_3)) {
#line 116 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 116 "bytecode.m"
              case (MR_Integer) 0:
#line 12056 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
              case (MR_Integer) 1:
#line 12062 "bytecode_backend.bytecode.c"
                *bytecode_backend__bytecode__HeadVar__1_1 = (MR_Integer) 2;
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
              case (MR_Integer) 2:
#line 116 "bytecode.m"
                {
#line 116 "bytecode.m"
                  MR_Float bytecode_backend__bytecode__V_21_21 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__3_3, (MR_Integer) 0)));

#line 116 "bytecode.m"
                  {
#line 116 "bytecode.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(bytecode_backend__bytecode__HeadVar__1_1, bytecode_backend__bytecode__V_27_27, bytecode_backend__bytecode__V_21_21);
#line 116 "bytecode.m"
                    return;
                  }
#line 116 "bytecode.m"
                }
#line 116 "bytecode.m"
                break;
#line 116 "bytecode.m"
            }
#line 116 "bytecode.m"
          }
#line 116 "bytecode.m"
          break;
#line 116 "bytecode.m"
      }
#line 116 "bytecode.m"
  }
#line 116 "bytecode.m"
}

#line 116 "bytecode.m"
MR_bool MR_CALL 
bytecode_backend__bytecode____Unify____byte_arg_0_0(
#line 116 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1,
#line 116 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__2_2)
#line 116 "bytecode.m"
{
#line 116 "bytecode.m"
  {
#line 116 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 116 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastX_9 = (MR_Integer) bytecode_backend__bytecode__HeadVar__1_1;
#line 116 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__CastY_10 = (MR_Integer) bytecode_backend__bytecode__HeadVar__2_2;

#line 116 "bytecode.m"
    bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__CastX_9 == bytecode_backend__bytecode__CastY_10);
#line 116 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 116 "bytecode.m"
      bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 116 "bytecode.m"
    else
#line 116 "bytecode.m"
#line 116 "bytecode.m"
      switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 116 "bytecode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 116 "bytecode.m"
        case (MR_Integer) 0:
#line 116 "bytecode.m"
          {
#line 116 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_4_4;

#line 116 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 116 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 116 "bytecode.m"
              {
#line 116 "bytecode.m"
                bytecode_backend__bytecode__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 12145 "bytecode_backend.bytecode.c"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_3_3 == bytecode_backend__bytecode__V_4_4);
#line 116 "bytecode.m"
              }
#line 116 "bytecode.m"
          }
#line 116 "bytecode.m"
          break;
#line 116 "bytecode.m"
        case (MR_Integer) 1:
#line 116 "bytecode.m"
          {
#line 116 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__V_6_6;

#line 116 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 116 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 116 "bytecode.m"
              {
#line 116 "bytecode.m"
                bytecode_backend__bytecode__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 12170 "bytecode_backend.bytecode.c"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_5_5 == bytecode_backend__bytecode__V_6_6);
#line 116 "bytecode.m"
              }
#line 116 "bytecode.m"
          }
#line 116 "bytecode.m"
          break;
#line 116 "bytecode.m"
        case (MR_Integer) 2:
#line 116 "bytecode.m"
          {
#line 116 "bytecode.m"
            MR_Float bytecode_backend__bytecode__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "bytecode.m"
            MR_Float bytecode_backend__bytecode__V_8_8;

#line 116 "bytecode.m"
            bytecode_backend__bytecode__succeeded = ((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 116 "bytecode.m"
            if (bytecode_backend__bytecode__succeeded)
#line 116 "bytecode.m"
              {
#line 116 "bytecode.m"
                bytecode_backend__bytecode__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__2_2, (MR_Integer) 0)));
#line 12195 "bytecode_backend.bytecode.c"
                bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__V_7_7 == bytecode_backend__bytecode__V_8_8);
#line 116 "bytecode.m"
              }
#line 116 "bytecode.m"
          }
#line 116 "bytecode.m"
          break;
#line 116 "bytecode.m"
      }
#line 116 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 116 "bytecode.m"
  }
#line 116 "bytecode.m"
}

#line 1194 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_sym_name_3_p_0(
#line 1194 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 1194 "bytecode.m"
{
#line 1196 "bytecode.m"
  {
#line 1196 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1196 "bytecode.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1199 "bytecode.m"
      {
#line 1199 "bytecode.m"
        MR_Word bytecode_backend__bytecode__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 1199 "bytecode.m"
        MR_String bytecode_backend__bytecode__Val_12 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 1200 "bytecode.m"
        {
#line 1200 "bytecode.m"
          bytecode_backend__bytecode__debug_sym_name_3_p_0(bytecode_backend__bytecode__Module_11);
        }
#line 1201 "bytecode.m"
        {
#line 1201 "bytecode.m"
          mercury__io__write_char_3_p_0((MR_Char) 58);
        }
#line 1202 "bytecode.m"
        {
#line 1202 "bytecode.m"
          mercury__io__write_string_3_p_0(bytecode_backend__bytecode__Val_12);
        }
#line 1203 "bytecode.m"
        {
#line 1203 "bytecode.m"
          mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1203 "bytecode.m"
          return;
        }
#line 1199 "bytecode.m"
      }
#line 1196 "bytecode.m"
    else
#line 1196 "bytecode.m"
      {
#line 1196 "bytecode.m"
        MR_String bytecode_backend__bytecode__Val_4 = ((MR_String) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 1197 "bytecode.m"
        {
#line 1197 "bytecode.m"
          mercury__io__write_string_3_p_0(bytecode_backend__bytecode__Val_4);
        }
#line 1198 "bytecode.m"
        {
#line 1198 "bytecode.m"
          mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1198 "bytecode.m"
          return;
        }
#line 1196 "bytecode.m"
      }
#line 1196 "bytecode.m"
  }
#line 1194 "bytecode.m"
}

#line 1188 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_float_3_p_0(
#line 1188 "bytecode.m"
  MR_Float bytecode_backend__bytecode__Val_4)
#line 1188 "bytecode.m"
{
#line 1190 "bytecode.m"
  {
#line 1190 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1191 "bytecode.m"
    {
#line 1191 "bytecode.m"
      mercury__io__write_float_3_p_0(bytecode_backend__bytecode__Val_4);
    }
#line 1192 "bytecode.m"
    {
#line 1192 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1192 "bytecode.m"
      return;
    }
#line 1190 "bytecode.m"
  }
#line 1188 "bytecode.m"
}

#line 1182 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_int_3_p_0(
#line 1182 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Val_4)
#line 1182 "bytecode.m"
{
#line 1184 "bytecode.m"
  {
#line 1184 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1185 "bytecode.m"
    {
#line 1185 "bytecode.m"
      mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Val_4);
    }
#line 1186 "bytecode.m"
    {
#line 1186 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
      return;
    }
#line 1184 "bytecode.m"
  }
#line 1182 "bytecode.m"
}

#line 1176 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_string_3_p_0(
#line 1176 "bytecode.m"
  MR_String bytecode_backend__bytecode__Val_4)
#line 1176 "bytecode.m"
{
#line 1178 "bytecode.m"
  {
#line 1178 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1179 "bytecode.m"
    {
#line 1179 "bytecode.m"
      mercury__io__write_string_3_p_0(bytecode_backend__bytecode__Val_4);
    }
#line 1180 "bytecode.m"
    {
#line 1180 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
      return;
    }
#line 1178 "bytecode.m"
  }
#line 1176 "bytecode.m"
}

#line 1166 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_cstring_3_p_0(
#line 1166 "bytecode.m"
  MR_String bytecode_backend__bytecode__Str_4)
#line 1166 "bytecode.m"
{
#line 1168 "bytecode.m"
  {
#line 1168 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1169 "bytecode.m"
    {
#line 1169 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 34);
    }
#line 1170 "bytecode.m"
    {
#line 1170 "bytecode.m"
      backend_libs__c_util__output_quoted_string_3_p_0(bytecode_backend__bytecode__Str_4);
    }
#line 1171 "bytecode.m"
    {
#line 1171 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 34);
    }
#line 1174 "bytecode.m"
    {
#line 1174 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1174 "bytecode.m"
      return;
    }
#line 1168 "bytecode.m"
  }
#line 1166 "bytecode.m"
}

#line 912 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_unop_3_p_0(
#line 912 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Unop_4)
#line 912 "bytecode.m"
{
#line 914 "bytecode.m"
  {
#line 914 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 914 "bytecode.m"
    MR_String bytecode_backend__bytecode__Debug_6 = ((&bytecode_backend__bytecode_vector_common_6[8 + bytecode_backend__bytecode__Unop_4]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;

#line 1179 "bytecode.m"
    {
#line 1179 "bytecode.m"
      mercury__io__write_string_3_p_0(bytecode_backend__bytecode__Debug_6);
    }
#line 1180 "bytecode.m"
    {
#line 1180 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
      return;
    }
#line 914 "bytecode.m"
  }
#line 912 "bytecode.m"
}

#line 906 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_unop_3_p_0(
#line 906 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Unop_4)
#line 906 "bytecode.m"
{
#line 908 "bytecode.m"
  {
#line 908 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 908 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Code_6 = ((&bytecode_backend__bytecode_vector_common_5[8 + bytecode_backend__bytecode__Unop_4]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;

#line 910 "bytecode.m"
    {
#line 910 "bytecode.m"
      backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__Code_6);
#line 910 "bytecode.m"
      return;
    }
#line 908 "bytecode.m"
  }
#line 906 "bytecode.m"
}

#line 898 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_binop_3_p_0(
#line 898 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Binop_4)
#line 898 "bytecode.m"
{
#line 900 "bytecode.m"
  {
#line 900 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 900 "bytecode.m"
    MR_String bytecode_backend__bytecode__Debug_6;

#line 1082 "bytecode.m"
#line 1082 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__Binop_4)) {
#line 1082 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1082 "bytecode.m"
      case (MR_Integer) 0:
#line 1082 "bytecode.m"
#line 1082 "bytecode.m"
        switch (MR_unmkbody(bytecode_backend__bytecode__Binop_4)) {
#line 1082 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1082 "bytecode.m"
          case (MR_Integer) 0:
#line 1082 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "+";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 1:
#line 1083 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "-";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 2:
#line 1084 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "*";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 3:
#line 1085 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "/";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 4:
#line 1086 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "mod";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 5:
#line 1087 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "<<";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 6:
#line 1088 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) ">>";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 7:
#line 1089 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "&";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 8:
#line 1090 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "|";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 9:
#line 1091 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "^";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 10:
#line 1092 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "and";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 11:
#line 1093 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "or";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 12:
#line 1094 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "eq";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 13:
#line 1095 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "ne";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 14:
#line 1117 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "body";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 15:
#line 1126 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "string_unsafe_index_code_unit";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 16:
#line 1097 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "str_eq";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 17:
#line 1098 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "str_ne";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 18:
#line 1099 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "str_lt";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 19:
#line 1100 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "str_gt";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 20:
#line 1101 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "str_le";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 21:
#line 1102 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "str_ge";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 22:
#line 1121 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "strcmp";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 23:
#line 1103 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "<";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 24:
#line 1104 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) ">";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 25:
#line 1105 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "<=";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 26:
#line 1106 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) ">=";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 27:
#line 1118 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "unsigned_le";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 28:
#line 1107 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_plus";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 29:
#line 1108 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_minus";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 30:
#line 1109 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_times";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 31:
#line 1110 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_divide";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 32:
#line 1111 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_eq";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 33:
#line 1112 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_ne";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 34:
#line 1113 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_lt";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 35:
#line 1114 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_gt";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 36:
#line 1115 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_le";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 37:
#line 1116 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_ge";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 38:
#line 1122 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_word_bits";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 39:
#line 1123 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "float_from_dword";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 40:
#line 1124 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "pointer_equal_conservative";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 41:
#line 1119 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "compound_eq";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
          case (MR_Integer) 42:
#line 1120 "bytecode.m"
            bytecode_backend__bytecode__Debug_6 = (MR_String) "compound_lt";
#line 1082 "bytecode.m"
            break;
#line 1082 "bytecode.m"
        }
#line 1082 "bytecode.m"
        break;
#line 1082 "bytecode.m"
      case (MR_Integer) 1:
#line 1096 "bytecode.m"
        bytecode_backend__bytecode__Debug_6 = (MR_String) "array_index";
#line 1082 "bytecode.m"
        break;
#line 1082 "bytecode.m"
      case (MR_Integer) 2:
#line 1125 "bytecode.m"
        bytecode_backend__bytecode__Debug_6 = (MR_String) "offset_str_eq";
#line 1082 "bytecode.m"
        break;
#line 1082 "bytecode.m"
    }
#line 1179 "bytecode.m"
    {
#line 1179 "bytecode.m"
      mercury__io__write_string_3_p_0(bytecode_backend__bytecode__Debug_6);
    }
#line 1180 "bytecode.m"
    {
#line 1180 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
      return;
    }
#line 900 "bytecode.m"
  }
#line 898 "bytecode.m"
}

#line 892 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_binop_3_p_0(
#line 892 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Binop_4)
#line 892 "bytecode.m"
{
#line 894 "bytecode.m"
  {
#line 894 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 894 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Code_6;

#line 1034 "bytecode.m"
#line 1034 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__Binop_4)) {
#line 1034 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "bytecode.m"
      case (MR_Integer) 0:
#line 1034 "bytecode.m"
#line 1034 "bytecode.m"
        switch (MR_unmkbody(bytecode_backend__bytecode__Binop_4)) {
#line 1034 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1034 "bytecode.m"
          case (MR_Integer) 0:
#line 1034 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 0;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 1:
#line 1035 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 1;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 2:
#line 1036 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 2;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 3:
#line 1037 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 3;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 4:
#line 1038 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 4;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 5:
#line 1039 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 5;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 6:
#line 1040 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 6;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 7:
#line 1041 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 7;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 8:
#line 1042 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 8;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 9:
#line 1043 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 9;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 10:
#line 1044 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 10;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 11:
#line 1045 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 11;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 12:
#line 1046 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 12;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 13:
#line 1047 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 13;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 14:
#line 1069 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 35;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 15:
#line 1078 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 44;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 16:
#line 1049 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 15;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 17:
#line 1050 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 16;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 18:
#line 1051 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 17;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 19:
#line 1052 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 18;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 20:
#line 1053 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 19;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 21:
#line 1054 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 20;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 22:
#line 1073 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 39;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 23:
#line 1055 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 21;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 24:
#line 1056 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 22;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 25:
#line 1057 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 23;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 26:
#line 1058 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 24;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 27:
#line 1070 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 36;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 28:
#line 1059 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 25;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 29:
#line 1060 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 26;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 30:
#line 1061 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 27;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 31:
#line 1062 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 28;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 32:
#line 1063 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 29;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 33:
#line 1064 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 30;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 34:
#line 1065 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 31;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 35:
#line 1066 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 32;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 36:
#line 1067 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 33;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 37:
#line 1068 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 34;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 38:
#line 1074 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 40;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 39:
#line 1075 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 41;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 40:
#line 1076 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 42;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 41:
#line 1071 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 37;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
          case (MR_Integer) 42:
#line 1072 "bytecode.m"
            bytecode_backend__bytecode__Code_6 = (MR_Integer) 38;
#line 1034 "bytecode.m"
            break;
#line 1034 "bytecode.m"
        }
#line 1034 "bytecode.m"
        break;
#line 1034 "bytecode.m"
      case (MR_Integer) 1:
#line 1048 "bytecode.m"
        bytecode_backend__bytecode__Code_6 = (MR_Integer) 14;
#line 1034 "bytecode.m"
        break;
#line 1034 "bytecode.m"
      case (MR_Integer) 2:
#line 1077 "bytecode.m"
        bytecode_backend__bytecode__Code_6 = (MR_Integer) 43;
#line 1034 "bytecode.m"
        break;
#line 1034 "bytecode.m"
    }
#line 896 "bytecode.m"
    {
#line 896 "bytecode.m"
      backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__Code_6);
#line 896 "bytecode.m"
      return;
    }
#line 894 "bytecode.m"
  }
#line 892 "bytecode.m"
}

#line 871 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_tag_3_p_0(
#line 871 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 871 "bytecode.m"
{
#line 873 "bytecode.m"
  {
#line 873 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 873 "bytecode.m"
#line 873 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 873 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 873 "bytecode.m"
      case (MR_Integer) 0:
#line 887 "bytecode.m"
        {
#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "no_tag");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
            return;
          }
#line 887 "bytecode.m"
        }
#line 873 "bytecode.m"
        break;
#line 873 "bytecode.m"
      case (MR_Integer) 1:
#line 873 "bytecode.m"
        {
#line 873 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Primary_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 874 "bytecode.m"
          {
#line 874 "bytecode.m"
            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "unshared_tag");
          }
#line 875 "bytecode.m"
          {
#line 875 "bytecode.m"
            bytecode_backend__bytecode__debug_int_3_p_0(bytecode_backend__bytecode__Primary_4);
#line 875 "bytecode.m"
            return;
          }
#line 873 "bytecode.m"
        }
#line 873 "bytecode.m"
        break;
#line 873 "bytecode.m"
      case (MR_Integer) 2:
#line 876 "bytecode.m"
        {
#line 876 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Primary_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 876 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Secondary_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "shared_remote_tag");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
#line 1185 "bytecode.m"
          {
#line 1185 "bytecode.m"
            mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Primary_11);
          }
#line 1186 "bytecode.m"
          {
#line 1186 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
#line 879 "bytecode.m"
          {
#line 879 "bytecode.m"
            bytecode_backend__bytecode__debug_int_3_p_0(bytecode_backend__bytecode__Secondary_12);
#line 879 "bytecode.m"
            return;
          }
#line 876 "bytecode.m"
        }
#line 873 "bytecode.m"
        break;
#line 873 "bytecode.m"
      case (MR_Integer) 3:
#line 873 "bytecode.m"
#line 873 "bytecode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 873 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 873 "bytecode.m"
          case (MR_Integer) 0:
#line 880 "bytecode.m"
            {
#line 880 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Primary_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 880 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Secondary_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 1179 "bytecode.m"
              {
#line 1179 "bytecode.m"
                mercury__io__write_string_3_p_0((MR_String) "shared_local_tag");
              }
#line 1180 "bytecode.m"
              {
#line 1180 "bytecode.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
#line 1185 "bytecode.m"
              {
#line 1185 "bytecode.m"
                mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Primary_20);
              }
#line 1186 "bytecode.m"
              {
#line 1186 "bytecode.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
#line 1185 "bytecode.m"
              {
#line 1185 "bytecode.m"
                mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Secondary_21);
              }
#line 1186 "bytecode.m"
              {
#line 1186 "bytecode.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
                return;
              }
#line 880 "bytecode.m"
            }
#line 873 "bytecode.m"
            break;
#line 873 "bytecode.m"
          case (MR_Integer) 1:
#line 884 "bytecode.m"
            {
#line 884 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Enum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 1179 "bytecode.m"
              {
#line 1179 "bytecode.m"
                mercury__io__write_string_3_p_0((MR_String) "enum_tag");
              }
#line 1180 "bytecode.m"
              {
#line 1180 "bytecode.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
              }
#line 1185 "bytecode.m"
              {
#line 1185 "bytecode.m"
                mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Enum_29);
              }
#line 1186 "bytecode.m"
              {
#line 1186 "bytecode.m"
                mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
                return;
              }
#line 884 "bytecode.m"
            }
#line 873 "bytecode.m"
            break;
#line 873 "bytecode.m"
        }
#line 873 "bytecode.m"
        break;
#line 873 "bytecode.m"
    }
#line 873 "bytecode.m"
  }
#line 871 "bytecode.m"
}

#line 852 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_tag_3_p_0(
#line 852 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 852 "bytecode.m"
{
#line 854 "bytecode.m"
  {
#line 854 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 854 "bytecode.m"
#line 854 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 854 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 854 "bytecode.m"
      case (MR_Integer) 0:
#line 868 "bytecode.m"
        {
#line 869 "bytecode.m"
          {
#line 869 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 4);
#line 869 "bytecode.m"
            return;
          }
#line 868 "bytecode.m"
        }
#line 854 "bytecode.m"
        break;
#line 854 "bytecode.m"
      case (MR_Integer) 1:
#line 854 "bytecode.m"
        {
#line 854 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Primary_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 855 "bytecode.m"
          {
#line 855 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
          }
#line 856 "bytecode.m"
          {
#line 856 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__Primary_4);
#line 856 "bytecode.m"
            return;
          }
#line 854 "bytecode.m"
        }
#line 854 "bytecode.m"
        break;
#line 854 "bytecode.m"
      case (MR_Integer) 2:
#line 857 "bytecode.m"
        {
#line 857 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Primary_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 857 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Secondary_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 858 "bytecode.m"
          {
#line 858 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
          }
#line 859 "bytecode.m"
          {
#line 859 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__Primary_11);
          }
#line 860 "bytecode.m"
          {
#line 860 "bytecode.m"
            backend_libs__bytecode_data__output_int_3_p_0(bytecode_backend__bytecode__Secondary_12);
#line 860 "bytecode.m"
            return;
          }
#line 857 "bytecode.m"
        }
#line 854 "bytecode.m"
        break;
#line 854 "bytecode.m"
      case (MR_Integer) 3:
#line 854 "bytecode.m"
#line 854 "bytecode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 854 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 854 "bytecode.m"
          case (MR_Integer) 0:
#line 861 "bytecode.m"
            {
#line 861 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Primary_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 861 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Secondary_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 862 "bytecode.m"
              {
#line 862 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
              }
#line 863 "bytecode.m"
              {
#line 863 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__Primary_20);
              }
#line 864 "bytecode.m"
              {
#line 864 "bytecode.m"
                backend_libs__bytecode_data__output_int_3_p_0(bytecode_backend__bytecode__Secondary_21);
#line 864 "bytecode.m"
                return;
              }
#line 861 "bytecode.m"
            }
#line 854 "bytecode.m"
            break;
#line 854 "bytecode.m"
          case (MR_Integer) 1:
#line 865 "bytecode.m"
            {
#line 865 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Enum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 866 "bytecode.m"
              {
#line 866 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 3);
              }
#line 867 "bytecode.m"
              {
#line 867 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__Enum_29);
#line 867 "bytecode.m"
                return;
              }
#line 865 "bytecode.m"
            }
#line 854 "bytecode.m"
            break;
#line 854 "bytecode.m"
        }
#line 854 "bytecode.m"
        break;
#line 854 "bytecode.m"
    }
#line 854 "bytecode.m"
  }
#line 852 "bytecode.m"
}

#line 803 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_cons_id_3_p_0(
#line 803 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 803 "bytecode.m"
{
#line 805 "bytecode.m"
  {
#line 805 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 805 "bytecode.m"
#line 805 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 805 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 805 "bytecode.m"
      case (MR_Integer) 0:
#line 805 "bytecode.m"
#line 805 "bytecode.m"
        switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__1_1)) {
#line 805 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 805 "bytecode.m"
          case (MR_Integer) 0:
#line 845 "bytecode.m"
            {
#line 846 "bytecode.m"
              {
#line 846 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "type_info_cell_constructor");
#line 846 "bytecode.m"
                return;
              }
#line 845 "bytecode.m"
            }
#line 805 "bytecode.m"
            break;
#line 805 "bytecode.m"
          case (MR_Integer) 1:
#line 847 "bytecode.m"
            {
#line 848 "bytecode.m"
              {
#line 848 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "typeclass_info_cell_constructor");
#line 848 "bytecode.m"
                return;
              }
#line 847 "bytecode.m"
            }
#line 805 "bytecode.m"
            break;
#line 805 "bytecode.m"
        }
#line 805 "bytecode.m"
        break;
#line 805 "bytecode.m"
      case (MR_Integer) 1:
#line 805 "bytecode.m"
        {
#line 805 "bytecode.m"
          MR_Word bytecode_backend__bytecode__ModuleId_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 805 "bytecode.m"
          MR_String bytecode_backend__bytecode__Functor_5 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 805 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 805 "bytecode.m"
          MR_Word bytecode_backend__bytecode__Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 806 "bytecode.m"
          {
#line 806 "bytecode.m"
            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "functor");
          }
#line 807 "bytecode.m"
          {
#line 807 "bytecode.m"
            bytecode_backend__bytecode__debug_sym_name_3_p_0(bytecode_backend__bytecode__ModuleId_4);
          }
#line 808 "bytecode.m"
          {
#line 808 "bytecode.m"
            bytecode_backend__bytecode__debug_string_3_p_0(bytecode_backend__bytecode__Functor_5);
          }
#line 809 "bytecode.m"
          {
#line 809 "bytecode.m"
            bytecode_backend__bytecode__debug_int_3_p_0(bytecode_backend__bytecode__Arity_6);
          }
#line 810 "bytecode.m"
          {
#line 810 "bytecode.m"
            bytecode_backend__bytecode__debug_tag_3_p_0(bytecode_backend__bytecode__Tag_7);
#line 810 "bytecode.m"
            return;
          }
#line 805 "bytecode.m"
        }
#line 805 "bytecode.m"
        break;
#line 805 "bytecode.m"
      case (MR_Integer) 2:
#line 811 "bytecode.m"
        {
#line 811 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__IntVal_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 812 "bytecode.m"
          {
#line 812 "bytecode.m"
            bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "int_const");
          }
#line 813 "bytecode.m"
          {
#line 813 "bytecode.m"
            bytecode_backend__bytecode__debug_int_3_p_0(bytecode_backend__bytecode__IntVal_17);
#line 813 "bytecode.m"
            return;
          }
#line 811 "bytecode.m"
        }
#line 805 "bytecode.m"
        break;
#line 805 "bytecode.m"
      case (MR_Integer) 3:
#line 805 "bytecode.m"
#line 805 "bytecode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 805 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 805 "bytecode.m"
          case (MR_Integer) 0:
#line 814 "bytecode.m"
            {
#line 814 "bytecode.m"
              MR_String bytecode_backend__bytecode__StringVal_24 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 815 "bytecode.m"
              {
#line 815 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "string_const");
              }
#line 816 "bytecode.m"
              {
#line 816 "bytecode.m"
                bytecode_backend__bytecode__debug_cstring_3_p_0(bytecode_backend__bytecode__StringVal_24);
#line 816 "bytecode.m"
                return;
              }
#line 814 "bytecode.m"
            }
#line 805 "bytecode.m"
            break;
#line 805 "bytecode.m"
          case (MR_Integer) 1:
#line 817 "bytecode.m"
            {
#line 817 "bytecode.m"
              MR_Float bytecode_backend__bytecode__FloatVal_31 = MR_unbox_float((MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 818 "bytecode.m"
              {
#line 818 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "float_const");
              }
#line 819 "bytecode.m"
              {
#line 819 "bytecode.m"
                bytecode_backend__bytecode__debug_float_3_p_0(bytecode_backend__bytecode__FloatVal_31);
#line 819 "bytecode.m"
                return;
              }
#line 817 "bytecode.m"
            }
#line 805 "bytecode.m"
            break;
#line 805 "bytecode.m"
          case (MR_Integer) 2:
#line 841 "bytecode.m"
            {
#line 841 "bytecode.m"
              MR_Char bytecode_backend__bytecode__Char_82 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 841 "bytecode.m"
              MR_String bytecode_backend__bytecode__String_84;
#line 841 "bytecode.m"
              MR_Word bytecode_backend__bytecode__V_89_89;

#line 842 "bytecode.m"
              {
#line 842 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "char_const");
              }
#line 843 "bytecode.m"
              {
#line 843 "bytecode.m"
                bytecode_backend__bytecode__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "bytecode.m"
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__V_89_89, 0) = ((MR_Box) (MR_Word) (bytecode_backend__bytecode__Char_82));
#line 843 "bytecode.m"
                MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "bytecode.m"
              }
#line 843 "bytecode.m"
              {
#line 843 "bytecode.m"
                mercury__string__from_char_list_2_p_0(bytecode_backend__bytecode__V_89_89, &bytecode_backend__bytecode__String_84);
              }
#line 844 "bytecode.m"
              {
#line 844 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0(bytecode_backend__bytecode__String_84);
#line 844 "bytecode.m"
                return;
              }
#line 841 "bytecode.m"
            }
#line 805 "bytecode.m"
            break;
#line 805 "bytecode.m"
          case (MR_Integer) 3:
#line 820 "bytecode.m"
            {
#line 820 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ModuleId_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 820 "bytecode.m"
              MR_String bytecode_backend__bytecode__PredId_39 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 820 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 820 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__IsFunc_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 820 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));

#line 821 "bytecode.m"
              {
#line 821 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "pred_const");
              }
#line 822 "bytecode.m"
              {
#line 822 "bytecode.m"
                bytecode_backend__bytecode__debug_module_id_3_p_0(bytecode_backend__bytecode__ModuleId_38);
              }
#line 823 "bytecode.m"
              {
#line 823 "bytecode.m"
                bytecode_backend__bytecode__debug_pred_id_3_p_0(bytecode_backend__bytecode__PredId_39);
              }
#line 824 "bytecode.m"
              {
#line 824 "bytecode.m"
                bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__Arity_40);
              }
#line 825 "bytecode.m"
              {
#line 825 "bytecode.m"
                bytecode_backend__bytecode__debug_is_func_3_p_0(bytecode_backend__bytecode__IsFunc_41);
              }
#line 826 "bytecode.m"
              {
#line 826 "bytecode.m"
                bytecode_backend__bytecode__debug_proc_id_3_p_0(bytecode_backend__bytecode__ProcId_42);
#line 826 "bytecode.m"
                return;
              }
#line 820 "bytecode.m"
            }
#line 805 "bytecode.m"
            break;
#line 805 "bytecode.m"
          case (MR_Integer) 4:
#line 827 "bytecode.m"
            {
#line 827 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ModuleId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 827 "bytecode.m"
              MR_String bytecode_backend__bytecode__TypeName_54 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 827 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__TypeArity_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 828 "bytecode.m"
              {
#line 828 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "type_ctor_info_const");
              }
#line 829 "bytecode.m"
              {
#line 829 "bytecode.m"
                bytecode_backend__bytecode__debug_module_id_3_p_0(bytecode_backend__bytecode__ModuleId_53);
              }
#line 830 "bytecode.m"
              {
#line 830 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0(bytecode_backend__bytecode__TypeName_54);
              }
#line 831 "bytecode.m"
              {
#line 831 "bytecode.m"
                bytecode_backend__bytecode__debug_int_3_p_0(bytecode_backend__bytecode__TypeArity_55);
#line 831 "bytecode.m"
                return;
              }
#line 827 "bytecode.m"
            }
#line 805 "bytecode.m"
            break;
#line 805 "bytecode.m"
          case (MR_Integer) 5:
#line 833 "bytecode.m"
            {
#line 833 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ModuleId_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 833 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ClassName_65;
#line 833 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__ClassArity_66;
#line 833 "bytecode.m"
              MR_String bytecode_backend__bytecode__Instance_67 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 833 "bytecode.m"
              MR_Word bytecode_backend__bytecode__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 833 "bytecode.m"
              bytecode_backend__bytecode__ClassName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_71_71, (MR_Integer) 0)));
#line 833 "bytecode.m"
              bytecode_backend__bytecode__ClassArity_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_71_71, (MR_Integer) 1)));
#line 834 "bytecode.m"
              {
#line 834 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "base_typeclass_info_const");
              }
#line 835 "bytecode.m"
              {
#line 835 "bytecode.m"
                bytecode_backend__bytecode__debug_module_id_3_p_0(bytecode_backend__bytecode__ModuleId_64);
              }
#line 836 "bytecode.m"
              {
#line 836 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "class_id");
              }
#line 837 "bytecode.m"
              {
#line 837 "bytecode.m"
                bytecode_backend__bytecode__debug_sym_name_3_p_0(bytecode_backend__bytecode__ClassName_65);
              }
#line 838 "bytecode.m"
              {
#line 838 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0((MR_String) "/");
              }
#line 839 "bytecode.m"
              {
#line 839 "bytecode.m"
                bytecode_backend__bytecode__debug_int_3_p_0(bytecode_backend__bytecode__ClassArity_66);
              }
#line 840 "bytecode.m"
              {
#line 840 "bytecode.m"
                bytecode_backend__bytecode__debug_string_3_p_0(bytecode_backend__bytecode__Instance_67);
#line 840 "bytecode.m"
                return;
              }
#line 833 "bytecode.m"
            }
#line 805 "bytecode.m"
            break;
#line 805 "bytecode.m"
        }
#line 805 "bytecode.m"
        break;
#line 805 "bytecode.m"
    }
#line 805 "bytecode.m"
  }
#line 803 "bytecode.m"
}

#line 755 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_cons_id_3_p_0(
#line 755 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 755 "bytecode.m"
{
#line 757 "bytecode.m"
  {
#line 757 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 757 "bytecode.m"
#line 757 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 757 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 757 "bytecode.m"
      case (MR_Integer) 0:
#line 757 "bytecode.m"
#line 757 "bytecode.m"
        switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__1_1)) {
#line 757 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 757 "bytecode.m"
          case (MR_Integer) 0:
#line 794 "bytecode.m"
            {
#line 795 "bytecode.m"
              {
#line 795 "bytecode.m"
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode", (MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/3", (MR_String) "bytecode for type_info_cell_constructor not yet implemented.");
#line 795 "bytecode.m"
                return;
              }
#line 794 "bytecode.m"
            }
#line 757 "bytecode.m"
            break;
#line 757 "bytecode.m"
          case (MR_Integer) 1:
#line 798 "bytecode.m"
            {
#line 799 "bytecode.m"
              {
#line 799 "bytecode.m"
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode", (MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/3", (MR_String) "bytecode for typeclass_info_cell_constructor not yet implemented.");
#line 799 "bytecode.m"
                return;
              }
#line 798 "bytecode.m"
            }
#line 757 "bytecode.m"
            break;
#line 757 "bytecode.m"
        }
#line 757 "bytecode.m"
        break;
#line 757 "bytecode.m"
      case (MR_Integer) 1:
#line 757 "bytecode.m"
        {
#line 757 "bytecode.m"
          MR_Word bytecode_backend__bytecode__ModuleId_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 757 "bytecode.m"
          MR_String bytecode_backend__bytecode__Functor_5 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 757 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 757 "bytecode.m"
          MR_Word bytecode_backend__bytecode__Tag_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 758 "bytecode.m"
          {
#line 758 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
          }
#line 759 "bytecode.m"
          {
#line 759 "bytecode.m"
            bytecode_backend__bytecode__output_module_id_3_p_0(bytecode_backend__bytecode__ModuleId_4);
          }
#line 760 "bytecode.m"
          {
#line 760 "bytecode.m"
            backend_libs__bytecode_data__output_string_3_p_0(bytecode_backend__bytecode__Functor_5);
          }
#line 761 "bytecode.m"
          {
#line 761 "bytecode.m"
            backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__Arity_6);
          }
#line 762 "bytecode.m"
          {
#line 762 "bytecode.m"
            bytecode_backend__bytecode__output_tag_3_p_0(bytecode_backend__bytecode__Tag_7);
#line 762 "bytecode.m"
            return;
          }
#line 757 "bytecode.m"
        }
#line 757 "bytecode.m"
        break;
#line 757 "bytecode.m"
      case (MR_Integer) 2:
#line 763 "bytecode.m"
        {
#line 763 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__IntVal_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 764 "bytecode.m"
          {
#line 764 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
          }
#line 765 "bytecode.m"
          {
#line 765 "bytecode.m"
            backend_libs__bytecode_data__output_int_3_p_0(bytecode_backend__bytecode__IntVal_17);
#line 765 "bytecode.m"
            return;
          }
#line 763 "bytecode.m"
        }
#line 757 "bytecode.m"
        break;
#line 757 "bytecode.m"
      case (MR_Integer) 3:
#line 757 "bytecode.m"
#line 757 "bytecode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 757 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 757 "bytecode.m"
          case (MR_Integer) 0:
#line 766 "bytecode.m"
            {
#line 766 "bytecode.m"
              MR_String bytecode_backend__bytecode__StringVal_24 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 767 "bytecode.m"
              {
#line 767 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
              }
#line 768 "bytecode.m"
              {
#line 768 "bytecode.m"
                backend_libs__bytecode_data__output_string_3_p_0(bytecode_backend__bytecode__StringVal_24);
#line 768 "bytecode.m"
                return;
              }
#line 766 "bytecode.m"
            }
#line 757 "bytecode.m"
            break;
#line 757 "bytecode.m"
          case (MR_Integer) 1:
#line 769 "bytecode.m"
            {
#line 769 "bytecode.m"
              MR_Float bytecode_backend__bytecode__FloatVal_31 = MR_unbox_float((MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 770 "bytecode.m"
              {
#line 770 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 3);
              }
#line 771 "bytecode.m"
              {
#line 771 "bytecode.m"
                backend_libs__bytecode_data__output_float_3_p_0(bytecode_backend__bytecode__FloatVal_31);
#line 771 "bytecode.m"
                return;
              }
#line 769 "bytecode.m"
            }
#line 757 "bytecode.m"
            break;
#line 757 "bytecode.m"
          case (MR_Integer) 2:
#line 786 "bytecode.m"
            {
#line 786 "bytecode.m"
              MR_Char bytecode_backend__bytecode__Char_64 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 786 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Byte_66;

#line 787 "bytecode.m"
              {
#line 787 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 7);
              }
#line 788 "bytecode.m"
              {
#line 788 "bytecode.m"
                mercury__char__to_int_2_p_0(bytecode_backend__bytecode__Char_64, &bytecode_backend__bytecode__Byte_66);
              }
#line 789 "bytecode.m"
              {
#line 789 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__Byte_66);
#line 789 "bytecode.m"
                return;
              }
#line 786 "bytecode.m"
            }
#line 757 "bytecode.m"
            break;
#line 757 "bytecode.m"
          case (MR_Integer) 3:
#line 773 "bytecode.m"
            {
#line 773 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ModuleId_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 773 "bytecode.m"
              MR_String bytecode_backend__bytecode__PredId_39 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 773 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Arity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 773 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__IsFunc_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 773 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__ProcId_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));

#line 774 "bytecode.m"
              {
#line 774 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 4);
              }
#line 775 "bytecode.m"
              {
#line 775 "bytecode.m"
                bytecode_backend__bytecode__output_module_id_3_p_0(bytecode_backend__bytecode__ModuleId_38);
              }
#line 776 "bytecode.m"
              {
#line 776 "bytecode.m"
                bytecode_backend__bytecode__output_pred_id_3_p_0(bytecode_backend__bytecode__PredId_39);
              }
#line 777 "bytecode.m"
              {
#line 777 "bytecode.m"
                bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__Arity_40);
              }
#line 778 "bytecode.m"
              {
#line 778 "bytecode.m"
                bytecode_backend__bytecode__output_is_func_3_p_0(bytecode_backend__bytecode__IsFunc_41);
              }
#line 779 "bytecode.m"
              {
#line 779 "bytecode.m"
                bytecode_backend__bytecode__output_proc_id_3_p_0(bytecode_backend__bytecode__ProcId_42);
#line 779 "bytecode.m"
                return;
              }
#line 773 "bytecode.m"
            }
#line 757 "bytecode.m"
            break;
#line 757 "bytecode.m"
          case (MR_Integer) 4:
#line 781 "bytecode.m"
            {
#line 781 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ModuleId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 781 "bytecode.m"
              MR_String bytecode_backend__bytecode__TypeName_54 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 781 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__TypeArity_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 782 "bytecode.m"
              {
#line 782 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 6);
              }
#line 783 "bytecode.m"
              {
#line 783 "bytecode.m"
                bytecode_backend__bytecode__output_module_id_3_p_0(bytecode_backend__bytecode__ModuleId_53);
              }
#line 784 "bytecode.m"
              {
#line 784 "bytecode.m"
                backend_libs__bytecode_data__output_string_3_p_0(bytecode_backend__bytecode__TypeName_54);
              }
#line 785 "bytecode.m"
              {
#line 785 "bytecode.m"
                backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__TypeArity_55);
#line 785 "bytecode.m"
                return;
              }
#line 781 "bytecode.m"
            }
#line 757 "bytecode.m"
            break;
#line 757 "bytecode.m"
          case (MR_Integer) 5:
#line 791 "bytecode.m"
            {
#line 792 "bytecode.m"
              {
#line 792 "bytecode.m"
                mercury__require__sorry_3_p_0((MR_String) "bytecode_backend.bytecode", (MR_String) "predicate \140bytecode_backend.bytecode.output_cons_id\'/3", (MR_String) "bytecode for typeclass not yet implemented.");
#line 792 "bytecode.m"
                return;
              }
#line 791 "bytecode.m"
            }
#line 757 "bytecode.m"
            break;
#line 757 "bytecode.m"
        }
#line 757 "bytecode.m"
        break;
#line 757 "bytecode.m"
    }
#line 757 "bytecode.m"
  }
#line 755 "bytecode.m"
}

#line 748 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_label_id_3_p_0(
#line 748 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__LabelId_4)
#line 748 "bytecode.m"
{
#line 1184 "bytecode.m"
  {
#line 1184 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1185 "bytecode.m"
    {
#line 1185 "bytecode.m"
      mercury__io__write_int_3_p_0(bytecode_backend__bytecode__LabelId_4);
    }
#line 1186 "bytecode.m"
    {
#line 1186 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
      return;
    }
#line 1184 "bytecode.m"
  }
#line 748 "bytecode.m"
}

#line 743 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_label_id_3_p_0(
#line 743 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__LabelId_4)
#line 743 "bytecode.m"
{
#line 746 "bytecode.m"
  {
#line 746 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 746 "bytecode.m"
    {
#line 746 "bytecode.m"
      backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__LabelId_4);
#line 746 "bytecode.m"
      return;
    }
#line 746 "bytecode.m"
  }
#line 743 "bytecode.m"
}

#line 736 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_proc_id_3_p_0(
#line 736 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__ProcId_4)
#line 736 "bytecode.m"
{
#line 1184 "bytecode.m"
  {
#line 1184 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1185 "bytecode.m"
    {
#line 1185 "bytecode.m"
      mercury__io__write_int_3_p_0(bytecode_backend__bytecode__ProcId_4);
    }
#line 1186 "bytecode.m"
    {
#line 1186 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
      return;
    }
#line 1184 "bytecode.m"
  }
#line 736 "bytecode.m"
}

#line 731 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_proc_id_3_p_0(
#line 731 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__ProcId_4)
#line 731 "bytecode.m"
{
#line 734 "bytecode.m"
  {
#line 734 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 734 "bytecode.m"
    {
#line 734 "bytecode.m"
      backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__ProcId_4);
#line 734 "bytecode.m"
      return;
    }
#line 734 "bytecode.m"
  }
#line 731 "bytecode.m"
}

#line 724 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_pred_id_3_p_0(
#line 724 "bytecode.m"
  MR_String bytecode_backend__bytecode__PredId_4)
#line 724 "bytecode.m"
{
#line 1178 "bytecode.m"
  {
#line 1178 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1179 "bytecode.m"
    {
#line 1179 "bytecode.m"
      mercury__io__write_string_3_p_0(bytecode_backend__bytecode__PredId_4);
    }
#line 1180 "bytecode.m"
    {
#line 1180 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
      return;
    }
#line 1178 "bytecode.m"
  }
#line 724 "bytecode.m"
}

#line 719 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_pred_id_3_p_0(
#line 719 "bytecode.m"
  MR_String bytecode_backend__bytecode__PredId_4)
#line 719 "bytecode.m"
{
#line 722 "bytecode.m"
  {
#line 722 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 722 "bytecode.m"
    {
#line 722 "bytecode.m"
      backend_libs__bytecode_data__output_string_3_p_0(bytecode_backend__bytecode__PredId_4);
#line 722 "bytecode.m"
      return;
    }
#line 722 "bytecode.m"
  }
#line 719 "bytecode.m"
}

#line 712 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_module_id_3_p_0(
#line 712 "bytecode.m"
  MR_Word bytecode_backend__bytecode__ModuleId_4)
#line 712 "bytecode.m"
{
#line 715 "bytecode.m"
  {
#line 715 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 715 "bytecode.m"
    {
#line 715 "bytecode.m"
      bytecode_backend__bytecode__debug_sym_name_3_p_0(bytecode_backend__bytecode__ModuleId_4);
#line 715 "bytecode.m"
      return;
    }
#line 715 "bytecode.m"
  }
#line 712 "bytecode.m"
}

#line 707 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_module_id_3_p_0(
#line 707 "bytecode.m"
  MR_Word bytecode_backend__bytecode__ModuleId_4)
#line 707 "bytecode.m"
{
#line 709 "bytecode.m"
  {
#line 709 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 709 "bytecode.m"
    MR_String bytecode_backend__bytecode__V_8_8;

#line 710 "bytecode.m"
    {
#line 710 "bytecode.m"
      bytecode_backend__bytecode__V_8_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(bytecode_backend__bytecode__ModuleId_4);
    }
#line 710 "bytecode.m"
    {
#line 710 "bytecode.m"
      backend_libs__bytecode_data__output_string_3_p_0(bytecode_backend__bytecode__V_8_8);
#line 710 "bytecode.m"
      return;
    }
#line 709 "bytecode.m"
  }
#line 707 "bytecode.m"
}

#line 696 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_test_id_3_p_0(
#line 696 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 696 "bytecode.m"
{
#line 698 "bytecode.m"
  {
#line 698 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 698 "bytecode.m"
#line 698 "bytecode.m"
    switch (bytecode_backend__bytecode__HeadVar__1_1) {
#line 698 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 698 "bytecode.m"
      case (MR_Integer) 1:
#line 699 "bytecode.m"
        {
#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "char");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
            return;
          }
#line 699 "bytecode.m"
        }
#line 698 "bytecode.m"
        break;
#line 698 "bytecode.m"
      case (MR_Integer) 5:
#line 703 "bytecode.m"
        {
#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "dummy");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
            return;
          }
#line 703 "bytecode.m"
        }
#line 698 "bytecode.m"
        break;
#line 698 "bytecode.m"
      case (MR_Integer) 4:
#line 702 "bytecode.m"
        {
#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "enum");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
            return;
          }
#line 702 "bytecode.m"
        }
#line 698 "bytecode.m"
        break;
#line 698 "bytecode.m"
      case (MR_Integer) 3:
#line 701 "bytecode.m"
        {
#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "float");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
            return;
          }
#line 701 "bytecode.m"
        }
#line 698 "bytecode.m"
        break;
#line 698 "bytecode.m"
      case (MR_Integer) 0:
#line 698 "bytecode.m"
        {
#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "int");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
            return;
          }
#line 698 "bytecode.m"
        }
#line 698 "bytecode.m"
        break;
#line 698 "bytecode.m"
      case (MR_Integer) 2:
#line 700 "bytecode.m"
        {
#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "string");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
            return;
          }
#line 700 "bytecode.m"
        }
#line 698 "bytecode.m"
        break;
#line 698 "bytecode.m"
    }
#line 698 "bytecode.m"
  }
#line 696 "bytecode.m"
}

#line 687 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_test_id_3_p_0(
#line 687 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 687 "bytecode.m"
{
#line 689 "bytecode.m"
  {
#line 689 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 689 "bytecode.m"
#line 689 "bytecode.m"
    switch (bytecode_backend__bytecode__HeadVar__1_1) {
#line 689 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 689 "bytecode.m"
      case (MR_Integer) 1:
#line 690 "bytecode.m"
        {
#line 690 "bytecode.m"
          {
#line 690 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
#line 690 "bytecode.m"
            return;
          }
#line 690 "bytecode.m"
        }
#line 689 "bytecode.m"
        break;
#line 689 "bytecode.m"
      case (MR_Integer) 5:
#line 694 "bytecode.m"
        {
#line 694 "bytecode.m"
          {
#line 694 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 5);
#line 694 "bytecode.m"
            return;
          }
#line 694 "bytecode.m"
        }
#line 689 "bytecode.m"
        break;
#line 689 "bytecode.m"
      case (MR_Integer) 4:
#line 693 "bytecode.m"
        {
#line 693 "bytecode.m"
          {
#line 693 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 4);
#line 693 "bytecode.m"
            return;
          }
#line 693 "bytecode.m"
        }
#line 689 "bytecode.m"
        break;
#line 689 "bytecode.m"
      case (MR_Integer) 3:
#line 692 "bytecode.m"
        {
#line 692 "bytecode.m"
          {
#line 692 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 3);
#line 692 "bytecode.m"
            return;
          }
#line 692 "bytecode.m"
        }
#line 689 "bytecode.m"
        break;
#line 689 "bytecode.m"
      case (MR_Integer) 0:
#line 689 "bytecode.m"
        {
#line 689 "bytecode.m"
          {
#line 689 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
#line 689 "bytecode.m"
            return;
          }
#line 689 "bytecode.m"
        }
#line 689 "bytecode.m"
        break;
#line 689 "bytecode.m"
      case (MR_Integer) 2:
#line 691 "bytecode.m"
        {
#line 691 "bytecode.m"
          {
#line 691 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
#line 691 "bytecode.m"
            return;
          }
#line 691 "bytecode.m"
        }
#line 689 "bytecode.m"
        break;
#line 689 "bytecode.m"
    }
#line 689 "bytecode.m"
  }
#line 687 "bytecode.m"
}

#line 676 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_var_dirs_3_p_0(
#line 676 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 676 "bytecode.m"
{
#line 679 "bytecode.m"
  while (MR_TRUE)
#line 679 "bytecode.m"
    {
#line 679 "bytecode.m"
      /* tailcall optimized into a loop */
#line 679 "bytecode.m"
      {
#line 679 "bytecode.m"
        MR_bool bytecode_backend__bytecode__succeeded;

#line 679 "bytecode.m"
        if ((bytecode_backend__bytecode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "bytecode.m"
          {
#line 679 "bytecode.m"
          }
#line 679 "bytecode.m"
        else
#line 680 "bytecode.m"
          {
#line 680 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__Var_7;
#line 680 "bytecode.m"
            MR_Word bytecode_backend__bytecode__Dir_8;
#line 680 "bytecode.m"
            MR_Word bytecode_backend__bytecode__VarDirs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 680 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 680 "bytecode.m"
            bytecode_backend__bytecode__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_13_13, (MR_Integer) 0)));
#line 680 "bytecode.m"
            bytecode_backend__bytecode__Dir_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_13_13, (MR_Integer) 1)));
#line 1185 "bytecode.m"
            {
#line 1185 "bytecode.m"
              mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Var_7);
            }
#line 1186 "bytecode.m"
            {
#line 1186 "bytecode.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 669 "bytecode.m"
#line 669 "bytecode.m"
            switch (bytecode_backend__bytecode__Dir_8) {
#line 669 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 669 "bytecode.m"
              case (MR_Integer) 0:
#line 669 "bytecode.m"
                {
#line 1179 "bytecode.m"
                  {
#line 1179 "bytecode.m"
                    mercury__io__write_string_3_p_0((MR_String) "to_arg");
                  }
#line 1180 "bytecode.m"
                  {
#line 1180 "bytecode.m"
                    mercury__io__write_char_3_p_0((MR_Char) 32);
                  }
#line 669 "bytecode.m"
                }
#line 669 "bytecode.m"
                break;
#line 669 "bytecode.m"
              case (MR_Integer) 2:
#line 673 "bytecode.m"
                {
#line 1179 "bytecode.m"
                  {
#line 1179 "bytecode.m"
                    mercury__io__write_string_3_p_0((MR_String) "to_none");
                  }
#line 1180 "bytecode.m"
                  {
#line 1180 "bytecode.m"
                    mercury__io__write_char_3_p_0((MR_Char) 32);
                  }
#line 673 "bytecode.m"
                }
#line 669 "bytecode.m"
                break;
#line 669 "bytecode.m"
              case (MR_Integer) 1:
#line 671 "bytecode.m"
                {
#line 1179 "bytecode.m"
                  {
#line 1179 "bytecode.m"
                    mercury__io__write_string_3_p_0((MR_String) "to_var");
                  }
#line 1180 "bytecode.m"
                  {
#line 1180 "bytecode.m"
                    mercury__io__write_char_3_p_0((MR_Char) 32);
                  }
#line 671 "bytecode.m"
                }
#line 669 "bytecode.m"
                break;
#line 669 "bytecode.m"
            }
#line 683 "bytecode.m"
            /* direct tailcall eliminated */
#line 683 "bytecode.m"
            {
#line 683 "bytecode.m"
              MR_Word bytecode_backend__bytecode__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode__VarDirs_9;

#line 683 "bytecode.m"
              bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__HeadVar__1__tmp_copy_1;
#line 683 "bytecode.m"
            }
#line 683 "bytecode.m"
            continue;
#line 680 "bytecode.m"
          }
#line 679 "bytecode.m"
      }
#line 679 "bytecode.m"
      break;
#line 679 "bytecode.m"
    }
#line 676 "bytecode.m"
}

#line 658 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_var_dirs_3_p_0(
#line 658 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 658 "bytecode.m"
{
#line 661 "bytecode.m"
  while (MR_TRUE)
#line 661 "bytecode.m"
    {
#line 661 "bytecode.m"
      /* tailcall optimized into a loop */
#line 661 "bytecode.m"
      {
#line 661 "bytecode.m"
        MR_bool bytecode_backend__bytecode__succeeded;

#line 661 "bytecode.m"
        if ((bytecode_backend__bytecode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 661 "bytecode.m"
          {
#line 661 "bytecode.m"
          }
#line 661 "bytecode.m"
        else
#line 662 "bytecode.m"
          {
#line 662 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__Var_7;
#line 662 "bytecode.m"
            MR_Word bytecode_backend__bytecode__Dir_8;
#line 662 "bytecode.m"
            MR_Word bytecode_backend__bytecode__VarDirs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 662 "bytecode.m"
            bytecode_backend__bytecode__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_13_13, (MR_Integer) 0)));
#line 662 "bytecode.m"
            bytecode_backend__bytecode__Dir_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_13_13, (MR_Integer) 1)));
#line 614 "bytecode.m"
            {
#line 614 "bytecode.m"
              backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__Var_7);
            }
#line 651 "bytecode.m"
#line 651 "bytecode.m"
            switch (bytecode_backend__bytecode__Dir_8) {
#line 651 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 651 "bytecode.m"
              case (MR_Integer) 0:
#line 651 "bytecode.m"
                {
#line 652 "bytecode.m"
                  {
#line 652 "bytecode.m"
                    backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
                  }
#line 651 "bytecode.m"
                }
#line 651 "bytecode.m"
                break;
#line 651 "bytecode.m"
              case (MR_Integer) 2:
#line 655 "bytecode.m"
                {
#line 656 "bytecode.m"
                  {
#line 656 "bytecode.m"
                    backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
                  }
#line 655 "bytecode.m"
                }
#line 651 "bytecode.m"
                break;
#line 651 "bytecode.m"
              case (MR_Integer) 1:
#line 653 "bytecode.m"
                {
#line 654 "bytecode.m"
                  {
#line 654 "bytecode.m"
                    backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
                  }
#line 653 "bytecode.m"
                }
#line 651 "bytecode.m"
                break;
#line 651 "bytecode.m"
            }
#line 665 "bytecode.m"
            /* direct tailcall eliminated */
#line 665 "bytecode.m"
            {
#line 665 "bytecode.m"
              MR_Word bytecode_backend__bytecode__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode__VarDirs_9;

#line 665 "bytecode.m"
              bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__HeadVar__1__tmp_copy_1;
#line 665 "bytecode.m"
            }
#line 665 "bytecode.m"
            continue;
#line 662 "bytecode.m"
          }
#line 661 "bytecode.m"
      }
#line 661 "bytecode.m"
      break;
#line 661 "bytecode.m"
    }
#line 658 "bytecode.m"
}

#line 642 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_temp_3_p_0(
#line 642 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Var_4)
#line 642 "bytecode.m"
{
#line 1184 "bytecode.m"
  {
#line 1184 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1185 "bytecode.m"
    {
#line 1185 "bytecode.m"
      mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Var_4);
    }
#line 1186 "bytecode.m"
    {
#line 1186 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
      return;
    }
#line 1184 "bytecode.m"
  }
#line 642 "bytecode.m"
}

#line 637 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_temp_3_p_0(
#line 637 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Var_4)
#line 637 "bytecode.m"
{
#line 640 "bytecode.m"
  {
#line 640 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 640 "bytecode.m"
    {
#line 640 "bytecode.m"
      backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__Var_4);
#line 640 "bytecode.m"
      return;
    }
#line 640 "bytecode.m"
  }
#line 637 "bytecode.m"
}

#line 628 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_vars_3_p_0(
#line 628 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 628 "bytecode.m"
{
#line 630 "bytecode.m"
  while (MR_TRUE)
#line 630 "bytecode.m"
    {
#line 630 "bytecode.m"
      /* tailcall optimized into a loop */
#line 630 "bytecode.m"
      {
#line 630 "bytecode.m"
        MR_bool bytecode_backend__bytecode__succeeded;

#line 630 "bytecode.m"
        if ((bytecode_backend__bytecode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 630 "bytecode.m"
          {
#line 630 "bytecode.m"
          }
#line 630 "bytecode.m"
        else
#line 631 "bytecode.m"
          {
#line 631 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 631 "bytecode.m"
            MR_Word bytecode_backend__bytecode__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 1185 "bytecode.m"
            {
#line 1185 "bytecode.m"
              mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Var_7);
            }
#line 1186 "bytecode.m"
            {
#line 1186 "bytecode.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 633 "bytecode.m"
            /* direct tailcall eliminated */
#line 633 "bytecode.m"
            {
#line 633 "bytecode.m"
              MR_Word bytecode_backend__bytecode__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode__Vars_8;

#line 633 "bytecode.m"
              bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__HeadVar__1__tmp_copy_1;
#line 633 "bytecode.m"
            }
#line 633 "bytecode.m"
            continue;
#line 631 "bytecode.m"
          }
#line 630 "bytecode.m"
      }
#line 630 "bytecode.m"
      break;
#line 630 "bytecode.m"
    }
#line 628 "bytecode.m"
}

#line 623 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_var_3_p_0(
#line 623 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Var_4)
#line 623 "bytecode.m"
{
#line 1184 "bytecode.m"
  {
#line 1184 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1185 "bytecode.m"
    {
#line 1185 "bytecode.m"
      mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Var_4);
    }
#line 1186 "bytecode.m"
    {
#line 1186 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
      return;
    }
#line 1184 "bytecode.m"
  }
#line 623 "bytecode.m"
}

#line 616 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_vars_3_p_0(
#line 616 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 616 "bytecode.m"
{
#line 618 "bytecode.m"
  while (MR_TRUE)
#line 618 "bytecode.m"
    {
#line 618 "bytecode.m"
      /* tailcall optimized into a loop */
#line 618 "bytecode.m"
      {
#line 618 "bytecode.m"
        MR_bool bytecode_backend__bytecode__succeeded;

#line 618 "bytecode.m"
        if ((bytecode_backend__bytecode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 618 "bytecode.m"
          {
#line 618 "bytecode.m"
          }
#line 618 "bytecode.m"
        else
#line 619 "bytecode.m"
          {
#line 619 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 619 "bytecode.m"
            MR_Word bytecode_backend__bytecode__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 614 "bytecode.m"
            {
#line 614 "bytecode.m"
              backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__Var_7);
            }
#line 621 "bytecode.m"
            /* direct tailcall eliminated */
#line 621 "bytecode.m"
            {
#line 621 "bytecode.m"
              MR_Word bytecode_backend__bytecode__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode__Vars_8;

#line 621 "bytecode.m"
              bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__HeadVar__1__tmp_copy_1;
#line 621 "bytecode.m"
            }
#line 621 "bytecode.m"
            continue;
#line 619 "bytecode.m"
          }
#line 618 "bytecode.m"
      }
#line 618 "bytecode.m"
      break;
#line 618 "bytecode.m"
    }
#line 616 "bytecode.m"
}

#line 611 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_var_3_p_0(
#line 611 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Var_4)
#line 611 "bytecode.m"
{
#line 614 "bytecode.m"
  {
#line 614 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 614 "bytecode.m"
    {
#line 614 "bytecode.m"
      backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__Var_4);
#line 614 "bytecode.m"
      return;
    }
#line 614 "bytecode.m"
  }
#line 611 "bytecode.m"
}

#line 597 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_arg_3_p_0(
#line 597 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 597 "bytecode.m"
{
#line 599 "bytecode.m"
  {
#line 599 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 599 "bytecode.m"
#line 599 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 599 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 599 "bytecode.m"
      case (MR_Integer) 0:
#line 599 "bytecode.m"
        {
#line 599 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "var");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
#line 1185 "bytecode.m"
          {
#line 1185 "bytecode.m"
            mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Var_4);
          }
#line 1186 "bytecode.m"
          {
#line 1186 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
            return;
          }
#line 599 "bytecode.m"
        }
#line 599 "bytecode.m"
        break;
#line 599 "bytecode.m"
      case (MR_Integer) 1:
#line 602 "bytecode.m"
        {
#line 602 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__IntVal_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "int");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
#line 1185 "bytecode.m"
          {
#line 1185 "bytecode.m"
            mercury__io__write_int_3_p_0(bytecode_backend__bytecode__IntVal_11);
          }
#line 1186 "bytecode.m"
          {
#line 1186 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
            return;
          }
#line 602 "bytecode.m"
        }
#line 599 "bytecode.m"
        break;
#line 599 "bytecode.m"
      case (MR_Integer) 2:
#line 605 "bytecode.m"
        {
#line 605 "bytecode.m"
          MR_Float bytecode_backend__bytecode__FloatVal_18 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 1179 "bytecode.m"
          {
#line 1179 "bytecode.m"
            mercury__io__write_string_3_p_0((MR_String) "float");
          }
#line 1180 "bytecode.m"
          {
#line 1180 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
          }
#line 1191 "bytecode.m"
          {
#line 1191 "bytecode.m"
            mercury__io__write_float_3_p_0(bytecode_backend__bytecode__FloatVal_18);
          }
#line 1192 "bytecode.m"
          {
#line 1192 "bytecode.m"
            mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1192 "bytecode.m"
            return;
          }
#line 605 "bytecode.m"
        }
#line 599 "bytecode.m"
        break;
#line 599 "bytecode.m"
    }
#line 599 "bytecode.m"
  }
#line 597 "bytecode.m"
}

#line 585 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_arg_3_p_0(
#line 585 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 585 "bytecode.m"
{
#line 587 "bytecode.m"
  {
#line 587 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 587 "bytecode.m"
#line 587 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 587 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 587 "bytecode.m"
      case (MR_Integer) 0:
#line 587 "bytecode.m"
        {
#line 587 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 588 "bytecode.m"
          {
#line 588 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 0);
          }
#line 614 "bytecode.m"
          {
#line 614 "bytecode.m"
            backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__Var_4);
#line 614 "bytecode.m"
            return;
          }
#line 587 "bytecode.m"
        }
#line 587 "bytecode.m"
        break;
#line 587 "bytecode.m"
      case (MR_Integer) 1:
#line 590 "bytecode.m"
        {
#line 590 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__IntVal_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 591 "bytecode.m"
          {
#line 591 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 1);
          }
#line 592 "bytecode.m"
          {
#line 592 "bytecode.m"
            backend_libs__bytecode_data__output_int_3_p_0(bytecode_backend__bytecode__IntVal_11);
#line 592 "bytecode.m"
            return;
          }
#line 590 "bytecode.m"
        }
#line 587 "bytecode.m"
        break;
#line 587 "bytecode.m"
      case (MR_Integer) 2:
#line 593 "bytecode.m"
        {
#line 593 "bytecode.m"
          MR_Float bytecode_backend__bytecode__FloatVal_18 = MR_unbox_float((MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));

#line 594 "bytecode.m"
          {
#line 594 "bytecode.m"
            backend_libs__bytecode_data__output_byte_3_p_0((MR_Integer) 2);
          }
#line 595 "bytecode.m"
          {
#line 595 "bytecode.m"
            backend_libs__bytecode_data__output_float_3_p_0(bytecode_backend__bytecode__FloatVal_18);
#line 595 "bytecode.m"
            return;
          }
#line 593 "bytecode.m"
        }
#line 587 "bytecode.m"
        break;
#line 587 "bytecode.m"
    }
#line 587 "bytecode.m"
  }
#line 585 "bytecode.m"
}

#line 578 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_length_3_p_0(
#line 578 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Length_4)
#line 578 "bytecode.m"
{
#line 1184 "bytecode.m"
  {
#line 1184 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 1185 "bytecode.m"
    {
#line 1185 "bytecode.m"
      mercury__io__write_int_3_p_0(bytecode_backend__bytecode__Length_4);
    }
#line 1186 "bytecode.m"
    {
#line 1186 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1186 "bytecode.m"
      return;
    }
#line 1184 "bytecode.m"
  }
#line 578 "bytecode.m"
}

#line 573 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_length_3_p_0(
#line 573 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__Length_4)
#line 573 "bytecode.m"
{
#line 576 "bytecode.m"
  {
#line 576 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 576 "bytecode.m"
    {
#line 576 "bytecode.m"
      backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__Length_4);
#line 576 "bytecode.m"
      return;
    }
#line 576 "bytecode.m"
  }
#line 573 "bytecode.m"
}

#line 559 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_is_func_3_p_0(
#line 559 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__IsFunc_4)
#line 559 "bytecode.m"
{
#line 564 "bytecode.m"
  {
#line 564 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__IsFunc_4 == (MR_Integer) 1);

#line 564 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 563 "bytecode.m"
      {
#line 1179 "bytecode.m"
        {
#line 1179 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) "func");
        }
#line 1180 "bytecode.m"
        {
#line 1180 "bytecode.m"
          mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
          return;
        }
#line 563 "bytecode.m"
      }
#line 564 "bytecode.m"
    else
#line 566 "bytecode.m"
      {
#line 564 "bytecode.m"
        bytecode_backend__bytecode__succeeded = (bytecode_backend__bytecode__IsFunc_4 == (MR_Integer) 0);
#line 566 "bytecode.m"
        if (bytecode_backend__bytecode__succeeded)
#line 565 "bytecode.m"
          {
#line 1179 "bytecode.m"
            {
#line 1179 "bytecode.m"
              mercury__io__write_string_3_p_0((MR_String) "pred");
            }
#line 1180 "bytecode.m"
            {
#line 1180 "bytecode.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
              return;
            }
#line 565 "bytecode.m"
          }
#line 566 "bytecode.m"
        else
#line 567 "bytecode.m"
          {
#line 567 "bytecode.m"
            {
#line 567 "bytecode.m"
              mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode", (MR_String) "predicate \140bytecode_backend.bytecode.debug_is_func\'/3", (MR_String) "invalid predicate or function specifier in bytecode.");
#line 567 "bytecode.m"
              return;
            }
#line 567 "bytecode.m"
          }
#line 566 "bytecode.m"
      }
#line 564 "bytecode.m"
  }
#line 559 "bytecode.m"
}

#line 549 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_is_func_3_p_0(
#line 549 "bytecode.m"
  MR_Integer bytecode_backend__bytecode__IsFunc_4)
#line 549 "bytecode.m"
{
#line 554 "bytecode.m"
  {
#line 554 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 552 "bytecode.m"
#line 552 "bytecode.m"
    switch (bytecode_backend__bytecode__IsFunc_4) {
#line 552 "bytecode.m"
      default:
#line 552 "bytecode.m"
        bytecode_backend__bytecode__succeeded = MR_FALSE;
#line 552 "bytecode.m"
        break;
#line 552 "bytecode.m"
      case (MR_Integer) 0:
#line 552 "bytecode.m"
        bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 552 "bytecode.m"
        break;
#line 552 "bytecode.m"
      case (MR_Integer) 1:
#line 552 "bytecode.m"
        bytecode_backend__bytecode__succeeded = MR_TRUE;
#line 552 "bytecode.m"
        break;
#line 552 "bytecode.m"
    }
#line 554 "bytecode.m"
    if (bytecode_backend__bytecode__succeeded)
#line 553 "bytecode.m"
      {
#line 553 "bytecode.m"
        backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__IsFunc_4);
#line 553 "bytecode.m"
        return;
      }
#line 554 "bytecode.m"
    else
#line 555 "bytecode.m"
      {
#line 555 "bytecode.m"
        {
#line 555 "bytecode.m"
          mercury__require__unexpected_3_p_0((MR_String) "bytecode_backend.bytecode", (MR_String) "predicate \140bytecode_backend.bytecode.output_is_func\'/3", (MR_String) "invalid predicate or function specified in bytecode");
#line 555 "bytecode.m"
          return;
        }
#line 555 "bytecode.m"
      }
#line 554 "bytecode.m"
  }
#line 549 "bytecode.m"
}

#line 529 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_determinism_3_p_0(
#line 529 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Detism_4)
#line 529 "bytecode.m"
{
#line 531 "bytecode.m"
  {
#line 531 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 531 "bytecode.m"
    MR_String bytecode_backend__bytecode__Debug_6 = ((&bytecode_backend__bytecode_vector_common_6[0 + bytecode_backend__bytecode__Detism_4]))->bytecode_backend__bytecode__vector_common_type_6_0__vct_6_f_0;

#line 1179 "bytecode.m"
    {
#line 1179 "bytecode.m"
      mercury__io__write_string_3_p_0(bytecode_backend__bytecode__Debug_6);
    }
#line 1180 "bytecode.m"
    {
#line 1180 "bytecode.m"
      mercury__io__write_char_3_p_0((MR_Char) 32);
#line 1180 "bytecode.m"
      return;
    }
#line 531 "bytecode.m"
  }
#line 529 "bytecode.m"
}

#line 523 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_determinism_3_p_0(
#line 523 "bytecode.m"
  MR_Word bytecode_backend__bytecode__Detism_4)
#line 523 "bytecode.m"
{
#line 525 "bytecode.m"
  {
#line 525 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 525 "bytecode.m"
    MR_Integer bytecode_backend__bytecode__Code_6 = ((&bytecode_backend__bytecode_vector_common_5[0 + bytecode_backend__bytecode__Detism_4]))->bytecode_backend__bytecode__vector_common_type_5_0__vct_5_f_0;

#line 527 "bytecode.m"
    {
#line 527 "bytecode.m"
      backend_libs__bytecode_data__output_byte_3_p_0(bytecode_backend__bytecode__Code_6);
#line 527 "bytecode.m"
      return;
    }
#line 525 "bytecode.m"
  }
#line 523 "bytecode.m"
}

#line 509 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_var_infos_3_p_0(
#line 509 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 509 "bytecode.m"
{
#line 511 "bytecode.m"
  while (MR_TRUE)
#line 511 "bytecode.m"
    {
#line 511 "bytecode.m"
      /* tailcall optimized into a loop */
#line 511 "bytecode.m"
      {
#line 511 "bytecode.m"
        MR_bool bytecode_backend__bytecode__succeeded;

#line 511 "bytecode.m"
        if ((bytecode_backend__bytecode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "bytecode.m"
          {
#line 511 "bytecode.m"
          }
#line 511 "bytecode.m"
        else
#line 512 "bytecode.m"
          {
#line 512 "bytecode.m"
            MR_Word bytecode_backend__bytecode__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 512 "bytecode.m"
            MR_Word bytecode_backend__bytecode__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 512 "bytecode.m"
            MR_String bytecode_backend__bytecode__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__Var_7, (MR_Integer) 0)));
#line 518 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__Var_7, (MR_Integer) 1)));

#line 1179 "bytecode.m"
            {
#line 1179 "bytecode.m"
              mercury__io__write_string_3_p_0(bytecode_backend__bytecode__Name_16);
            }
#line 1180 "bytecode.m"
            {
#line 1180 "bytecode.m"
              mercury__io__write_char_3_p_0((MR_Char) 32);
            }
#line 514 "bytecode.m"
            /* direct tailcall eliminated */
#line 514 "bytecode.m"
            {
#line 514 "bytecode.m"
              MR_Word bytecode_backend__bytecode__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode__Vars_8;

#line 514 "bytecode.m"
              bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__HeadVar__1__tmp_copy_1;
#line 514 "bytecode.m"
            }
#line 514 "bytecode.m"
            continue;
#line 512 "bytecode.m"
          }
#line 511 "bytecode.m"
      }
#line 511 "bytecode.m"
      break;
#line 511 "bytecode.m"
    }
#line 509 "bytecode.m"
}

#line 497 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_var_infos_3_p_0(
#line 497 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 497 "bytecode.m"
{
#line 499 "bytecode.m"
  while (MR_TRUE)
#line 499 "bytecode.m"
    {
#line 499 "bytecode.m"
      /* tailcall optimized into a loop */
#line 499 "bytecode.m"
      {
#line 499 "bytecode.m"
        MR_bool bytecode_backend__bytecode__succeeded;

#line 499 "bytecode.m"
        if ((bytecode_backend__bytecode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "bytecode.m"
          {
#line 499 "bytecode.m"
          }
#line 499 "bytecode.m"
        else
#line 500 "bytecode.m"
          {
#line 500 "bytecode.m"
            MR_Word bytecode_backend__bytecode__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 500 "bytecode.m"
            MR_Word bytecode_backend__bytecode__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 500 "bytecode.m"
            MR_String bytecode_backend__bytecode__Name_16 = ((MR_String) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__Var_7, (MR_Integer) 0)));
#line 506 "bytecode.m"
            MR_Word bytecode_backend__bytecode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__Var_7, (MR_Integer) 1)));

#line 507 "bytecode.m"
            {
#line 507 "bytecode.m"
              backend_libs__bytecode_data__output_string_3_p_0(bytecode_backend__bytecode__Name_16);
            }
#line 502 "bytecode.m"
            /* direct tailcall eliminated */
#line 502 "bytecode.m"
            {
#line 502 "bytecode.m"
              MR_Word bytecode_backend__bytecode__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode__Vars_8;

#line 502 "bytecode.m"
              bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__HeadVar__1__tmp_copy_1;
#line 502 "bytecode.m"
            }
#line 502 "bytecode.m"
            continue;
#line 500 "bytecode.m"
          }
#line 499 "bytecode.m"
      }
#line 499 "bytecode.m"
      break;
#line 499 "bytecode.m"
    }
#line 497 "bytecode.m"
}

#line 398 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_args_3_p_0_1(
#line 398 "bytecode.m"
  MR_Box bytecode_backend__bytecode__closure_arg,
#line 398 "bytecode.m"
  MR_Box bytecode_backend__bytecode__wrapper_arg_1,
#line 398 "bytecode.m"
  MR_Box bytecode_backend__bytecode__wrapper_arg_2,
#line 398 "bytecode.m"
  MR_Box * bytecode_backend__bytecode__wrapper_arg_3)
#line 398 "bytecode.m"
{
#line 398 "bytecode.m"
  {
#line 398 "bytecode.m"
    MR_Box bytecode_backend__bytecode__closure = bytecode_backend__bytecode__closure_arg;

#line 398 "bytecode.m"
    {
#line 398 "bytecode.m"
      bytecode_backend__bytecode__debug_cons_id_3_p_0(((MR_Word) bytecode_backend__bytecode__wrapper_arg_1));
#line 398 "bytecode.m"
      return;
    }
#line 398 "bytecode.m"
  }
#line 398 "bytecode.m"
}

#line 363 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_args_3_p_0(
#line 363 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 363 "bytecode.m"
{
#line 365 "bytecode.m"
  {
#line 365 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 365 "bytecode.m"
#line 365 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 365 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 365 "bytecode.m"
      case (MR_Integer) 0:
#line 365 "bytecode.m"
#line 365 "bytecode.m"
        switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__1_1)) {
#line 365 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 365 "bytecode.m"
          case (MR_Integer) 0:
#line 370 "bytecode.m"
            {
#line 370 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 1:
#line 381 "bytecode.m"
            {
#line 381 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 2:
#line 386 "bytecode.m"
            {
#line 386 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 3:
#line 394 "bytecode.m"
            {
#line 394 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 4:
#line 412 "bytecode.m"
            {
#line 412 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 5:
#line 418 "bytecode.m"
            {
#line 418 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 6:
#line 488 "bytecode.m"
            {
#line 488 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 7:
#line 489 "bytecode.m"
            {
#line 489 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 8:
#line 490 "bytecode.m"
            {
#line 490 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 9:
#line 493 "bytecode.m"
            {
#line 493 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
        }
#line 365 "bytecode.m"
        break;
#line 365 "bytecode.m"
      case (MR_Integer) 1:
#line 365 "bytecode.m"
        {
#line 365 "bytecode.m"
          MR_String bytecode_backend__bytecode__PredId_4 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 365 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__PredArity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 365 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__IsFunc_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 365 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__ProcsCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 366 "bytecode.m"
          {
#line 366 "bytecode.m"
            bytecode_backend__bytecode__debug_pred_id_3_p_0(bytecode_backend__bytecode__PredId_4);
          }
#line 367 "bytecode.m"
          {
#line 367 "bytecode.m"
            bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__PredArity_5);
          }
#line 368 "bytecode.m"
          {
#line 368 "bytecode.m"
            bytecode_backend__bytecode__debug_is_func_3_p_0(bytecode_backend__bytecode__IsFunc_6);
          }
#line 369 "bytecode.m"
          {
#line 369 "bytecode.m"
            bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__ProcsCount_7);
#line 369 "bytecode.m"
            return;
          }
#line 365 "bytecode.m"
        }
#line 365 "bytecode.m"
        break;
#line 365 "bytecode.m"
      case (MR_Integer) 2:
#line 372 "bytecode.m"
        {
#line 372 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 372 "bytecode.m"
          MR_Word bytecode_backend__bytecode__Detism_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 372 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__LabelCount_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 372 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__LabelId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 372 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__TempCount_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 372 "bytecode.m"
          MR_Word bytecode_backend__bytecode__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));
#line 372 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__VarCount_25;

#line 373 "bytecode.m"
          {
#line 373 "bytecode.m"
            bytecode_backend__bytecode__debug_proc_id_3_p_0(bytecode_backend__bytecode__ProcId_18);
          }
#line 374 "bytecode.m"
          {
#line 374 "bytecode.m"
            bytecode_backend__bytecode__debug_determinism_3_p_0(bytecode_backend__bytecode__Detism_19);
          }
#line 375 "bytecode.m"
          {
#line 375 "bytecode.m"
            bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__LabelCount_20);
          }
#line 376 "bytecode.m"
          {
#line 376 "bytecode.m"
            bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__LabelId_21);
          }
#line 377 "bytecode.m"
          {
#line 377 "bytecode.m"
            bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__TempCount_22);
          }
#line 378 "bytecode.m"
          {
#line 378 "bytecode.m"
            mercury__list__length_2_p_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0, bytecode_backend__bytecode__Vars_23, &bytecode_backend__bytecode__VarCount_25);
          }
#line 379 "bytecode.m"
          {
#line 379 "bytecode.m"
            bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__VarCount_25);
          }
#line 380 "bytecode.m"
          {
#line 380 "bytecode.m"
            bytecode_backend__bytecode__debug_var_infos_3_p_0(bytecode_backend__bytecode__Vars_23);
#line 380 "bytecode.m"
            return;
          }
#line 372 "bytecode.m"
        }
#line 365 "bytecode.m"
        break;
#line 365 "bytecode.m"
      case (MR_Integer) 3:
#line 365 "bytecode.m"
#line 365 "bytecode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 365 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 365 "bytecode.m"
          case (MR_Integer) 0:
#line 382 "bytecode.m"
            {
#line 382 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 383 "bytecode.m"
              {
#line 383 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__LabelId_38);
#line 383 "bytecode.m"
                return;
              }
#line 382 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 1:
#line 384 "bytecode.m"
            {
#line 384 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 385 "bytecode.m"
              {
#line 385 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__LabelId_43);
#line 385 "bytecode.m"
                return;
              }
#line 384 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 2:
#line 387 "bytecode.m"
            {
#line 387 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 388 "bytecode.m"
              {
#line 388 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__LabelId_51);
#line 388 "bytecode.m"
                return;
              }
#line 387 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 3:
#line 389 "bytecode.m"
            {
#line 389 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 390 "bytecode.m"
              {
#line 390 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__LabelId_56);
#line 390 "bytecode.m"
                return;
              }
#line 389 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 4:
#line 391 "bytecode.m"
            {
#line 391 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 391 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 392 "bytecode.m"
              {
#line 392 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var_61);
              }
#line 393 "bytecode.m"
              {
#line 393 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__LabelId_62);
#line 393 "bytecode.m"
                return;
              }
#line 391 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 5:
#line 396 "bytecode.m"
            {
#line 396 "bytecode.m"
              MR_Word bytecode_backend__bytecode__MainConsId_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 396 "bytecode.m"
              MR_Word bytecode_backend__bytecode__OtherConsIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 396 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__NextLabelId_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 398 "bytecode.m"
              MR_Box bytecode_backend__bytecode__conv0_STATE_VARIABLE_IO_79_79;

#line 397 "bytecode.m"
              {
#line 397 "bytecode.m"
                bytecode_backend__bytecode__debug_cons_id_3_p_0(bytecode_backend__bytecode__MainConsId_71);
              }
#line 398 "bytecode.m"
              {
#line 398 "bytecode.m"
                mercury__list__foldl_4_p_2((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &bytecode_backend__bytecode_scalar_common_2[1], bytecode_backend__bytecode__OtherConsIds_72, ((MR_Box) ((MR_Integer) 0)), &bytecode_backend__bytecode__conv0_STATE_VARIABLE_IO_79_79);
              }
#line 399 "bytecode.m"
              {
#line 399 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__NextLabelId_73);
#line 399 "bytecode.m"
                return;
              }
#line 396 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 6:
#line 400 "bytecode.m"
            {
#line 400 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 401 "bytecode.m"
              {
#line 401 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__LabelId_81);
#line 401 "bytecode.m"
                return;
              }
#line 400 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 7:
#line 402 "bytecode.m"
            {
#line 402 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__ElseLabelId_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 402 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FollowLabelId_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 402 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 403 "bytecode.m"
              {
#line 403 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__ElseLabelId_86);
              }
#line 404 "bytecode.m"
              {
#line 404 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__FollowLabelId_87);
              }
#line 405 "bytecode.m"
              {
#line 405 "bytecode.m"
                bytecode_backend__bytecode__debug_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_88);
#line 405 "bytecode.m"
                return;
              }
#line 402 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 8:
#line 406 "bytecode.m"
            {
#line 406 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 407 "bytecode.m"
              {
#line 407 "bytecode.m"
                bytecode_backend__bytecode__debug_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_95);
#line 407 "bytecode.m"
                return;
              }
#line 406 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 9:
#line 408 "bytecode.m"
            {
#line 408 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FollowLabelId_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 409 "bytecode.m"
              {
#line 409 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__FollowLabelId_100);
#line 409 "bytecode.m"
                return;
              }
#line 408 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 10:
#line 410 "bytecode.m"
            {
#line 410 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 411 "bytecode.m"
              {
#line 411 "bytecode.m"
                bytecode_backend__bytecode__debug_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_105);
#line 411 "bytecode.m"
                return;
              }
#line 410 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 11:
#line 413 "bytecode.m"
            {
#line 413 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 414 "bytecode.m"
              {
#line 414 "bytecode.m"
                bytecode_backend__bytecode__debug_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_113);
              }
#line 415 "bytecode.m"
              {
#line 415 "bytecode.m"
                bytecode_backend__bytecode__debug_label_id_3_p_0(bytecode_backend__bytecode__LabelId_114);
#line 415 "bytecode.m"
                return;
              }
#line 413 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 12:
#line 416 "bytecode.m"
            {
#line 416 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 417 "bytecode.m"
              {
#line 417 "bytecode.m"
                bytecode_backend__bytecode__debug_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_120);
#line 417 "bytecode.m"
                return;
              }
#line 416 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 13:
#line 419 "bytecode.m"
            {
#line 419 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Temp_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 420 "bytecode.m"
              {
#line 420 "bytecode.m"
                bytecode_backend__bytecode__debug_temp_3_p_0(bytecode_backend__bytecode__Temp_128);
#line 420 "bytecode.m"
                return;
              }
#line 419 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 14:
#line 421 "bytecode.m"
            {
#line 421 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Temp_133 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 422 "bytecode.m"
              {
#line 422 "bytecode.m"
                bytecode_backend__bytecode__debug_temp_3_p_0(bytecode_backend__bytecode__Temp_133);
#line 422 "bytecode.m"
                return;
              }
#line 421 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 15:
#line 423 "bytecode.m"
            {
#line 423 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var1_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 423 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var2_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 424 "bytecode.m"
              {
#line 424 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var1_138);
              }
#line 425 "bytecode.m"
              {
#line 425 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var2_139);
#line 425 "bytecode.m"
                return;
              }
#line 423 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 16:
#line 426 "bytecode.m"
            {
#line 426 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var1_145 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 426 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var2_146 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 426 "bytecode.m"
              MR_Word bytecode_backend__bytecode__TestId_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 427 "bytecode.m"
              {
#line 427 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var1_145);
              }
#line 428 "bytecode.m"
              {
#line 428 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var2_146);
              }
#line 429 "bytecode.m"
              {
#line 429 "bytecode.m"
                bytecode_backend__bytecode__debug_test_id_3_p_0(bytecode_backend__bytecode__TestId_147);
#line 429 "bytecode.m"
                return;
              }
#line 426 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 17:
#line 430 "bytecode.m"
            {
#line 430 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_154 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 430 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ConsId_155 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 430 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Vars_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 430 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Length_158;

#line 431 "bytecode.m"
              {
#line 431 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var_154);
              }
#line 432 "bytecode.m"
              {
#line 432 "bytecode.m"
                bytecode_backend__bytecode__debug_cons_id_3_p_0(bytecode_backend__bytecode__ConsId_155);
              }
#line 433 "bytecode.m"
              {
#line 433 "bytecode.m"
                mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode__Vars_156, &bytecode_backend__bytecode__Length_158);
              }
#line 434 "bytecode.m"
              {
#line 434 "bytecode.m"
                bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__Length_158);
              }
#line 435 "bytecode.m"
              {
#line 435 "bytecode.m"
                bytecode_backend__bytecode__debug_vars_3_p_0(bytecode_backend__bytecode__Vars_156);
#line 435 "bytecode.m"
                return;
              }
#line 430 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 18:
#line 436 "bytecode.m"
            {
#line 436 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_165 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ConsId_166 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 436 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Vars_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 436 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Length_169;

#line 437 "bytecode.m"
              {
#line 437 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var_165);
              }
#line 438 "bytecode.m"
              {
#line 438 "bytecode.m"
                bytecode_backend__bytecode__debug_cons_id_3_p_0(bytecode_backend__bytecode__ConsId_166);
              }
#line 439 "bytecode.m"
              {
#line 439 "bytecode.m"
                mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode__Vars_167, &bytecode_backend__bytecode__Length_169);
              }
#line 440 "bytecode.m"
              {
#line 440 "bytecode.m"
                bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__Length_169);
              }
#line 441 "bytecode.m"
              {
#line 441 "bytecode.m"
                bytecode_backend__bytecode__debug_vars_3_p_0(bytecode_backend__bytecode__Vars_167);
#line 441 "bytecode.m"
                return;
              }
#line 436 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 19:
#line 442 "bytecode.m"
            {
#line 442 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_176 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 442 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ConsId_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 442 "bytecode.m"
              MR_Word bytecode_backend__bytecode__VarDirs_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 442 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Length_180;

#line 443 "bytecode.m"
              {
#line 443 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var_176);
              }
#line 444 "bytecode.m"
              {
#line 444 "bytecode.m"
                bytecode_backend__bytecode__debug_cons_id_3_p_0(bytecode_backend__bytecode__ConsId_177);
              }
#line 445 "bytecode.m"
              {
#line 445 "bytecode.m"
                mercury__list__length_2_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_2[0], bytecode_backend__bytecode__VarDirs_178, &bytecode_backend__bytecode__Length_180);
              }
#line 446 "bytecode.m"
              {
#line 446 "bytecode.m"
                bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__Length_180);
              }
#line 447 "bytecode.m"
              {
#line 447 "bytecode.m"
                bytecode_backend__bytecode__debug_var_dirs_3_p_0(bytecode_backend__bytecode__VarDirs_178);
#line 447 "bytecode.m"
                return;
              }
#line 442 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 20:
#line 448 "bytecode.m"
            {
#line 448 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_187 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 448 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ConsId_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 448 "bytecode.m"
              MR_Word bytecode_backend__bytecode__VarDirs_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 448 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Length_191;

#line 449 "bytecode.m"
              {
#line 449 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var_187);
              }
#line 450 "bytecode.m"
              {
#line 450 "bytecode.m"
                bytecode_backend__bytecode__debug_cons_id_3_p_0(bytecode_backend__bytecode__ConsId_188);
              }
#line 451 "bytecode.m"
              {
#line 451 "bytecode.m"
                mercury__list__length_2_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_2[0], bytecode_backend__bytecode__VarDirs_189, &bytecode_backend__bytecode__Length_191);
              }
#line 452 "bytecode.m"
              {
#line 452 "bytecode.m"
                bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__Length_191);
              }
#line 453 "bytecode.m"
              {
#line 453 "bytecode.m"
                bytecode_backend__bytecode__debug_var_dirs_3_p_0(bytecode_backend__bytecode__VarDirs_189);
#line 453 "bytecode.m"
                return;
              }
#line 448 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 21:
#line 454 "bytecode.m"
            {
#line 454 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__RegNum_199 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 454 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_200 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 455 "bytecode.m"
              {
#line 455 "bytecode.m"
                bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_p_0(bytecode_backend__bytecode__RegNum_199);
              }
#line 456 "bytecode.m"
              {
#line 456 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var_200);
#line 456 "bytecode.m"
                return;
              }
#line 454 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 22:
#line 457 "bytecode.m"
            {
#line 457 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__RegNum_207 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 457 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_208 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 458 "bytecode.m"
              {
#line 458 "bytecode.m"
                bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_114_101_103_95_95_91_49_93_95_48_4_p_0(bytecode_backend__bytecode__RegNum_207);
              }
#line 459 "bytecode.m"
              {
#line 459 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var_208);
#line 459 "bytecode.m"
                return;
              }
#line 457 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 23:
#line 460 "bytecode.m"
            {
#line 460 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ModuleId_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 460 "bytecode.m"
              MR_String bytecode_backend__bytecode__PredId_215 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 460 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Arity_216 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 460 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__IsFunc_217 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 460 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__ProcId_218 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));

#line 461 "bytecode.m"
              {
#line 461 "bytecode.m"
                bytecode_backend__bytecode__debug_module_id_3_p_0(bytecode_backend__bytecode__ModuleId_214);
              }
#line 462 "bytecode.m"
              {
#line 462 "bytecode.m"
                bytecode_backend__bytecode__debug_pred_id_3_p_0(bytecode_backend__bytecode__PredId_215);
              }
#line 463 "bytecode.m"
              {
#line 463 "bytecode.m"
                bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__Arity_216);
              }
#line 464 "bytecode.m"
              {
#line 464 "bytecode.m"
                bytecode_backend__bytecode__debug_is_func_3_p_0(bytecode_backend__bytecode__IsFunc_217);
              }
#line 465 "bytecode.m"
              {
#line 465 "bytecode.m"
                bytecode_backend__bytecode__debug_proc_id_3_p_0(bytecode_backend__bytecode__ProcId_218);
#line 465 "bytecode.m"
                return;
              }
#line 460 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 24:
#line 467 "bytecode.m"
            {
#line 467 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__PredVar_227 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 467 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__InVarCount_228 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 467 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__OutVarCount_229 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 467 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Detism_230 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));

#line 468 "bytecode.m"
              {
#line 468 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__PredVar_227);
              }
#line 469 "bytecode.m"
              {
#line 469 "bytecode.m"
                bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__InVarCount_228);
              }
#line 470 "bytecode.m"
              {
#line 470 "bytecode.m"
                bytecode_backend__bytecode__debug_length_3_p_0(bytecode_backend__bytecode__OutVarCount_229);
              }
#line 471 "bytecode.m"
              {
#line 471 "bytecode.m"
                bytecode_backend__bytecode__debug_determinism_3_p_0(bytecode_backend__bytecode__Detism_230);
#line 471 "bytecode.m"
                return;
              }
#line 467 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 25:
#line 472 "bytecode.m"
            {
#line 472 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Binop_238 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var1_239 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 472 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var2_240 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 472 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var3_241 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));

#line 473 "bytecode.m"
              {
#line 473 "bytecode.m"
                bytecode_backend__bytecode__debug_binop_3_p_0(bytecode_backend__bytecode__Binop_238);
              }
#line 474 "bytecode.m"
              {
#line 474 "bytecode.m"
                bytecode_backend__bytecode__debug_arg_3_p_0(bytecode_backend__bytecode__Var1_239);
              }
#line 475 "bytecode.m"
              {
#line 475 "bytecode.m"
                bytecode_backend__bytecode__debug_arg_3_p_0(bytecode_backend__bytecode__Var2_240);
              }
#line 476 "bytecode.m"
              {
#line 476 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var3_241);
#line 476 "bytecode.m"
                return;
              }
#line 472 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 26:
#line 477 "bytecode.m"
            {
#line 477 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Unop_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 477 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var1_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 477 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var2_251 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 478 "bytecode.m"
              {
#line 478 "bytecode.m"
                bytecode_backend__bytecode__debug_unop_3_p_0(bytecode_backend__bytecode__Unop_249);
              }
#line 479 "bytecode.m"
              {
#line 479 "bytecode.m"
                bytecode_backend__bytecode__debug_arg_3_p_0(bytecode_backend__bytecode__Var1_250);
              }
#line 480 "bytecode.m"
              {
#line 480 "bytecode.m"
                bytecode_backend__bytecode__debug_var_3_p_0(bytecode_backend__bytecode__Var2_251);
#line 480 "bytecode.m"
                return;
              }
#line 477 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 27:
#line 481 "bytecode.m"
            {
#line 481 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Binop_258 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 481 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var1_259 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 481 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var2_260 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 482 "bytecode.m"
              {
#line 482 "bytecode.m"
                bytecode_backend__bytecode__debug_binop_3_p_0(bytecode_backend__bytecode__Binop_258);
              }
#line 483 "bytecode.m"
              {
#line 483 "bytecode.m"
                bytecode_backend__bytecode__debug_arg_3_p_0(bytecode_backend__bytecode__Var1_259);
              }
#line 484 "bytecode.m"
              {
#line 484 "bytecode.m"
                bytecode_backend__bytecode__debug_arg_3_p_0(bytecode_backend__bytecode__Var2_260);
#line 484 "bytecode.m"
                return;
              }
#line 481 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 28:
#line 485 "bytecode.m"
            {
#line 485 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Unop_267 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 485 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var1_268 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 486 "bytecode.m"
              {
#line 486 "bytecode.m"
                bytecode_backend__bytecode__debug_unop_3_p_0(bytecode_backend__bytecode__Unop_267);
              }
#line 487 "bytecode.m"
              {
#line 487 "bytecode.m"
                bytecode_backend__bytecode__debug_arg_3_p_0(bytecode_backend__bytecode__Var1_268);
#line 487 "bytecode.m"
                return;
              }
#line 485 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
          case (MR_Integer) 29:
#line 491 "bytecode.m"
            {
#line 491 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Line_283 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 492 "bytecode.m"
              {
#line 492 "bytecode.m"
                bytecode_backend__bytecode__debug_int_3_p_0(bytecode_backend__bytecode__Line_283);
#line 492 "bytecode.m"
                return;
              }
#line 491 "bytecode.m"
            }
#line 365 "bytecode.m"
            break;
#line 365 "bytecode.m"
        }
#line 365 "bytecode.m"
        break;
#line 365 "bytecode.m"
    }
#line 365 "bytecode.m"
  }
#line 363 "bytecode.m"
}

#line 266 "bytecode.m"
static MR_bool MR_CALL 
bytecode_backend__bytecode__output_args_3_p_0_1(
#line 266 "bytecode.m"
  MR_Box bytecode_backend__bytecode__closure_arg)
#line 266 "bytecode.m"
{
#line 266 "bytecode.m"
  {
#line 266 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 266 "bytecode.m"
    MR_Box bytecode_backend__bytecode__closure = bytecode_backend__bytecode__closure_arg;

#line 266 "bytecode.m"
    {
#line 266 "bytecode.m"
      return bytecode_backend__bytecode__succeeded = bytecode_backend__bytecode__IntroducedFrom__pred__output_args__266__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__closure, (MR_Integer) 4))));
    }
#line 266 "bytecode.m"
    return bytecode_backend__bytecode__succeeded;
#line 266 "bytecode.m"
  }
#line 266 "bytecode.m"
}

#line 229 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_args_3_p_0(
#line 229 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 229 "bytecode.m"
{
#line 231 "bytecode.m"
  {
#line 231 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;

#line 231 "bytecode.m"
#line 231 "bytecode.m"
    switch (MR_tag((MR_Word) bytecode_backend__bytecode__HeadVar__1_1)) {
#line 231 "bytecode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 231 "bytecode.m"
      case (MR_Integer) 0:
#line 231 "bytecode.m"
#line 231 "bytecode.m"
        switch (MR_unmkbody(bytecode_backend__bytecode__HeadVar__1_1)) {
#line 231 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 231 "bytecode.m"
          case (MR_Integer) 0:
#line 236 "bytecode.m"
            {
#line 236 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 1:
#line 247 "bytecode.m"
            {
#line 247 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 2:
#line 252 "bytecode.m"
            {
#line 252 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 3:
#line 260 "bytecode.m"
            {
#line 260 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 4:
#line 280 "bytecode.m"
            {
#line 280 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 5:
#line 286 "bytecode.m"
            {
#line 286 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 6:
#line 356 "bytecode.m"
            {
#line 356 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 7:
#line 357 "bytecode.m"
            {
#line 357 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 8:
#line 358 "bytecode.m"
            {
#line 358 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 9:
#line 361 "bytecode.m"
            {
#line 361 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
        }
#line 231 "bytecode.m"
        break;
#line 231 "bytecode.m"
      case (MR_Integer) 1:
#line 231 "bytecode.m"
        {
#line 231 "bytecode.m"
          MR_String bytecode_backend__bytecode__PredId_4 = ((MR_String) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 231 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__PredArity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 231 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__IsFunc_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 231 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__ProcCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 232 "bytecode.m"
          {
#line 232 "bytecode.m"
            bytecode_backend__bytecode__output_pred_id_3_p_0(bytecode_backend__bytecode__PredId_4);
          }
#line 233 "bytecode.m"
          {
#line 233 "bytecode.m"
            bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__PredArity_5);
          }
#line 234 "bytecode.m"
          {
#line 234 "bytecode.m"
            bytecode_backend__bytecode__output_is_func_3_p_0(bytecode_backend__bytecode__IsFunc_6);
          }
#line 235 "bytecode.m"
          {
#line 235 "bytecode.m"
            bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__ProcCount_7);
#line 235 "bytecode.m"
            return;
          }
#line 231 "bytecode.m"
        }
#line 231 "bytecode.m"
        break;
#line 231 "bytecode.m"
      case (MR_Integer) 2:
#line 238 "bytecode.m"
        {
#line 238 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "bytecode.m"
          MR_Word bytecode_backend__bytecode__Detism_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__LabelCount_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__LabelId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 238 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__TempCount_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 238 "bytecode.m"
          MR_Word bytecode_backend__bytecode__Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));
#line 238 "bytecode.m"
          MR_Integer bytecode_backend__bytecode__VarCount_25;

#line 239 "bytecode.m"
          {
#line 239 "bytecode.m"
            bytecode_backend__bytecode__output_proc_id_3_p_0(bytecode_backend__bytecode__ProcId_18);
          }
#line 240 "bytecode.m"
          {
#line 240 "bytecode.m"
            bytecode_backend__bytecode__output_determinism_3_p_0(bytecode_backend__bytecode__Detism_19);
          }
#line 241 "bytecode.m"
          {
#line 241 "bytecode.m"
            bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__LabelCount_20);
          }
#line 242 "bytecode.m"
          {
#line 242 "bytecode.m"
            bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__LabelId_21);
          }
#line 243 "bytecode.m"
          {
#line 243 "bytecode.m"
            bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__TempCount_22);
          }
#line 244 "bytecode.m"
          {
#line 244 "bytecode.m"
            mercury__list__length_2_p_0((MR_Word) &bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0, bytecode_backend__bytecode__Vars_23, &bytecode_backend__bytecode__VarCount_25);
          }
#line 245 "bytecode.m"
          {
#line 245 "bytecode.m"
            bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__VarCount_25);
          }
#line 246 "bytecode.m"
          {
#line 246 "bytecode.m"
            bytecode_backend__bytecode__output_var_infos_3_p_0(bytecode_backend__bytecode__Vars_23);
#line 246 "bytecode.m"
            return;
          }
#line 238 "bytecode.m"
        }
#line 231 "bytecode.m"
        break;
#line 231 "bytecode.m"
      case (MR_Integer) 3:
#line 231 "bytecode.m"
#line 231 "bytecode.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)))) {
#line 231 "bytecode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 231 "bytecode.m"
          case (MR_Integer) 0:
#line 248 "bytecode.m"
            {
#line 248 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 249 "bytecode.m"
              {
#line 249 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__LabelId_38);
#line 249 "bytecode.m"
                return;
              }
#line 248 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 1:
#line 250 "bytecode.m"
            {
#line 250 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 251 "bytecode.m"
              {
#line 251 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__LabelId_43);
#line 251 "bytecode.m"
                return;
              }
#line 250 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 2:
#line 253 "bytecode.m"
            {
#line 253 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 254 "bytecode.m"
              {
#line 254 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__LabelId_51);
#line 254 "bytecode.m"
                return;
              }
#line 253 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 3:
#line 255 "bytecode.m"
            {
#line 255 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 256 "bytecode.m"
              {
#line 256 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__LabelId_56);
#line 256 "bytecode.m"
                return;
              }
#line 255 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 4:
#line 257 "bytecode.m"
            {
#line 257 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 257 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 258 "bytecode.m"
              {
#line 258 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var_61);
              }
#line 259 "bytecode.m"
              {
#line 259 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__LabelId_62);
#line 259 "bytecode.m"
                return;
              }
#line 257 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 5:
#line 262 "bytecode.m"
            {
#line 262 "bytecode.m"
              MR_Word bytecode_backend__bytecode__MainConsId_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "bytecode.m"
              MR_Word bytecode_backend__bytecode__OtherConsIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 262 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__NextLabelId_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 262 "bytecode.m"
              MR_Word bytecode_backend__bytecode__V_78_78;

#line 263 "bytecode.m"
              {
#line 263 "bytecode.m"
                bytecode_backend__bytecode__output_cons_id_3_p_0(bytecode_backend__bytecode__MainConsId_71);
              }
#line 266 "bytecode.m"
              {
#line 266 "bytecode.m"
                bytecode_backend__bytecode__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 266 "bytecode.m"
                MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_78_78, 0) = ((MR_Box) (&bytecode_backend__bytecode_scalar_common_3[0]));
#line 266 "bytecode.m"
                MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_78_78, 1) = ((MR_Box) (bytecode_backend__bytecode__output_args_3_p_0_1));
#line 266 "bytecode.m"
                MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 266 "bytecode.m"
                MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_78_78, 3) = ((MR_Box) (bytecode_backend__bytecode__OtherConsIds_72));
#line 266 "bytecode.m"
                MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__V_78_78, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "bytecode.m"
              }
#line 266 "bytecode.m"
              {
#line 266 "bytecode.m"
                mercury__require__expect_4_p_0(bytecode_backend__bytecode__V_78_78, (MR_String) "bytecode_backend.bytecode", (MR_String) "predicate \140bytecode_backend.bytecode.output_args\'/3", (MR_String) "OtherConsIds");
              }
#line 267 "bytecode.m"
              {
#line 267 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__NextLabelId_73);
#line 267 "bytecode.m"
                return;
              }
#line 262 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 6:
#line 268 "bytecode.m"
            {
#line 268 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 269 "bytecode.m"
              {
#line 269 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__LabelId_84);
#line 269 "bytecode.m"
                return;
              }
#line 268 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 7:
#line 270 "bytecode.m"
            {
#line 270 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__ElseLabelId_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FollowLabelId_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 270 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_91 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 271 "bytecode.m"
              {
#line 271 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__ElseLabelId_89);
              }
#line 272 "bytecode.m"
              {
#line 272 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__FollowLabelId_90);
              }
#line 273 "bytecode.m"
              {
#line 273 "bytecode.m"
                bytecode_backend__bytecode__output_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_91);
#line 273 "bytecode.m"
                return;
              }
#line 270 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 8:
#line 274 "bytecode.m"
            {
#line 274 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 275 "bytecode.m"
              {
#line 275 "bytecode.m"
                bytecode_backend__bytecode__output_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_98);
#line 275 "bytecode.m"
                return;
              }
#line 274 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 9:
#line 276 "bytecode.m"
            {
#line 276 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FollowLabelId_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 277 "bytecode.m"
              {
#line 277 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__FollowLabelId_103);
#line 277 "bytecode.m"
                return;
              }
#line 276 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 10:
#line 278 "bytecode.m"
            {
#line 278 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 279 "bytecode.m"
              {
#line 279 "bytecode.m"
                bytecode_backend__bytecode__output_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_108);
#line 279 "bytecode.m"
                return;
              }
#line 278 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 11:
#line 281 "bytecode.m"
            {
#line 281 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_116 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 281 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__LabelId_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 282 "bytecode.m"
              {
#line 282 "bytecode.m"
                bytecode_backend__bytecode__output_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_116);
              }
#line 283 "bytecode.m"
              {
#line 283 "bytecode.m"
                bytecode_backend__bytecode__output_label_id_3_p_0(bytecode_backend__bytecode__LabelId_117);
#line 283 "bytecode.m"
                return;
              }
#line 281 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 12:
#line 284 "bytecode.m"
            {
#line 284 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__FramePtrTemp_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 285 "bytecode.m"
              {
#line 285 "bytecode.m"
                bytecode_backend__bytecode__output_temp_3_p_0(bytecode_backend__bytecode__FramePtrTemp_123);
#line 285 "bytecode.m"
                return;
              }
#line 284 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 13:
#line 287 "bytecode.m"
            {
#line 287 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Temp_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 288 "bytecode.m"
              {
#line 288 "bytecode.m"
                bytecode_backend__bytecode__output_temp_3_p_0(bytecode_backend__bytecode__Temp_131);
#line 288 "bytecode.m"
                return;
              }
#line 287 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 14:
#line 289 "bytecode.m"
            {
#line 289 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Temp_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 290 "bytecode.m"
              {
#line 290 "bytecode.m"
                bytecode_backend__bytecode__output_temp_3_p_0(bytecode_backend__bytecode__Temp_136);
#line 290 "bytecode.m"
                return;
              }
#line 289 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 15:
#line 291 "bytecode.m"
            {
#line 291 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var1_141 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 291 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var2_142 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 292 "bytecode.m"
              {
#line 292 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var1_141);
              }
#line 293 "bytecode.m"
              {
#line 293 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var2_142);
#line 293 "bytecode.m"
                return;
              }
#line 291 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 16:
#line 294 "bytecode.m"
            {
#line 294 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var1_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 294 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var2_149 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 294 "bytecode.m"
              MR_Word bytecode_backend__bytecode__TestId_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 295 "bytecode.m"
              {
#line 295 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var1_148);
              }
#line 296 "bytecode.m"
              {
#line 296 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var2_149);
              }
#line 297 "bytecode.m"
              {
#line 297 "bytecode.m"
                bytecode_backend__bytecode__output_test_id_3_p_0(bytecode_backend__bytecode__TestId_150);
#line 297 "bytecode.m"
                return;
              }
#line 294 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 17:
#line 298 "bytecode.m"
            {
#line 298 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_157 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ConsId_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 298 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Vars_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 298 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Length_161;

#line 299 "bytecode.m"
              {
#line 299 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var_157);
              }
#line 300 "bytecode.m"
              {
#line 300 "bytecode.m"
                bytecode_backend__bytecode__output_cons_id_3_p_0(bytecode_backend__bytecode__ConsId_158);
              }
#line 301 "bytecode.m"
              {
#line 301 "bytecode.m"
                mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode__Vars_159, &bytecode_backend__bytecode__Length_161);
              }
#line 302 "bytecode.m"
              {
#line 302 "bytecode.m"
                bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__Length_161);
              }
#line 303 "bytecode.m"
              {
#line 303 "bytecode.m"
                bytecode_backend__bytecode__output_vars_3_p_0(bytecode_backend__bytecode__Vars_159);
#line 303 "bytecode.m"
                return;
              }
#line 298 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 18:
#line 304 "bytecode.m"
            {
#line 304 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_168 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 304 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ConsId_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 304 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Vars_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 304 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Length_172;

#line 305 "bytecode.m"
              {
#line 305 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var_168);
              }
#line 306 "bytecode.m"
              {
#line 306 "bytecode.m"
                bytecode_backend__bytecode__output_cons_id_3_p_0(bytecode_backend__bytecode__ConsId_169);
              }
#line 307 "bytecode.m"
              {
#line 307 "bytecode.m"
                mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, bytecode_backend__bytecode__Vars_170, &bytecode_backend__bytecode__Length_172);
              }
#line 308 "bytecode.m"
              {
#line 308 "bytecode.m"
                bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__Length_172);
              }
#line 309 "bytecode.m"
              {
#line 309 "bytecode.m"
                bytecode_backend__bytecode__output_vars_3_p_0(bytecode_backend__bytecode__Vars_170);
#line 309 "bytecode.m"
                return;
              }
#line 304 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 19:
#line 310 "bytecode.m"
            {
#line 310 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_179 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 310 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ConsId_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 310 "bytecode.m"
              MR_Word bytecode_backend__bytecode__VarDirs_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 310 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Length_183;

#line 311 "bytecode.m"
              {
#line 311 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var_179);
              }
#line 312 "bytecode.m"
              {
#line 312 "bytecode.m"
                bytecode_backend__bytecode__output_cons_id_3_p_0(bytecode_backend__bytecode__ConsId_180);
              }
#line 313 "bytecode.m"
              {
#line 313 "bytecode.m"
                mercury__list__length_2_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_2[0], bytecode_backend__bytecode__VarDirs_181, &bytecode_backend__bytecode__Length_183);
              }
#line 314 "bytecode.m"
              {
#line 314 "bytecode.m"
                bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__Length_183);
              }
#line 315 "bytecode.m"
              {
#line 315 "bytecode.m"
                bytecode_backend__bytecode__output_var_dirs_3_p_0(bytecode_backend__bytecode__VarDirs_181);
#line 315 "bytecode.m"
                return;
              }
#line 310 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 20:
#line 316 "bytecode.m"
            {
#line 316 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_190 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 316 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ConsId_191 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 316 "bytecode.m"
              MR_Word bytecode_backend__bytecode__VarDirs_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 316 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Length_194;

#line 317 "bytecode.m"
              {
#line 317 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var_190);
              }
#line 318 "bytecode.m"
              {
#line 318 "bytecode.m"
                bytecode_backend__bytecode__output_cons_id_3_p_0(bytecode_backend__bytecode__ConsId_191);
              }
#line 319 "bytecode.m"
              {
#line 319 "bytecode.m"
                mercury__list__length_2_p_0((MR_Word) &bytecode_backend__bytecode_scalar_common_2[0], bytecode_backend__bytecode__VarDirs_192, &bytecode_backend__bytecode__Length_194);
              }
#line 320 "bytecode.m"
              {
#line 320 "bytecode.m"
                bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__Length_194);
              }
#line 321 "bytecode.m"
              {
#line 321 "bytecode.m"
                bytecode_backend__bytecode__output_var_dirs_3_p_0(bytecode_backend__bytecode__VarDirs_192);
#line 321 "bytecode.m"
                return;
              }
#line 316 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 21:
#line 322 "bytecode.m"
            {
#line 322 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__RegNum_202 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 322 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_203 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 323 "bytecode.m"
              {
#line 323 "bytecode.m"
                bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_p_0(bytecode_backend__bytecode__RegNum_202);
              }
#line 324 "bytecode.m"
              {
#line 324 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var_203);
#line 324 "bytecode.m"
                return;
              }
#line 322 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 22:
#line 325 "bytecode.m"
            {
#line 325 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__RegNum_210 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 325 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var_211 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 326 "bytecode.m"
              {
#line 326 "bytecode.m"
                bytecode_backend__bytecode__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_114_101_103_95_95_91_49_93_95_48_4_p_0(bytecode_backend__bytecode__RegNum_210);
              }
#line 327 "bytecode.m"
              {
#line 327 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var_211);
#line 327 "bytecode.m"
                return;
              }
#line 325 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 23:
#line 328 "bytecode.m"
            {
#line 328 "bytecode.m"
              MR_Word bytecode_backend__bytecode__ModuleId_217 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 328 "bytecode.m"
              MR_String bytecode_backend__bytecode__PredId_218 = ((MR_String) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 328 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Arity_219 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 328 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__IsFunc_220 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));
#line 328 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__ProcId_221 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 5)));

#line 329 "bytecode.m"
              {
#line 329 "bytecode.m"
                bytecode_backend__bytecode__output_module_id_3_p_0(bytecode_backend__bytecode__ModuleId_217);
              }
#line 330 "bytecode.m"
              {
#line 330 "bytecode.m"
                bytecode_backend__bytecode__output_pred_id_3_p_0(bytecode_backend__bytecode__PredId_218);
              }
#line 331 "bytecode.m"
              {
#line 331 "bytecode.m"
                bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__Arity_219);
              }
#line 332 "bytecode.m"
              {
#line 332 "bytecode.m"
                bytecode_backend__bytecode__output_is_func_3_p_0(bytecode_backend__bytecode__IsFunc_220);
              }
#line 333 "bytecode.m"
              {
#line 333 "bytecode.m"
                bytecode_backend__bytecode__output_proc_id_3_p_0(bytecode_backend__bytecode__ProcId_221);
#line 333 "bytecode.m"
                return;
              }
#line 328 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 24:
#line 335 "bytecode.m"
            {
#line 335 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__PredVar_230 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__InVarCount_231 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 335 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__OutVarCount_232 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 335 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Detism_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));

#line 336 "bytecode.m"
              {
#line 336 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__PredVar_230);
              }
#line 337 "bytecode.m"
              {
#line 337 "bytecode.m"
                bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__InVarCount_231);
              }
#line 338 "bytecode.m"
              {
#line 338 "bytecode.m"
                bytecode_backend__bytecode__output_length_3_p_0(bytecode_backend__bytecode__OutVarCount_232);
              }
#line 339 "bytecode.m"
              {
#line 339 "bytecode.m"
                bytecode_backend__bytecode__output_determinism_3_p_0(bytecode_backend__bytecode__Detism_233);
#line 339 "bytecode.m"
                return;
              }
#line 335 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 25:
#line 340 "bytecode.m"
            {
#line 340 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Binop_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var1_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 340 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var2_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));
#line 340 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var3_244 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 4)));

#line 341 "bytecode.m"
              {
#line 341 "bytecode.m"
                bytecode_backend__bytecode__output_binop_3_p_0(bytecode_backend__bytecode__Binop_241);
              }
#line 342 "bytecode.m"
              {
#line 342 "bytecode.m"
                bytecode_backend__bytecode__output_arg_3_p_0(bytecode_backend__bytecode__Var1_242);
              }
#line 343 "bytecode.m"
              {
#line 343 "bytecode.m"
                bytecode_backend__bytecode__output_arg_3_p_0(bytecode_backend__bytecode__Var2_243);
              }
#line 344 "bytecode.m"
              {
#line 344 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var3_244);
#line 344 "bytecode.m"
                return;
              }
#line 340 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 26:
#line 345 "bytecode.m"
            {
#line 345 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Unop_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 345 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var1_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 345 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Var2_254 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 346 "bytecode.m"
              {
#line 346 "bytecode.m"
                bytecode_backend__bytecode__output_unop_3_p_0(bytecode_backend__bytecode__Unop_252);
              }
#line 347 "bytecode.m"
              {
#line 347 "bytecode.m"
                bytecode_backend__bytecode__output_arg_3_p_0(bytecode_backend__bytecode__Var1_253);
              }
#line 348 "bytecode.m"
              {
#line 348 "bytecode.m"
                bytecode_backend__bytecode__output_var_3_p_0(bytecode_backend__bytecode__Var2_254);
#line 348 "bytecode.m"
                return;
              }
#line 345 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 27:
#line 349 "bytecode.m"
            {
#line 349 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Binop_261 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 349 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var1_262 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));
#line 349 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var2_263 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 3)));

#line 350 "bytecode.m"
              {
#line 350 "bytecode.m"
                bytecode_backend__bytecode__output_binop_3_p_0(bytecode_backend__bytecode__Binop_261);
              }
#line 351 "bytecode.m"
              {
#line 351 "bytecode.m"
                bytecode_backend__bytecode__output_arg_3_p_0(bytecode_backend__bytecode__Var1_262);
              }
#line 352 "bytecode.m"
              {
#line 352 "bytecode.m"
                bytecode_backend__bytecode__output_arg_3_p_0(bytecode_backend__bytecode__Var2_263);
#line 352 "bytecode.m"
                return;
              }
#line 349 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 28:
#line 353 "bytecode.m"
            {
#line 353 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Unop_270 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 353 "bytecode.m"
              MR_Word bytecode_backend__bytecode__Var1_271 = ((MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 2)));

#line 354 "bytecode.m"
              {
#line 354 "bytecode.m"
                bytecode_backend__bytecode__output_unop_3_p_0(bytecode_backend__bytecode__Unop_270);
              }
#line 355 "bytecode.m"
              {
#line 355 "bytecode.m"
                bytecode_backend__bytecode__output_arg_3_p_0(bytecode_backend__bytecode__Var1_271);
#line 355 "bytecode.m"
                return;
              }
#line 353 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
          case (MR_Integer) 29:
#line 359 "bytecode.m"
            {
#line 359 "bytecode.m"
              MR_Integer bytecode_backend__bytecode__Line_286 = ((MR_Integer) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));

#line 360 "bytecode.m"
              {
#line 360 "bytecode.m"
                backend_libs__bytecode_data__output_short_3_p_0(bytecode_backend__bytecode__Line_286);
#line 360 "bytecode.m"
                return;
              }
#line 359 "bytecode.m"
            }
#line 231 "bytecode.m"
            break;
#line 231 "bytecode.m"
        }
#line 231 "bytecode.m"
        break;
#line 231 "bytecode.m"
    }
#line 231 "bytecode.m"
  }
#line 229 "bytecode.m"
}

#line 219 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_list_3_p_0(
#line 219 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 219 "bytecode.m"
{
#line 221 "bytecode.m"
  while (MR_TRUE)
#line 221 "bytecode.m"
    {
#line 221 "bytecode.m"
      /* tailcall optimized into a loop */
#line 221 "bytecode.m"
      {
#line 221 "bytecode.m"
        MR_bool bytecode_backend__bytecode__succeeded;

#line 221 "bytecode.m"
        if ((bytecode_backend__bytecode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "bytecode.m"
          {
#line 221 "bytecode.m"
          }
#line 221 "bytecode.m"
        else
#line 222 "bytecode.m"
          {
#line 222 "bytecode.m"
            MR_Word bytecode_backend__bytecode__ByteCode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "bytecode.m"
            MR_Word bytecode_backend__bytecode__ByteCodes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "bytecode.m"
            MR_String bytecode_backend__bytecode__Debug_10;

#line 967 "bytecode.m"
#line 967 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__ByteCode_7)) {
#line 967 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 967 "bytecode.m"
              case (MR_Integer) 0:
#line 967 "bytecode.m"
#line 967 "bytecode.m"
                switch (MR_unmkbody(bytecode_backend__bytecode__ByteCode_7)) {
#line 967 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 967 "bytecode.m"
                  case (MR_Integer) 0:
#line 968 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_pred";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 1:
#line 970 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_proc";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 2:
#line 973 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_disjunction";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 3:
#line 977 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_switch";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 4:
#line 984 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_if";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 5:
#line 987 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_negation";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 6:
#line 1004 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "semidet_succeed";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 7:
#line 1005 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "semidet_success_check";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 8:
#line 1006 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "fail";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 9:
#line 1008 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "not_supported";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                }
#line 967 "bytecode.m"
                break;
#line 967 "bytecode.m"
              case (MR_Integer) 1:
#line 967 "bytecode.m"
                bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_pred";
#line 967 "bytecode.m"
                break;
#line 967 "bytecode.m"
              case (MR_Integer) 2:
#line 969 "bytecode.m"
                bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_proc";
#line 967 "bytecode.m"
                break;
#line 967 "bytecode.m"
              case (MR_Integer) 3:
#line 967 "bytecode.m"
#line 967 "bytecode.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__ByteCode_7, (MR_Integer) 0)))) {
#line 967 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 967 "bytecode.m"
                  case (MR_Integer) 0:
#line 971 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "label";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 1:
#line 972 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_disjunction";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 2:
#line 974 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_disjunct";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 3:
#line 975 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_disjunct";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 4:
#line 976 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_switch";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 5:
#line 978 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_switch_arm";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 6:
#line 979 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_switch_arm";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 7:
#line 980 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_if";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 8:
#line 981 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_then";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 9:
#line 982 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_then";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 10:
#line 983 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_else";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 11:
#line 985 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_negation";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 12:
#line 986 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_negation_goal";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 13:
#line 988 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "enter_commit";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 14:
#line 989 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "endof_commit";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 15:
#line 990 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "assign";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 16:
#line 991 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "test";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 17:
#line 992 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "construct";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 18:
#line 993 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "deconstruct";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 19:
#line 994 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "complex_construct";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 20:
#line 995 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "complex_deconstruct";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 21:
#line 996 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "place_arg";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 22:
#line 997 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "pickup_arg";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 23:
#line 998 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "call";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 24:
#line 999 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "higher_order_call";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 25:
#line 1000 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "builtin_binop";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 26:
#line 1001 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "builtin_unop";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 27:
#line 1002 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "builtin_bintest";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 28:
#line 1003 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "builtin_untest";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                  case (MR_Integer) 29:
#line 1007 "bytecode.m"
                    bytecode_backend__bytecode__Debug_10 = (MR_String) "context";
#line 967 "bytecode.m"
                    break;
#line 967 "bytecode.m"
                }
#line 967 "bytecode.m"
                break;
#line 967 "bytecode.m"
            }
#line 224 "bytecode.m"
            {
#line 224 "bytecode.m"
              bytecode_backend__bytecode__debug_string_3_p_0(bytecode_backend__bytecode__Debug_10);
            }
#line 225 "bytecode.m"
            {
#line 225 "bytecode.m"
              bytecode_backend__bytecode__debug_args_3_p_0(bytecode_backend__bytecode__ByteCode_7);
            }
#line 226 "bytecode.m"
            {
#line 226 "bytecode.m"
              mercury__io__write_char_3_p_0((MR_Char) 10);
            }
#line 227 "bytecode.m"
            /* direct tailcall eliminated */
#line 227 "bytecode.m"
            {
#line 227 "bytecode.m"
              MR_Word bytecode_backend__bytecode__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode__ByteCodes_8;

#line 227 "bytecode.m"
              bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__HeadVar__1__tmp_copy_1;
#line 227 "bytecode.m"
            }
#line 227 "bytecode.m"
            continue;
#line 222 "bytecode.m"
          }
#line 221 "bytecode.m"
      }
#line 221 "bytecode.m"
      break;
#line 221 "bytecode.m"
    }
#line 219 "bytecode.m"
}

#line 210 "bytecode.m"
static void MR_CALL 
bytecode_backend__bytecode__output_bytecode_list_3_p_0(
#line 210 "bytecode.m"
  MR_Word bytecode_backend__bytecode__HeadVar__1_1)
#line 210 "bytecode.m"
{
#line 212 "bytecode.m"
  while (MR_TRUE)
#line 212 "bytecode.m"
    {
#line 212 "bytecode.m"
      /* tailcall optimized into a loop */
#line 212 "bytecode.m"
      {
#line 212 "bytecode.m"
        MR_bool bytecode_backend__bytecode__succeeded;

#line 212 "bytecode.m"
        if ((bytecode_backend__bytecode__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "bytecode.m"
          {
#line 212 "bytecode.m"
          }
#line 212 "bytecode.m"
        else
#line 213 "bytecode.m"
          {
#line 213 "bytecode.m"
            MR_Word bytecode_backend__bytecode__ByteCode_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "bytecode.m"
            MR_Word bytecode_backend__bytecode__ByteCodes_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), bytecode_backend__bytecode__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "bytecode.m"
            MR_Integer bytecode_backend__bytecode__Byte_10;

#line 922 "bytecode.m"
#line 922 "bytecode.m"
            switch (MR_tag((MR_Word) bytecode_backend__bytecode__ByteCode_7)) {
#line 922 "bytecode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 922 "bytecode.m"
              case (MR_Integer) 0:
#line 922 "bytecode.m"
#line 922 "bytecode.m"
                switch (MR_unmkbody(bytecode_backend__bytecode__ByteCode_7)) {
#line 922 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 922 "bytecode.m"
                  case (MR_Integer) 0:
#line 923 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 1;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 1:
#line 925 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 3;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 2:
#line 928 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 6;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 3:
#line 932 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 10;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 4:
#line 938 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 16;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 5:
#line 940 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 18;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 6:
#line 957 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 35;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 7:
#line 958 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 36;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 8:
#line 959 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 37;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 9:
#line 961 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 39;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                }
#line 922 "bytecode.m"
                break;
#line 922 "bytecode.m"
              case (MR_Integer) 1:
#line 922 "bytecode.m"
                bytecode_backend__bytecode__Byte_10 = (MR_Integer) 0;
#line 922 "bytecode.m"
                break;
#line 922 "bytecode.m"
              case (MR_Integer) 2:
#line 924 "bytecode.m"
                bytecode_backend__bytecode__Byte_10 = (MR_Integer) 2;
#line 922 "bytecode.m"
                break;
#line 922 "bytecode.m"
              case (MR_Integer) 3:
#line 922 "bytecode.m"
#line 922 "bytecode.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), bytecode_backend__bytecode__ByteCode_7, (MR_Integer) 0)))) {
#line 922 "bytecode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 922 "bytecode.m"
                  case (MR_Integer) 0:
#line 926 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 4;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 1:
#line 927 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 5;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 2:
#line 929 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 7;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 3:
#line 930 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 8;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 4:
#line 931 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 9;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 5:
#line 933 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 11;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 6:
#line 934 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 12;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 7:
#line 935 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 13;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 8:
#line 936 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 14;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 9:
#line 937 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 15;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 10:
#line 962 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 40;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 11:
#line 939 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 17;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 12:
#line 963 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 41;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 13:
#line 941 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 19;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 14:
#line 942 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 20;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 15:
#line 943 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 21;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 16:
#line 944 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 22;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 17:
#line 945 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 23;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 18:
#line 946 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 24;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 19:
#line 947 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 25;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 20:
#line 948 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 26;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 21:
#line 949 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 27;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 22:
#line 950 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 28;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 23:
#line 951 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 29;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 24:
#line 952 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 30;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 25:
#line 953 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 31;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 26:
#line 954 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 32;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 27:
#line 955 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 33;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 28:
#line 956 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 34;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                  case (MR_Integer) 29:
#line 960 "bytecode.m"
                    bytecode_backend__bytecode__Byte_10 = (MR_Integer) 38;
#line 922 "bytecode.m"
                    break;
#line 922 "bytecode.m"
                }
#line 922 "bytecode.m"
                break;
#line 922 "bytecode.m"
            }
#line 215 "bytecode.m"
            {
#line 215 "bytecode.m"
              mercury__io__write_byte_3_p_0(bytecode_backend__bytecode__Byte_10);
            }
#line 216 "bytecode.m"
            {
#line 216 "bytecode.m"
              bytecode_backend__bytecode__output_args_3_p_0(bytecode_backend__bytecode__ByteCode_7);
            }
#line 217 "bytecode.m"
            /* direct tailcall eliminated */
#line 217 "bytecode.m"
            {
#line 217 "bytecode.m"
              MR_Word bytecode_backend__bytecode__HeadVar__1__tmp_copy_1 = bytecode_backend__bytecode__ByteCodes_8;

#line 217 "bytecode.m"
              bytecode_backend__bytecode__HeadVar__1_1 = bytecode_backend__bytecode__HeadVar__1__tmp_copy_1;
#line 217 "bytecode.m"
            }
#line 217 "bytecode.m"
            continue;
#line 213 "bytecode.m"
          }
#line 212 "bytecode.m"
      }
#line 212 "bytecode.m"
      break;
#line 212 "bytecode.m"
    }
#line 210 "bytecode.m"
}

#line 145 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode__debug_bytecode_file_4_p_0(
#line 145 "bytecode.m"
  MR_String bytecode_backend__bytecode__FileName_5,
#line 145 "bytecode.m"
  MR_Word bytecode_backend__bytecode__ByteCodes_6)
#line 145 "bytecode.m"
{
#line 187 "bytecode.m"
  {
#line 187 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 187 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Result_8;

#line 188 "bytecode.m"
    {
#line 188 "bytecode.m"
      mercury__io__open_output_4_p_0(bytecode_backend__bytecode__FileName_5, &bytecode_backend__bytecode__Result_8);
    }
#line 199 "bytecode.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode__Result_8)) == (MR_mktag((MR_Integer) 1))))
#line 200 "bytecode.m"
      {
#line 200 "bytecode.m"
        MR_String bytecode_backend__bytecode__ProgName_14;

#line 201 "bytecode.m"
        {
#line 201 "bytecode.m"
          mercury__io__progname_base_4_p_0((MR_String) "byte.m", &bytecode_backend__bytecode__ProgName_14);
        }
#line 202 "bytecode.m"
        {
#line 202 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 203 "bytecode.m"
        {
#line 203 "bytecode.m"
          mercury__io__write_string_3_p_0(bytecode_backend__bytecode__ProgName_14);
        }
#line 204 "bytecode.m"
        {
#line 204 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
        }
#line 205 "bytecode.m"
        {
#line 205 "bytecode.m"
          mercury__io__write_string_3_p_0(bytecode_backend__bytecode__FileName_5);
        }
#line 206 "bytecode.m"
        {
#line 206 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
        }
#line 207 "bytecode.m"
        {
#line 207 "bytecode.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 207 "bytecode.m"
          return;
        }
#line 200 "bytecode.m"
      }
#line 199 "bytecode.m"
    else
#line 190 "bytecode.m"
      {
#line 190 "bytecode.m"
        MR_Word bytecode_backend__bytecode__FileStream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__Result_8, (MR_Integer) 0)));
#line 190 "bytecode.m"
        MR_Word bytecode_backend__bytecode__OutputStream_10;
#line 197 "bytecode.m"
        MR_Word bytecode_backend__bytecode__V_12_12;

#line 191 "bytecode.m"
        {
#line 191 "bytecode.m"
          mercury__io__set_output_stream_4_p_0(bytecode_backend__bytecode__FileStream_9, &bytecode_backend__bytecode__OutputStream_10);
        }
#line 193 "bytecode.m"
        {
#line 193 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) "bytecode_version ");
        }
#line 194 "bytecode.m"
        {
#line 194 "bytecode.m"
          mercury__io__write_int_3_p_0((MR_Integer) 9);
        }
#line 195 "bytecode.m"
        {
#line 195 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 196 "bytecode.m"
        {
#line 196 "bytecode.m"
          bytecode_backend__bytecode__debug_bytecode_list_3_p_0(bytecode_backend__bytecode__ByteCodes_6);
        }
#line 197 "bytecode.m"
        {
#line 197 "bytecode.m"
          mercury__io__set_output_stream_4_p_0(bytecode_backend__bytecode__OutputStream_10, &bytecode_backend__bytecode__V_12_12);
        }
#line 198 "bytecode.m"
        {
#line 198 "bytecode.m"
          mercury__io__close_output_3_p_0(bytecode_backend__bytecode__FileStream_9);
#line 198 "bytecode.m"
          return;
        }
#line 190 "bytecode.m"
      }
#line 187 "bytecode.m"
  }
#line 145 "bytecode.m"
}

#line 142 "bytecode.m"
void MR_CALL 
bytecode_backend__bytecode__output_bytecode_file_4_p_0(
#line 142 "bytecode.m"
  MR_String bytecode_backend__bytecode__FileName_5,
#line 142 "bytecode.m"
  MR_Word bytecode_backend__bytecode__ByteCodes_6)
#line 142 "bytecode.m"
{
#line 166 "bytecode.m"
  {
#line 166 "bytecode.m"
    MR_bool bytecode_backend__bytecode__succeeded;
#line 166 "bytecode.m"
    MR_Word bytecode_backend__bytecode__Result_8;

#line 167 "bytecode.m"
    {
#line 167 "bytecode.m"
      mercury__io__open_binary_output_4_p_0(bytecode_backend__bytecode__FileName_5, &bytecode_backend__bytecode__Result_8);
    }
#line 176 "bytecode.m"
    if (((MR_tag((MR_Word) bytecode_backend__bytecode__Result_8)) == (MR_mktag((MR_Integer) 1))))
#line 177 "bytecode.m"
      {
#line 177 "bytecode.m"
        MR_String bytecode_backend__bytecode__ProgName_14;

#line 178 "bytecode.m"
        {
#line 178 "bytecode.m"
          mercury__io__progname_base_4_p_0((MR_String) "byte.m", &bytecode_backend__bytecode__ProgName_14);
        }
#line 179 "bytecode.m"
        {
#line 179 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 180 "bytecode.m"
        {
#line 180 "bytecode.m"
          mercury__io__write_string_3_p_0(bytecode_backend__bytecode__ProgName_14);
        }
#line 181 "bytecode.m"
        {
#line 181 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) ": can\'t open \140");
        }
#line 182 "bytecode.m"
        {
#line 182 "bytecode.m"
          mercury__io__write_string_3_p_0(bytecode_backend__bytecode__FileName_5);
        }
#line 183 "bytecode.m"
        {
#line 183 "bytecode.m"
          mercury__io__write_string_3_p_0((MR_String) "\' for output\n");
        }
#line 184 "bytecode.m"
        {
#line 184 "bytecode.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 184 "bytecode.m"
          return;
        }
#line 177 "bytecode.m"
      }
#line 176 "bytecode.m"
    else
#line 169 "bytecode.m"
      {
#line 169 "bytecode.m"
        MR_Word bytecode_backend__bytecode__FileStream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), bytecode_backend__bytecode__Result_8, (MR_Integer) 0)));
#line 169 "bytecode.m"
        MR_Word bytecode_backend__bytecode__OutputStream_10;
#line 174 "bytecode.m"
        MR_Word bytecode_backend__bytecode__V_12_12;

#line 170 "bytecode.m"
        {
#line 170 "bytecode.m"
          mercury__io__set_binary_output_stream_4_p_0(bytecode_backend__bytecode__FileStream_9, &bytecode_backend__bytecode__OutputStream_10);
        }
#line 172 "bytecode.m"
        {
#line 172 "bytecode.m"
          backend_libs__bytecode_data__output_short_3_p_0((MR_Integer) 9);
        }
#line 173 "bytecode.m"
        {
#line 173 "bytecode.m"
          bytecode_backend__bytecode__output_bytecode_list_3_p_0(bytecode_backend__bytecode__ByteCodes_6);
        }
#line 174 "bytecode.m"
        {
#line 174 "bytecode.m"
          mercury__io__set_binary_output_stream_4_p_0(bytecode_backend__bytecode__OutputStream_10, &bytecode_backend__bytecode__V_12_12);
        }
#line 175 "bytecode.m"
        {
#line 175 "bytecode.m"
          mercury__io__close_binary_output_3_p_0(bytecode_backend__bytecode__FileStream_9);
#line 175 "bytecode.m"
          return;
        }
#line 169 "bytecode.m"
      }
#line 166 "bytecode.m"
  }
#line 142 "bytecode.m"
}

void mercury__bytecode_backend__bytecode__init(void)
{
}

void mercury__bytecode_backend__bytecode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_arg_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_code_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_cons_tag_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_dir_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_is_func_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_label_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_module_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_pred_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_proc_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_reg_type_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_temp_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_test_id_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_tree_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_0);
	MR_register_type_ctor_info(&bytecode_backend__bytecode__bytecode_backend__bytecode__type_ctor_info_byte_var_info_0);
}

void mercury__bytecode_backend__bytecode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bytecode_backend.bytecode. */
