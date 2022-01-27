/*
** Automatically generated from `hlds_rtti.m'
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


/* :- module hlds.hlds_rtti. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_rtti__init
ENDINIT
*/

#include "hlds.hlds_rtti.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 143 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 146 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 149 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

#line 155 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 158 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 161 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 164 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 167 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 176 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 179 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 182 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 185 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 188 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 191 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 194 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4];

#line 197 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0;

#line 200 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1];

#line 203 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1];

#line 206 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1];

#line 209 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1];

#line 212 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 215 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 218 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0;

#line 221 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16];

#line 224 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16];

#line 227 "hlds.hlds_rtti.c"
static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16];

#line 230 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0;

#line 233 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1];

#line 236 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1];

#line 239 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1];

#line 242 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1];

#line 245 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1];

#line 248 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0;

#line 251 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1];

#line 254 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1;

#line 257 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2;

#line 260 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1];

#line 263 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1];

#line 266 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1];

#line 269 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3];

#line 272 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3];

#line 275 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3];

#line 278 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 281 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 284 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 287 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 290 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4];

#line 293 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4];

#line 296 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0;

#line 299 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1];

#line 302 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1];

#line 305 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1];

#line 308 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1];

#line 311 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1];

#line 314 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0;

#line 317 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2];

#line 320 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1;

#line 323 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1];

#line 326 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1];

#line 329 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2];

#line 332 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2];

#line 335 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2];

#line 338 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 341 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 343 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 346 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 349 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 351 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 353 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 356 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 359 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 361 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 364 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 367 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 369 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 371 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 374 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 377 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 379 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 382 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 385 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 387 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 389 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 392 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 395 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 397 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 400 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 403 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 405 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 407 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 410 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 413 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 415 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 418 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 421 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 423 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 425 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 428 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 431 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 433 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 436 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 439 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 441 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 443 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 446 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 449 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 451 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 454 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 457 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 459 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 461 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 464 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 467 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 469 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 472 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 475 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 477 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 479 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 482 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 485 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 487 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 490 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 493 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 495 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 497 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 500 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 503 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 505 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 508 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 511 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 513 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 515 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 844 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 844 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 897 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__897__1_3_p_0(
#line 897 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 897 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_22,
#line 897 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__LambdaHeadVar__2_23);

#line 679 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__679__1_3_p_0(
#line 679 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 679 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 679 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21);

#line 371 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__371__1_2_f_0(
#line 371 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 371 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_31);

#line 420 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 420 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 420 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 420 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 420 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 420 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 420 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 478 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 478 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 478 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 478 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 478 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 478 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 478 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 466 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 466 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 466 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 472 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 472 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 472 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 897 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 897 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 897 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 897 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2);

#line 878 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 878 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 878 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 878 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 878 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4);

#line 844 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 844 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 833 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 833 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 833 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 833 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 833 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 833 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15);

#line 799 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 799 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 778 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 778 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 749 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 749 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37);

#line 731 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 731 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18);

#line 684 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 684 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 684 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 684 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);

#line 548 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 548 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 548 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 548 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 548 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 548 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 548 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6);

#line 530 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 530 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 530 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 530 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 530 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4);

#line 509 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 509 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 509 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 509 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 509 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4);

#line 827 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 827 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 824 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 824 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 824 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 824 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 824 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 824 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 716 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 716 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 716 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 716 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 716 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 716 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 714 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
#line 714 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 714 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 714 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 714 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 714 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 712 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
#line 712 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 712 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 712 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 712 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 712 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 710 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
#line 710 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 710 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 710 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 710 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 710 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 680 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 680 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 680 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 680 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 680 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 679 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 679 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 679 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 679 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 679 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 371 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 371 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 371 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_7[1][1];




static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_2[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[1])),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[1])),
    ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[2])),
    ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1151 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1159 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1167 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1175 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1184 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1192 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1200 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1209 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1218 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1227 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1236 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1244 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1253 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1262 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1271 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1281 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1289 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1297 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0
};

#line 1305 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0 = {
  (MR_String) "instance_method_constraints",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0,
  NULL,
  NULL,
  NULL
};

#line 1320 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1325 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0
  }
};

#line 1334 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1339 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1] = {
  (MR_Integer) 0
};

#line 1344 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "instance_method_constraints",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0
};

#line 1361 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____prog_var_name_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____prog_var_name_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "prog_var_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1378 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1387 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
  }
};

#line 1395 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0
  }
};

#line 1403 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_origin_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1423 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16] = {
  (MR_String) "rpl_pred_or_func",
  (MR_String) "rpl_this_module",
  (MR_String) "rpl_proc_module",
  (MR_String) "rpl_proc_name",
  (MR_String) "rpl_proc_arity",
  (MR_String) "rpl_proc_arg_types",
  (MR_String) "rpl_pred_id",
  (MR_String) "rpl_proc_id",
  (MR_String) "rpl_proc_headvars",
  (MR_String) "rpl_proc_arg_modes",
  (MR_String) "rpl_proc_interface_detism",
  (MR_String) "rpl_pred_is_imported",
  (MR_String) "rpl_pred_is_pseudo_imported",
  (MR_String) "rpl_pred_info_origin",
  (MR_String) "rpl_proc_is_exported",
  (MR_String) "rpl_proc_is_imported"
};

#line 1443 "hlds.hlds_rtti.c"
static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

#line 1527 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0 = {
  (MR_String) "rtti_proc_label",
  (MR_Integer) 16,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0,
  NULL
};

#line 1542 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1547 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0
  }
};

#line 1556 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1561 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1] = {
  (MR_Integer) 0
};

#line 1566 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_proc_label",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0
};

#line 1583 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1588 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0 = {
  (MR_String) "type_info_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1603 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1608 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1 = {
  (MR_String) "typeclass_info_var",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 1623 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2 = {
  (MR_String) "non_rtti_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1638 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2
};

#line 1643 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0
};

#line 1648 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1653 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2
  }
};

#line 1672 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1679 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1686 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_var_info",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0
};

#line 1703 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1712 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1721 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1730 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1739 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1747 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4] = {
  (MR_String) "rv_tci_varmap",
  (MR_String) "rv_ti_varmap",
  (MR_String) "rv_ti_type_map",
  (MR_String) "rv_tci_constraint_map"
};

#line 1755 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0 = {
  (MR_String) "rtti_varmaps",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0,
  NULL,
  NULL
};

#line 1770 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1775 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0
  }
};

#line 1784 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1789 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1] = {
  (MR_Integer) 0
};

#line 1794 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_varmaps",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0
};

#line 1811 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1816 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0 = {
  (MR_String) "type_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0,
  NULL,
  NULL,
  NULL
};

#line 1831 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1837 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1 = {
  (MR_String) "typeclass_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1,
  NULL,
  NULL,
  NULL
};

#line 1852 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0
};

#line 1857 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1862 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1
  }
};

#line 1876 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1882 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1888 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_locn_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_locn",
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0 },
  {     hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0
};

#line 1905 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1922 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1939 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_constraint_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1956 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_varmap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1973 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 1976 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 1978 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 1980 "hlds.hlds_rtti.c"
{
#line 1982 "hlds.hlds_rtti.c"
  {
#line 1984 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 1987 "hlds.hlds_rtti.c"
    {
#line 1989 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____instance_method_constraints_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 1992 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 1994 "hlds.hlds_rtti.c"
  }
#line 1996 "hlds.hlds_rtti.c"
}

#line 1999 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 2002 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2004 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2006 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2008 "hlds.hlds_rtti.c"
{
#line 2010 "hlds.hlds_rtti.c"
  {
#line 2012 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2015 "hlds.hlds_rtti.c"
    {
#line 2017 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____instance_method_constraints_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2020 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2022 "hlds.hlds_rtti.c"
  }
#line 2024 "hlds.hlds_rtti.c"
}

#line 2027 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 2030 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2032 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2034 "hlds.hlds_rtti.c"
{
#line 2036 "hlds.hlds_rtti.c"
  {
#line 2038 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2041 "hlds.hlds_rtti.c"
    {
#line 2043 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____prog_var_name_0_0(((MR_String) hlds__hlds_rtti__wrapper_arg_1), ((MR_String) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2046 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2048 "hlds.hlds_rtti.c"
  }
#line 2050 "hlds.hlds_rtti.c"
}

#line 2053 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 2056 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2058 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2060 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2062 "hlds.hlds_rtti.c"
{
#line 2064 "hlds.hlds_rtti.c"
  {
#line 2066 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2069 "hlds.hlds_rtti.c"
    {
#line 2071 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____prog_var_name_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_String) hlds__hlds_rtti__wrapper_arg_2), ((MR_String) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2074 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2076 "hlds.hlds_rtti.c"
  }
#line 2078 "hlds.hlds_rtti.c"
}

#line 2081 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 2084 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2086 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2088 "hlds.hlds_rtti.c"
{
#line 2090 "hlds.hlds_rtti.c"
  {
#line 2092 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2095 "hlds.hlds_rtti.c"
    {
#line 2097 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2100 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2102 "hlds.hlds_rtti.c"
  }
#line 2104 "hlds.hlds_rtti.c"
}

#line 2107 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 2110 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2112 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2114 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2116 "hlds.hlds_rtti.c"
{
#line 2118 "hlds.hlds_rtti.c"
  {
#line 2120 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2123 "hlds.hlds_rtti.c"
    {
#line 2125 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2128 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2130 "hlds.hlds_rtti.c"
  }
#line 2132 "hlds.hlds_rtti.c"
}

#line 2135 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 2138 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2140 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2142 "hlds.hlds_rtti.c"
{
#line 2144 "hlds.hlds_rtti.c"
  {
#line 2146 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2149 "hlds.hlds_rtti.c"
    {
#line 2151 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_var_info_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2154 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2156 "hlds.hlds_rtti.c"
  }
#line 2158 "hlds.hlds_rtti.c"
}

#line 2161 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 2164 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2166 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2168 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2170 "hlds.hlds_rtti.c"
{
#line 2172 "hlds.hlds_rtti.c"
  {
#line 2174 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2177 "hlds.hlds_rtti.c"
    {
#line 2179 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_var_info_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2182 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2184 "hlds.hlds_rtti.c"
  }
#line 2186 "hlds.hlds_rtti.c"
}

#line 2189 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 2192 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2194 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2196 "hlds.hlds_rtti.c"
{
#line 2198 "hlds.hlds_rtti.c"
  {
#line 2200 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2203 "hlds.hlds_rtti.c"
    {
#line 2205 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2208 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2210 "hlds.hlds_rtti.c"
  }
#line 2212 "hlds.hlds_rtti.c"
}

#line 2215 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 2218 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2220 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2222 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2224 "hlds.hlds_rtti.c"
{
#line 2226 "hlds.hlds_rtti.c"
  {
#line 2228 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2231 "hlds.hlds_rtti.c"
    {
#line 2233 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2236 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2238 "hlds.hlds_rtti.c"
  }
#line 2240 "hlds.hlds_rtti.c"
}

#line 2243 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 2246 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2248 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2250 "hlds.hlds_rtti.c"
{
#line 2252 "hlds.hlds_rtti.c"
  {
#line 2254 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2257 "hlds.hlds_rtti.c"
    {
#line 2259 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_locn_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2262 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2264 "hlds.hlds_rtti.c"
  }
#line 2266 "hlds.hlds_rtti.c"
}

#line 2269 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 2272 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2274 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2276 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2278 "hlds.hlds_rtti.c"
{
#line 2280 "hlds.hlds_rtti.c"
  {
#line 2282 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2285 "hlds.hlds_rtti.c"
    {
#line 2287 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_locn_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2290 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2292 "hlds.hlds_rtti.c"
  }
#line 2294 "hlds.hlds_rtti.c"
}

#line 2297 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 2300 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2302 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2304 "hlds.hlds_rtti.c"
{
#line 2306 "hlds.hlds_rtti.c"
  {
#line 2308 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2311 "hlds.hlds_rtti.c"
    {
#line 2313 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_type_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2316 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2318 "hlds.hlds_rtti.c"
  }
#line 2320 "hlds.hlds_rtti.c"
}

#line 2323 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 2326 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2328 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2330 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2332 "hlds.hlds_rtti.c"
{
#line 2334 "hlds.hlds_rtti.c"
  {
#line 2336 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2339 "hlds.hlds_rtti.c"
    {
#line 2341 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_type_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2344 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2346 "hlds.hlds_rtti.c"
  }
#line 2348 "hlds.hlds_rtti.c"
}

#line 2351 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 2354 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2356 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2358 "hlds.hlds_rtti.c"
{
#line 2360 "hlds.hlds_rtti.c"
  {
#line 2362 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2365 "hlds.hlds_rtti.c"
    {
#line 2367 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2370 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2372 "hlds.hlds_rtti.c"
  }
#line 2374 "hlds.hlds_rtti.c"
}

#line 2377 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 2380 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2382 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2384 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2386 "hlds.hlds_rtti.c"
{
#line 2388 "hlds.hlds_rtti.c"
  {
#line 2390 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2393 "hlds.hlds_rtti.c"
    {
#line 2395 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2398 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2400 "hlds.hlds_rtti.c"
  }
#line 2402 "hlds.hlds_rtti.c"
}

#line 2405 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 2408 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2410 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2412 "hlds.hlds_rtti.c"
{
#line 2414 "hlds.hlds_rtti.c"
  {
#line 2416 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2419 "hlds.hlds_rtti.c"
    {
#line 2421 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2424 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2426 "hlds.hlds_rtti.c"
  }
#line 2428 "hlds.hlds_rtti.c"
}

#line 2431 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 2434 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2436 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2438 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2440 "hlds.hlds_rtti.c"
{
#line 2442 "hlds.hlds_rtti.c"
  {
#line 2444 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2447 "hlds.hlds_rtti.c"
    {
#line 2449 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2452 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2454 "hlds.hlds_rtti.c"
  }
#line 2456 "hlds.hlds_rtti.c"
}

#line 2459 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 2462 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2464 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2466 "hlds.hlds_rtti.c"
{
#line 2468 "hlds.hlds_rtti.c"
  {
#line 2470 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2473 "hlds.hlds_rtti.c"
    {
#line 2475 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2478 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2480 "hlds.hlds_rtti.c"
  }
#line 2482 "hlds.hlds_rtti.c"
}

#line 2485 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 2488 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2490 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2492 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2494 "hlds.hlds_rtti.c"
{
#line 2496 "hlds.hlds_rtti.c"
  {
#line 2498 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2501 "hlds.hlds_rtti.c"
    {
#line 2503 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2506 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2508 "hlds.hlds_rtti.c"
  }
#line 2510 "hlds.hlds_rtti.c"
}

#line 844 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 844 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 844 "hlds_rtti.m"
{
#line 848 "hlds_rtti.m"
  {
#line 848 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 848 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 848 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 848 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 848 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_11;

#line 850 "hlds_rtti.m"
    {
#line 850 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Args0_10, &hlds__hlds_rtti__Args_11);
    }
#line 851 "hlds_rtti.m"
    {
#line 851 "hlds_rtti.m"
      MR_Word base;
#line 851 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "hlds_rtti.m"
      *hlds__hlds_rtti__Constraint_8 = base;
#line 851 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Name_9));
#line 851 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Args_11));
#line 851 "hlds_rtti.m"
    }
#line 848 "hlds_rtti.m"
  }
#line 844 "hlds_rtti.m"
}

#line 897 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__897__1_3_p_0(
#line 897 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 897 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_22,
#line 897 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__LambdaHeadVar__2_23)
#line 897 "hlds_rtti.m"
{
#line 897 "hlds_rtti.m"
  {
#line 897 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 897 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Locn_19;
#line 898 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_19;

#line 898 "hlds_rtti.m"
    {
#line 898 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TVarMap_3, ((MR_Box) (hlds__hlds_rtti__LambdaHeadVar__1_22)), &hlds__hlds_rtti__conv0_Locn_19);
    }
#line 898 "hlds_rtti.m"
    hlds__hlds_rtti__Locn_19 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_19);
#line 399 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_19)) == (MR_mktag((MR_Integer) 0))))
#line 399 "hlds_rtti.m"
      *hlds__hlds_rtti__LambdaHeadVar__2_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 399 "hlds_rtti.m"
    else
#line 400 "hlds_rtti.m"
      {
#line 400 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_32_32;

#line 400 "hlds_rtti.m"
        *hlds__hlds_rtti__LambdaHeadVar__2_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 400 "hlds_rtti.m"
        hlds__hlds_rtti__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 1)));
#line 400 "hlds_rtti.m"
      }
#line 897 "hlds_rtti.m"
  }
#line 897 "hlds_rtti.m"
}

#line 679 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__679__1_3_p_0(
#line 679 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 679 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 679 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21)
#line 679 "hlds_rtti.m"
{
#line 679 "hlds_rtti.m"
  {
#line 679 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 679 "hlds_rtti.m"
    {
#line 679 "hlds_rtti.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__HeadVar__1_19)), hlds__hlds_rtti__HeadVar__2_20, hlds__hlds_rtti__HeadVar__3_21);
    }
#line 679 "hlds_rtti.m"
  }
#line 679 "hlds_rtti.m"
}

#line 371 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__371__1_2_f_0(
#line 371 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 371 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__LambdaHeadVar__1_31)
#line 371 "hlds_rtti.m"
{
#line 371 "hlds_rtti.m"
  {
#line 371 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 371 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__LambdaHeadVar__2_32;
#line 371 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Name_28;

#line 373 "hlds_rtti.m"
    {
#line 373 "hlds_rtti.m"
      hlds__hlds_rtti__Name_28 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__ProcVarSet_17, hlds__hlds_rtti__LambdaHeadVar__1_31);
    }
#line 372 "hlds_rtti.m"
    {
#line 372 "hlds_rtti.m"
      hlds__hlds_rtti__LambdaHeadVar__2_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 372 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LambdaHeadVar__2_32, 0) = ((MR_Box) (hlds__hlds_rtti__LambdaHeadVar__1_31));
#line 372 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LambdaHeadVar__2_32, 1) = ((MR_Box) (hlds__hlds_rtti__Name_28));
#line 372 "hlds_rtti.m"
    }
#line 371 "hlds_rtti.m"
    return hlds__hlds_rtti__LambdaHeadVar__2_32;
#line 371 "hlds_rtti.m"
  }
#line 371 "hlds_rtti.m"
}

#line 420 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 420 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 420 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 420 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 420 "hlds_rtti.m"
{
#line 420 "hlds_rtti.m"
  {
#line 420 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 420 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 420 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 420 "hlds_rtti.m"
    {
#line 420 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
#line 420 "hlds_rtti.m"
  }
#line 420 "hlds_rtti.m"
}

#line 420 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 420 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 420 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 420 "hlds_rtti.m"
{
#line 420 "hlds_rtti.m"
  {
#line 420 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 420 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 420 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 420 "hlds_rtti.m"
    {
#line 420 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 420 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 420 "hlds_rtti.m"
  }
#line 420 "hlds_rtti.m"
}

#line 478 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 478 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 478 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 478 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 478 "hlds_rtti.m"
{
#line 478 "hlds_rtti.m"
  {
#line 478 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 478 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 478 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 478 "hlds_rtti.m"
    {
#line 478 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
#line 478 "hlds_rtti.m"
  }
#line 478 "hlds_rtti.m"
}

#line 478 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 478 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 478 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 478 "hlds_rtti.m"
{
#line 478 "hlds_rtti.m"
  {
#line 478 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 478 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 478 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 478 "hlds_rtti.m"
    {
#line 478 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 478 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 478 "hlds_rtti.m"
  }
#line 478 "hlds_rtti.m"
}

#line 466 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 466 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 466 "hlds_rtti.m"
{
#line 466 "hlds_rtti.m"
  {
#line 466 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 466 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 466 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 466 "hlds_rtti.m"
    {
#line 466 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
#line 466 "hlds_rtti.m"
  }
#line 466 "hlds_rtti.m"
}

#line 466 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 466 "hlds_rtti.m"
{
#line 466 "hlds_rtti.m"
  {
#line 466 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 466 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 466 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 466 "hlds_rtti.m"
    {
#line 466 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 466 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 466 "hlds_rtti.m"
  }
#line 466 "hlds_rtti.m"
}

#line 472 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 472 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 472 "hlds_rtti.m"
{
#line 472 "hlds_rtti.m"
  {
#line 472 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 472 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 472 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 472 "hlds_rtti.m"
    {
#line 472 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
    }
#line 472 "hlds_rtti.m"
  }
#line 472 "hlds_rtti.m"
}

#line 472 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 472 "hlds_rtti.m"
{
#line 472 "hlds_rtti.m"
  {
#line 472 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 472 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 472 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 472 "hlds_rtti.m"
    {
#line 472 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 472 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 472 "hlds_rtti.m"
  }
#line 472 "hlds_rtti.m"
}

#line 124 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0(
#line 124 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 124 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 124 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 124 "hlds_rtti.m"
{
#line 124 "hlds_rtti.m"
  {
#line 124 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 124 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 124 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_18 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 124 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_17 == hlds__hlds_rtti__CastY_18);
#line 124 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 2940 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "hlds_rtti.m"
    else
#line 124 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 124 "hlds_rtti.m"
      {
#line 124 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 124 "hlds_rtti.m"
        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 124 "hlds_rtti.m"
          {
#line 124 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 124 "hlds_rtti.m"
            {
#line 124 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_22_22)), ((MR_Box) (hlds__hlds_rtti__V_5_5)));
            }
#line 124 "hlds_rtti.m"
          }
#line 124 "hlds_rtti.m"
        else
#line 2967 "hlds.hlds_rtti.c"
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 124 "hlds_rtti.m"
      }
#line 124 "hlds_rtti.m"
    else
#line 124 "hlds_rtti.m"
      {
#line 124 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 124 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 124 "hlds_rtti.m"
        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2982 "hlds.hlds_rtti.c"
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 124 "hlds_rtti.m"
        else
#line 124 "hlds_rtti.m"
          {
#line 124 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 124 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 124 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_16_16;

#line 124 "hlds_rtti.m"
            {
#line 124 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], &hlds__hlds_rtti__V_16_16, ((MR_Box) (hlds__hlds_rtti__V_24_24)), ((MR_Box) (hlds__hlds_rtti__V_14_14)));
            }
#line 3000 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_16_16 == (MR_Integer) 0);
#line 124 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 124 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 124 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_16_16;
#line 124 "hlds_rtti.m"
            else
#line 124 "hlds_rtti.m"
              {
#line 124 "hlds_rtti.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_23_23, hlds__hlds_rtti__V_15_15);
              }
#line 124 "hlds_rtti.m"
          }
#line 124 "hlds_rtti.m"
      }
#line 124 "hlds_rtti.m"
  }
#line 124 "hlds_rtti.m"
}

#line 124 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0(
#line 124 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 124 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 124 "hlds_rtti.m"
{
#line 124 "hlds_rtti.m"
  {
#line 124 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 124 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 124 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 124 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
#line 124 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 124 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 124 "hlds_rtti.m"
    else
#line 124 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 124 "hlds_rtti.m"
      {
#line 124 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_11_11;
#line 124 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4;

#line 124 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 124 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 124 "hlds_rtti.m"
          {
#line 124 "hlds_rtti.m"
            hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3069 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_11_11 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3071 "hlds.hlds_rtti.c"
            {
#line 3073 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_11_11, ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_4_4)));
            }
#line 124 "hlds_rtti.m"
          }
#line 124 "hlds_rtti.m"
      }
#line 124 "hlds_rtti.m"
    else
#line 124 "hlds_rtti.m"
      {
#line 124 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_12_12;
#line 124 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 124 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7;
#line 124 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_8_8;

#line 124 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 124 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 124 "hlds_rtti.m"
          {
#line 124 "hlds_rtti.m"
            hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 124 "hlds_rtti.m"
            hlds__hlds_rtti__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 3105 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_12_12 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3107 "hlds.hlds_rtti.c"
            {
#line 3109 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_12_12, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
            }
#line 124 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 3114 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_6_6 == hlds__hlds_rtti__V_8_8);
#line 124 "hlds_rtti.m"
          }
#line 124 "hlds_rtti.m"
      }
#line 124 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 124 "hlds_rtti.m"
  }
#line 124 "hlds_rtti.m"
}

#line 405 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0(
#line 405 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 405 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 405 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 405 "hlds_rtti.m"
{
#line 405 "hlds_rtti.m"
  {
#line 405 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 405 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 405 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 405 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 405 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3151 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 405 "hlds_rtti.m"
    else
#line 405 "hlds_rtti.m"
      {
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 405 "hlds_rtti.m"
        {
#line 405 "hlds_rtti.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], &hlds__hlds_rtti__V_12_12, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
        }
#line 3181 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 405 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 405 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 405 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 405 "hlds_rtti.m"
        else
#line 405 "hlds_rtti.m"
          {
#line 405 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 405 "hlds_rtti.m"
            {
#line 405 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 3201 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 405 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 405 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 405 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 405 "hlds_rtti.m"
            else
#line 405 "hlds_rtti.m"
              {
#line 405 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 405 "hlds_rtti.m"
                {
#line 405 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 3221 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 405 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 405 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 405 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 405 "hlds_rtti.m"
                else
#line 405 "hlds_rtti.m"
                  {
#line 405 "hlds_rtti.m"
                    {
#line 405 "hlds_rtti.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_7_7)), ((MR_Box) (hlds__hlds_rtti__V_11_11)));
                    }
#line 405 "hlds_rtti.m"
                  }
#line 405 "hlds_rtti.m"
              }
#line 405 "hlds_rtti.m"
          }
#line 405 "hlds_rtti.m"
      }
#line 405 "hlds_rtti.m"
  }
#line 405 "hlds_rtti.m"
}

#line 405 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0(
#line 405 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 405 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 405 "hlds_rtti.m"
{
#line 405 "hlds_rtti.m"
  {
#line 405 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 405 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 405 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 405 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 405 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 405 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 405 "hlds_rtti.m"
    else
#line 405 "hlds_rtti.m"
      {
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_16_16;
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 405 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 3302 "hlds.hlds_rtti.c"
        {
#line 3304 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
        }
#line 405 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 405 "hlds_rtti.m"
          {
#line 3311 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[2];
#line 3313 "hlds.hlds_rtti.c"
            {
#line 3315 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 405 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 405 "hlds_rtti.m"
              {
#line 3322 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[3];
#line 3324 "hlds.hlds_rtti.c"
                {
#line 3326 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 405 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 405 "hlds_rtti.m"
                  {
#line 3333 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__TypeInfo_16_16 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[4];
#line 3335 "hlds.hlds_rtti.c"
                    {
#line 3337 "hlds.hlds_rtti.c"
                      hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_16_16, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                    }
#line 405 "hlds_rtti.m"
                  }
#line 405 "hlds_rtti.m"
              }
#line 405 "hlds_rtti.m"
          }
#line 405 "hlds_rtti.m"
      }
#line 405 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 405 "hlds_rtti.m"
  }
#line 405 "hlds_rtti.m"
}

#line 151 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0(
#line 151 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 151 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 151 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 151 "hlds_rtti.m"
{
#line 151 "hlds_rtti.m"
  {
#line 151 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 151 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 151 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 151 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_16 == hlds__hlds_rtti__CastY_17);
#line 151 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3379 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "hlds_rtti.m"
    else
#line 151 "hlds_rtti.m"
#line 151 "hlds_rtti.m"
      switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) {
#line 151 "hlds_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 151 "hlds_rtti.m"
        case (MR_Integer) 0:
#line 151 "hlds_rtti.m"
#line 151 "hlds_rtti.m"
          switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 151 "hlds_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 151 "hlds_rtti.m"
            case (MR_Integer) 0:
#line 151 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 151 "hlds_rtti.m"
              break;
#line 151 "hlds_rtti.m"
            case (MR_Integer) 1:
#line 3403 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "hlds_rtti.m"
              break;
#line 151 "hlds_rtti.m"
            case (MR_Integer) 2:
#line 3409 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "hlds_rtti.m"
              break;
#line 151 "hlds_rtti.m"
          }
#line 151 "hlds_rtti.m"
          break;
#line 151 "hlds_rtti.m"
        case (MR_Integer) 1:
#line 151 "hlds_rtti.m"
          {
#line 151 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "hlds_rtti.m"
#line 151 "hlds_rtti.m"
            switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 151 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 151 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 3431 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "hlds_rtti.m"
                break;
#line 151 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 151 "hlds_rtti.m"
                {
#line 151 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 151 "hlds_rtti.m"
                  {
#line 151 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____mer_type_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__V_5_5);
                  }
#line 151 "hlds_rtti.m"
                }
#line 151 "hlds_rtti.m"
                break;
#line 151 "hlds_rtti.m"
              case (MR_Integer) 2:
#line 3453 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "hlds_rtti.m"
                break;
#line 151 "hlds_rtti.m"
            }
#line 151 "hlds_rtti.m"
          }
#line 151 "hlds_rtti.m"
          break;
#line 151 "hlds_rtti.m"
        case (MR_Integer) 2:
#line 151 "hlds_rtti.m"
          {
#line 151 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 151 "hlds_rtti.m"
#line 151 "hlds_rtti.m"
            switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) {
#line 151 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 151 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 3477 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "hlds_rtti.m"
                break;
#line 151 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 3483 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "hlds_rtti.m"
                break;
#line 151 "hlds_rtti.m"
              case (MR_Integer) 2:
#line 151 "hlds_rtti.m"
                {
#line 151 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 151 "hlds_rtti.m"
                  {
#line 151 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_21_21, hlds__hlds_rtti__V_12_12);
                  }
#line 151 "hlds_rtti.m"
                }
#line 151 "hlds_rtti.m"
                break;
#line 151 "hlds_rtti.m"
            }
#line 151 "hlds_rtti.m"
          }
#line 151 "hlds_rtti.m"
          break;
#line 151 "hlds_rtti.m"
      }
#line 151 "hlds_rtti.m"
  }
#line 151 "hlds_rtti.m"
}

#line 151 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0(
#line 151 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 151 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 151 "hlds_rtti.m"
{
#line 151 "hlds_rtti.m"
  {
#line 151 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 151 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 151 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 151 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
#line 151 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 151 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 151 "hlds_rtti.m"
    else
#line 151 "hlds_rtti.m"
#line 151 "hlds_rtti.m"
      switch (MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) {
#line 151 "hlds_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 151 "hlds_rtti.m"
        case (MR_Integer) 0:
#line 151 "hlds_rtti.m"
          {
#line 151 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__CastX_7 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 151 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__CastY_8 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 151 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastY_8 == hlds__hlds_rtti__CastX_7);
#line 151 "hlds_rtti.m"
          }
#line 151 "hlds_rtti.m"
          break;
#line 151 "hlds_rtti.m"
        case (MR_Integer) 1:
#line 151 "hlds_rtti.m"
          {
#line 151 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_4_4;

#line 151 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 151 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 151 "hlds_rtti.m"
              {
#line 151 "hlds_rtti.m"
                hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3579 "hlds.hlds_rtti.c"
                {
#line 3581 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_4_4);
                }
#line 151 "hlds_rtti.m"
              }
#line 151 "hlds_rtti.m"
          }
#line 151 "hlds_rtti.m"
          break;
#line 151 "hlds_rtti.m"
        case (MR_Integer) 2:
#line 151 "hlds_rtti.m"
          {
#line 151 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 151 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_6_6;

#line 151 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 151 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 151 "hlds_rtti.m"
              {
#line 151 "hlds_rtti.m"
                hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3607 "hlds.hlds_rtti.c"
                {
#line 3609 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_6_6);
                }
#line 151 "hlds_rtti.m"
              }
#line 151 "hlds_rtti.m"
          }
#line 151 "hlds_rtti.m"
          break;
#line 151 "hlds_rtti.m"
      }
#line 151 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 151 "hlds_rtti.m"
  }
#line 151 "hlds_rtti.m"
}

#line 41 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0(
#line 41 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 41 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 41 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 41 "hlds_rtti.m"
{
#line 41 "hlds_rtti.m"
  {
#line 41 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 41 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_51 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 41 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_52 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 41 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_51 == hlds__hlds_rtti__CastY_52);
#line 41 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3651 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "hlds_rtti.m"
    else
#line 41 "hlds_rtti.m"
      {
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 41 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 41 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 4)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 5)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 6)));
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 7)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 8)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 9)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 11)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_36_36;
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_69_69 = (MR_Integer) hlds__hlds_rtti__V_4_4;
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_70_70 = (MR_Integer) hlds__hlds_rtti__V_20_20;

#line 41 "hlds_rtti.m"
        {
#line 41 "hlds_rtti.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_36_36, hlds__hlds_rtti__V_69_69, hlds__hlds_rtti__V_70_70);
        }
#line 3733 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_36_36 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_36_36;
#line 41 "hlds_rtti.m"
        else
#line 41 "hlds_rtti.m"
          {
#line 41 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_37_37;

#line 41 "hlds_rtti.m"
            {
#line 41 "hlds_rtti.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__hlds_rtti__V_37_37, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
            }
#line 3753 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_37_37 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_37_37;
#line 41 "hlds_rtti.m"
            else
#line 41 "hlds_rtti.m"
              {
#line 41 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_38_38;

#line 41 "hlds_rtti.m"
                {
#line 41 "hlds_rtti.m"
                  mdbcomp__sym_name____Compare____sym_name_0_0(&hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22);
                }
#line 3773 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_38_38 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_38_38;
#line 41 "hlds_rtti.m"
                else
#line 41 "hlds_rtti.m"
                  {
#line 41 "hlds_rtti.m"
                    MR_Word hlds__hlds_rtti__V_39_39;

#line 41 "hlds_rtti.m"
                    {
#line 41 "hlds_rtti.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_rtti__V_39_39, hlds__hlds_rtti__V_7_7, hlds__hlds_rtti__V_23_23);
                    }
#line 3793 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_39_39 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_39_39;
#line 41 "hlds_rtti.m"
                    else
#line 41 "hlds_rtti.m"
                      {
#line 41 "hlds_rtti.m"
                        MR_Word hlds__hlds_rtti__V_40_40;

#line 41 "hlds_rtti.m"
                        {
#line 41 "hlds_rtti.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_40_40, hlds__hlds_rtti__V_8_8, hlds__hlds_rtti__V_24_24);
                        }
#line 3813 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_40_40 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_40_40;
#line 41 "hlds_rtti.m"
                        else
#line 41 "hlds_rtti.m"
                          {
#line 41 "hlds_rtti.m"
                            MR_Word hlds__hlds_rtti__V_41_41;

#line 41 "hlds_rtti.m"
                            {
#line 41 "hlds_rtti.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__V_41_41, ((MR_Box) (hlds__hlds_rtti__V_9_9)), ((MR_Box) (hlds__hlds_rtti__V_25_25)));
                            }
#line 3833 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_41_41 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_41_41;
#line 41 "hlds_rtti.m"
                            else
#line 41 "hlds_rtti.m"
                              {
#line 41 "hlds_rtti.m"
                                MR_Word hlds__hlds_rtti__V_42_42;

#line 41 "hlds_rtti.m"
                                {
#line 41 "hlds_rtti.m"
                                  hlds__hlds_pred____Compare____pred_id_0_0(&hlds__hlds_rtti__V_42_42, hlds__hlds_rtti__V_10_10, hlds__hlds_rtti__V_26_26);
                                }
#line 3853 "hlds.hlds_rtti.c"
                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_42_42 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_42_42;
#line 41 "hlds_rtti.m"
                                else
#line 41 "hlds_rtti.m"
                                  {
#line 41 "hlds_rtti.m"
                                    MR_Word hlds__hlds_rtti__V_43_43;

#line 41 "hlds_rtti.m"
                                    {
#line 41 "hlds_rtti.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_43_43, hlds__hlds_rtti__V_11_11, hlds__hlds_rtti__V_27_27);
                                    }
#line 3873 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_43_43 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_43_43;
#line 41 "hlds_rtti.m"
                                    else
#line 41 "hlds_rtti.m"
                                      {
#line 41 "hlds_rtti.m"
                                        MR_Word hlds__hlds_rtti__V_44_44;

#line 41 "hlds_rtti.m"
                                        {
#line 41 "hlds_rtti.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[5], &hlds__hlds_rtti__V_44_44, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                        }
#line 3893 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_44_44 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_44_44;
#line 41 "hlds_rtti.m"
                                        else
#line 41 "hlds_rtti.m"
                                          {
#line 41 "hlds_rtti.m"
                                            MR_Word hlds__hlds_rtti__V_45_45;

#line 41 "hlds_rtti.m"
                                            {
#line 41 "hlds_rtti.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[6], &hlds__hlds_rtti__V_45_45, ((MR_Box) (hlds__hlds_rtti__V_13_13)), ((MR_Box) (hlds__hlds_rtti__V_29_29)));
                                            }
#line 3913 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_45_45 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_45_45;
#line 41 "hlds_rtti.m"
                                            else
#line 41 "hlds_rtti.m"
                                              {
#line 41 "hlds_rtti.m"
                                                MR_Word hlds__hlds_rtti__V_46_46;
#line 41 "hlds_rtti.m"
                                                MR_Integer hlds__hlds_rtti__V_71_71 = (MR_Integer) hlds__hlds_rtti__V_14_14;
#line 41 "hlds_rtti.m"
                                                MR_Integer hlds__hlds_rtti__V_72_72 = (MR_Integer) hlds__hlds_rtti__V_30_30;

#line 41 "hlds_rtti.m"
                                                {
#line 41 "hlds_rtti.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_46_46, hlds__hlds_rtti__V_71_71, hlds__hlds_rtti__V_72_72);
                                                }
#line 3937 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_46_46 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_46_46;
#line 41 "hlds_rtti.m"
                                                else
#line 41 "hlds_rtti.m"
                                                  {
#line 41 "hlds_rtti.m"
                                                    MR_Word hlds__hlds_rtti__V_47_47;
#line 41 "hlds_rtti.m"
                                                    MR_Integer hlds__hlds_rtti__V_73_73 = (MR_Integer) hlds__hlds_rtti__V_15_15;
#line 41 "hlds_rtti.m"
                                                    MR_Integer hlds__hlds_rtti__V_74_74 = (MR_Integer) hlds__hlds_rtti__V_31_31;

#line 41 "hlds_rtti.m"
                                                    {
#line 41 "hlds_rtti.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_47_47, hlds__hlds_rtti__V_73_73, hlds__hlds_rtti__V_74_74);
                                                    }
#line 3961 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_47_47 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_47_47;
#line 41 "hlds_rtti.m"
                                                    else
#line 41 "hlds_rtti.m"
                                                      {
#line 41 "hlds_rtti.m"
                                                        MR_Word hlds__hlds_rtti__V_48_48;
#line 41 "hlds_rtti.m"
                                                        MR_Integer hlds__hlds_rtti__V_75_75 = (MR_Integer) hlds__hlds_rtti__V_16_16;
#line 41 "hlds_rtti.m"
                                                        MR_Integer hlds__hlds_rtti__V_76_76 = (MR_Integer) hlds__hlds_rtti__V_32_32;

#line 41 "hlds_rtti.m"
                                                        {
#line 41 "hlds_rtti.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_48_48, hlds__hlds_rtti__V_75_75, hlds__hlds_rtti__V_76_76);
                                                        }
#line 3985 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_48_48 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_48_48;
#line 41 "hlds_rtti.m"
                                                        else
#line 41 "hlds_rtti.m"
                                                          {
#line 41 "hlds_rtti.m"
                                                            MR_Word hlds__hlds_rtti__V_49_49;

#line 41 "hlds_rtti.m"
                                                            {
#line 41 "hlds_rtti.m"
                                                              hlds__hlds_pred____Compare____pred_origin_0_0(&hlds__hlds_rtti__V_49_49, hlds__hlds_rtti__V_17_17, hlds__hlds_rtti__V_33_33);
                                                            }
#line 4005 "hlds.hlds_rtti.c"
                                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_49_49 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_49_49;
#line 41 "hlds_rtti.m"
                                                            else
#line 41 "hlds_rtti.m"
                                                              {
#line 41 "hlds_rtti.m"
                                                                MR_Word hlds__hlds_rtti__V_50_50;
#line 41 "hlds_rtti.m"
                                                                MR_Integer hlds__hlds_rtti__V_77_77 = (MR_Integer) hlds__hlds_rtti__V_18_18;
#line 41 "hlds_rtti.m"
                                                                MR_Integer hlds__hlds_rtti__V_78_78 = (MR_Integer) hlds__hlds_rtti__V_34_34;

#line 41 "hlds_rtti.m"
                                                                {
#line 41 "hlds_rtti.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_50_50, hlds__hlds_rtti__V_77_77, hlds__hlds_rtti__V_78_78);
                                                                }
#line 4029 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_50_50 == (MR_Integer) 0);
#line 41 "hlds_rtti.m"
                                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 41 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_50_50;
#line 41 "hlds_rtti.m"
                                                                else
#line 41 "hlds_rtti.m"
                                                                  {
#line 41 "hlds_rtti.m"
                                                                    MR_Integer hlds__hlds_rtti__V_79_79 = (MR_Integer) hlds__hlds_rtti__V_19_19;
#line 41 "hlds_rtti.m"
                                                                    MR_Integer hlds__hlds_rtti__V_80_80 = (MR_Integer) hlds__hlds_rtti__V_35_35;

#line 41 "hlds_rtti.m"
                                                                    {
#line 41 "hlds_rtti.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_79_79, hlds__hlds_rtti__V_80_80);
                                                                    }
#line 41 "hlds_rtti.m"
                                                                  }
#line 41 "hlds_rtti.m"
                                                              }
#line 41 "hlds_rtti.m"
                                                          }
#line 41 "hlds_rtti.m"
                                                      }
#line 41 "hlds_rtti.m"
                                                  }
#line 41 "hlds_rtti.m"
                                              }
#line 41 "hlds_rtti.m"
                                          }
#line 41 "hlds_rtti.m"
                                      }
#line 41 "hlds_rtti.m"
                                  }
#line 41 "hlds_rtti.m"
                              }
#line 41 "hlds_rtti.m"
                          }
#line 41 "hlds_rtti.m"
                      }
#line 41 "hlds_rtti.m"
                  }
#line 41 "hlds_rtti.m"
              }
#line 41 "hlds_rtti.m"
          }
#line 41 "hlds_rtti.m"
      }
#line 41 "hlds_rtti.m"
  }
#line 41 "hlds_rtti.m"
}

#line 41 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0(
#line 41 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 41 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 41 "hlds_rtti.m"
{
#line 41 "hlds_rtti.m"
  {
#line 41 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 41 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_35 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 41 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_36 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 41 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_35 == hlds__hlds_rtti__CastY_36);
#line 41 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 41 "hlds_rtti.m"
    else
#line 41 "hlds_rtti.m"
      {
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_39_39;
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_41_41;
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_42_42;
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 41 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 4)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 5)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 6)));
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 7)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 8)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 9)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 11)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 41 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 41 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 41 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4187 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_3_3 == hlds__hlds_rtti__V_19_19);
#line 41 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
          {
#line 4193 "hlds.hlds_rtti.c"
            {
#line 4195 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_20_20);
            }
#line 41 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
              {
#line 4202 "hlds.hlds_rtti.c"
                {
#line 4204 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
                }
#line 41 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                  {
#line 4211 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22) == 0);
#line 41 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                      {
#line 4217 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_7_7 == hlds__hlds_rtti__V_23_23);
#line 41 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                          {
#line 4223 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__TypeInfo_39_39 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4225 "hlds.hlds_rtti.c"
                            {
#line 4227 "hlds.hlds_rtti.c"
                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_39_39, ((MR_Box) (hlds__hlds_rtti__V_8_8)), ((MR_Box) (hlds__hlds_rtti__V_24_24)));
                            }
#line 41 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                              {
#line 4234 "hlds.hlds_rtti.c"
                                {
#line 4236 "hlds.hlds_rtti.c"
                                  hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_rtti__V_9_9, hlds__hlds_rtti__V_25_25);
                                }
#line 41 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                  {
#line 4243 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_10_10 == hlds__hlds_rtti__V_26_26);
#line 41 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                      {
#line 4249 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__TypeInfo_41_41 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[5];
#line 4251 "hlds.hlds_rtti.c"
                                        {
#line 4253 "hlds.hlds_rtti.c"
                                          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_41_41, ((MR_Box) (hlds__hlds_rtti__V_11_11)), ((MR_Box) (hlds__hlds_rtti__V_27_27)));
                                        }
#line 41 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                          {
#line 4260 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__TypeInfo_42_42 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[6];
#line 4262 "hlds.hlds_rtti.c"
                                            {
#line 4264 "hlds.hlds_rtti.c"
                                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_42_42, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                            }
#line 41 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                              {
#line 4271 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == hlds__hlds_rtti__V_29_29);
#line 41 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                  {
#line 4277 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == hlds__hlds_rtti__V_30_30);
#line 41 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                      {
#line 4283 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_15_15 == hlds__hlds_rtti__V_31_31);
#line 41 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                          {
#line 4289 "hlds.hlds_rtti.c"
                                                            {
#line 4291 "hlds.hlds_rtti.c"
                                                              hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__V_32_32);
                                                            }
#line 41 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                              {
#line 4298 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_17_17 == hlds__hlds_rtti__V_33_33);
#line 41 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 4302 "hlds.hlds_rtti.c"
                                                                  hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_18_18 == hlds__hlds_rtti__V_34_34);
#line 41 "hlds_rtti.m"
                                                              }
#line 41 "hlds_rtti.m"
                                                          }
#line 41 "hlds_rtti.m"
                                                      }
#line 41 "hlds_rtti.m"
                                                  }
#line 41 "hlds_rtti.m"
                                              }
#line 41 "hlds_rtti.m"
                                          }
#line 41 "hlds_rtti.m"
                                      }
#line 41 "hlds_rtti.m"
                                  }
#line 41 "hlds_rtti.m"
                              }
#line 41 "hlds_rtti.m"
                          }
#line 41 "hlds_rtti.m"
                      }
#line 41 "hlds_rtti.m"
                  }
#line 41 "hlds_rtti.m"
              }
#line 41 "hlds_rtti.m"
          }
#line 41 "hlds_rtti.m"
      }
#line 41 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 41 "hlds_rtti.m"
  }
#line 41 "hlds_rtti.m"
}

#line 35 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0(
#line 35 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 35 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__2_2,
#line 35 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__3_3)
#line 35 "hlds_rtti.m"
{
#line 35 "hlds_rtti.m"
  {
#line 35 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 35 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 35 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 35 "hlds_rtti.m"
    {
#line 35 "hlds_rtti.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Cast_HeadVar1_4, hlds__hlds_rtti__Cast_HeadVar2_5);
    }
#line 35 "hlds_rtti.m"
  }
#line 35 "hlds_rtti.m"
}

#line 35 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0(
#line 35 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__1_1,
#line 35 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__2_2)
#line 35 "hlds_rtti.m"
{
#line 35 "hlds_rtti.m"
  {
#line 35 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 35 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 35 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 35 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__Cast_HeadVar1_3, hlds__hlds_rtti__Cast_HeadVar2_4) == 0);
#line 35 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 35 "hlds_rtti.m"
  }
#line 35 "hlds_rtti.m"
}

#line 107 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0(
#line 107 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 107 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 107 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 107 "hlds_rtti.m"
{
#line 107 "hlds_rtti.m"
  {
#line 107 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 107 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 107 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 107 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 107 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 4422 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "hlds_rtti.m"
    else
#line 107 "hlds_rtti.m"
      {
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 107 "hlds_rtti.m"
        {
#line 107 "hlds_rtti.m"
          parse_tree__prog_data____Compare____class_id_0_0(&hlds__hlds_rtti__V_12_12, hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_8_8);
        }
#line 4452 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 107 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 107 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 107 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 107 "hlds_rtti.m"
        else
#line 107 "hlds_rtti.m"
          {
#line 107 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 107 "hlds_rtti.m"
            {
#line 107 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 4472 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 107 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 107 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 107 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 107 "hlds_rtti.m"
            else
#line 107 "hlds_rtti.m"
              {
#line 107 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 107 "hlds_rtti.m"
                {
#line 107 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[4], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 4492 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 107 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 107 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 107 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 107 "hlds_rtti.m"
                else
#line 107 "hlds_rtti.m"
                  {
#line 107 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____prog_constraints_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_7_7, hlds__hlds_rtti__V_11_11);
                  }
#line 107 "hlds_rtti.m"
              }
#line 107 "hlds_rtti.m"
          }
#line 107 "hlds_rtti.m"
      }
#line 107 "hlds_rtti.m"
  }
#line 107 "hlds_rtti.m"
}

#line 107 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0(
#line 107 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 107 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 107 "hlds_rtti.m"
{
#line 107 "hlds_rtti.m"
  {
#line 107 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 107 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 107 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 107 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 107 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 107 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 107 "hlds_rtti.m"
    else
#line 107 "hlds_rtti.m"
      {
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 4567 "hlds.hlds_rtti.c"
        {
#line 4569 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____class_id_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_7_7);
        }
#line 107 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 107 "hlds_rtti.m"
          {
#line 4576 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4578 "hlds.hlds_rtti.c"
            {
#line 4580 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 107 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 107 "hlds_rtti.m"
              {
#line 4587 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[4];
#line 4589 "hlds.hlds_rtti.c"
                {
#line 4591 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 107 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 4596 "hlds.hlds_rtti.c"
                  {
#line 4598 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_10_10);
                  }
#line 107 "hlds_rtti.m"
              }
#line 107 "hlds_rtti.m"
          }
#line 107 "hlds_rtti.m"
      }
#line 107 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 107 "hlds_rtti.m"
  }
#line 107 "hlds_rtti.m"
}

#line 897 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 897 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 897 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 897 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2)
#line 897 "hlds_rtti.m"
{
#line 897 "hlds_rtti.m"
  {
#line 897 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 897 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_LambdaHeadVar__2_23;

#line 897 "hlds_rtti.m"
    {
#line 897 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__897__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), &hlds__hlds_rtti__conv0_LambdaHeadVar__2_23);
    }
#line 897 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_LambdaHeadVar__2_23));
#line 897 "hlds_rtti.m"
  }
#line 897 "hlds_rtti.m"
}

#line 878 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 878 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 878 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 878 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 878 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4)
#line 878 "hlds_rtti.m"
{
#line 881 "hlds_rtti.m"
  while (MR_TRUE)
#line 881 "hlds_rtti.m"
    {
#line 881 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 881 "hlds_rtti.m"
      {
#line 881 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 881 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 881 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "hlds_rtti.m"
        else
#line 882 "hlds_rtti.m"
          {
#line 882 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 882 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 882 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Type_12;
#line 882 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeVars_13;

#line 883 "hlds_rtti.m"
            {
#line 883 "hlds_rtti.m"
              hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__Var_7, &hlds__hlds_rtti__Type_12);
            }
#line 884 "hlds_rtti.m"
            {
#line 884 "hlds_rtti.m"
              parse_tree__prog_type__type_vars_2_p_0(hlds__hlds_rtti__Type_12, &hlds__hlds_rtti__TypeVars_13);
            }
#line 889 "hlds_rtti.m"
            if ((hlds__hlds_rtti__TypeVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "hlds_rtti.m"
              {
#line 888 "hlds_rtti.m"
                /* direct tailcall eliminated */
#line 888 "hlds_rtti.m"
                {
#line 888 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__Vars_8;

#line 888 "hlds_rtti.m"
                  hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 888 "hlds_rtti.m"
                }
#line 888 "hlds_rtti.m"
                continue;
#line 888 "hlds_rtti.m"
              }
#line 889 "hlds_rtti.m"
            else
#line 890 "hlds_rtti.m"
              {
#line 890 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfo_29_29;
#line 890 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__LookupVar_16;
#line 890 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsHead_20;
#line 890 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsTail_21;

#line 897 "hlds_rtti.m"
                {
#line 897 "hlds_rtti.m"
                  hlds__hlds_rtti__LookupVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 897 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[3]));
#line 897 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 1) = ((MR_Box) (hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1));
#line 897 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 897 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 3) = ((MR_Box) (hlds__hlds_rtti__TVarMap_3));
#line 897 "hlds_rtti.m"
                }
#line 4741 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 901 "hlds_rtti.m"
                {
#line 901 "hlds_rtti.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__LookupVar_16, hlds__hlds_rtti__TypeVars_13, &hlds__hlds_rtti__TypeInfoVarsHead_20);
                }
#line 903 "hlds_rtti.m"
                {
#line 903 "hlds_rtti.m"
                  hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__Vars_8, hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__TVarMap_3, &hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 904 "hlds_rtti.m"
                {
#line 904 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfoVarsHead_20, hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 890 "hlds_rtti.m"
              }
#line 882 "hlds_rtti.m"
          }
#line 881 "hlds_rtti.m"
      }
#line 881 "hlds_rtti.m"
      break;
#line 881 "hlds_rtti.m"
    }
#line 878 "hlds_rtti.m"
}

#line 844 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 844 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 844 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 844 "hlds_rtti.m"
{
#line 848 "hlds_rtti.m"
  {
#line 848 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 848 "hlds_rtti.m"
    {
#line 848 "hlds_rtti.m"
      hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Constraint0_7, hlds__hlds_rtti__Constraint_8);
    }
#line 848 "hlds_rtti.m"
  }
#line 844 "hlds_rtti.m"
}

#line 833 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 833 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 833 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 833 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 833 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 833 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15)
#line 833 "hlds_rtti.m"
{
#line 838 "hlds_rtti.m"
  {
#line 838 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 838 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 838 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 838 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 838 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_12;
#line 838 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_13;

#line 840 "hlds_rtti.m"
    {
#line 840 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__Pred_6, hlds__hlds_rtti__Args0_11, &hlds__hlds_rtti__Args_12);
    }
#line 841 "hlds_rtti.m"
    {
#line 841 "hlds_rtti.m"
      hlds__hlds_rtti__Constraint_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 841 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 0) = ((MR_Box) (hlds__hlds_rtti__Name_10));
#line 841 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 1) = ((MR_Box) (hlds__hlds_rtti__Args_12));
#line 841 "hlds_rtti.m"
    }
#line 842 "hlds_rtti.m"
    {
#line 842 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_13)), ((MR_Box) (hlds__hlds_rtti__Var_8)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_14, hlds__hlds_rtti__STATE_VARIABLE_Map_15);
    }
#line 838 "hlds_rtti.m"
  }
#line 833 "hlds_rtti.m"
}

#line 799 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 799 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 799 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 799 "hlds_rtti.m"
{
#line 805 "hlds_rtti.m"
  {
#line 805 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 805 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 805 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 805 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 727 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_32;
#line 725 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_33;
#line 725 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_32;
#line 816 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingConstraint_17;
#line 810 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingConstraint_17;

#line 806 "hlds_rtti.m"
    {
#line 806 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_12, &hlds__hlds_rtti__Constraint1_14);
    }
#line 808 "hlds_rtti.m"
    {
#line 808 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 4904 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_33 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 725 "hlds_rtti.m"
    {
#line 725 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_32);
    }
#line 725 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 725 "hlds_rtti.m"
      {
#line 725 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_32 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_32);
#line 725 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 725 "hlds_rtti.m"
      }
#line 727 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 726 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_32;
#line 727 "hlds_rtti.m"
    else
#line 728 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 810 "hlds_rtti.m"
    {
#line 810 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingConstraint_17);
    }
#line 810 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 810 "hlds_rtti.m"
      {
#line 810 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingConstraint_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingConstraint_17);
#line 810 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 810 "hlds_rtti.m"
      }
#line 816 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 813 "hlds_rtti.m"
      {
#line 811 "hlds_rtti.m"
        {
#line 811 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__Constraint_15, hlds__hlds_rtti__ExistingConstraint_17);
        }
#line 813 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 812 "hlds_rtti.m"
          {
#line 812 "hlds_rtti.m"
          }
#line 813 "hlds_rtti.m"
        else
#line 814 "hlds_rtti.m"
          {
#line 814 "hlds_rtti.m"
            {
#line 814 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_constraint_map\'/7", (MR_String) "inconsistent typeclass_infos");
#line 814 "hlds_rtti.m"
              return;
            }
#line 814 "hlds_rtti.m"
          }
#line 813 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 813 "hlds_rtti.m"
      }
#line 816 "hlds_rtti.m"
    else
#line 817 "hlds_rtti.m"
      {
#line 817 "hlds_rtti.m"
        {
#line 817 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Constraint_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
        }
#line 817 "hlds_rtti.m"
      }
#line 805 "hlds_rtti.m"
  }
#line 799 "hlds_rtti.m"
}

#line 778 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 778 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 778 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 778 "hlds_rtti.m"
{
#line 782 "hlds_rtti.m"
  {
#line 782 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 782 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type1_14;
#line 782 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_15;
#line 782 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 727 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_61;
#line 725 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_62;
#line 725 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_61;
#line 795 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingType_17;
#line 786 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingType_17;

#line 783 "hlds_rtti.m"
    {
#line 783 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Type0_12, &hlds__hlds_rtti__Type1_14);
    }
#line 784 "hlds_rtti.m"
    {
#line 784 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Type1_14, &hlds__hlds_rtti__Type_15);
    }
#line 5042 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_62 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 725 "hlds_rtti.m"
    {
#line 725 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_62, hlds__hlds_rtti__TypeInfo_8_62, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_61);
    }
#line 725 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 725 "hlds_rtti.m"
      {
#line 725 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_61 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_61);
#line 725 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 725 "hlds_rtti.m"
      }
#line 727 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 726 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_61;
#line 727 "hlds_rtti.m"
    else
#line 728 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 786 "hlds_rtti.m"
    {
#line 786 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingType_17);
    }
#line 786 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 786 "hlds_rtti.m"
      {
#line 786 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingType_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingType_17);
#line 786 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 786 "hlds_rtti.m"
      }
#line 795 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 789 "hlds_rtti.m"
      {
#line 787 "hlds_rtti.m"
        {
#line 787 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__Type_15, hlds__hlds_rtti__ExistingType_17);
        }
#line 789 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 788 "hlds_rtti.m"
          {
#line 788 "hlds_rtti.m"
          }
#line 789 "hlds_rtti.m"
        else
#line 790 "hlds_rtti.m"
          {
#line 790 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 790 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_22_22;
#line 790 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_28_28;
#line 790 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_31_31;
#line 790 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_39_39;
#line 790 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_45_45;
#line 790 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_47_47;
#line 790 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_48_48;
#line 790 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_55_55;

#line 793 "hlds_rtti.m"
            {
#line 793 "hlds_rtti.m"
              hlds__hlds_rtti__V_28_28 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__Type_15)));
            }
#line 793 "hlds_rtti.m"
            {
#line 793 "hlds_rtti.m"
              hlds__hlds_rtti__V_31_31 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__ExistingType_17)));
            }
#line 5130 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__V_45_45 = (MR_Word) &hlds__hlds_rtti_scalar_common_7[0];
#line 793 "hlds_rtti.m"
            {
#line 793 "hlds_rtti.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_rtti__V_45_45, hlds__hlds_rtti__V_31_31, &hlds__hlds_rtti__V_39_39);
            }
#line 791 "hlds_rtti.m"
            {
#line 791 "hlds_rtti.m"
              hlds__hlds_rtti__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " ExistingType: ", hlds__hlds_rtti__V_39_39);
            }
#line 793 "hlds_rtti.m"
            {
#line 793 "hlds_rtti.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_rtti__V_45_45, hlds__hlds_rtti__V_28_28, &hlds__hlds_rtti__V_48_48);
            }
#line 791 "hlds_rtti.m"
            {
#line 791 "hlds_rtti.m"
              hlds__hlds_rtti__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_rtti__V_48_48, hlds__hlds_rtti__V_47_47);
            }
#line 791 "hlds_rtti.m"
            {
#line 791 "hlds_rtti.m"
              hlds__hlds_rtti__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent type_infos:  Type: ", hlds__hlds_rtti__V_55_55);
            }
#line 790 "hlds_rtti.m"
            {
#line 790 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_type_map\'/7", hlds__hlds_rtti__V_22_22);
#line 790 "hlds_rtti.m"
              return;
            }
#line 790 "hlds_rtti.m"
          }
#line 789 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 789 "hlds_rtti.m"
      }
#line 795 "hlds_rtti.m"
    else
#line 796 "hlds_rtti.m"
      {
#line 796 "hlds_rtti.m"
        {
#line 796 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Type_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
        }
#line 796 "hlds_rtti.m"
      }
#line 782 "hlds_rtti.m"
  }
#line 778 "hlds_rtti.m"
}

#line 749 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 749 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 749 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37)
#line 749 "hlds_rtti.m"
{
#line 753 "hlds_rtti.m"
  {
#line 753 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 753 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_40_40;
#line 753 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewLocn_16;
#line 753 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewTVar1_17;
#line 753 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewType_18;
#line 753 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_38_38;

#line 5220 "hlds.hlds_rtti.c"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_12)) == (MR_mktag((MR_Integer) 0))))
#line 5222 "hlds.hlds_rtti.c"
      {
#line 5224 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5226 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_15;
#line 727 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_49;
#line 725 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_50 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 725 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Var1_49;

#line 725 "hlds_rtti.m"
        {
#line 725 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_14)), &hlds__hlds_rtti__conv0_Var1_49);
        }
#line 725 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 725 "hlds_rtti.m"
          {
#line 725 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_49 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_49);
#line 725 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 725 "hlds_rtti.m"
          }
#line 727 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 726 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var1_49;
#line 727 "hlds_rtti.m"
        else
#line 728 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var_14;
#line 402 "hlds_rtti.m"
        {
#line 402 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 402 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_15));
#line 402 "hlds_rtti.m"
        }
#line 5266 "hlds.hlds_rtti.c"
      }
#line 5268 "hlds.hlds_rtti.c"
    else
#line 5270 "hlds.hlds_rtti.c"
      {
#line 5272 "hlds.hlds_rtti.c"
        MR_Integer hlds__hlds_rtti__Num_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 1)));
#line 5274 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5276 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_60;
#line 727 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_57;
#line 725 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_56 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 725 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Var1_57;

#line 725 "hlds_rtti.m"
        {
#line 725 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_59)), &hlds__hlds_rtti__conv1_Var1_57);
        }
#line 725 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 725 "hlds_rtti.m"
          {
#line 725 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_57 = ((MR_Word) hlds__hlds_rtti__conv1_Var1_57);
#line 725 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 725 "hlds_rtti.m"
          }
#line 727 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 726 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var1_57;
#line 727 "hlds_rtti.m"
        else
#line 728 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var_59;
#line 403 "hlds_rtti.m"
        {
#line 403 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_60));
#line 403 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 1) = ((MR_Box) (hlds__hlds_rtti__Num_55));
#line 403 "hlds_rtti.m"
        }
#line 5318 "hlds.hlds_rtti.c"
      }
#line 757 "hlds_rtti.m"
    {
#line 757 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__TVar_11, &hlds__hlds_rtti__NewTVar1_17);
    }
#line 5325 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_40_40 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 760 "hlds_rtti.m"
    {
#line 760 "hlds_rtti.m"
      hlds__hlds_rtti__V_38_38 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 760 "hlds_rtti.m"
    {
#line 760 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__NewTVar1_17, &hlds__hlds_rtti__NewType_18);
    }
#line 768 "hlds_rtti.m"
#line 768 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__NewType_18)) {
#line 768 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 764 "hlds_rtti.m"
        {
#line 764 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__NewTVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)));
#line 764 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 1)));

#line 767 "hlds_rtti.m"
          {
#line 767 "hlds_rtti.m"
            mercury__map__set_4_p_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__NewTVar_19)), ((MR_Box) (hlds__hlds_rtti__NewLocn_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_36, hlds__hlds_rtti__STATE_VARIABLE_Map_37);
          }
#line 764 "hlds_rtti.m"
        }
#line 768 "hlds_rtti.m"
        break;
#line 768 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 770 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 768 "hlds_rtti.m"
        break;
#line 768 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 769 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 768 "hlds_rtti.m"
        break;
#line 768 "hlds_rtti.m"
      case (MR_Integer) 3:
#line 768 "hlds_rtti.m"
#line 768 "hlds_rtti.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)))) {
#line 768 "hlds_rtti.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 768 "hlds_rtti.m"
          case (MR_Integer) 0:
#line 771 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 768 "hlds_rtti.m"
            break;
#line 768 "hlds_rtti.m"
          case (MR_Integer) 1:
#line 772 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 768 "hlds_rtti.m"
            break;
#line 768 "hlds_rtti.m"
          case (MR_Integer) 2:
#line 773 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 768 "hlds_rtti.m"
            break;
#line 768 "hlds_rtti.m"
          case (MR_Integer) 3:
#line 774 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 768 "hlds_rtti.m"
            break;
#line 768 "hlds_rtti.m"
        }
#line 768 "hlds_rtti.m"
        break;
#line 768 "hlds_rtti.m"
    }
#line 753 "hlds_rtti.m"
  }
#line 749 "hlds_rtti.m"
}

#line 731 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 731 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 731 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18)
#line 731 "hlds_rtti.m"
{
#line 735 "hlds_rtti.m"
  {
#line 735 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 735 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 735 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 735 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 727 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_25;
#line 725 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_26;
#line 725 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_25;

#line 736 "hlds_rtti.m"
    {
#line 736 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_11, &hlds__hlds_rtti__Constraint1_14);
    }
#line 738 "hlds_rtti.m"
    {
#line 738 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 5460 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 725 "hlds_rtti.m"
    {
#line 725 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_12)), &hlds__hlds_rtti__conv0_Var1_25);
    }
#line 725 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 725 "hlds_rtti.m"
      {
#line 725 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_25 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_25);
#line 725 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 725 "hlds_rtti.m"
      }
#line 727 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 726 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_25;
#line 727 "hlds_rtti.m"
    else
#line 728 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_12;
#line 740 "hlds_rtti.m"
    {
#line 740 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_15)), ((MR_Box) (hlds__hlds_rtti__Var_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_17, hlds__hlds_rtti__STATE_VARIABLE_Map_18);
    }
#line 735 "hlds_rtti.m"
  }
#line 731 "hlds_rtti.m"
}

#line 684 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 684 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 684 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 684 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9)
#line 684 "hlds_rtti.m"
{
#line 687 "hlds_rtti.m"
  {
#line 687 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 687 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 1)));
#line 688 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 0)));

#line 689 "hlds_rtti.m"
    {
#line 689 "hlds_rtti.m"
      mercury__set_tree234__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__ArgTypes_7, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);
    }
#line 687 "hlds_rtti.m"
  }
#line 684 "hlds_rtti.m"
}

#line 548 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 548 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 548 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 548 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 548 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 548 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 548 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6)
#line 548 "hlds_rtti.m"
{
#line 554 "hlds_rtti.m"
  while (MR_TRUE)
#line 554 "hlds_rtti.m"
    {
#line 554 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 554 "hlds_rtti.m"
      {
#line 554 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 554 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "hlds_rtti.m"
          {
#line 554 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 554 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 554 "hlds_rtti.m"
          }
#line 554 "hlds_rtti.m"
        else
#line 556 "hlds_rtti.m"
          {
#line 556 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraint_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 556 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 556 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 0)));
#line 556 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Constraint_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 1)));
#line 556 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_21;
#line 556 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_22;
#line 556 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;
#line 556 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 559 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_22;

#line 558 "hlds_rtti.m"
            {
#line 558 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_21 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_19);
            }
#line 559 "hlds_rtti.m"
            {
#line 559 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_21, &hlds__hlds_rtti__conv0_Used_22);
            }
#line 559 "hlds_rtti.m"
            hlds__hlds_rtti__Used_22 = ((MR_Word) hlds__hlds_rtti__conv0_Used_22);
#line 563 "hlds_rtti.m"
#line 563 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_22) {
#line 563 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 563 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 564 "hlds_rtti.m"
                {
#line 565 "hlds_rtti.m"
                  {
#line 565 "hlds_rtti.m"
                    mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_20)), hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5, &hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27);
                  }
#line 564 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 564 "hlds_rtti.m"
                }
#line 563 "hlds_rtti.m"
                break;
#line 563 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 561 "hlds_rtti.m"
                {
#line 562 "hlds_rtti.m"
                  {
#line 562 "hlds_rtti.m"
                    hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 562 "hlds_rtti.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 0) = ((MR_Box) (hlds__hlds_rtti__VarConstraint_14));
#line 562 "hlds_rtti.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3));
#line 562 "hlds_rtti.m"
                  }
#line 561 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 561 "hlds_rtti.m"
                }
#line 563 "hlds_rtti.m"
                break;
#line 563 "hlds_rtti.m"
            }
#line 567 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 567 "hlds_rtti.m"
            {
#line 567 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarConstraints_15;
#line 567 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 567 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;

#line 567 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5;
#line 567 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3;
#line 567 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 567 "hlds_rtti.m"
            }
#line 567 "hlds_rtti.m"
            continue;
#line 556 "hlds_rtti.m"
          }
#line 554 "hlds_rtti.m"
      }
#line 554 "hlds_rtti.m"
      break;
#line 554 "hlds_rtti.m"
    }
#line 548 "hlds_rtti.m"
}

#line 530 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 530 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 530 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 530 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 530 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4)
#line 530 "hlds_rtti.m"
{
#line 535 "hlds_rtti.m"
  while (MR_TRUE)
#line 535 "hlds_rtti.m"
    {
#line 535 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 535 "hlds_rtti.m"
      {
#line 535 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 535 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 535 "hlds_rtti.m"
        else
#line 536 "hlds_rtti.m"
          {
#line 536 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 536 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 536 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 0)));
#line 536 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_15;
#line 536 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_16;
#line 536 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;
#line 537 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 1)));
#line 539 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_16;

#line 538 "hlds_rtti.m"
            {
#line 538 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_13);
            }
#line 539 "hlds_rtti.m"
            {
#line 539 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_15, &hlds__hlds_rtti__conv0_Used_16);
            }
#line 539 "hlds_rtti.m"
            hlds__hlds_rtti__Used_16 = ((MR_Word) hlds__hlds_rtti__conv0_Used_16);
#line 543 "hlds_rtti.m"
#line 543 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_16) {
#line 543 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 543 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 544 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 543 "hlds_rtti.m"
                break;
#line 543 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 542 "hlds_rtti.m"
                {
#line 542 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (hlds__hlds_rtti__VarType_9));
#line 542 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3));
#line 542 "hlds_rtti.m"
                }
#line 543 "hlds_rtti.m"
                break;
#line 543 "hlds_rtti.m"
            }
#line 546 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 546 "hlds_rtti.m"
            {
#line 546 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarTypes_10;
#line 546 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;

#line 546 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3;
#line 546 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 546 "hlds_rtti.m"
            }
#line 546 "hlds_rtti.m"
            continue;
#line 536 "hlds_rtti.m"
          }
#line 535 "hlds_rtti.m"
      }
#line 535 "hlds_rtti.m"
      break;
#line 535 "hlds_rtti.m"
    }
#line 530 "hlds_rtti.m"
}

#line 509 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 509 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 509 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 509 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 509 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4)
#line 509 "hlds_rtti.m"
{
#line 514 "hlds_rtti.m"
  while (MR_TRUE)
#line 514 "hlds_rtti.m"
    {
#line 514 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 514 "hlds_rtti.m"
      {
#line 514 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 514 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 514 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 514 "hlds_rtti.m"
        else
#line 515 "hlds_rtti.m"
          {
#line 515 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 515 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 515 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Locn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 1)));
#line 515 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_15;
#line 515 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_17;
#line 515 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_18;
#line 515 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;
#line 516 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___TVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 0)));
#line 521 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_18;

#line 518 "hlds_rtti.m"
            if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_14)) == (MR_mktag((MR_Integer) 0))))
#line 517 "hlds_rtti.m"
              hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 518 "hlds_rtti.m"
            else
#line 518 "hlds_rtti.m"
              {
#line 518 "hlds_rtti.m"
                MR_Integer hlds__hlds_rtti__V_16_16;

#line 518 "hlds_rtti.m"
                hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 518 "hlds_rtti.m"
                hlds__hlds_rtti__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 1)));
#line 518 "hlds_rtti.m"
              }
#line 520 "hlds_rtti.m"
            {
#line 520 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_17 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_15);
            }
#line 521 "hlds_rtti.m"
            {
#line 521 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_17, &hlds__hlds_rtti__conv0_Used_18);
            }
#line 521 "hlds_rtti.m"
            hlds__hlds_rtti__Used_18 = ((MR_Word) hlds__hlds_rtti__conv0_Used_18);
#line 525 "hlds_rtti.m"
#line 525 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_18) {
#line 525 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 525 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 526 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 525 "hlds_rtti.m"
                break;
#line 525 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 524 "hlds_rtti.m"
                {
#line 524 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 0) = ((MR_Box) (hlds__hlds_rtti__TVarLocn_9));
#line 524 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3));
#line 524 "hlds_rtti.m"
                }
#line 525 "hlds_rtti.m"
                break;
#line 525 "hlds_rtti.m"
            }
#line 528 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 528 "hlds_rtti.m"
            {
#line 528 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__TVarLocns_10;
#line 528 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;

#line 528 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3;
#line 528 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 528 "hlds_rtti.m"
            }
#line 528 "hlds_rtti.m"
            continue;
#line 515 "hlds_rtti.m"
          }
#line 514 "hlds_rtti.m"
      }
#line 514 "hlds_rtti.m"
      break;
#line 514 "hlds_rtti.m"
    }
#line 509 "hlds_rtti.m"
}

#line 328 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(
#line 328 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Vars0_6,
#line 328 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TypeInfoLiveness_7,
#line 328 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_8,
#line 328 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_9,
#line 328 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Vars_10)
#line 328 "hlds_rtti.m"
{
#line 910 "hlds_rtti.m"
  {
#line 910 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 910 "hlds_rtti.m"
#line 910 "hlds_rtti.m"
    switch (hlds__hlds_rtti__TypeInfoLiveness_7) {
#line 910 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 910 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 915 "hlds_rtti.m"
        *hlds__hlds_rtti__Vars_10 = hlds__hlds_rtti__Vars0_6;
#line 910 "hlds_rtti.m"
        break;
#line 910 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 910 "hlds_rtti.m"
        {
#line 910 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeCtorInfo_15_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 910 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfoVars_11;
#line 910 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TVarMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 1)));
#line 910 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__VarList_18;
#line 910 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfoVarList_19;
#line 870 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 0)));
#line 870 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 2)));
#line 870 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 3)));

#line 871 "hlds_rtti.m"
          {
#line 871 "hlds_rtti.m"
            hlds__hlds_rtti__VarList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__Vars0_6);
          }
#line 872 "hlds_rtti.m"
          {
#line 872 "hlds_rtti.m"
            hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_18, hlds__hlds_rtti__VarTypes_8, hlds__hlds_rtti__TVarMap_17, &hlds__hlds_rtti__TypeInfoVarList_19);
          }
#line 873 "hlds_rtti.m"
          {
#line 873 "hlds_rtti.m"
            hlds__hlds_rtti__TypeInfoVars_11 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__TypeInfoVarList_19);
          }
#line 912 "hlds_rtti.m"
          {
#line 912 "hlds_rtti.m"
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Vars0_6, hlds__hlds_rtti__TypeInfoVars_11, hlds__hlds_rtti__Vars_10);
          }
#line 910 "hlds_rtti.m"
        }
#line 910 "hlds_rtti.m"
        break;
#line 910 "hlds_rtti.m"
    }
#line 910 "hlds_rtti.m"
  }
#line 328 "hlds_rtti.m"
}

#line 325 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_4_p_0(
#line 325 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Vars_5,
#line 325 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_6,
#line 325 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_7,
#line 325 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__TypeInfoVars_8)
#line 325 "hlds_rtti.m"
{
#line 869 "hlds_rtti.m"
  {
#line 869 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 869 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 869 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 1)));
#line 869 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarList_10;
#line 869 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfoVarList_11;
#line 870 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 0)));
#line 870 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 2)));
#line 870 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 3)));

#line 871 "hlds_rtti.m"
    {
#line 871 "hlds_rtti.m"
      hlds__hlds_rtti__VarList_10 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__Vars_5);
    }
#line 872 "hlds_rtti.m"
    {
#line 872 "hlds_rtti.m"
      hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_10, hlds__hlds_rtti__VarTypes_6, hlds__hlds_rtti__TVarMap_9, &hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 873 "hlds_rtti.m"
    {
#line 873 "hlds_rtti.m"
      *hlds__hlds_rtti__TypeInfoVars_8 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 869 "hlds_rtti.m"
  }
#line 325 "hlds_rtti.m"
}

#line 314 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(
#line 314 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarMapsA_4,
#line 314 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarMapsB_5,
#line 314 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__VarMaps_6)
#line 314 "hlds_rtti.m"
{
#line 853 "hlds_rtti.m"
  {
#line 853 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_20_20 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 0)));
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 1)));
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 2)));
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 3)));
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 0)));
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 1)));
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 2)));
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 3)));
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImap_15;
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImap_16;
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_17;
#line 853 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_18;

#line 858 "hlds_rtti.m"
    {
#line 858 "hlds_rtti.m"
      mercury__map__overlay_3_p_0(hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TCImapA_7, hlds__hlds_rtti__TCImapB_11, &hlds__hlds_rtti__TCImap_15);
    }
#line 859 "hlds_rtti.m"
    {
#line 859 "hlds_rtti.m"
      mercury__map__overlay_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TImapA_8, hlds__hlds_rtti__TImapB_12, &hlds__hlds_rtti__TImap_16);
    }
#line 862 "hlds_rtti.m"
    {
#line 862 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__TypeMapA_9, hlds__hlds_rtti__TypeMapB_13, &hlds__hlds_rtti__TypeMap_17);
    }
#line 863 "hlds_rtti.m"
    {
#line 863 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__ConstraintMapA_10, hlds__hlds_rtti__ConstraintMapB_14, &hlds__hlds_rtti__ConstraintMap_18);
    }
#line 865 "hlds_rtti.m"
    {
#line 865 "hlds_rtti.m"
      MR_Word base;
#line 865 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 865 "hlds_rtti.m"
      *hlds__hlds_rtti__VarMaps_6 = base;
#line 865 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCImap_15));
#line 865 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TImap_16));
#line 865 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_17));
#line 865 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_18));
#line 865 "hlds_rtti.m"
    }
#line 853 "hlds_rtti.m"
  }
#line 314 "hlds_rtti.m"
}

#line 827 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 827 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 827 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 827 "hlds_rtti.m"
{
#line 827 "hlds_rtti.m"
  {
#line 827 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 827 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_Constraint_8;

#line 827 "hlds_rtti.m"
    {
#line 827 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_Constraint_8);
    }
#line 827 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_Constraint_8));
#line 827 "hlds_rtti.m"
  }
#line 827 "hlds_rtti.m"
}

#line 824 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 824 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 824 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 824 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 824 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 824 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 824 "hlds_rtti.m"
{
#line 824 "hlds_rtti.m"
  {
#line 824 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 824 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15;

#line 824 "hlds_rtti.m"
    {
#line 824 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15);
    }
#line 824 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15));
#line 824 "hlds_rtti.m"
  }
#line 824 "hlds_rtti.m"
}

#line 305 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(
#line 305 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_4,
#line 305 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12,
#line 305 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13)
#line 305 "hlds_rtti.m"
{
#line 820 "hlds_rtti.m"
  {
#line 820 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_45_45;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_46_46;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_48_48;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap_9;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_10;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_11;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_33_33;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_34_34;
#line 821 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 824 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TciMap_9;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_29_29;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_31_31;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_32_32;

#line 824 "hlds_rtti.m"
    {
#line 824 "hlds_rtti.m"
      hlds__hlds_rtti__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 824 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_5[0]));
#line 824 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1));
#line 824 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 824 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 824 "hlds_rtti.m"
    }
#line 6281 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6283 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_46_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 825 "hlds_rtti.m"
    {
#line 825 "hlds_rtti.m"
      hlds__hlds_rtti__V_15_15 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46);
    }
#line 824 "hlds_rtti.m"
    {
#line 824 "hlds_rtti.m"
      mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_14_14, hlds__hlds_rtti__TciMap0_6, ((MR_Box) (hlds__hlds_rtti__V_15_15)), &hlds__hlds_rtti__conv1_TciMap_9);
    }
#line 824 "hlds_rtti.m"
    hlds__hlds_rtti__TciMap_9 = ((MR_Word) hlds__hlds_rtti__conv1_TciMap_9);
#line 6297 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 826 "hlds_rtti.m"
    {
#line 826 "hlds_rtti.m"
      mercury__map__map_values_only_3_p_0(hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__Pred_4, hlds__hlds_rtti__TypeMap0_7, &hlds__hlds_rtti__TypeMap_10);
    }
#line 827 "hlds_rtti.m"
    {
#line 827 "hlds_rtti.m"
      hlds__hlds_rtti__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 827 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_6[0]));
#line 827 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2));
#line 827 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 827 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 827 "hlds_rtti.m"
    }
#line 827 "hlds_rtti.m"
    {
#line 827 "hlds_rtti.m"
      mercury__map__map_values_3_p_0(hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__ConstraintMap0_8, &hlds__hlds_rtti__ConstraintMap_11);
    }
#line 829 "hlds_rtti.m"
    hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 829 "hlds_rtti.m"
    hlds__hlds_rtti__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 829 "hlds_rtti.m"
    hlds__hlds_rtti__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 829 "hlds_rtti.m"
    hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 830 "hlds_rtti.m"
    hlds__hlds_rtti__V_33_33 = hlds__hlds_rtti__TciMap_9;
#line 830 "hlds_rtti.m"
    hlds__hlds_rtti__V_34_34 = hlds__hlds_rtti__V_30_30;
#line 831 "hlds_rtti.m"
    {
#line 831 "hlds_rtti.m"
      MR_Word base;
#line 831 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 831 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13 = base;
#line 831 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_33_33));
#line 831 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_34_34));
#line 831 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_10));
#line 831 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_11));
#line 831 "hlds_rtti.m"
    }
#line 820 "hlds_rtti.m"
  }
#line 305 "hlds_rtti.m"
}

#line 716 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 716 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 716 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 716 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 716 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 716 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 716 "hlds_rtti.m"
{
#line 716 "hlds_rtti.m"
  {
#line 716 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 716 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19;

#line 716 "hlds_rtti.m"
    {
#line 716 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19);
    }
#line 716 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19));
#line 716 "hlds_rtti.m"
  }
#line 716 "hlds_rtti.m"
}

#line 714 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
#line 714 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 714 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 714 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 714 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 714 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 714 "hlds_rtti.m"
{
#line 714 "hlds_rtti.m"
  {
#line 714 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 714 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19;

#line 714 "hlds_rtti.m"
    {
#line 714 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19);
    }
#line 714 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19));
#line 714 "hlds_rtti.m"
  }
#line 714 "hlds_rtti.m"
}

#line 712 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
#line 712 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 712 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 712 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 712 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 712 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 712 "hlds_rtti.m"
{
#line 712 "hlds_rtti.m"
  {
#line 712 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 712 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37;

#line 712 "hlds_rtti.m"
    {
#line 712 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37);
    }
#line 712 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37));
#line 712 "hlds_rtti.m"
  }
#line 712 "hlds_rtti.m"
}

#line 710 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
#line 710 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 710 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 710 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 710 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 710 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 710 "hlds_rtti.m"
{
#line 710 "hlds_rtti.m"
  {
#line 710 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 710 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18;

#line 710 "hlds_rtti.m"
    {
#line 710 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18);
    }
#line 710 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18));
#line 710 "hlds_rtti.m"
  }
#line 710 "hlds_rtti.m"
}

#line 297 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(
#line 297 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_6,
#line 297 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_7,
#line 297 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_8,
#line 297 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18,
#line 297 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19)
#line 297 "hlds_rtti.m"
{
#line 707 "hlds_rtti.m"
  {
#line 707 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 702 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 702 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_30_30;
#line 702 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_31_31;

#line 702 "hlds_rtti.m"
    {
#line 702 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__Subst_8);
    }
#line 702 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 702 "hlds_rtti.m"
      {
#line 6529 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_30_30 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6531 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 703 "hlds_rtti.m"
        {
#line 703 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeCtorInfo_31_31, hlds__hlds_rtti__TSubst_7);
        }
#line 702 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 704 "hlds_rtti.m"
          {
#line 704 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TRenaming_6);
          }
#line 702 "hlds_rtti.m"
      }
#line 707 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 707 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18;
#line 707 "hlds_rtti.m"
    else
#line 709 "hlds_rtti.m"
      {
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_37_37;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_43_43;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_44_44;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_50_50;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 0)));
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 1)));
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 2)));
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 3)));
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap_14;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap_15;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap_16;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap_17;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_23_23;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26;
#line 709 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;
#line 710 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_TCIMap_14;
#line 712 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv3_TIMap_15;
#line 714 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv5_TypeMap_16;
#line 716 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv7_ConstraintMap_17;

#line 710 "hlds_rtti.m"
        {
#line 710 "hlds_rtti.m"
          hlds__hlds_rtti__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[0]));
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1));
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 710 "hlds_rtti.m"
        }
#line 6624 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6626 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_37_37 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 711 "hlds_rtti.m"
        {
#line 711 "hlds_rtti.m"
          hlds__hlds_rtti__V_21_21 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37);
        }
#line 710 "hlds_rtti.m"
        {
#line 710 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__TCIMap0_10, ((MR_Box) (hlds__hlds_rtti__V_21_21)), &hlds__hlds_rtti__conv1_TCIMap_14);
        }
#line 710 "hlds_rtti.m"
        hlds__hlds_rtti__TCIMap_14 = ((MR_Word) hlds__hlds_rtti__conv1_TCIMap_14);
#line 712 "hlds_rtti.m"
        {
#line 712 "hlds_rtti.m"
          hlds__hlds_rtti__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 712 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[1]));
#line 712 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2));
#line 712 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 712 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 712 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 712 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 712 "hlds_rtti.m"
        }
#line 6658 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_43_43 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6660 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 713 "hlds_rtti.m"
        {
#line 713 "hlds_rtti.m"
          hlds__hlds_rtti__V_23_23 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44);
        }
#line 712 "hlds_rtti.m"
        {
#line 712 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__V_22_22, hlds__hlds_rtti__TIMap0_11, ((MR_Box) (hlds__hlds_rtti__V_23_23)), &hlds__hlds_rtti__conv3_TIMap_15);
        }
#line 712 "hlds_rtti.m"
        hlds__hlds_rtti__TIMap_15 = ((MR_Word) hlds__hlds_rtti__conv3_TIMap_15);
#line 714 "hlds_rtti.m"
        {
#line 714 "hlds_rtti.m"
          hlds__hlds_rtti__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 714 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[2]));
#line 714 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3));
#line 714 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 714 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 714 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 714 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 714 "hlds_rtti.m"
        }
#line 6692 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 715 "hlds_rtti.m"
        {
#line 715 "hlds_rtti.m"
          hlds__hlds_rtti__V_25_25 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50);
        }
#line 714 "hlds_rtti.m"
        {
#line 714 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50, (MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__V_24_24, hlds__hlds_rtti__TypeMap0_12, ((MR_Box) (hlds__hlds_rtti__V_25_25)), &hlds__hlds_rtti__conv5_TypeMap_16);
        }
#line 714 "hlds_rtti.m"
        hlds__hlds_rtti__TypeMap_16 = ((MR_Word) hlds__hlds_rtti__conv5_TypeMap_16);
#line 716 "hlds_rtti.m"
        {
#line 716 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 716 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[3]));
#line 716 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4));
#line 716 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 716 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 716 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 716 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 716 "hlds_rtti.m"
        }
#line 717 "hlds_rtti.m"
        {
#line 717 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36);
        }
#line 716 "hlds_rtti.m"
        {
#line 716 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36, (MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__V_26_26, hlds__hlds_rtti__ConstraintMap0_13, ((MR_Box) (hlds__hlds_rtti__V_27_27)), &hlds__hlds_rtti__conv7_ConstraintMap_17);
        }
#line 716 "hlds_rtti.m"
        hlds__hlds_rtti__ConstraintMap_17 = ((MR_Word) hlds__hlds_rtti__conv7_ConstraintMap_17);
#line 718 "hlds_rtti.m"
        {
#line 718 "hlds_rtti.m"
          MR_Word base;
#line 718 "hlds_rtti.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 718 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = base;
#line 718 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_14));
#line 718 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_15));
#line 718 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_16));
#line 718 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_17));
#line 718 "hlds_rtti.m"
        }
#line 709 "hlds_rtti.m"
      }
#line 707 "hlds_rtti.m"
  }
#line 297 "hlds_rtti.m"
}

#line 287 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(
#line 287 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 287 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Vars_4)
#line 287 "hlds_rtti.m"
{
#line 694 "hlds_rtti.m"
  {
#line 694 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIVars_5;
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIVars_6;
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8;
#line 695 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 695 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 695 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 696 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12;
#line 696 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13;
#line 696 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;

#line 695 "hlds_rtti.m"
    {
#line 695 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_7_7, &hlds__hlds_rtti__TIVars_5);
    }
#line 696 "hlds_rtti.m"
    hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 696 "hlds_rtti.m"
    hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 696 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 696 "hlds_rtti.m"
    hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 696 "hlds_rtti.m"
    {
#line 696 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_8_8, &hlds__hlds_rtti__TCIVars_6);
    }
#line 697 "hlds_rtti.m"
    {
#line 697 "hlds_rtti.m"
      mercury__list__append_3_p_1(hlds__hlds_rtti__TypeInfo_15_15, hlds__hlds_rtti__TIVars_5, hlds__hlds_rtti__TCIVars_6, hlds__hlds_rtti__Vars_4);
    }
#line 694 "hlds_rtti.m"
  }
#line 287 "hlds_rtti.m"
}

#line 281 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(
#line 281 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 281 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraints_4)
#line 281 "hlds_rtti.m"
{
#line 691 "hlds_rtti.m"
  {
#line 691 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 691 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 692 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 692 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 692 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 692 "hlds_rtti.m"
    {
#line 692 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__Constraints_4);
    }
#line 691 "hlds_rtti.m"
  }
#line 281 "hlds_rtti.m"
}

#line 680 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 680 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 680 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 680 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 680 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 680 "hlds_rtti.m"
{
#line 680 "hlds_rtti.m"
  {
#line 680 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 680 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9;

#line 680 "hlds_rtti.m"
    {
#line 680 "hlds_rtti.m"
      hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9);
    }
#line 680 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9));
#line 680 "hlds_rtti.m"
  }
#line 680 "hlds_rtti.m"
}

#line 679 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 679 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 679 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 679 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 679 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 679 "hlds_rtti.m"
{
#line 679 "hlds_rtti.m"
  {
#line 679 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 679 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_21;

#line 679 "hlds_rtti.m"
    {
#line 679 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__679__1_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv0_HeadVar__3_21);
    }
#line 679 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_21));
#line 679 "hlds_rtti.m"
  }
#line 679 "hlds_rtti.m"
}

#line 276 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0(
#line 276 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 276 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Types_4)
#line 276 "hlds_rtti.m"
{
#line 675 "hlds_rtti.m"
  {
#line 675 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23;
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_24_24;
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet0_7;
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet1_8;
#line 675 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet_9;
#line 676 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 676 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 679 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TypeSet1_8;
#line 680 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv3_TypeSet_9;

#line 678 "hlds_rtti.m"
    {
#line 678 "hlds_rtti.m"
      hlds__hlds_rtti__TypeSet0_7 = mercury__set_tree234__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18);
    }
#line 6964 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[2];
#line 6966 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_24_24 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 679 "hlds_rtti.m"
    {
#line 679 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[5], hlds__hlds_rtti__TypeMap_5, ((MR_Box) (hlds__hlds_rtti__TypeSet0_7)), &hlds__hlds_rtti__conv1_TypeSet1_8);
    }
#line 679 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet1_8 = ((MR_Word) hlds__hlds_rtti__conv1_TypeSet1_8);
#line 680 "hlds_rtti.m"
    {
#line 680 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[6], hlds__hlds_rtti__ConstraintMap_6, ((MR_Box) (hlds__hlds_rtti__TypeSet1_8)), &hlds__hlds_rtti__conv3_TypeSet_9);
    }
#line 680 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet_9 = ((MR_Word) hlds__hlds_rtti__conv3_TypeSet_9);
#line 682 "hlds_rtti.m"
    {
#line 682 "hlds_rtti.m"
      *hlds__hlds_rtti__Types_4 = mercury__set_tree234__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeSet_9);
    }
#line 675 "hlds_rtti.m"
  }
#line 276 "hlds_rtti.m"
}

#line 270 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(
#line 270 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 270 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__TVars_4)
#line 270 "hlds_rtti.m"
{
#line 672 "hlds_rtti.m"
  {
#line 672 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 672 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 673 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 673 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 673 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 673 "hlds_rtti.m"
    {
#line 673 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__TVars_4);
    }
#line 672 "hlds_rtti.m"
  }
#line 270 "hlds_rtti.m"
}

#line 264 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(
#line 264 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 264 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__NewVar_6,
#line 264 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
#line 264 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
#line 264 "hlds_rtti.m"
{
#line 660 "hlds_rtti.m"
  {
#line 660 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 660 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 661 "hlds_rtti.m"
    {
#line 661 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 665 "hlds_rtti.m"
#line 665 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
#line 665 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 665 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 669 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 665 "hlds_rtti.m"
        break;
#line 665 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 663 "hlds_rtti.m"
        {
#line 663 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 663 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 663 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 646 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 646 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 646 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 646 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 645 "hlds_rtti.m"
          {
#line 645 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 646 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 646 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 646 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 646 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 646 "hlds_rtti.m"
          {
#line 646 "hlds_rtti.m"
            MR_Word base;
#line 646 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 646 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 646 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 646 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 646 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 646 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 646 "hlds_rtti.m"
          }
#line 663 "hlds_rtti.m"
        }
#line 665 "hlds_rtti.m"
        break;
#line 665 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 666 "hlds_rtti.m"
        {
#line 666 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 666 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 666 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 628 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 628 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 628 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 630 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 630 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 630 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 630 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 629 "hlds_rtti.m"
          {
#line 629 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 630 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 630 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 630 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 630 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 630 "hlds_rtti.m"
          {
#line 630 "hlds_rtti.m"
            MR_Word base;
#line 630 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 630 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 630 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 630 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 630 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 630 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 630 "hlds_rtti.m"
          }
#line 666 "hlds_rtti.m"
        }
#line 665 "hlds_rtti.m"
        break;
#line 665 "hlds_rtti.m"
    }
#line 660 "hlds_rtti.m"
  }
#line 264 "hlds_rtti.m"
}

#line 256 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(
#line 256 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 256 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__NewVar_6,
#line 256 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
#line 256 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
#line 256 "hlds_rtti.m"
{
#line 648 "hlds_rtti.m"
  {
#line 648 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 648 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 649 "hlds_rtti.m"
    {
#line 649 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 653 "hlds_rtti.m"
#line 653 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
#line 653 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 653 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 657 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 653 "hlds_rtti.m"
        break;
#line 653 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 651 "hlds_rtti.m"
        {
#line 651 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 651 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 651 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 639 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 639 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 639 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 641 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 641 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 641 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 641 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 640 "hlds_rtti.m"
          {
#line 640 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 641 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 641 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 641 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 641 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 641 "hlds_rtti.m"
          {
#line 641 "hlds_rtti.m"
            MR_Word base;
#line 641 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 641 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 641 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 641 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 641 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 641 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 641 "hlds_rtti.m"
          }
#line 651 "hlds_rtti.m"
        }
#line 653 "hlds_rtti.m"
        break;
#line 653 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 654 "hlds_rtti.m"
        {
#line 654 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 654 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 654 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 623 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 623 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 623 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 625 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 625 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 625 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 625 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 624 "hlds_rtti.m"
          {
#line 624 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 625 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 625 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 625 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 625 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 625 "hlds_rtti.m"
          {
#line 625 "hlds_rtti.m"
            MR_Word base;
#line 625 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 625 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 625 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 625 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 625 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 625 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 625 "hlds_rtti.m"
          }
#line 654 "hlds_rtti.m"
        }
#line 653 "hlds_rtti.m"
        break;
#line 653 "hlds_rtti.m"
    }
#line 648 "hlds_rtti.m"
  }
#line 256 "hlds_rtti.m"
}

#line 249 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(
#line 249 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_5,
#line 249 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type_6,
#line 249 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 249 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 249 "hlds_rtti.m"
{
#line 643 "hlds_rtti.m"
  {
#line 643 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 643 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 643 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 644 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 644 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 644 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 646 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 646 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 646 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 646 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 645 "hlds_rtti.m"
    {
#line 645 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 646 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 646 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 646 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 646 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 646 "hlds_rtti.m"
    {
#line 646 "hlds_rtti.m"
      MR_Word base;
#line 646 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 646 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 646 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 646 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 646 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 646 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 646 "hlds_rtti.m"
    }
#line 643 "hlds_rtti.m"
  }
#line 249 "hlds_rtti.m"
}

#line 243 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(
#line 243 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_5,
#line 243 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type_6,
#line 243 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 243 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 243 "hlds_rtti.m"
{
#line 638 "hlds_rtti.m"
  {
#line 638 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 638 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 638 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 639 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 639 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 639 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 641 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 641 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 641 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 641 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 640 "hlds_rtti.m"
    {
#line 640 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 641 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 641 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 641 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 641 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 641 "hlds_rtti.m"
    {
#line 641 "hlds_rtti.m"
      MR_Word base;
#line 641 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 641 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 641 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 641 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 641 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 641 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 641 "hlds_rtti.m"
    }
#line 638 "hlds_rtti.m"
  }
#line 243 "hlds_rtti.m"
}

#line 237 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(
#line 237 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_4,
#line 237 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9,
#line 237 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10)
#line 237 "hlds_rtti.m"
{
#line 632 "hlds_rtti.m"
  {
#line 632 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_6;
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_7;
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_8;
#line 632 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 633 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Constraint_6;
#line 634 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 634 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 634 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_22_22;
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 633 "hlds_rtti.m"
    {
#line 633 "hlds_rtti.m"
      mercury__map__lookup_3_p_0(hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__V_11_11, ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), &hlds__hlds_rtti__conv0_Constraint_6);
    }
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__Constraint_6 = ((MR_Word) hlds__hlds_rtti__conv0_Constraint_6);
#line 634 "hlds_rtti.m"
    hlds__hlds_rtti__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 634 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 634 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 634 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 635 "hlds_rtti.m"
    {
#line 635 "hlds_rtti.m"
      mercury__map__set_4_p_0(hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__TypeInfo_23_23, ((MR_Box) (hlds__hlds_rtti__Constraint_6)), ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), hlds__hlds_rtti__Map0_7, &hlds__hlds_rtti__Map_8);
    }
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 636 "hlds_rtti.m"
    {
#line 636 "hlds_rtti.m"
      MR_Word base;
#line 636 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 636 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10 = base;
#line 636 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Map_8));
#line 636 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 636 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_21_21));
#line 636 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_22_22));
#line 636 "hlds_rtti.m"
    }
#line 632 "hlds_rtti.m"
  }
#line 237 "hlds_rtti.m"
}

#line 231 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_typeclass_info_var_4_p_0(
#line 231 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 231 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_6,
#line 231 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 231 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 231 "hlds_rtti.m"
{
#line 627 "hlds_rtti.m"
  {
#line 627 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 627 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 627 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 629 "hlds_rtti.m"
    {
#line 629 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 630 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 630 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 630 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 630 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 630 "hlds_rtti.m"
    {
#line 630 "hlds_rtti.m"
      MR_Word base;
#line 630 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 630 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 630 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 630 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 630 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 630 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 630 "hlds_rtti.m"
    }
#line 627 "hlds_rtti.m"
  }
#line 231 "hlds_rtti.m"
}

#line 225 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(
#line 225 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 225 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_6,
#line 225 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 225 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 225 "hlds_rtti.m"
{
#line 622 "hlds_rtti.m"
  {
#line 622 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 624 "hlds_rtti.m"
    {
#line 624 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 625 "hlds_rtti.m"
    {
#line 625 "hlds_rtti.m"
      MR_Word base;
#line 625 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 625 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 625 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 625 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 625 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 625 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 625 "hlds_rtti.m"
    }
#line 622 "hlds_rtti.m"
  }
#line 225 "hlds_rtti.m"
}

#line 219 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(
#line 219 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 219 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_6,
#line 219 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 219 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 219 "hlds_rtti.m"
{
#line 604 "hlds_rtti.m"
  {
#line 604 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 604 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 604 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 604 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 604 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 605 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 605 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 605 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 607 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 607 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 607 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 606 "hlds_rtti.m"
    {
#line 606 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 607 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 607 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 607 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 607 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 607 "hlds_rtti.m"
    {
#line 607 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 607 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 607 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 607 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 607 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 607 "hlds_rtti.m"
    }
#line 613 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 613 "hlds_rtti.m"
      {
#line 613 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 613 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 614 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 615 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 615 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 615 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 614 "hlds_rtti.m"
        {
#line 614 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 614 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 615 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 615 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 615 "hlds_rtti.m"
          {
#line 615 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 615 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 7838 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 615 "hlds_rtti.m"
            {
#line 615 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 615 "hlds_rtti.m"
          }
#line 617 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 616 "hlds_rtti.m"
          {
#line 616 "hlds_rtti.m"
          }
#line 617 "hlds_rtti.m"
        else
#line 618 "hlds_rtti.m"
          {
#line 618 "hlds_rtti.m"
            {
#line 618 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 618 "hlds_rtti.m"
              return;
            }
#line 618 "hlds_rtti.m"
          }
#line 613 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 613 "hlds_rtti.m"
      }
#line 613 "hlds_rtti.m"
    else
#line 620 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 604 "hlds_rtti.m"
  }
#line 219 "hlds_rtti.m"
}

#line 214 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(
#line 214 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 214 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_6,
#line 214 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 214 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 214 "hlds_rtti.m"
{
#line 598 "hlds_rtti.m"
  {
#line 598 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 598 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 598 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 598 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 598 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 599 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 599 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 599 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 601 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 601 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 601 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 600 "hlds_rtti.m"
    {
#line 600 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 601 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 601 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 601 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 601 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 601 "hlds_rtti.m"
    {
#line 601 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 601 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 601 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 601 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 601 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 601 "hlds_rtti.m"
    }
#line 613 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 613 "hlds_rtti.m"
      {
#line 613 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 613 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 614 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 615 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 615 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 615 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 614 "hlds_rtti.m"
        {
#line 614 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 614 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 615 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 615 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 615 "hlds_rtti.m"
          {
#line 615 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 615 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 7978 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 615 "hlds_rtti.m"
            {
#line 615 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 615 "hlds_rtti.m"
          }
#line 617 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 616 "hlds_rtti.m"
          {
#line 616 "hlds_rtti.m"
          }
#line 617 "hlds_rtti.m"
        else
#line 618 "hlds_rtti.m"
          {
#line 618 "hlds_rtti.m"
            {
#line 618 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 618 "hlds_rtti.m"
              return;
            }
#line 618 "hlds_rtti.m"
          }
#line 613 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 613 "hlds_rtti.m"
      }
#line 613 "hlds_rtti.m"
    else
#line 620 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 598 "hlds_rtti.m"
  }
#line 214 "hlds_rtti.m"
}

#line 208 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(
#line 208 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 208 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 208 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__VarInfo_6)
#line 208 "hlds_rtti.m"
{
#line 590 "hlds_rtti.m"
  {
#line 590 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_7;
#line 587 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 587 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 587 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 587 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 587 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Type_7;

#line 587 "hlds_rtti.m"
    {
#line 587 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_9_9, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv0_Type_7);
    }
#line 587 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 587 "hlds_rtti.m"
      {
#line 587 "hlds_rtti.m"
        hlds__hlds_rtti__Type_7 = ((MR_Word) hlds__hlds_rtti__conv0_Type_7);
#line 587 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 587 "hlds_rtti.m"
      }
#line 590 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 589 "hlds_rtti.m"
      {
#line 589 "hlds_rtti.m"
        MR_Word base;
#line 589 "hlds_rtti.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "hlds_rtti.m"
        *hlds__hlds_rtti__VarInfo_6 = base;
#line 589 "hlds_rtti.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Type_7));
#line 589 "hlds_rtti.m"
      }
#line 590 "hlds_rtti.m"
    else
#line 594 "hlds_rtti.m"
      {
#line 594 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Constraint_8;
#line 591 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 591 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 591 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 591 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 591 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Constraint_8;

#line 591 "hlds_rtti.m"
        {
#line 591 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_10_10, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv1_Constraint_8);
        }
#line 591 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 591 "hlds_rtti.m"
          {
#line 591 "hlds_rtti.m"
            hlds__hlds_rtti__Constraint_8 = ((MR_Word) hlds__hlds_rtti__conv1_Constraint_8);
#line 591 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 591 "hlds_rtti.m"
          }
#line 594 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 593 "hlds_rtti.m"
          {
#line 593 "hlds_rtti.m"
            MR_Word base;
#line 593 "hlds_rtti.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 593 "hlds_rtti.m"
            *hlds__hlds_rtti__VarInfo_6 = base;
#line 593 "hlds_rtti.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__hlds_rtti__Constraint_8));
#line 593 "hlds_rtti.m"
          }
#line 594 "hlds_rtti.m"
        else
#line 595 "hlds_rtti.m"
          *hlds__hlds_rtti__VarInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 594 "hlds_rtti.m"
      }
#line 590 "hlds_rtti.m"
  }
#line 208 "hlds_rtti.m"
}

#line 203 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(
#line 203 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 203 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 203 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__ProgVar_6)
#line 203 "hlds_rtti.m"
{
#line 582 "hlds_rtti.m"
  {
#line 582 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 582 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 583 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 583 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 583 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 583 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 583 "hlds_rtti.m"
    {
#line 583 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 583 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 583 "hlds_rtti.m"
      {
#line 583 "hlds_rtti.m"
        *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 583 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 583 "hlds_rtti.m"
      }
#line 582 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 582 "hlds_rtti.m"
  }
#line 203 "hlds_rtti.m"
}

#line 197 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(
#line 197 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 197 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 197 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__ProgVar_6)
#line 197 "hlds_rtti.m"
{
#line 579 "hlds_rtti.m"
  {
#line 579 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 579 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 580 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 580 "hlds_rtti.m"
    {
#line 580 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 580 "hlds_rtti.m"
    *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 579 "hlds_rtti.m"
  }
#line 197 "hlds_rtti.m"
}

#line 191 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(
#line 191 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 191 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 191 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Locn_6)
#line 191 "hlds_rtti.m"
{
#line 576 "hlds_rtti.m"
  {
#line 576 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 576 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 577 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 577 "hlds_rtti.m"
    {
#line 577 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 577 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 577 "hlds_rtti.m"
      {
#line 577 "hlds_rtti.m"
        *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 577 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 577 "hlds_rtti.m"
      }
#line 576 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 576 "hlds_rtti.m"
  }
#line 191 "hlds_rtti.m"
}

#line 186 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(
#line 186 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 186 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 186 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Locn_6)
#line 186 "hlds_rtti.m"
{
#line 573 "hlds_rtti.m"
  {
#line 573 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 573 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 574 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 574 "hlds_rtti.m"
    {
#line 574 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 574 "hlds_rtti.m"
    *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 573 "hlds_rtti.m"
  }
#line 186 "hlds_rtti.m"
}

#line 182 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(
#line 182 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_2)
#line 182 "hlds_rtti.m"
{
#line 570 "hlds_rtti.m"
  {
#line 570 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 570 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 1)));
#line 571 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 0)));
#line 571 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 2)));
#line 571 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 3)));

#line 571 "hlds_rtti.m"
    {
#line 571 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_3_3);
    }
#line 570 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 570 "hlds_rtti.m"
  }
#line 182 "hlds_rtti.m"
}

#line 176 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(
#line 176 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__VarUses_4,
#line 176 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20,
#line 176 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21)
#line 176 "hlds_rtti.m"
{
#line 486 "hlds_rtti.m"
  {
#line 486 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_26_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_28_28;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_29_29;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_30_30;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 0)));
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 1)));
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 2)));
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 3)));
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIList0_10;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTIList_11;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_12;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeList0_13;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTypeList_14;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_15;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintList0_16;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevConstraintList_17;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_18;
#line 486 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_19;

#line 494 "hlds_rtti.m"
    {
#line 494 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__TIMap0_7, &hlds__hlds_rtti__TIList0_10);
    }
#line 495 "hlds_rtti.m"
    {
#line 495 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_varmap_4_p_0(hlds__hlds_rtti__TIList0_10, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTIList_11);
    }
#line 496 "hlds_rtti.m"
    {
#line 496 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__RevTIList_11, &hlds__hlds_rtti__TIMap_12);
    }
#line 8406 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_28_28 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 8408 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 498 "hlds_rtti.m"
    {
#line 498 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__TypeMap0_8, &hlds__hlds_rtti__TypeList0_13);
    }
#line 499 "hlds_rtti.m"
    {
#line 499 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_map_4_p_0(hlds__hlds_rtti__TypeList0_13, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTypeList_14);
    }
#line 500 "hlds_rtti.m"
    {
#line 500 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__RevTypeList_14, &hlds__hlds_rtti__TypeMap_15);
    }
#line 8425 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 502 "hlds_rtti.m"
    {
#line 502 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__ConstraintMap0_9, &hlds__hlds_rtti__ConstraintList0_16);
    }
#line 503 "hlds_rtti.m"
    {
#line 503 "hlds_rtti.m"
      hlds__hlds_rtti__filter_constraint_map_6_p_0(hlds__hlds_rtti__ConstraintList0_16, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevConstraintList_17, hlds__hlds_rtti__TCIMap0_6, &hlds__hlds_rtti__TCIMap_18);
    }
#line 505 "hlds_rtti.m"
    {
#line 505 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__RevConstraintList_17, &hlds__hlds_rtti__ConstraintMap_19);
    }
#line 507 "hlds_rtti.m"
    {
#line 507 "hlds_rtti.m"
      MR_Word base;
#line 507 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 507 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21 = base;
#line 507 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_18));
#line 507 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_12));
#line 507 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_15));
#line 507 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_19));
#line 507 "hlds_rtti.m"
    }
#line 486 "hlds_rtti.m"
  }
#line 176 "hlds_rtti.m"
}

#line 170 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_init_1_p_0(
#line 170 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1)
#line 170 "hlds_rtti.m"
{
#line 480 "hlds_rtti.m"
  {
#line 480 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_6_6 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_7_7 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_2;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_3;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_4;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_5;

#line 481 "hlds_rtti.m"
    {
#line 481 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeCtorInfo_6_6, hlds__hlds_rtti__TypeInfo_7_7, &hlds__hlds_rtti__TCIMap_2);
    }
#line 482 "hlds_rtti.m"
    {
#line 482 "hlds_rtti.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, &hlds__hlds_rtti__TIMap_3);
    }
#line 483 "hlds_rtti.m"
    {
#line 483 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &hlds__hlds_rtti__TypeMap_4);
    }
#line 484 "hlds_rtti.m"
    {
#line 484 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, hlds__hlds_rtti__TypeCtorInfo_6_6, &hlds__hlds_rtti__ConstraintMap_5);
    }
#line 480 "hlds_rtti.m"
    {
#line 480 "hlds_rtti.m"
      MR_Word base;
#line 480 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 480 "hlds_rtti.m"
      *hlds__hlds_rtti__HeadVar__1_1 = base;
#line 480 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_2));
#line 480 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_3));
#line 480 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_4));
#line 480 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_5));
#line 480 "hlds_rtti.m"
    }
#line 480 "hlds_rtti.m"
  }
#line 170 "hlds_rtti.m"
}

#line 146 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__type_info_locn_set_var_3_p_0(
#line 146 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_1,
#line 146 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 146 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_3)
#line 146 "hlds_rtti.m"
{
#line 402 "hlds_rtti.m"
  {
#line 402 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 402 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 402 "hlds_rtti.m"
      {
#line 402 "hlds_rtti.m"
        MR_Word base;
#line 402 "hlds_rtti.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 402 "hlds_rtti.m"
        *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 402 "hlds_rtti.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 402 "hlds_rtti.m"
      }
#line 402 "hlds_rtti.m"
    else
#line 403 "hlds_rtti.m"
      {
#line 403 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 403 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 403 "hlds_rtti.m"
        {
#line 403 "hlds_rtti.m"
          MR_Word base;
#line 403 "hlds_rtti.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 403 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 403 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_rtti__Num_8));
#line 403 "hlds_rtti.m"
        }
#line 403 "hlds_rtti.m"
      }
#line 402 "hlds_rtti.m"
  }
#line 146 "hlds_rtti.m"
}

#line 144 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__type_info_locn_var_2_p_0(
#line 144 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 144 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Var_2)
#line 144 "hlds_rtti.m"
{
#line 399 "hlds_rtti.m"
  {
#line 399 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 399 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 399 "hlds_rtti.m"
      *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 399 "hlds_rtti.m"
    else
#line 400 "hlds_rtti.m"
      {
#line 400 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_5_5;

#line 400 "hlds_rtti.m"
        *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 400 "hlds_rtti.m"
        hlds__hlds_rtti__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 400 "hlds_rtti.m"
      }
#line 399 "hlds_rtti.m"
  }
#line 144 "hlds_rtti.m"
}

#line 94 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__proc_label_pred_proc_id_3_p_0(
#line 94 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiProcLabel_4,
#line 94 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__PredId_5,
#line 94 "hlds_rtti.m"
  MR_Integer * hlds__hlds_rtti__ProcId_6)
#line 94 "hlds_rtti.m"
{
#line 394 "hlds_rtti.m"
  {
#line 394 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 0)));
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 1)));
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 2)));
#line 394 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 3)));
#line 394 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 4)));
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 5)));
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 394 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;

#line 394 "hlds_rtti.m"
    *hlds__hlds_rtti__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 6)));
#line 394 "hlds_rtti.m"
    *hlds__hlds_rtti__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 7)));
#line 394 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 8)));
#line 394 "hlds_rtti.m"
    hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 9)));
#line 394 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 394 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 394 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 394 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 11)));
#line 394 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 394 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 394 "hlds_rtti.m"
  }
#line 94 "hlds_rtti.m"
}

#line 371 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 371 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 371 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1)
#line 371 "hlds_rtti.m"
{
#line 371 "hlds_rtti.m"
  {
#line 371 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__wrapper_arg_2;
#line 371 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 371 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_LambdaHeadVar__2_32;

#line 371 "hlds_rtti.m"
    {
#line 371 "hlds_rtti.m"
      hlds__hlds_rtti__conv0_LambdaHeadVar__2_32 = hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__371__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1));
    }
#line 371 "hlds_rtti.m"
    hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_LambdaHeadVar__2_32));
#line 371 "hlds_rtti.m"
    return hlds__hlds_rtti__wrapper_arg_2;
#line 371 "hlds_rtti.m"
  }
#line 371 "hlds_rtti.m"
}

#line 90 "hlds_rtti.m"
MR_Word MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0(
#line 90 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ModuleInfo_5,
#line 90 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__PredId_6,
#line 90 "hlds_rtti.m"
  MR_Integer hlds__hlds_rtti__ProcId_7)
#line 90 "hlds_rtti.m"
{
#line 350 "hlds_rtti.m"
  {
#line 350 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcLabel_8;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ThisModule_9;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredInfo_10;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcInfo_11;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredOrFunc_12;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredModule_13;
#line 350 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__PredName_14;
#line 350 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__Arity_15;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_16;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcVarSet_17;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcHeadVars_18;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcModes_19;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcDetism_20;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcArgModes_21;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredIsImported_22;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredIsPseudoImp_23;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcIsExported_24;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Origin_25;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcHeadVarsWithNames_26;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcIsImported_29;
#line 350 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;

#line 351 "hlds_rtti.m"
    {
#line 351 "hlds_rtti.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_rtti__ModuleInfo_5, &hlds__hlds_rtti__ThisModule_9);
    }
#line 352 "hlds_rtti.m"
    {
#line 352 "hlds_rtti.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredId_6, hlds__hlds_rtti__ProcId_7, &hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ProcInfo_11);
    }
#line 353 "hlds_rtti.m"
    {
#line 353 "hlds_rtti.m"
      hlds__hlds_rtti__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 354 "hlds_rtti.m"
    {
#line 354 "hlds_rtti.m"
      hlds__hlds_rtti__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 355 "hlds_rtti.m"
    {
#line 355 "hlds_rtti.m"
      hlds__hlds_rtti__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 356 "hlds_rtti.m"
    {
#line 356 "hlds_rtti.m"
      hlds__hlds_rtti__Arity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 357 "hlds_rtti.m"
    {
#line 357 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ArgTypes_16);
    }
#line 358 "hlds_rtti.m"
    {
#line 358 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcVarSet_17);
    }
#line 359 "hlds_rtti.m"
    {
#line 359 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 360 "hlds_rtti.m"
    {
#line 360 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcModes_19);
    }
#line 361 "hlds_rtti.m"
    {
#line 361 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcDetism_20);
    }
#line 362 "hlds_rtti.m"
    {
#line 362 "hlds_rtti.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__ProcModes_19, hlds__hlds_rtti__ArgTypes_16, &hlds__hlds_rtti__ProcArgModes_21);
    }
#line 364 "hlds_rtti.m"
    {
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 363 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 1;
#line 363 "hlds_rtti.m"
    else
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 0;
#line 366 "hlds_rtti.m"
    {
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 365 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 1;
#line 365 "hlds_rtti.m"
    else
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 0;
#line 368 "hlds_rtti.m"
    {
#line 368 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredInfo_10, hlds__hlds_rtti__ProcId_7);
    }
#line 367 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 369 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 1;
#line 367 "hlds_rtti.m"
    else
#line 369 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 0;
#line 370 "hlds_rtti.m"
    {
#line 370 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__Origin_25);
    }
#line 371 "hlds_rtti.m"
    {
#line 371 "hlds_rtti.m"
      hlds__hlds_rtti__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 371 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[0]));
#line 371 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 1) = ((MR_Box) (hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1));
#line 371 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 3) = ((MR_Box) (hlds__hlds_rtti__ProcVarSet_17));
#line 371 "hlds_rtti.m"
    }
#line 371 "hlds_rtti.m"
    {
#line 371 "hlds_rtti.m"
      hlds__hlds_rtti__ProcHeadVarsWithNames_26 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &hlds__hlds_rtti_scalar_common_2[0], hlds__hlds_rtti__V_30_30, hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 377 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsImported_22 == (MR_Integer) 1);
#line 378 "hlds_rtti.m"
    if (!(hlds__hlds_rtti__succeeded))
#line 379 "hlds_rtti.m"
      {
#line 379 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_37_37;

#line 379 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsPseudoImp_23 == (MR_Integer) 1);
#line 379 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 379 "hlds_rtti.m"
          {
#line 380 "hlds_rtti.m"
            {
#line 380 "hlds_rtti.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_rtti__V_37_37);
            }
#line 380 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__ProcId_7 == hlds__hlds_rtti__V_37_37);
#line 379 "hlds_rtti.m"
          }
#line 379 "hlds_rtti.m"
      }
#line 384 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 383 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 1;
#line 384 "hlds_rtti.m"
    else
#line 385 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 0;
#line 387 "hlds_rtti.m"
    {
#line 387 "hlds_rtti.m"
      hlds__hlds_rtti__ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 0) = ((MR_Box) (hlds__hlds_rtti__PredOrFunc_12));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 1) = ((MR_Box) (hlds__hlds_rtti__ThisModule_9));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 2) = ((MR_Box) (hlds__hlds_rtti__PredModule_13));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 3) = ((MR_Box) (hlds__hlds_rtti__PredName_14));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 4) = ((MR_Box) (hlds__hlds_rtti__Arity_15));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 5) = ((MR_Box) (hlds__hlds_rtti__ArgTypes_16));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 6) = ((MR_Box) (hlds__hlds_rtti__PredId_6));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 7) = ((MR_Box) (hlds__hlds_rtti__ProcId_7));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 8) = ((MR_Box) (hlds__hlds_rtti__ProcHeadVarsWithNames_26));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 9) = ((MR_Box) (hlds__hlds_rtti__ProcArgModes_21));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 10) = ((MR_Box) ((hlds__hlds_rtti__ProcDetism_20 | ((((hlds__hlds_rtti__PredIsImported_22 << (MR_Integer) 3)) | ((hlds__hlds_rtti__PredIsPseudoImp_23 << (MR_Integer) 4)))))));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 11) = ((MR_Box) (hlds__hlds_rtti__Origin_25));
#line 387 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 12) = ((MR_Box) ((hlds__hlds_rtti__ProcIsExported_24 | ((hlds__hlds_rtti__ProcIsImported_29 << (MR_Integer) 1)))));
#line 387 "hlds_rtti.m"
    }
#line 350 "hlds_rtti.m"
    return hlds__hlds_rtti__ProcLabel_8;
#line 350 "hlds_rtti.m"
  }
#line 90 "hlds_rtti.m"
}

void mercury__hlds__hlds_rtti__init(void)
{
}

void mercury__hlds__hlds_rtti__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0);
	MR_register_type_ctor_info(&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0);
}

void mercury__hlds__hlds_rtti__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_rtti. */
