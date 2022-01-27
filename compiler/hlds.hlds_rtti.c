/*
** Automatically generated from `hlds_rtti.m'
** by the Mercury compiler,
** version rotd-2014-09-01
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


/* :- module hlds.hlds_rtti. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_rtti__init
ENDINIT
*/

#include "hlds.hlds_rtti.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "transform_hlds.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 137 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 140 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 143 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

#line 146 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 149 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 152 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 155 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 158 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 167 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 170 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 173 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 176 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 179 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 182 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 185 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4];

#line 188 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0;

#line 191 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1];

#line 194 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1];

#line 197 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1];

#line 200 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1];

#line 203 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 206 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 209 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0;

#line 212 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16];

#line 215 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16];

#line 218 "hlds.hlds_rtti.c"
static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16];

#line 221 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0;

#line 224 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1];

#line 227 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1];

#line 230 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1];

#line 233 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1];

#line 236 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1];

#line 239 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0;

#line 242 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1];

#line 245 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1;

#line 248 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2;

#line 251 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1];

#line 254 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1];

#line 257 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1];

#line 260 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3];

#line 263 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3];

#line 266 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3];

#line 269 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 272 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 275 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 278 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 281 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4];

#line 284 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4];

#line 287 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0;

#line 290 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1];

#line 293 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1];

#line 296 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1];

#line 299 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1];

#line 302 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1];

#line 305 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0;

#line 308 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2];

#line 311 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1;

#line 314 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1];

#line 317 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1];

#line 320 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2];

#line 323 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2];

#line 326 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2];

#line 329 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 332 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 334 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 337 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 340 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 342 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 344 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 347 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 350 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 352 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 355 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 358 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 360 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 362 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 365 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 368 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 370 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 373 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 376 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 378 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 380 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 383 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 386 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 388 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 391 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 394 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 396 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 398 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 401 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 404 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 406 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 409 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 412 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 414 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 416 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 419 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 422 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 424 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 427 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 430 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 432 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 434 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 437 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 440 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 442 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 445 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 448 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 450 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 452 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 455 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 458 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 460 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 463 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 466 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 468 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 470 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 473 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 476 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 478 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 481 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 484 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 486 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 488 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 491 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 494 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 496 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 499 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 502 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 504 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 506 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 835 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 835 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 888 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__888__1_3_p_0(
#line 888 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 888 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_22,
#line 888 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_23);

#line 669 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__669__1_3_p_0(
#line 669 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 669 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 669 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21);

#line 366 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__366__1_2_f_0(
#line 366 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 366 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_31);

#line 414 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 414 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 414 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 414 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 414 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 414 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 414 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 472 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 472 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 472 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 472 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 460 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 460 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 460 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 460 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 460 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 460 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 460 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 466 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 466 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 466 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 466 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 888 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 888 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 888 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 888 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2);

#line 869 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 869 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4);

#line 835 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 835 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 824 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 824 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15);

#line 790 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 790 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 769 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 769 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 739 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 739 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37);

#line 721 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 721 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18);

#line 674 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 674 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 674 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 674 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);

#line 542 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 542 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 542 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 542 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 542 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 542 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 542 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6);

#line 524 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 524 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 524 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 524 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 524 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4);

#line 503 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 503 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 503 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 503 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 503 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4);

#line 818 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 818 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 815 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 815 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 706 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 706 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 706 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 706 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 706 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 706 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 704 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
#line 704 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 704 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 704 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 704 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 704 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 702 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
#line 702 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 702 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 702 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 702 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 702 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 700 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
#line 700 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 700 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 700 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 700 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 700 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 670 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 670 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 669 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 669 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 669 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 669 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 669 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 366 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 366 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 366 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1);


static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_1[7][2];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_3[4][6];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_4[4][10];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__hlds_rtti_scalar_common_6[1][7];




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



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1140 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1148 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1156 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1164 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1173 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1181 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1189 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1198 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1207 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1216 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1225 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1233 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1242 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1251 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1260 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1270 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1278 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1286 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0
};

#line 1294 "hlds.hlds_rtti.c"
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

#line 1309 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1314 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0
  }
};

#line 1323 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1328 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1] = {
  (MR_Integer) 0
};

#line 1333 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_instance_method_constraints_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "instance_method_constraints",
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0
  },
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0
};

#line 1354 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_prog_var_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____prog_var_name_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____prog_var_name_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "prog_var_name",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1375 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1384 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
  }
};

#line 1392 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0
  }
};

#line 1400 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
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

#line 1420 "hlds.hlds_rtti.c"
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

#line 1440 "hlds.hlds_rtti.c"
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

#line 1524 "hlds.hlds_rtti.c"
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

#line 1539 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1544 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0
  }
};

#line 1553 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1558 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1] = {
  (MR_Integer) 0
};

#line 1563 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_proc_label",
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0
  },
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0
};

#line 1584 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1589 "hlds.hlds_rtti.c"
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

#line 1604 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1609 "hlds.hlds_rtti.c"
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

#line 1624 "hlds.hlds_rtti.c"
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

#line 1639 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2
};

#line 1644 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0
};

#line 1649 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1654 "hlds.hlds_rtti.c"
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

#line 1673 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1680 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1687 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_var_info",
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0
  },
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0
};

#line 1708 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1717 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1726 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1735 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1744 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1752 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4] = {
  (MR_String) "rv_tci_varmap",
  (MR_String) "rv_ti_varmap",
  (MR_String) "rv_ti_type_map",
  (MR_String) "rv_tci_constraint_map"
};

#line 1760 "hlds.hlds_rtti.c"
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

#line 1775 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1780 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0
  }
};

#line 1789 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1794 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1] = {
  (MR_Integer) 0
};

#line 1799 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "rtti_varmaps",
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0
  },
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0
};

#line 1820 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1825 "hlds.hlds_rtti.c"
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

#line 1840 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1846 "hlds.hlds_rtti.c"
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

#line 1861 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0
};

#line 1866 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1871 "hlds.hlds_rtti.c"
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

#line 1885 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1891 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1897 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_locn_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_locn_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_locn",
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0
  },
  {
    hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0
};

#line 1918 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_type_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1939 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "type_info_varmap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1960 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_constraint_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_constraint_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1981 "hlds.hlds_rtti.c"
const MR_TypeCtorInfo_Struct hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_typeclass_info_varmap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001)),
  ((MR_Box) (hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001)),
  (MR_String) "hlds.hlds_rtti",
  (MR_String) "typeclass_info_varmap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2002 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 2005 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2007 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2009 "hlds.hlds_rtti.c"
{
#line 2011 "hlds.hlds_rtti.c"
  {
#line 2013 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2016 "hlds.hlds_rtti.c"
    {
#line 2018 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____instance_method_constraints_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2021 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2023 "hlds.hlds_rtti.c"
  }
#line 2025 "hlds.hlds_rtti.c"
}

#line 2028 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 2031 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2033 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2035 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2037 "hlds.hlds_rtti.c"
{
#line 2039 "hlds.hlds_rtti.c"
  {
#line 2041 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2044 "hlds.hlds_rtti.c"
    {
#line 2046 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____instance_method_constraints_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2049 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2051 "hlds.hlds_rtti.c"
  }
#line 2053 "hlds.hlds_rtti.c"
}

#line 2056 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 2059 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2061 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2063 "hlds.hlds_rtti.c"
{
#line 2065 "hlds.hlds_rtti.c"
  {
#line 2067 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2070 "hlds.hlds_rtti.c"
    {
#line 2072 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____prog_var_name_0_0(((MR_String) hlds__hlds_rtti__wrapper_arg_1), ((MR_String) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2075 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2077 "hlds.hlds_rtti.c"
  }
#line 2079 "hlds.hlds_rtti.c"
}

#line 2082 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 2085 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2087 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2089 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2091 "hlds.hlds_rtti.c"
{
#line 2093 "hlds.hlds_rtti.c"
  {
#line 2095 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2098 "hlds.hlds_rtti.c"
    {
#line 2100 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____prog_var_name_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_String) hlds__hlds_rtti__wrapper_arg_2), ((MR_String) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2103 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2105 "hlds.hlds_rtti.c"
  }
#line 2107 "hlds.hlds_rtti.c"
}

#line 2110 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 2113 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2115 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2117 "hlds.hlds_rtti.c"
{
#line 2119 "hlds.hlds_rtti.c"
  {
#line 2121 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2124 "hlds.hlds_rtti.c"
    {
#line 2126 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2129 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2131 "hlds.hlds_rtti.c"
  }
#line 2133 "hlds.hlds_rtti.c"
}

#line 2136 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 2139 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2141 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2143 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2145 "hlds.hlds_rtti.c"
{
#line 2147 "hlds.hlds_rtti.c"
  {
#line 2149 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2152 "hlds.hlds_rtti.c"
    {
#line 2154 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2157 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2159 "hlds.hlds_rtti.c"
  }
#line 2161 "hlds.hlds_rtti.c"
}

#line 2164 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 2167 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2169 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2171 "hlds.hlds_rtti.c"
{
#line 2173 "hlds.hlds_rtti.c"
  {
#line 2175 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2178 "hlds.hlds_rtti.c"
    {
#line 2180 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_var_info_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2183 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2185 "hlds.hlds_rtti.c"
  }
#line 2187 "hlds.hlds_rtti.c"
}

#line 2190 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 2193 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2195 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2197 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2199 "hlds.hlds_rtti.c"
{
#line 2201 "hlds.hlds_rtti.c"
  {
#line 2203 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2206 "hlds.hlds_rtti.c"
    {
#line 2208 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_var_info_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2211 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2213 "hlds.hlds_rtti.c"
  }
#line 2215 "hlds.hlds_rtti.c"
}

#line 2218 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 2221 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2223 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2225 "hlds.hlds_rtti.c"
{
#line 2227 "hlds.hlds_rtti.c"
  {
#line 2229 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2232 "hlds.hlds_rtti.c"
    {
#line 2234 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2237 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2239 "hlds.hlds_rtti.c"
  }
#line 2241 "hlds.hlds_rtti.c"
}

#line 2244 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 2247 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2249 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2251 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2253 "hlds.hlds_rtti.c"
{
#line 2255 "hlds.hlds_rtti.c"
  {
#line 2257 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2260 "hlds.hlds_rtti.c"
    {
#line 2262 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2265 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2267 "hlds.hlds_rtti.c"
  }
#line 2269 "hlds.hlds_rtti.c"
}

#line 2272 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 2275 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2277 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2279 "hlds.hlds_rtti.c"
{
#line 2281 "hlds.hlds_rtti.c"
  {
#line 2283 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2286 "hlds.hlds_rtti.c"
    {
#line 2288 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_locn_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2291 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2293 "hlds.hlds_rtti.c"
  }
#line 2295 "hlds.hlds_rtti.c"
}

#line 2298 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 2301 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2303 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2305 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2307 "hlds.hlds_rtti.c"
{
#line 2309 "hlds.hlds_rtti.c"
  {
#line 2311 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2314 "hlds.hlds_rtti.c"
    {
#line 2316 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_locn_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2319 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2321 "hlds.hlds_rtti.c"
  }
#line 2323 "hlds.hlds_rtti.c"
}

#line 2326 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 2329 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2331 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2333 "hlds.hlds_rtti.c"
{
#line 2335 "hlds.hlds_rtti.c"
  {
#line 2337 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2340 "hlds.hlds_rtti.c"
    {
#line 2342 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_type_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2345 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2347 "hlds.hlds_rtti.c"
  }
#line 2349 "hlds.hlds_rtti.c"
}

#line 2352 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 2355 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2357 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2359 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2361 "hlds.hlds_rtti.c"
{
#line 2363 "hlds.hlds_rtti.c"
  {
#line 2365 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2368 "hlds.hlds_rtti.c"
    {
#line 2370 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_type_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2373 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2375 "hlds.hlds_rtti.c"
  }
#line 2377 "hlds.hlds_rtti.c"
}

#line 2380 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 2383 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2385 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2387 "hlds.hlds_rtti.c"
{
#line 2389 "hlds.hlds_rtti.c"
  {
#line 2391 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2394 "hlds.hlds_rtti.c"
    {
#line 2396 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2399 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2401 "hlds.hlds_rtti.c"
  }
#line 2403 "hlds.hlds_rtti.c"
}

#line 2406 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 2409 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2411 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2413 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2415 "hlds.hlds_rtti.c"
{
#line 2417 "hlds.hlds_rtti.c"
  {
#line 2419 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2422 "hlds.hlds_rtti.c"
    {
#line 2424 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2427 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2429 "hlds.hlds_rtti.c"
  }
#line 2431 "hlds.hlds_rtti.c"
}

#line 2434 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 2437 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2439 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2441 "hlds.hlds_rtti.c"
{
#line 2443 "hlds.hlds_rtti.c"
  {
#line 2445 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2448 "hlds.hlds_rtti.c"
    {
#line 2450 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2453 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2455 "hlds.hlds_rtti.c"
  }
#line 2457 "hlds.hlds_rtti.c"
}

#line 2460 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 2463 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2465 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2467 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2469 "hlds.hlds_rtti.c"
{
#line 2471 "hlds.hlds_rtti.c"
  {
#line 2473 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2476 "hlds.hlds_rtti.c"
    {
#line 2478 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2481 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2483 "hlds.hlds_rtti.c"
  }
#line 2485 "hlds.hlds_rtti.c"
}

#line 2488 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 2491 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2493 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2495 "hlds.hlds_rtti.c"
{
#line 2497 "hlds.hlds_rtti.c"
  {
#line 2499 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2502 "hlds.hlds_rtti.c"
    {
#line 2504 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2507 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2509 "hlds.hlds_rtti.c"
  }
#line 2511 "hlds.hlds_rtti.c"
}

#line 2514 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 2517 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2519 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2521 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2523 "hlds.hlds_rtti.c"
{
#line 2525 "hlds.hlds_rtti.c"
  {
#line 2527 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2530 "hlds.hlds_rtti.c"
    {
#line 2532 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2535 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2537 "hlds.hlds_rtti.c"
  }
#line 2539 "hlds.hlds_rtti.c"
}

#line 835 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 835 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 835 "hlds_rtti.m"
{
#line 839 "hlds_rtti.m"
  {
#line 839 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 839 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 839 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 839 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 839 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_11;

#line 841 "hlds_rtti.m"
    {
#line 841 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Args0_10, &hlds__hlds_rtti__Args_11);
    }
#line 842 "hlds_rtti.m"
    {
#line 842 "hlds_rtti.m"
      MR_Word base;
#line 842 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "hlds_rtti.m"
      *hlds__hlds_rtti__Constraint_8 = base;
#line 842 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Name_9));
#line 842 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Args_11));
#line 842 "hlds_rtti.m"
    }
#line 839 "hlds_rtti.m"
  }
#line 835 "hlds_rtti.m"
}

#line 888 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__888__1_3_p_0(
#line 888 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 888 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_22,
#line 888 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_23)
#line 888 "hlds_rtti.m"
{
#line 888 "hlds_rtti.m"
  {
#line 888 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 888 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Locn_19;
#line 889 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_19;

#line 889 "hlds_rtti.m"
    {
#line 889 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TVarMap_3, ((MR_Box) (hlds__hlds_rtti__HeadVar__2_22)), &hlds__hlds_rtti__conv0_Locn_19);
    }
#line 889 "hlds_rtti.m"
    hlds__hlds_rtti__Locn_19 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_19);
#line 393 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_19)) == (MR_mktag((MR_Integer) 0))))
#line 393 "hlds_rtti.m"
      *hlds__hlds_rtti__HeadVar__3_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 393 "hlds_rtti.m"
    else
#line 394 "hlds_rtti.m"
      {
#line 394 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_32_32;

#line 394 "hlds_rtti.m"
        *hlds__hlds_rtti__HeadVar__3_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 394 "hlds_rtti.m"
        hlds__hlds_rtti__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 1)));
#line 394 "hlds_rtti.m"
      }
#line 888 "hlds_rtti.m"
  }
#line 888 "hlds_rtti.m"
}

#line 669 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__669__1_3_p_0(
#line 669 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 669 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 669 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21)
#line 669 "hlds_rtti.m"
{
#line 669 "hlds_rtti.m"
  {
#line 669 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 669 "hlds_rtti.m"
    {
#line 669 "hlds_rtti.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__HeadVar__1_19)), hlds__hlds_rtti__HeadVar__2_20, hlds__hlds_rtti__HeadVar__3_21);
#line 669 "hlds_rtti.m"
      return;
    }
#line 669 "hlds_rtti.m"
  }
#line 669 "hlds_rtti.m"
}

#line 366 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__366__1_2_f_0(
#line 366 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 366 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_31)
#line 366 "hlds_rtti.m"
{
#line 366 "hlds_rtti.m"
  {
#line 366 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 366 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__HeadVar__3_32;
#line 366 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Name_28;

#line 367 "hlds_rtti.m"
    {
#line 367 "hlds_rtti.m"
      hlds__hlds_rtti__Name_28 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__ProcVarSet_17, hlds__hlds_rtti__HeadVar__2_31);
    }
#line 366 "hlds_rtti.m"
    {
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__HeadVar__3_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 366 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_32, 0) = ((MR_Box) (hlds__hlds_rtti__HeadVar__2_31));
#line 366 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_32, 1) = ((MR_Box) (hlds__hlds_rtti__Name_28));
#line 366 "hlds_rtti.m"
    }
#line 366 "hlds_rtti.m"
    return hlds__hlds_rtti__HeadVar__3_32;
#line 366 "hlds_rtti.m"
  }
#line 366 "hlds_rtti.m"
}

#line 414 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 414 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 414 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 414 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 414 "hlds_rtti.m"
{
#line 414 "hlds_rtti.m"
  {
#line 414 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 414 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 414 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 414 "hlds_rtti.m"
    {
#line 414 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 414 "hlds_rtti.m"
      return;
    }
#line 414 "hlds_rtti.m"
  }
#line 414 "hlds_rtti.m"
}

#line 414 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 414 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 414 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 414 "hlds_rtti.m"
{
#line 414 "hlds_rtti.m"
  {
#line 414 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 414 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 414 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 414 "hlds_rtti.m"
    {
#line 414 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 414 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 414 "hlds_rtti.m"
  }
#line 414 "hlds_rtti.m"
}

#line 472 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 472 "hlds_rtti.m"
      return;
    }
#line 472 "hlds_rtti.m"
  }
#line 472 "hlds_rtti.m"
}

#line 472 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
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
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 472 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 472 "hlds_rtti.m"
  }
#line 472 "hlds_rtti.m"
}

#line 460 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 460 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 460 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 460 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 460 "hlds_rtti.m"
{
#line 460 "hlds_rtti.m"
  {
#line 460 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 460 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 460 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 460 "hlds_rtti.m"
    {
#line 460 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 460 "hlds_rtti.m"
      return;
    }
#line 460 "hlds_rtti.m"
  }
#line 460 "hlds_rtti.m"
}

#line 460 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 460 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 460 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 460 "hlds_rtti.m"
{
#line 460 "hlds_rtti.m"
  {
#line 460 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 460 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 460 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 460 "hlds_rtti.m"
    {
#line 460 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 460 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 460 "hlds_rtti.m"
  }
#line 460 "hlds_rtti.m"
}

#line 466 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 466 "hlds_rtti.m"
      return;
    }
#line 466 "hlds_rtti.m"
  }
#line 466 "hlds_rtti.m"
}

#line 466 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
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
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 466 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 466 "hlds_rtti.m"
  }
#line 466 "hlds_rtti.m"
}

#line 122 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0(
#line 122 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 122 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 122 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 122 "hlds_rtti.m"
{
#line 122 "hlds_rtti.m"
  {
#line 122 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 122 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 122 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_18 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 122 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_17 == hlds__hlds_rtti__CastY_18);
#line 122 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 2979 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 122 "hlds_rtti.m"
    else
#line 122 "hlds_rtti.m"
      if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 122 "hlds_rtti.m"
        {
#line 122 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "hlds_rtti.m"
          if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 122 "hlds_rtti.m"
            {
#line 122 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 122 "hlds_rtti.m"
              {
#line 122 "hlds_rtti.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_22_22)), ((MR_Box) (hlds__hlds_rtti__V_5_5)));
#line 122 "hlds_rtti.m"
                return;
              }
#line 122 "hlds_rtti.m"
            }
#line 122 "hlds_rtti.m"
          else
#line 3008 "hlds.hlds_rtti.c"
            *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 122 "hlds_rtti.m"
        }
#line 122 "hlds_rtti.m"
      else
#line 122 "hlds_rtti.m"
        {
#line 122 "hlds_rtti.m"
          MR_Integer hlds__hlds_rtti__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 122 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 122 "hlds_rtti.m"
          if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3023 "hlds.hlds_rtti.c"
            *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 122 "hlds_rtti.m"
          else
#line 122 "hlds_rtti.m"
            {
#line 122 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 122 "hlds_rtti.m"
              MR_Integer hlds__hlds_rtti__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 122 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__V_16_16;

#line 122 "hlds_rtti.m"
              {
#line 122 "hlds_rtti.m"
                mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], &hlds__hlds_rtti__V_16_16, ((MR_Box) (hlds__hlds_rtti__V_24_24)), ((MR_Box) (hlds__hlds_rtti__V_14_14)));
              }
#line 3041 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_16_16 == (MR_Integer) 0);
#line 122 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 122 "hlds_rtti.m"
              if (hlds__hlds_rtti__succeeded)
#line 122 "hlds_rtti.m"
                *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_16_16;
#line 122 "hlds_rtti.m"
              else
#line 122 "hlds_rtti.m"
                {
#line 122 "hlds_rtti.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_23_23, hlds__hlds_rtti__V_15_15);
#line 122 "hlds_rtti.m"
                  return;
                }
#line 122 "hlds_rtti.m"
            }
#line 122 "hlds_rtti.m"
        }
#line 122 "hlds_rtti.m"
  }
#line 122 "hlds_rtti.m"
}

#line 122 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0(
#line 122 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 122 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 122 "hlds_rtti.m"
{
#line 122 "hlds_rtti.m"
  {
#line 122 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 122 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 122 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 122 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
#line 122 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 122 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 122 "hlds_rtti.m"
    else
#line 122 "hlds_rtti.m"
      if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 122 "hlds_rtti.m"
        {
#line 122 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfo_11_11;
#line 122 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_4_4;

#line 122 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 122 "hlds_rtti.m"
          if (hlds__hlds_rtti__succeeded)
#line 122 "hlds_rtti.m"
            {
#line 122 "hlds_rtti.m"
              hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3112 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__TypeInfo_11_11 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3114 "hlds.hlds_rtti.c"
              {
#line 3116 "hlds.hlds_rtti.c"
                return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_11_11, ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_4_4)));
              }
#line 122 "hlds_rtti.m"
            }
#line 122 "hlds_rtti.m"
        }
#line 122 "hlds_rtti.m"
      else
#line 122 "hlds_rtti.m"
        {
#line 122 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfo_12_12;
#line 122 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 122 "hlds_rtti.m"
          MR_Integer hlds__hlds_rtti__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 122 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_7_7;
#line 122 "hlds_rtti.m"
          MR_Integer hlds__hlds_rtti__V_8_8;

#line 122 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 122 "hlds_rtti.m"
          if (hlds__hlds_rtti__succeeded)
#line 122 "hlds_rtti.m"
            {
#line 122 "hlds_rtti.m"
              hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 122 "hlds_rtti.m"
              hlds__hlds_rtti__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 3148 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__TypeInfo_12_12 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3150 "hlds.hlds_rtti.c"
              {
#line 3152 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_12_12, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
              }
#line 122 "hlds_rtti.m"
              if (hlds__hlds_rtti__succeeded)
#line 3157 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_6_6 == hlds__hlds_rtti__V_8_8);
#line 122 "hlds_rtti.m"
            }
#line 122 "hlds_rtti.m"
        }
#line 122 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 122 "hlds_rtti.m"
  }
#line 122 "hlds_rtti.m"
}

#line 399 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0(
#line 399 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 399 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 399 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 399 "hlds_rtti.m"
{
#line 399 "hlds_rtti.m"
  {
#line 399 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 399 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 399 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 399 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 399 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3194 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 399 "hlds_rtti.m"
    else
#line 399 "hlds_rtti.m"
      {
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 399 "hlds_rtti.m"
        {
#line 399 "hlds_rtti.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], &hlds__hlds_rtti__V_12_12, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
        }
#line 3224 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 399 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 399 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 399 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 399 "hlds_rtti.m"
        else
#line 399 "hlds_rtti.m"
          {
#line 399 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 399 "hlds_rtti.m"
            {
#line 399 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 3244 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 399 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 399 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 399 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 399 "hlds_rtti.m"
            else
#line 399 "hlds_rtti.m"
              {
#line 399 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 399 "hlds_rtti.m"
                {
#line 399 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 3264 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 399 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 399 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 399 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 399 "hlds_rtti.m"
                else
#line 399 "hlds_rtti.m"
                  {
#line 399 "hlds_rtti.m"
                    {
#line 399 "hlds_rtti.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_7_7)), ((MR_Box) (hlds__hlds_rtti__V_11_11)));
#line 399 "hlds_rtti.m"
                      return;
                    }
#line 399 "hlds_rtti.m"
                  }
#line 399 "hlds_rtti.m"
              }
#line 399 "hlds_rtti.m"
          }
#line 399 "hlds_rtti.m"
      }
#line 399 "hlds_rtti.m"
  }
#line 399 "hlds_rtti.m"
}

#line 399 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0(
#line 399 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 399 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 399 "hlds_rtti.m"
{
#line 399 "hlds_rtti.m"
  {
#line 399 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 399 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 399 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 399 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 399 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 399 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 399 "hlds_rtti.m"
    else
#line 399 "hlds_rtti.m"
      {
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_16_16;
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 3347 "hlds.hlds_rtti.c"
        {
#line 3349 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
        }
#line 399 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 399 "hlds_rtti.m"
          {
#line 3356 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[2];
#line 3358 "hlds.hlds_rtti.c"
            {
#line 3360 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 399 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 399 "hlds_rtti.m"
              {
#line 3367 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[3];
#line 3369 "hlds.hlds_rtti.c"
                {
#line 3371 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 399 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 399 "hlds_rtti.m"
                  {
#line 3378 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__TypeInfo_16_16 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[4];
#line 3380 "hlds.hlds_rtti.c"
                    {
#line 3382 "hlds.hlds_rtti.c"
                      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_16_16, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                    }
#line 399 "hlds_rtti.m"
                  }
#line 399 "hlds_rtti.m"
              }
#line 399 "hlds_rtti.m"
          }
#line 399 "hlds_rtti.m"
      }
#line 399 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 399 "hlds_rtti.m"
  }
#line 399 "hlds_rtti.m"
}

#line 149 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0(
#line 149 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 149 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 149 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 149 "hlds_rtti.m"
{
#line 149 "hlds_rtti.m"
  {
#line 149 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 149 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 149 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_17 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 149 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_16 == hlds__hlds_rtti__CastY_17);
#line 149 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3424 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 149 "hlds_rtti.m"
    else
#line 149 "hlds_rtti.m"
      if ((hlds__hlds_rtti__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 149 "hlds_rtti.m"
        else
#line 149 "hlds_rtti.m"
          if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3438 "hlds.hlds_rtti.c"
            *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 149 "hlds_rtti.m"
          else
#line 3442 "hlds.hlds_rtti.c"
            *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 149 "hlds_rtti.m"
      else
#line 149 "hlds_rtti.m"
        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 149 "hlds_rtti.m"
          {
#line 149 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 149 "hlds_rtti.m"
            if ((hlds__hlds_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3455 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 149 "hlds_rtti.m"
            else
#line 149 "hlds_rtti.m"
              if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 149 "hlds_rtti.m"
                {
#line 149 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 149 "hlds_rtti.m"
                  {
#line 149 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____mer_type_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__V_5_5);
#line 149 "hlds_rtti.m"
                    return;
                  }
#line 149 "hlds_rtti.m"
                }
#line 149 "hlds_rtti.m"
              else
#line 3477 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 149 "hlds_rtti.m"
          }
#line 149 "hlds_rtti.m"
        else
#line 149 "hlds_rtti.m"
          {
#line 149 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 149 "hlds_rtti.m"
            if ((hlds__hlds_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3490 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 149 "hlds_rtti.m"
            else
#line 149 "hlds_rtti.m"
              if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3496 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 149 "hlds_rtti.m"
              else
#line 149 "hlds_rtti.m"
                {
#line 149 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 149 "hlds_rtti.m"
                  {
#line 149 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____prog_constraint_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_21_21, hlds__hlds_rtti__V_12_12);
#line 149 "hlds_rtti.m"
                    return;
                  }
#line 149 "hlds_rtti.m"
                }
#line 149 "hlds_rtti.m"
          }
#line 149 "hlds_rtti.m"
  }
#line 149 "hlds_rtti.m"
}

#line 149 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0(
#line 149 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 149 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 149 "hlds_rtti.m"
{
#line 149 "hlds_rtti.m"
  {
#line 149 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 149 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_9 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 149 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_10 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 149 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_9 == hlds__hlds_rtti__CastY_10);
#line 149 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 149 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 149 "hlds_rtti.m"
    else
#line 149 "hlds_rtti.m"
      if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 149 "hlds_rtti.m"
        {
#line 149 "hlds_rtti.m"
          MR_Integer hlds__hlds_rtti__CastX_7 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 149 "hlds_rtti.m"
          MR_Integer hlds__hlds_rtti__CastY_8 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 149 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastY_8 == hlds__hlds_rtti__CastX_7);
#line 149 "hlds_rtti.m"
        }
#line 149 "hlds_rtti.m"
      else
#line 149 "hlds_rtti.m"
        if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 149 "hlds_rtti.m"
          {
#line 149 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 149 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_4_4;

#line 149 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 149 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 149 "hlds_rtti.m"
              {
#line 149 "hlds_rtti.m"
                hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3579 "hlds.hlds_rtti.c"
                {
#line 3581 "hlds.hlds_rtti.c"
                  return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_4_4);
                }
#line 149 "hlds_rtti.m"
              }
#line 149 "hlds_rtti.m"
          }
#line 149 "hlds_rtti.m"
        else
#line 149 "hlds_rtti.m"
          {
#line 149 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 149 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_6_6;

#line 149 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 149 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 149 "hlds_rtti.m"
              {
#line 149 "hlds_rtti.m"
                hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3605 "hlds.hlds_rtti.c"
                {
#line 3607 "hlds.hlds_rtti.c"
                  return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_6_6);
                }
#line 149 "hlds_rtti.m"
              }
#line 149 "hlds_rtti.m"
          }
#line 149 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 149 "hlds_rtti.m"
  }
#line 149 "hlds_rtti.m"
}

#line 39 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0(
#line 39 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 39 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 39 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 39 "hlds_rtti.m"
{
#line 39 "hlds_rtti.m"
  {
#line 39 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 39 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_51 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 39 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_52 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 39 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_51 == hlds__hlds_rtti__CastY_52);
#line 39 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3645 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "hlds_rtti.m"
    else
#line 39 "hlds_rtti.m"
      {
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_18_18 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 39 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 4)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 5)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 6)));
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 7)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 8)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 9)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 11)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_36_36;
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_69_69 = (MR_Integer) hlds__hlds_rtti__V_4_4;
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_70_70 = (MR_Integer) hlds__hlds_rtti__V_20_20;

#line 39 "hlds_rtti.m"
        {
#line 39 "hlds_rtti.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_36_36, hlds__hlds_rtti__V_69_69, hlds__hlds_rtti__V_70_70);
        }
#line 3727 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_36_36 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_36_36;
#line 39 "hlds_rtti.m"
        else
#line 39 "hlds_rtti.m"
          {
#line 39 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_37_37;

#line 39 "hlds_rtti.m"
            {
#line 39 "hlds_rtti.m"
              mdbcomp__prim_data____Compare____sym_name_0_0(&hlds__hlds_rtti__V_37_37, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
            }
#line 3747 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_37_37 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_37_37;
#line 39 "hlds_rtti.m"
            else
#line 39 "hlds_rtti.m"
              {
#line 39 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_38_38;

#line 39 "hlds_rtti.m"
                {
#line 39 "hlds_rtti.m"
                  mdbcomp__prim_data____Compare____sym_name_0_0(&hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22);
                }
#line 3767 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_38_38 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_38_38;
#line 39 "hlds_rtti.m"
                else
#line 39 "hlds_rtti.m"
                  {
#line 39 "hlds_rtti.m"
                    MR_Word hlds__hlds_rtti__V_39_39;

#line 39 "hlds_rtti.m"
                    {
#line 39 "hlds_rtti.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(&hlds__hlds_rtti__V_39_39, hlds__hlds_rtti__V_7_7, hlds__hlds_rtti__V_23_23);
                    }
#line 3787 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_39_39 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_39_39;
#line 39 "hlds_rtti.m"
                    else
#line 39 "hlds_rtti.m"
                      {
#line 39 "hlds_rtti.m"
                        MR_Word hlds__hlds_rtti__V_40_40;

#line 39 "hlds_rtti.m"
                        {
#line 39 "hlds_rtti.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_40_40, hlds__hlds_rtti__V_8_8, hlds__hlds_rtti__V_24_24);
                        }
#line 3807 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_40_40 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_40_40;
#line 39 "hlds_rtti.m"
                        else
#line 39 "hlds_rtti.m"
                          {
#line 39 "hlds_rtti.m"
                            MR_Word hlds__hlds_rtti__V_41_41;

#line 39 "hlds_rtti.m"
                            {
#line 39 "hlds_rtti.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__V_41_41, ((MR_Box) (hlds__hlds_rtti__V_9_9)), ((MR_Box) (hlds__hlds_rtti__V_25_25)));
                            }
#line 3827 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_41_41 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_41_41;
#line 39 "hlds_rtti.m"
                            else
#line 39 "hlds_rtti.m"
                              {
#line 39 "hlds_rtti.m"
                                MR_Word hlds__hlds_rtti__V_42_42;

#line 39 "hlds_rtti.m"
                                {
#line 39 "hlds_rtti.m"
                                  hlds__hlds_pred____Compare____pred_id_0_0(&hlds__hlds_rtti__V_42_42, hlds__hlds_rtti__V_10_10, hlds__hlds_rtti__V_26_26);
                                }
#line 3847 "hlds.hlds_rtti.c"
                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_42_42 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_42_42;
#line 39 "hlds_rtti.m"
                                else
#line 39 "hlds_rtti.m"
                                  {
#line 39 "hlds_rtti.m"
                                    MR_Word hlds__hlds_rtti__V_43_43;

#line 39 "hlds_rtti.m"
                                    {
#line 39 "hlds_rtti.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_43_43, hlds__hlds_rtti__V_11_11, hlds__hlds_rtti__V_27_27);
                                    }
#line 3867 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_43_43 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_43_43;
#line 39 "hlds_rtti.m"
                                    else
#line 39 "hlds_rtti.m"
                                      {
#line 39 "hlds_rtti.m"
                                        MR_Word hlds__hlds_rtti__V_44_44;

#line 39 "hlds_rtti.m"
                                        {
#line 39 "hlds_rtti.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[5], &hlds__hlds_rtti__V_44_44, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                        }
#line 3887 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_44_44 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_44_44;
#line 39 "hlds_rtti.m"
                                        else
#line 39 "hlds_rtti.m"
                                          {
#line 39 "hlds_rtti.m"
                                            MR_Word hlds__hlds_rtti__V_45_45;

#line 39 "hlds_rtti.m"
                                            {
#line 39 "hlds_rtti.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[6], &hlds__hlds_rtti__V_45_45, ((MR_Box) (hlds__hlds_rtti__V_13_13)), ((MR_Box) (hlds__hlds_rtti__V_29_29)));
                                            }
#line 3907 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_45_45 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_45_45;
#line 39 "hlds_rtti.m"
                                            else
#line 39 "hlds_rtti.m"
                                              {
#line 39 "hlds_rtti.m"
                                                MR_Word hlds__hlds_rtti__V_46_46;
#line 39 "hlds_rtti.m"
                                                MR_Integer hlds__hlds_rtti__V_71_71 = (MR_Integer) hlds__hlds_rtti__V_14_14;
#line 39 "hlds_rtti.m"
                                                MR_Integer hlds__hlds_rtti__V_72_72 = (MR_Integer) hlds__hlds_rtti__V_30_30;

#line 39 "hlds_rtti.m"
                                                {
#line 39 "hlds_rtti.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_46_46, hlds__hlds_rtti__V_71_71, hlds__hlds_rtti__V_72_72);
                                                }
#line 3931 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_46_46 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_46_46;
#line 39 "hlds_rtti.m"
                                                else
#line 39 "hlds_rtti.m"
                                                  {
#line 39 "hlds_rtti.m"
                                                    MR_Word hlds__hlds_rtti__V_47_47;
#line 39 "hlds_rtti.m"
                                                    MR_Integer hlds__hlds_rtti__V_73_73 = (MR_Integer) hlds__hlds_rtti__V_15_15;
#line 39 "hlds_rtti.m"
                                                    MR_Integer hlds__hlds_rtti__V_74_74 = (MR_Integer) hlds__hlds_rtti__V_31_31;

#line 39 "hlds_rtti.m"
                                                    {
#line 39 "hlds_rtti.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_47_47, hlds__hlds_rtti__V_73_73, hlds__hlds_rtti__V_74_74);
                                                    }
#line 3955 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_47_47 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                                    hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                      *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_47_47;
#line 39 "hlds_rtti.m"
                                                    else
#line 39 "hlds_rtti.m"
                                                      {
#line 39 "hlds_rtti.m"
                                                        MR_Word hlds__hlds_rtti__V_48_48;
#line 39 "hlds_rtti.m"
                                                        MR_Integer hlds__hlds_rtti__V_75_75 = (MR_Integer) hlds__hlds_rtti__V_16_16;
#line 39 "hlds_rtti.m"
                                                        MR_Integer hlds__hlds_rtti__V_76_76 = (MR_Integer) hlds__hlds_rtti__V_32_32;

#line 39 "hlds_rtti.m"
                                                        {
#line 39 "hlds_rtti.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_48_48, hlds__hlds_rtti__V_75_75, hlds__hlds_rtti__V_76_76);
                                                        }
#line 3979 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_48_48 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                                        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_48_48;
#line 39 "hlds_rtti.m"
                                                        else
#line 39 "hlds_rtti.m"
                                                          {
#line 39 "hlds_rtti.m"
                                                            MR_Word hlds__hlds_rtti__V_49_49;

#line 39 "hlds_rtti.m"
                                                            {
#line 39 "hlds_rtti.m"
                                                              hlds__hlds_pred____Compare____pred_origin_0_0(&hlds__hlds_rtti__V_49_49, hlds__hlds_rtti__V_17_17, hlds__hlds_rtti__V_33_33);
                                                            }
#line 3999 "hlds.hlds_rtti.c"
                                                            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_49_49 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                                            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_49_49;
#line 39 "hlds_rtti.m"
                                                            else
#line 39 "hlds_rtti.m"
                                                              {
#line 39 "hlds_rtti.m"
                                                                MR_Word hlds__hlds_rtti__V_50_50;
#line 39 "hlds_rtti.m"
                                                                MR_Integer hlds__hlds_rtti__V_77_77 = (MR_Integer) hlds__hlds_rtti__V_18_18;
#line 39 "hlds_rtti.m"
                                                                MR_Integer hlds__hlds_rtti__V_78_78 = (MR_Integer) hlds__hlds_rtti__V_34_34;

#line 39 "hlds_rtti.m"
                                                                {
#line 39 "hlds_rtti.m"
                                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__hlds_rtti__V_50_50, hlds__hlds_rtti__V_77_77, hlds__hlds_rtti__V_78_78);
                                                                }
#line 4023 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_50_50 == (MR_Integer) 0);
#line 39 "hlds_rtti.m"
                                                                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 39 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_50_50;
#line 39 "hlds_rtti.m"
                                                                else
#line 39 "hlds_rtti.m"
                                                                  {
#line 39 "hlds_rtti.m"
                                                                    MR_Integer hlds__hlds_rtti__V_79_79 = (MR_Integer) hlds__hlds_rtti__V_19_19;
#line 39 "hlds_rtti.m"
                                                                    MR_Integer hlds__hlds_rtti__V_80_80 = (MR_Integer) hlds__hlds_rtti__V_35_35;

#line 39 "hlds_rtti.m"
                                                                    {
#line 39 "hlds_rtti.m"
                                                                      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_79_79, hlds__hlds_rtti__V_80_80);
#line 39 "hlds_rtti.m"
                                                                      return;
                                                                    }
#line 39 "hlds_rtti.m"
                                                                  }
#line 39 "hlds_rtti.m"
                                                              }
#line 39 "hlds_rtti.m"
                                                          }
#line 39 "hlds_rtti.m"
                                                      }
#line 39 "hlds_rtti.m"
                                                  }
#line 39 "hlds_rtti.m"
                                              }
#line 39 "hlds_rtti.m"
                                          }
#line 39 "hlds_rtti.m"
                                      }
#line 39 "hlds_rtti.m"
                                  }
#line 39 "hlds_rtti.m"
                              }
#line 39 "hlds_rtti.m"
                          }
#line 39 "hlds_rtti.m"
                      }
#line 39 "hlds_rtti.m"
                  }
#line 39 "hlds_rtti.m"
              }
#line 39 "hlds_rtti.m"
          }
#line 39 "hlds_rtti.m"
      }
#line 39 "hlds_rtti.m"
  }
#line 39 "hlds_rtti.m"
}

#line 39 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0(
#line 39 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 39 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 39 "hlds_rtti.m"
{
#line 39 "hlds_rtti.m"
  {
#line 39 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 39 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_35 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 39 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_36 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 39 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_35 == hlds__hlds_rtti__CastY_36);
#line 39 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 39 "hlds_rtti.m"
    else
#line 39 "hlds_rtti.m"
      {
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_39_39;
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_42_42;
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_43_43;
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 39 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 4)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 5)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 6)));
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 7)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 8)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 9)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_13_13 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 11)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "hlds_rtti.m"
        MR_String hlds__hlds_rtti__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 39 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 7)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 8)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 9)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 11)));
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 39 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4183 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_3_3 == hlds__hlds_rtti__V_19_19);
#line 39 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
          {
#line 4189 "hlds.hlds_rtti.c"
            {
#line 4191 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_20_20);
            }
#line 39 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
              {
#line 4198 "hlds.hlds_rtti.c"
                {
#line 4200 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
                }
#line 39 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                  {
#line 4207 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22) == 0);
#line 39 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                      {
#line 4213 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_7_7 == hlds__hlds_rtti__V_23_23);
#line 39 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                          {
#line 4219 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__TypeInfo_39_39 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4221 "hlds.hlds_rtti.c"
                            {
#line 4223 "hlds.hlds_rtti.c"
                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_39_39, ((MR_Box) (hlds__hlds_rtti__V_8_8)), ((MR_Box) (hlds__hlds_rtti__V_24_24)));
                            }
#line 39 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                              {
#line 4230 "hlds.hlds_rtti.c"
                                {
#line 4232 "hlds.hlds_rtti.c"
                                  hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_rtti__V_9_9, hlds__hlds_rtti__V_25_25);
                                }
#line 39 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                  {
#line 4239 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_10_10 == hlds__hlds_rtti__V_26_26);
#line 39 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                      {
#line 4245 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__TypeInfo_42_42 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[5];
#line 4247 "hlds.hlds_rtti.c"
                                        {
#line 4249 "hlds.hlds_rtti.c"
                                          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_42_42, ((MR_Box) (hlds__hlds_rtti__V_11_11)), ((MR_Box) (hlds__hlds_rtti__V_27_27)));
                                        }
#line 39 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                          {
#line 4256 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__TypeInfo_43_43 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[6];
#line 4258 "hlds.hlds_rtti.c"
                                            {
#line 4260 "hlds.hlds_rtti.c"
                                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_43_43, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                            }
#line 39 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                              {
#line 4267 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == hlds__hlds_rtti__V_29_29);
#line 39 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                  {
#line 4273 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == hlds__hlds_rtti__V_30_30);
#line 39 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                      {
#line 4279 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_15_15 == hlds__hlds_rtti__V_31_31);
#line 39 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                          {
#line 4285 "hlds.hlds_rtti.c"
                                                            {
#line 4287 "hlds.hlds_rtti.c"
                                                              hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__V_32_32);
                                                            }
#line 39 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 39 "hlds_rtti.m"
                                                              {
#line 4294 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_17_17 == hlds__hlds_rtti__V_33_33);
#line 39 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 4298 "hlds.hlds_rtti.c"
                                                                  hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_18_18 == hlds__hlds_rtti__V_34_34);
#line 39 "hlds_rtti.m"
                                                              }
#line 39 "hlds_rtti.m"
                                                          }
#line 39 "hlds_rtti.m"
                                                      }
#line 39 "hlds_rtti.m"
                                                  }
#line 39 "hlds_rtti.m"
                                              }
#line 39 "hlds_rtti.m"
                                          }
#line 39 "hlds_rtti.m"
                                      }
#line 39 "hlds_rtti.m"
                                  }
#line 39 "hlds_rtti.m"
                              }
#line 39 "hlds_rtti.m"
                          }
#line 39 "hlds_rtti.m"
                      }
#line 39 "hlds_rtti.m"
                  }
#line 39 "hlds_rtti.m"
              }
#line 39 "hlds_rtti.m"
          }
#line 39 "hlds_rtti.m"
      }
#line 39 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 39 "hlds_rtti.m"
  }
#line 39 "hlds_rtti.m"
}

#line 33 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0(
#line 33 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 33 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__2_2,
#line 33 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__3_3)
#line 33 "hlds_rtti.m"
{
#line 33 "hlds_rtti.m"
  {
#line 33 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 33 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 33 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 33 "hlds_rtti.m"
    {
#line 33 "hlds_rtti.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__Cast_HeadVar1_4, hlds__hlds_rtti__Cast_HeadVar2_5);
#line 33 "hlds_rtti.m"
      return;
    }
#line 33 "hlds_rtti.m"
  }
#line 33 "hlds_rtti.m"
}

#line 33 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0(
#line 33 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__1_1,
#line 33 "hlds_rtti.m"
  MR_String hlds__hlds_rtti__HeadVar__2_2)
#line 33 "hlds_rtti.m"
{
#line 33 "hlds_rtti.m"
  {
#line 33 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 33 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 33 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 33 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__Cast_HeadVar1_3, hlds__hlds_rtti__Cast_HeadVar2_4) == 0);
#line 33 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 33 "hlds_rtti.m"
  }
#line 33 "hlds_rtti.m"
}

#line 105 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0(
#line 105 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 105 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 105 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 105 "hlds_rtti.m"
{
#line 105 "hlds_rtti.m"
  {
#line 105 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 105 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 105 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 105 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 105 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 4420 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 105 "hlds_rtti.m"
    else
#line 105 "hlds_rtti.m"
      {
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 105 "hlds_rtti.m"
        {
#line 105 "hlds_rtti.m"
          parse_tree__prog_data____Compare____class_id_0_0(&hlds__hlds_rtti__V_12_12, hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_8_8);
        }
#line 4450 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 105 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 105 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 105 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 105 "hlds_rtti.m"
        else
#line 105 "hlds_rtti.m"
          {
#line 105 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 105 "hlds_rtti.m"
            {
#line 105 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[3], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 4470 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 105 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 105 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 105 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 105 "hlds_rtti.m"
            else
#line 105 "hlds_rtti.m"
              {
#line 105 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 105 "hlds_rtti.m"
                {
#line 105 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[4], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 4490 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 105 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 105 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 105 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 105 "hlds_rtti.m"
                else
#line 105 "hlds_rtti.m"
                  {
#line 105 "hlds_rtti.m"
                    parse_tree__prog_data____Compare____prog_constraints_0_0(hlds__hlds_rtti__HeadVar__1_1, hlds__hlds_rtti__V_7_7, hlds__hlds_rtti__V_11_11);
#line 105 "hlds_rtti.m"
                    return;
                  }
#line 105 "hlds_rtti.m"
              }
#line 105 "hlds_rtti.m"
          }
#line 105 "hlds_rtti.m"
      }
#line 105 "hlds_rtti.m"
  }
#line 105 "hlds_rtti.m"
}

#line 105 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0(
#line 105 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 105 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 105 "hlds_rtti.m"
{
#line 105 "hlds_rtti.m"
  {
#line 105 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 105 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 105 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 105 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 105 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 105 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 105 "hlds_rtti.m"
    else
#line 105 "hlds_rtti.m"
      {
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 105 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 4567 "hlds.hlds_rtti.c"
        {
#line 4569 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____class_id_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_7_7);
        }
#line 105 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 105 "hlds_rtti.m"
          {
#line 4576 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4578 "hlds.hlds_rtti.c"
            {
#line 4580 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 105 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 105 "hlds_rtti.m"
              {
#line 4587 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[4];
#line 4589 "hlds.hlds_rtti.c"
                {
#line 4591 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 105 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 4596 "hlds.hlds_rtti.c"
                  {
#line 4598 "hlds.hlds_rtti.c"
                    return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_10_10);
                  }
#line 105 "hlds_rtti.m"
              }
#line 105 "hlds_rtti.m"
          }
#line 105 "hlds_rtti.m"
      }
#line 105 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 105 "hlds_rtti.m"
  }
#line 105 "hlds_rtti.m"
}

#line 888 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 888 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 888 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 888 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2)
#line 888 "hlds_rtti.m"
{
#line 888 "hlds_rtti.m"
  {
#line 888 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 888 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_23;

#line 888 "hlds_rtti.m"
    {
#line 888 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__888__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), &hlds__hlds_rtti__conv0_HeadVar__3_23);
    }
#line 888 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_23));
#line 888 "hlds_rtti.m"
  }
#line 888 "hlds_rtti.m"
}

#line 869 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 869 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 869 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4)
#line 869 "hlds_rtti.m"
{
#line 872 "hlds_rtti.m"
  while (MR_TRUE)
#line 872 "hlds_rtti.m"
    {
#line 872 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 872 "hlds_rtti.m"
      {
#line 872 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 872 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "hlds_rtti.m"
        else
#line 873 "hlds_rtti.m"
          {
#line 873 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 873 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 873 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Type_12;
#line 873 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeVars_13;

#line 874 "hlds_rtti.m"
            {
#line 874 "hlds_rtti.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__Var_7, &hlds__hlds_rtti__Type_12);
            }
#line 875 "hlds_rtti.m"
            {
#line 875 "hlds_rtti.m"
              parse_tree__prog_type__type_vars_2_p_0(hlds__hlds_rtti__Type_12, &hlds__hlds_rtti__TypeVars_13);
            }
#line 880 "hlds_rtti.m"
            if ((hlds__hlds_rtti__TypeVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "hlds_rtti.m"
              {
#line 879 "hlds_rtti.m"
                /* direct tailcall eliminated */
#line 879 "hlds_rtti.m"
                {
#line 879 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__Vars_8;

#line 879 "hlds_rtti.m"
                  hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 879 "hlds_rtti.m"
                }
#line 879 "hlds_rtti.m"
                continue;
#line 879 "hlds_rtti.m"
              }
#line 880 "hlds_rtti.m"
            else
#line 881 "hlds_rtti.m"
              {
#line 881 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfo_29_29;
#line 881 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__LookupVar_16;
#line 881 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsHead_20;
#line 881 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsTail_21;

#line 888 "hlds_rtti.m"
                {
#line 888 "hlds_rtti.m"
                  hlds__hlds_rtti__LookupVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 888 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[3]));
#line 888 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 1) = ((MR_Box) (hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1));
#line 888 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 888 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 3) = ((MR_Box) (hlds__hlds_rtti__TVarMap_3));
#line 888 "hlds_rtti.m"
                }
#line 4741 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 892 "hlds_rtti.m"
                {
#line 892 "hlds_rtti.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__LookupVar_16, hlds__hlds_rtti__TypeVars_13, &hlds__hlds_rtti__TypeInfoVarsHead_20);
                }
#line 894 "hlds_rtti.m"
                {
#line 894 "hlds_rtti.m"
                  hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__Vars_8, hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__TVarMap_3, &hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 895 "hlds_rtti.m"
                {
#line 895 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfoVarsHead_20, hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 881 "hlds_rtti.m"
              }
#line 873 "hlds_rtti.m"
          }
#line 872 "hlds_rtti.m"
      }
#line 872 "hlds_rtti.m"
      break;
#line 872 "hlds_rtti.m"
    }
#line 869 "hlds_rtti.m"
}

#line 835 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 835 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 835 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 835 "hlds_rtti.m"
{
#line 839 "hlds_rtti.m"
  {
#line 839 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 839 "hlds_rtti.m"
    {
#line 839 "hlds_rtti.m"
      hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Constraint0_7, hlds__hlds_rtti__Constraint_8);
#line 839 "hlds_rtti.m"
      return;
    }
#line 839 "hlds_rtti.m"
  }
#line 835 "hlds_rtti.m"
}

#line 824 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 824 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 824 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15)
#line 824 "hlds_rtti.m"
{
#line 829 "hlds_rtti.m"
  {
#line 829 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_12;
#line 829 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_13;

#line 831 "hlds_rtti.m"
    {
#line 831 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__Pred_6, hlds__hlds_rtti__Args0_11, &hlds__hlds_rtti__Args_12);
    }
#line 832 "hlds_rtti.m"
    {
#line 832 "hlds_rtti.m"
      hlds__hlds_rtti__Constraint_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 832 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 0) = ((MR_Box) (hlds__hlds_rtti__Name_10));
#line 832 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 1) = ((MR_Box) (hlds__hlds_rtti__Args_12));
#line 832 "hlds_rtti.m"
    }
#line 833 "hlds_rtti.m"
    {
#line 833 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_13)), ((MR_Box) (hlds__hlds_rtti__Var_8)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_14, hlds__hlds_rtti__STATE_VARIABLE_Map_15);
#line 833 "hlds_rtti.m"
      return;
    }
#line 829 "hlds_rtti.m"
  }
#line 824 "hlds_rtti.m"
}

#line 790 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 790 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 790 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 790 "hlds_rtti.m"
{
#line 796 "hlds_rtti.m"
  {
#line 796 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 796 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 796 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 796 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 717 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_32;
#line 715 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_33;
#line 715 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_32;
#line 807 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingConstraint_17;
#line 801 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingConstraint_17;

#line 797 "hlds_rtti.m"
    {
#line 797 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_12, &hlds__hlds_rtti__Constraint1_14);
    }
#line 799 "hlds_rtti.m"
    {
#line 799 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 4908 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_33 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 715 "hlds_rtti.m"
    {
#line 715 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_32);
    }
#line 715 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 715 "hlds_rtti.m"
      {
#line 715 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_32 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_32);
#line 715 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 715 "hlds_rtti.m"
      }
#line 717 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_32;
#line 717 "hlds_rtti.m"
    else
#line 718 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 801 "hlds_rtti.m"
    {
#line 801 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingConstraint_17);
    }
#line 801 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 801 "hlds_rtti.m"
      {
#line 801 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingConstraint_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingConstraint_17);
#line 801 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 801 "hlds_rtti.m"
      }
#line 807 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 804 "hlds_rtti.m"
      {
#line 802 "hlds_rtti.m"
        {
#line 802 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__Constraint_15, hlds__hlds_rtti__ExistingConstraint_17);
        }
#line 804 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 803 "hlds_rtti.m"
          {
#line 803 "hlds_rtti.m"
          }
#line 804 "hlds_rtti.m"
        else
#line 805 "hlds_rtti.m"
          {
#line 805 "hlds_rtti.m"
            {
#line 805 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_constraint_map\'/7", (MR_String) "inconsistent typeclass_infos");
#line 805 "hlds_rtti.m"
              return;
            }
#line 805 "hlds_rtti.m"
          }
#line 805 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 804 "hlds_rtti.m"
      }
#line 807 "hlds_rtti.m"
    else
#line 808 "hlds_rtti.m"
      {
#line 808 "hlds_rtti.m"
        {
#line 808 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Constraint_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
#line 808 "hlds_rtti.m"
          return;
        }
#line 808 "hlds_rtti.m"
      }
#line 796 "hlds_rtti.m"
  }
#line 790 "hlds_rtti.m"
}

#line 769 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 769 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 769 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 769 "hlds_rtti.m"
{
#line 773 "hlds_rtti.m"
  {
#line 773 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 773 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type1_14;
#line 773 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_15;
#line 773 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 717 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_43;
#line 715 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_44;
#line 715 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_43;
#line 786 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingType_17;
#line 777 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingType_17;

#line 774 "hlds_rtti.m"
    {
#line 774 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Type0_12, &hlds__hlds_rtti__Type1_14);
    }
#line 775 "hlds_rtti.m"
    {
#line 775 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Type1_14, &hlds__hlds_rtti__Type_15);
    }
#line 5048 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_44 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 715 "hlds_rtti.m"
    {
#line 715 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_44, hlds__hlds_rtti__TypeInfo_8_44, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_43);
    }
#line 715 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 715 "hlds_rtti.m"
      {
#line 715 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_43 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_43);
#line 715 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 715 "hlds_rtti.m"
      }
#line 717 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_43;
#line 717 "hlds_rtti.m"
    else
#line 718 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 777 "hlds_rtti.m"
    {
#line 777 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingType_17);
    }
#line 777 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 777 "hlds_rtti.m"
      {
#line 777 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingType_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingType_17);
#line 777 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 777 "hlds_rtti.m"
      }
#line 786 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 780 "hlds_rtti.m"
      {
#line 778 "hlds_rtti.m"
        {
#line 778 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__Type_15, hlds__hlds_rtti__ExistingType_17);
        }
#line 780 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 779 "hlds_rtti.m"
          {
#line 779 "hlds_rtti.m"
          }
#line 780 "hlds_rtti.m"
        else
#line 781 "hlds_rtti.m"
          {
#line 781 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_22_22;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_28_28;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_31_31;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_46_46;
#line 781 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_47_47;

#line 784 "hlds_rtti.m"
            {
#line 784 "hlds_rtti.m"
              hlds__hlds_rtti__V_28_28 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__Type_15)));
            }
#line 784 "hlds_rtti.m"
            {
#line 784 "hlds_rtti.m"
              hlds__hlds_rtti__V_31_31 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__ExistingType_17)));
            }
#line 5130 "hlds.hlds_rtti.c"
            {
#line 5132 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) " ExistingType: ", hlds__hlds_rtti__V_31_31);
            }
#line 5135 "hlds.hlds_rtti.c"
            {
#line 5137 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__V_47_47 = mercury__string__f_43_43_2_f_0(hlds__hlds_rtti__V_28_28, hlds__hlds_rtti__V_46_46);
            }
#line 5140 "hlds.hlds_rtti.c"
            {
#line 5142 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent type_infos:  Type: ", hlds__hlds_rtti__V_47_47);
            }
#line 781 "hlds_rtti.m"
            {
#line 781 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_type_map\'/7", hlds__hlds_rtti__V_22_22);
#line 781 "hlds_rtti.m"
              return;
            }
#line 781 "hlds_rtti.m"
          }
#line 781 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 780 "hlds_rtti.m"
      }
#line 786 "hlds_rtti.m"
    else
#line 787 "hlds_rtti.m"
      {
#line 787 "hlds_rtti.m"
        {
#line 787 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Type_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
#line 787 "hlds_rtti.m"
          return;
        }
#line 787 "hlds_rtti.m"
      }
#line 773 "hlds_rtti.m"
  }
#line 769 "hlds_rtti.m"
}

#line 739 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 739 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 739 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37)
#line 739 "hlds_rtti.m"
{
#line 743 "hlds_rtti.m"
  {
#line 743 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 743 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_40_40;
#line 743 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewLocn_16;
#line 743 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewTVar1_17;
#line 743 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewType_18;
#line 743 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_38_38;

#line 5210 "hlds.hlds_rtti.c"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_12)) == (MR_mktag((MR_Integer) 0))))
#line 5212 "hlds.hlds_rtti.c"
      {
#line 5214 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5216 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_15;
#line 717 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_49;
#line 715 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_50 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 715 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Var1_49;

#line 715 "hlds_rtti.m"
        {
#line 715 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_14)), &hlds__hlds_rtti__conv0_Var1_49);
        }
#line 715 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 715 "hlds_rtti.m"
          {
#line 715 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_49 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_49);
#line 715 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 715 "hlds_rtti.m"
          }
#line 717 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var1_49;
#line 717 "hlds_rtti.m"
        else
#line 718 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var_14;
#line 396 "hlds_rtti.m"
        {
#line 396 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 396 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_15));
#line 396 "hlds_rtti.m"
        }
#line 5256 "hlds.hlds_rtti.c"
      }
#line 5258 "hlds.hlds_rtti.c"
    else
#line 5260 "hlds.hlds_rtti.c"
      {
#line 5262 "hlds.hlds_rtti.c"
        MR_Integer hlds__hlds_rtti__Num_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 1)));
#line 5264 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5266 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_60;
#line 717 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_57;
#line 715 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_56 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 715 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Var1_57;

#line 715 "hlds_rtti.m"
        {
#line 715 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_59)), &hlds__hlds_rtti__conv1_Var1_57);
        }
#line 715 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 715 "hlds_rtti.m"
          {
#line 715 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_57 = ((MR_Word) hlds__hlds_rtti__conv1_Var1_57);
#line 715 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 715 "hlds_rtti.m"
          }
#line 717 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var1_57;
#line 717 "hlds_rtti.m"
        else
#line 718 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var_59;
#line 397 "hlds_rtti.m"
        {
#line 397 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_60));
#line 397 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 1) = ((MR_Box) (hlds__hlds_rtti__Num_55));
#line 397 "hlds_rtti.m"
        }
#line 5308 "hlds.hlds_rtti.c"
      }
#line 747 "hlds_rtti.m"
    {
#line 747 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__TVar_11, &hlds__hlds_rtti__NewTVar1_17);
    }
#line 5315 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_40_40 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 750 "hlds_rtti.m"
    {
#line 750 "hlds_rtti.m"
      hlds__hlds_rtti__V_38_38 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 750 "hlds_rtti.m"
    {
#line 750 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__NewTVar1_17, &hlds__hlds_rtti__NewType_18);
    }
#line 758 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__NewType_18)) == (MR_mktag((MR_Integer) 0))))
#line 754 "hlds_rtti.m"
      {
#line 754 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__NewTVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)));
#line 754 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 1)));

#line 757 "hlds_rtti.m"
        {
#line 757 "hlds_rtti.m"
          mercury__map__set_4_p_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__NewTVar_19)), ((MR_Box) (hlds__hlds_rtti__NewLocn_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_36, hlds__hlds_rtti__STATE_VARIABLE_Map_37);
#line 757 "hlds_rtti.m"
          return;
        }
#line 754 "hlds_rtti.m"
      }
#line 758 "hlds_rtti.m"
    else
#line 764 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 743 "hlds_rtti.m"
  }
#line 739 "hlds_rtti.m"
}

#line 721 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 721 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 721 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18)
#line 721 "hlds_rtti.m"
{
#line 725 "hlds_rtti.m"
  {
#line 725 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 725 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 725 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 725 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 717 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_25;
#line 715 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_26;
#line 715 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_25;

#line 726 "hlds_rtti.m"
    {
#line 726 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_11, &hlds__hlds_rtti__Constraint1_14);
    }
#line 728 "hlds_rtti.m"
    {
#line 728 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 5400 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 715 "hlds_rtti.m"
    {
#line 715 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_12)), &hlds__hlds_rtti__conv0_Var1_25);
    }
#line 715 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 715 "hlds_rtti.m"
      {
#line 715 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_25 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_25);
#line 715 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 715 "hlds_rtti.m"
      }
#line 717 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 716 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_25;
#line 717 "hlds_rtti.m"
    else
#line 718 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_12;
#line 730 "hlds_rtti.m"
    {
#line 730 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_15)), ((MR_Box) (hlds__hlds_rtti__Var_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_17, hlds__hlds_rtti__STATE_VARIABLE_Map_18);
#line 730 "hlds_rtti.m"
      return;
    }
#line 725 "hlds_rtti.m"
  }
#line 721 "hlds_rtti.m"
}

#line 674 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 674 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 674 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 674 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9)
#line 674 "hlds_rtti.m"
{
#line 677 "hlds_rtti.m"
  {
#line 677 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 677 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 1)));
#line 678 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 0)));

#line 679 "hlds_rtti.m"
    {
#line 679 "hlds_rtti.m"
      mercury__set_tree234__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__ArgTypes_7, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);
#line 679 "hlds_rtti.m"
      return;
    }
#line 677 "hlds_rtti.m"
  }
#line 674 "hlds_rtti.m"
}

#line 542 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 542 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 542 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 542 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 542 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 542 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 542 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6)
#line 542 "hlds_rtti.m"
{
#line 548 "hlds_rtti.m"
  while (MR_TRUE)
#line 548 "hlds_rtti.m"
    {
#line 548 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 548 "hlds_rtti.m"
      {
#line 548 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 548 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 548 "hlds_rtti.m"
          {
#line 548 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 548 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 548 "hlds_rtti.m"
          }
#line 548 "hlds_rtti.m"
        else
#line 550 "hlds_rtti.m"
          {
#line 550 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraint_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 550 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 550 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 0)));
#line 550 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Constraint_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 1)));
#line 550 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_21;
#line 550 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_22;
#line 550 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;
#line 550 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 553 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_22;

#line 552 "hlds_rtti.m"
            {
#line 552 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_21 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_19);
            }
#line 553 "hlds_rtti.m"
            {
#line 553 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_21, &hlds__hlds_rtti__conv0_Used_22);
            }
#line 553 "hlds_rtti.m"
            hlds__hlds_rtti__Used_22 = ((MR_Word) hlds__hlds_rtti__conv0_Used_22);
#line 557 "hlds_rtti.m"
            if ((hlds__hlds_rtti__Used_22 == (MR_Integer) 0))
#line 558 "hlds_rtti.m"
              {
#line 559 "hlds_rtti.m"
                {
#line 559 "hlds_rtti.m"
                  mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_20)), hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5, &hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27);
                }
#line 559 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 558 "hlds_rtti.m"
              }
#line 557 "hlds_rtti.m"
            else
#line 555 "hlds_rtti.m"
              {
#line 556 "hlds_rtti.m"
                {
#line 556 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 0) = ((MR_Box) (hlds__hlds_rtti__VarConstraint_14));
#line 556 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3));
#line 556 "hlds_rtti.m"
                }
#line 556 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 555 "hlds_rtti.m"
              }
#line 561 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 561 "hlds_rtti.m"
            {
#line 561 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarConstraints_15;
#line 561 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 561 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;

#line 561 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5;
#line 561 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3;
#line 561 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 561 "hlds_rtti.m"
            }
#line 561 "hlds_rtti.m"
            continue;
#line 550 "hlds_rtti.m"
          }
#line 548 "hlds_rtti.m"
      }
#line 548 "hlds_rtti.m"
      break;
#line 548 "hlds_rtti.m"
    }
#line 542 "hlds_rtti.m"
}

#line 524 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 524 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 524 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 524 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 524 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4)
#line 524 "hlds_rtti.m"
{
#line 529 "hlds_rtti.m"
  while (MR_TRUE)
#line 529 "hlds_rtti.m"
    {
#line 529 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 529 "hlds_rtti.m"
      {
#line 529 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 529 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 529 "hlds_rtti.m"
        else
#line 530 "hlds_rtti.m"
          {
#line 530 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 530 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 0)));
#line 530 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_15;
#line 530 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_16;
#line 530 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;
#line 531 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 1)));
#line 533 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_16;

#line 532 "hlds_rtti.m"
            {
#line 532 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_13);
            }
#line 533 "hlds_rtti.m"
            {
#line 533 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_15, &hlds__hlds_rtti__conv0_Used_16);
            }
#line 533 "hlds_rtti.m"
            hlds__hlds_rtti__Used_16 = ((MR_Word) hlds__hlds_rtti__conv0_Used_16);
#line 537 "hlds_rtti.m"
            if ((hlds__hlds_rtti__Used_16 == (MR_Integer) 0))
#line 538 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 537 "hlds_rtti.m"
            else
#line 536 "hlds_rtti.m"
              {
#line 536 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "hlds_rtti.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (hlds__hlds_rtti__VarType_9));
#line 536 "hlds_rtti.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3));
#line 536 "hlds_rtti.m"
              }
#line 540 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 540 "hlds_rtti.m"
            {
#line 540 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarTypes_10;
#line 540 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;

#line 540 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3;
#line 540 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 540 "hlds_rtti.m"
            }
#line 540 "hlds_rtti.m"
            continue;
#line 530 "hlds_rtti.m"
          }
#line 529 "hlds_rtti.m"
      }
#line 529 "hlds_rtti.m"
      break;
#line 529 "hlds_rtti.m"
    }
#line 524 "hlds_rtti.m"
}

#line 503 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 503 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 503 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 503 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 503 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4)
#line 503 "hlds_rtti.m"
{
#line 508 "hlds_rtti.m"
  while (MR_TRUE)
#line 508 "hlds_rtti.m"
    {
#line 508 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 508 "hlds_rtti.m"
      {
#line 508 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 508 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 508 "hlds_rtti.m"
        else
#line 509 "hlds_rtti.m"
          {
#line 509 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 509 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 509 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Locn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 1)));
#line 509 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_15;
#line 509 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_17;
#line 509 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_18;
#line 509 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;
#line 510 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___TVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 0)));
#line 515 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_18;

#line 512 "hlds_rtti.m"
            if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_14)) == (MR_mktag((MR_Integer) 0))))
#line 511 "hlds_rtti.m"
              hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 512 "hlds_rtti.m"
            else
#line 512 "hlds_rtti.m"
              {
#line 512 "hlds_rtti.m"
                MR_Integer hlds__hlds_rtti__V_16_16;

#line 512 "hlds_rtti.m"
                hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 512 "hlds_rtti.m"
                hlds__hlds_rtti__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 1)));
#line 512 "hlds_rtti.m"
              }
#line 514 "hlds_rtti.m"
            {
#line 514 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_17 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_15);
            }
#line 515 "hlds_rtti.m"
            {
#line 515 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_17, &hlds__hlds_rtti__conv0_Used_18);
            }
#line 515 "hlds_rtti.m"
            hlds__hlds_rtti__Used_18 = ((MR_Word) hlds__hlds_rtti__conv0_Used_18);
#line 519 "hlds_rtti.m"
            if ((hlds__hlds_rtti__Used_18 == (MR_Integer) 0))
#line 520 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 519 "hlds_rtti.m"
            else
#line 518 "hlds_rtti.m"
              {
#line 518 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "hlds_rtti.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 0) = ((MR_Box) (hlds__hlds_rtti__TVarLocn_9));
#line 518 "hlds_rtti.m"
                MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3));
#line 518 "hlds_rtti.m"
              }
#line 522 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 522 "hlds_rtti.m"
            {
#line 522 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__TVarLocns_10;
#line 522 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;

#line 522 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3;
#line 522 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 522 "hlds_rtti.m"
            }
#line 522 "hlds_rtti.m"
            continue;
#line 509 "hlds_rtti.m"
          }
#line 508 "hlds_rtti.m"
      }
#line 508 "hlds_rtti.m"
      break;
#line 508 "hlds_rtti.m"
    }
#line 503 "hlds_rtti.m"
}

#line 326 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__maybe_complete_with_typeinfo_vars_5_p_0(
#line 326 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Vars0_6,
#line 326 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TypeInfoLiveness_7,
#line 326 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_8,
#line 326 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_9,
#line 326 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Vars_10)
#line 326 "hlds_rtti.m"
{
#line 901 "hlds_rtti.m"
  {
#line 901 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 901 "hlds_rtti.m"
    if ((hlds__hlds_rtti__TypeInfoLiveness_7 == (MR_Integer) 0))
#line 906 "hlds_rtti.m"
      *hlds__hlds_rtti__Vars_10 = hlds__hlds_rtti__Vars0_6;
#line 901 "hlds_rtti.m"
    else
#line 901 "hlds_rtti.m"
      {
#line 901 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_15_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 901 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfoVars_11;
#line 901 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TVarMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 1)));
#line 901 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__VarList_18;
#line 901 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfoVarList_19;
#line 861 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 0)));
#line 861 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 2)));
#line 861 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 3)));

#line 862 "hlds_rtti.m"
        {
#line 862 "hlds_rtti.m"
          hlds__hlds_rtti__VarList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__Vars0_6);
        }
#line 863 "hlds_rtti.m"
        {
#line 863 "hlds_rtti.m"
          hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_18, hlds__hlds_rtti__VarTypes_8, hlds__hlds_rtti__TVarMap_17, &hlds__hlds_rtti__TypeInfoVarList_19);
        }
#line 864 "hlds_rtti.m"
        {
#line 864 "hlds_rtti.m"
          hlds__hlds_rtti__TypeInfoVars_11 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__TypeInfoVarList_19);
        }
#line 903 "hlds_rtti.m"
        {
#line 903 "hlds_rtti.m"
          parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Vars0_6, hlds__hlds_rtti__TypeInfoVars_11, hlds__hlds_rtti__Vars_10);
#line 903 "hlds_rtti.m"
          return;
        }
#line 901 "hlds_rtti.m"
      }
#line 901 "hlds_rtti.m"
  }
#line 326 "hlds_rtti.m"
}

#line 323 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_4_p_0(
#line 323 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Vars_5,
#line 323 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_6,
#line 323 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_7,
#line 323 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__TypeInfoVars_8)
#line 323 "hlds_rtti.m"
{
#line 860 "hlds_rtti.m"
  {
#line 860 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 860 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 860 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 1)));
#line 860 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarList_10;
#line 860 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfoVarList_11;
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 0)));
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 2)));
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 3)));

#line 862 "hlds_rtti.m"
    {
#line 862 "hlds_rtti.m"
      hlds__hlds_rtti__VarList_10 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__Vars_5);
    }
#line 863 "hlds_rtti.m"
    {
#line 863 "hlds_rtti.m"
      hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_10, hlds__hlds_rtti__VarTypes_6, hlds__hlds_rtti__TVarMap_9, &hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 864 "hlds_rtti.m"
    {
#line 864 "hlds_rtti.m"
      *hlds__hlds_rtti__TypeInfoVars_8 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 860 "hlds_rtti.m"
  }
#line 323 "hlds_rtti.m"
}

#line 312 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(
#line 312 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarMapsA_4,
#line 312 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarMapsB_5,
#line 312 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__VarMaps_6)
#line 312 "hlds_rtti.m"
{
#line 844 "hlds_rtti.m"
  {
#line 844 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_20_20 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 0)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 1)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 2)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 3)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 0)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 1)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 2)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 3)));
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImap_15;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImap_16;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_17;
#line 844 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_18;

#line 849 "hlds_rtti.m"
    {
#line 849 "hlds_rtti.m"
      mercury__map__overlay_3_p_0(hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TCImapA_7, hlds__hlds_rtti__TCImapB_11, &hlds__hlds_rtti__TCImap_15);
    }
#line 850 "hlds_rtti.m"
    {
#line 850 "hlds_rtti.m"
      mercury__map__overlay_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TImapA_8, hlds__hlds_rtti__TImapB_12, &hlds__hlds_rtti__TImap_16);
    }
#line 853 "hlds_rtti.m"
    {
#line 853 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__TypeMapA_9, hlds__hlds_rtti__TypeMapB_13, &hlds__hlds_rtti__TypeMap_17);
    }
#line 854 "hlds_rtti.m"
    {
#line 854 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__ConstraintMapA_10, hlds__hlds_rtti__ConstraintMapB_14, &hlds__hlds_rtti__ConstraintMap_18);
    }
#line 856 "hlds_rtti.m"
    {
#line 856 "hlds_rtti.m"
      MR_Word base;
#line 856 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 856 "hlds_rtti.m"
      *hlds__hlds_rtti__VarMaps_6 = base;
#line 856 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCImap_15));
#line 856 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TImap_16));
#line 856 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_17));
#line 856 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_18));
#line 856 "hlds_rtti.m"
    }
#line 844 "hlds_rtti.m"
  }
#line 312 "hlds_rtti.m"
}

#line 818 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 818 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 818 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 818 "hlds_rtti.m"
{
#line 818 "hlds_rtti.m"
  {
#line 818 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 818 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_Constraint_8;

#line 818 "hlds_rtti.m"
    {
#line 818 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_Constraint_8);
    }
#line 818 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_Constraint_8));
#line 818 "hlds_rtti.m"
  }
#line 818 "hlds_rtti.m"
}

#line 815 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 815 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 815 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 815 "hlds_rtti.m"
{
#line 815 "hlds_rtti.m"
  {
#line 815 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 815 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15;

#line 815 "hlds_rtti.m"
    {
#line 815 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15);
    }
#line 815 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15));
#line 815 "hlds_rtti.m"
  }
#line 815 "hlds_rtti.m"
}

#line 303 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0(
#line 303 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_4,
#line 303 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12,
#line 303 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13)
#line 303 "hlds_rtti.m"
{
#line 811 "hlds_rtti.m"
  {
#line 811 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_45_45;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_46_46;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_48_48;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap_9;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_10;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_11;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_33_33;
#line 811 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_34_34;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 815 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TciMap_9;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_29_29;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_31_31;
#line 820 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_32_32;

#line 815 "hlds_rtti.m"
    {
#line 815 "hlds_rtti.m"
      hlds__hlds_rtti__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 815 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_5[0]));
#line 815 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1));
#line 815 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 815 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 815 "hlds_rtti.m"
    }
#line 6183 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6185 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_46_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 816 "hlds_rtti.m"
    {
#line 816 "hlds_rtti.m"
      hlds__hlds_rtti__V_15_15 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46);
    }
#line 815 "hlds_rtti.m"
    {
#line 815 "hlds_rtti.m"
      mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_14_14, hlds__hlds_rtti__TciMap0_6, ((MR_Box) (hlds__hlds_rtti__V_15_15)), &hlds__hlds_rtti__conv1_TciMap_9);
    }
#line 815 "hlds_rtti.m"
    hlds__hlds_rtti__TciMap_9 = ((MR_Word) hlds__hlds_rtti__conv1_TciMap_9);
#line 6199 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 817 "hlds_rtti.m"
    {
#line 817 "hlds_rtti.m"
      mercury__map__map_values_only_3_p_0(hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__Pred_4, hlds__hlds_rtti__TypeMap0_7, &hlds__hlds_rtti__TypeMap_10);
    }
#line 818 "hlds_rtti.m"
    {
#line 818 "hlds_rtti.m"
      hlds__hlds_rtti__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 818 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_6[0]));
#line 818 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2));
#line 818 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 818 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 818 "hlds_rtti.m"
    }
#line 818 "hlds_rtti.m"
    {
#line 818 "hlds_rtti.m"
      mercury__map__map_values_3_p_0(hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__ConstraintMap0_8, &hlds__hlds_rtti__ConstraintMap_11);
    }
#line 820 "hlds_rtti.m"
    hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 820 "hlds_rtti.m"
    hlds__hlds_rtti__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 820 "hlds_rtti.m"
    hlds__hlds_rtti__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 820 "hlds_rtti.m"
    hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 821 "hlds_rtti.m"
    hlds__hlds_rtti__V_33_33 = hlds__hlds_rtti__TciMap_9;
#line 821 "hlds_rtti.m"
    hlds__hlds_rtti__V_34_34 = hlds__hlds_rtti__V_30_30;
#line 822 "hlds_rtti.m"
    {
#line 822 "hlds_rtti.m"
      MR_Word base;
#line 822 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 822 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13 = base;
#line 822 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_33_33));
#line 822 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_34_34));
#line 822 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_10));
#line 822 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_11));
#line 822 "hlds_rtti.m"
    }
#line 811 "hlds_rtti.m"
  }
#line 303 "hlds_rtti.m"
}

#line 706 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 706 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 706 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 706 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 706 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 706 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 706 "hlds_rtti.m"
{
#line 706 "hlds_rtti.m"
  {
#line 706 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 706 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19;

#line 706 "hlds_rtti.m"
    {
#line 706 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19);
    }
#line 706 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19));
#line 706 "hlds_rtti.m"
  }
#line 706 "hlds_rtti.m"
}

#line 704 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
#line 704 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 704 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 704 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 704 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 704 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 704 "hlds_rtti.m"
{
#line 704 "hlds_rtti.m"
  {
#line 704 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 704 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19;

#line 704 "hlds_rtti.m"
    {
#line 704 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19);
    }
#line 704 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19));
#line 704 "hlds_rtti.m"
  }
#line 704 "hlds_rtti.m"
}

#line 702 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
#line 702 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 702 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 702 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 702 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 702 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 702 "hlds_rtti.m"
{
#line 702 "hlds_rtti.m"
  {
#line 702 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 702 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37;

#line 702 "hlds_rtti.m"
    {
#line 702 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37);
    }
#line 702 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37));
#line 702 "hlds_rtti.m"
  }
#line 702 "hlds_rtti.m"
}

#line 700 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
#line 700 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 700 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 700 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 700 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 700 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 700 "hlds_rtti.m"
{
#line 700 "hlds_rtti.m"
  {
#line 700 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 700 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18;

#line 700 "hlds_rtti.m"
    {
#line 700 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18);
    }
#line 700 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18));
#line 700 "hlds_rtti.m"
  }
#line 700 "hlds_rtti.m"
}

#line 295 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(
#line 295 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_6,
#line 295 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_7,
#line 295 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_8,
#line 295 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18,
#line 295 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19)
#line 295 "hlds_rtti.m"
{
#line 697 "hlds_rtti.m"
  {
#line 697 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 692 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 692 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_30_30;
#line 692 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_31_31;

#line 692 "hlds_rtti.m"
    {
#line 692 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__Subst_8);
    }
#line 692 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 692 "hlds_rtti.m"
      {
#line 6431 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_30_30 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6433 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 693 "hlds_rtti.m"
        {
#line 693 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeCtorInfo_31_31, hlds__hlds_rtti__TSubst_7);
        }
#line 692 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 694 "hlds_rtti.m"
          {
#line 694 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TRenaming_6);
          }
#line 692 "hlds_rtti.m"
      }
#line 697 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 694 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18;
#line 697 "hlds_rtti.m"
    else
#line 699 "hlds_rtti.m"
      {
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_37_37;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_43_43;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_44_44;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_50_50;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 0)));
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 1)));
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 2)));
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 3)));
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap_14;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap_15;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap_16;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap_17;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_23_23;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26;
#line 699 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;
#line 700 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_TCIMap_14;
#line 702 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv3_TIMap_15;
#line 704 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv5_TypeMap_16;
#line 706 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv7_ConstraintMap_17;

#line 700 "hlds_rtti.m"
        {
#line 700 "hlds_rtti.m"
          hlds__hlds_rtti__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 700 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[0]));
#line 700 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1));
#line 700 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 700 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 700 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 700 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 700 "hlds_rtti.m"
        }
#line 6526 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6528 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_37_37 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 701 "hlds_rtti.m"
        {
#line 701 "hlds_rtti.m"
          hlds__hlds_rtti__V_21_21 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37);
        }
#line 700 "hlds_rtti.m"
        {
#line 700 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__TCIMap0_10, ((MR_Box) (hlds__hlds_rtti__V_21_21)), &hlds__hlds_rtti__conv1_TCIMap_14);
        }
#line 700 "hlds_rtti.m"
        hlds__hlds_rtti__TCIMap_14 = ((MR_Word) hlds__hlds_rtti__conv1_TCIMap_14);
#line 702 "hlds_rtti.m"
        {
#line 702 "hlds_rtti.m"
          hlds__hlds_rtti__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[1]));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 702 "hlds_rtti.m"
        }
#line 6560 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_43_43 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6562 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 703 "hlds_rtti.m"
        {
#line 703 "hlds_rtti.m"
          hlds__hlds_rtti__V_23_23 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44);
        }
#line 702 "hlds_rtti.m"
        {
#line 702 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__V_22_22, hlds__hlds_rtti__TIMap0_11, ((MR_Box) (hlds__hlds_rtti__V_23_23)), &hlds__hlds_rtti__conv3_TIMap_15);
        }
#line 702 "hlds_rtti.m"
        hlds__hlds_rtti__TIMap_15 = ((MR_Word) hlds__hlds_rtti__conv3_TIMap_15);
#line 704 "hlds_rtti.m"
        {
#line 704 "hlds_rtti.m"
          hlds__hlds_rtti__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[2]));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 704 "hlds_rtti.m"
        }
#line 6594 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 705 "hlds_rtti.m"
        {
#line 705 "hlds_rtti.m"
          hlds__hlds_rtti__V_25_25 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50);
        }
#line 704 "hlds_rtti.m"
        {
#line 704 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50, (MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__V_24_24, hlds__hlds_rtti__TypeMap0_12, ((MR_Box) (hlds__hlds_rtti__V_25_25)), &hlds__hlds_rtti__conv5_TypeMap_16);
        }
#line 704 "hlds_rtti.m"
        hlds__hlds_rtti__TypeMap_16 = ((MR_Word) hlds__hlds_rtti__conv5_TypeMap_16);
#line 706 "hlds_rtti.m"
        {
#line 706 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[3]));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 706 "hlds_rtti.m"
        }
#line 707 "hlds_rtti.m"
        {
#line 707 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36);
        }
#line 706 "hlds_rtti.m"
        {
#line 706 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36, (MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__V_26_26, hlds__hlds_rtti__ConstraintMap0_13, ((MR_Box) (hlds__hlds_rtti__V_27_27)), &hlds__hlds_rtti__conv7_ConstraintMap_17);
        }
#line 706 "hlds_rtti.m"
        hlds__hlds_rtti__ConstraintMap_17 = ((MR_Word) hlds__hlds_rtti__conv7_ConstraintMap_17);
#line 708 "hlds_rtti.m"
        {
#line 708 "hlds_rtti.m"
          MR_Word base;
#line 708 "hlds_rtti.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 708 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = base;
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_14));
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_15));
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_16));
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_17));
#line 708 "hlds_rtti.m"
        }
#line 699 "hlds_rtti.m"
      }
#line 697 "hlds_rtti.m"
  }
#line 295 "hlds_rtti.m"
}

#line 285 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_rtti_prog_vars_2_p_0(
#line 285 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 285 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Vars_4)
#line 285 "hlds_rtti.m"
{
#line 684 "hlds_rtti.m"
  {
#line 684 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 684 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 684 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIVars_5;
#line 684 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIVars_6;
#line 684 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 684 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8;
#line 685 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 685 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 685 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12;
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13;
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;

#line 685 "hlds_rtti.m"
    {
#line 685 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_7_7, &hlds__hlds_rtti__TIVars_5);
    }
#line 686 "hlds_rtti.m"
    hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 686 "hlds_rtti.m"
    hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 686 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 686 "hlds_rtti.m"
    hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 686 "hlds_rtti.m"
    {
#line 686 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_8_8, &hlds__hlds_rtti__TCIVars_6);
    }
#line 687 "hlds_rtti.m"
    {
#line 687 "hlds_rtti.m"
      mercury__list__append_3_p_1(hlds__hlds_rtti__TypeInfo_15_15, hlds__hlds_rtti__TIVars_5, hlds__hlds_rtti__TCIVars_6, hlds__hlds_rtti__Vars_4);
#line 687 "hlds_rtti.m"
      return;
    }
#line 684 "hlds_rtti.m"
  }
#line 285 "hlds_rtti.m"
}

#line 279 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_reusable_constraints_2_p_0(
#line 279 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 279 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraints_4)
#line 279 "hlds_rtti.m"
{
#line 681 "hlds_rtti.m"
  {
#line 681 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 681 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 682 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 682 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 682 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 682 "hlds_rtti.m"
    {
#line 682 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__Constraints_4);
#line 682 "hlds_rtti.m"
      return;
    }
#line 681 "hlds_rtti.m"
  }
#line 279 "hlds_rtti.m"
}

#line 670 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 670 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 670 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 670 "hlds_rtti.m"
{
#line 670 "hlds_rtti.m"
  {
#line 670 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 670 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9;

#line 670 "hlds_rtti.m"
    {
#line 670 "hlds_rtti.m"
      hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9);
    }
#line 670 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9));
#line 670 "hlds_rtti.m"
  }
#line 670 "hlds_rtti.m"
}

#line 669 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 669 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 669 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 669 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 669 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 669 "hlds_rtti.m"
{
#line 669 "hlds_rtti.m"
  {
#line 669 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 669 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_21;

#line 669 "hlds_rtti.m"
    {
#line 669 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__669__1_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv0_HeadVar__3_21);
    }
#line 669 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_21));
#line 669 "hlds_rtti.m"
  }
#line 669 "hlds_rtti.m"
}

#line 274 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0(
#line 274 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 274 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Types_4)
#line 274 "hlds_rtti.m"
{
#line 665 "hlds_rtti.m"
  {
#line 665 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23;
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_24_24;
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet0_7;
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet1_8;
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet_9;
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 666 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 669 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TypeSet1_8;
#line 670 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv3_TypeSet_9;

#line 668 "hlds_rtti.m"
    {
#line 668 "hlds_rtti.m"
      hlds__hlds_rtti__TypeSet0_7 = mercury__set_tree234__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18);
    }
#line 6870 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[2];
#line 6872 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_24_24 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 669 "hlds_rtti.m"
    {
#line 669 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[5], hlds__hlds_rtti__TypeMap_5, ((MR_Box) (hlds__hlds_rtti__TypeSet0_7)), &hlds__hlds_rtti__conv1_TypeSet1_8);
    }
#line 669 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet1_8 = ((MR_Word) hlds__hlds_rtti__conv1_TypeSet1_8);
#line 670 "hlds_rtti.m"
    {
#line 670 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[6], hlds__hlds_rtti__ConstraintMap_6, ((MR_Box) (hlds__hlds_rtti__TypeSet1_8)), &hlds__hlds_rtti__conv3_TypeSet_9);
    }
#line 670 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet_9 = ((MR_Word) hlds__hlds_rtti__conv3_TypeSet_9);
#line 672 "hlds_rtti.m"
    {
#line 672 "hlds_rtti.m"
      *hlds__hlds_rtti__Types_4 = mercury__set_tree234__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeSet_9);
    }
#line 665 "hlds_rtti.m"
  }
#line 274 "hlds_rtti.m"
}

#line 268 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_tvars_2_p_0(
#line 268 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_3,
#line 268 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__TVars_4)
#line 268 "hlds_rtti.m"
{
#line 662 "hlds_rtti.m"
  {
#line 662 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 662 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 663 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 663 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 663 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 663 "hlds_rtti.m"
    {
#line 663 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__TVars_4);
#line 663 "hlds_rtti.m"
      return;
    }
#line 662 "hlds_rtti.m"
  }
#line 268 "hlds_rtti.m"
}

#line 262 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_replace_4_p_0(
#line 262 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 262 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__NewVar_6,
#line 262 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
#line 262 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
#line 262 "hlds_rtti.m"
{
#line 650 "hlds_rtti.m"
  {
#line 650 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 650 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 651 "hlds_rtti.m"
    {
#line 651 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 655 "hlds_rtti.m"
    if ((hlds__hlds_rtti__VarInfo_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 655 "hlds_rtti.m"
    else
#line 655 "hlds_rtti.m"
      if (((MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 653 "hlds_rtti.m"
        {
#line 653 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 653 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 653 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 634 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 634 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 634 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 636 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 636 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 636 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 636 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 635 "hlds_rtti.m"
          {
#line 635 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 636 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 636 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 636 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 636 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 636 "hlds_rtti.m"
          {
#line 636 "hlds_rtti.m"
            MR_Word base;
#line 636 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 636 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 636 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 636 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 636 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 636 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 636 "hlds_rtti.m"
          }
#line 653 "hlds_rtti.m"
        }
#line 655 "hlds_rtti.m"
      else
#line 656 "hlds_rtti.m"
        {
#line 656 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 656 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 656 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 618 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 618 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 618 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 620 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 620 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 620 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 620 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 619 "hlds_rtti.m"
          {
#line 619 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 620 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 620 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 620 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 620 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 620 "hlds_rtti.m"
          {
#line 620 "hlds_rtti.m"
            MR_Word base;
#line 620 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 620 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 620 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 620 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 620 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 620 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 620 "hlds_rtti.m"
          }
#line 656 "hlds_rtti.m"
        }
#line 650 "hlds_rtti.m"
  }
#line 262 "hlds_rtti.m"
}

#line 254 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_var_info_duplicate_4_p_0(
#line 254 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 254 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__NewVar_6,
#line 254 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11,
#line 254 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12)
#line 254 "hlds_rtti.m"
{
#line 638 "hlds_rtti.m"
  {
#line 638 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 638 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 639 "hlds_rtti.m"
    {
#line 639 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 643 "hlds_rtti.m"
    if ((hlds__hlds_rtti__VarInfo_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 643 "hlds_rtti.m"
    else
#line 643 "hlds_rtti.m"
      if (((MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 641 "hlds_rtti.m"
        {
#line 641 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 641 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 641 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 629 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 629 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 629 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 630 "hlds_rtti.m"
          {
#line 630 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 631 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 631 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 631 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 631 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 631 "hlds_rtti.m"
          {
#line 631 "hlds_rtti.m"
            MR_Word base;
#line 631 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 631 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 631 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 631 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 631 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 631 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 631 "hlds_rtti.m"
          }
#line 641 "hlds_rtti.m"
        }
#line 643 "hlds_rtti.m"
      else
#line 644 "hlds_rtti.m"
        {
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 644 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 613 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 613 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 613 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 615 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 615 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 615 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 615 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 614 "hlds_rtti.m"
          {
#line 614 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 615 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 615 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 615 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 615 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 615 "hlds_rtti.m"
          {
#line 615 "hlds_rtti.m"
            MR_Word base;
#line 615 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 615 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 615 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 615 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 615 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 615 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 615 "hlds_rtti.m"
          }
#line 644 "hlds_rtti.m"
        }
#line 638 "hlds_rtti.m"
  }
#line 254 "hlds_rtti.m"
}

#line 247 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_type_4_p_0(
#line 247 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_5,
#line 247 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type_6,
#line 247 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 247 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 247 "hlds_rtti.m"
{
#line 633 "hlds_rtti.m"
  {
#line 633 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 634 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 634 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 634 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 635 "hlds_rtti.m"
    {
#line 635 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 636 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 636 "hlds_rtti.m"
    {
#line 636 "hlds_rtti.m"
      MR_Word base;
#line 636 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 636 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 636 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 636 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 636 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 636 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 636 "hlds_rtti.m"
    }
#line 633 "hlds_rtti.m"
  }
#line 247 "hlds_rtti.m"
}

#line 241 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_type_4_p_0(
#line 241 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_5,
#line 241 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type_6,
#line 241 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 241 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 241 "hlds_rtti.m"
{
#line 628 "hlds_rtti.m"
  {
#line 628 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 629 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 629 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 629 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 630 "hlds_rtti.m"
    {
#line 630 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 631 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 631 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 631 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 631 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 631 "hlds_rtti.m"
    {
#line 631 "hlds_rtti.m"
      MR_Word base;
#line 631 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 631 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 631 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 631 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 631 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 631 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 631 "hlds_rtti.m"
    }
#line 628 "hlds_rtti.m"
  }
#line 241 "hlds_rtti.m"
}

#line 235 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_reuse_typeclass_info_var_3_p_0(
#line 235 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_4,
#line 235 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9,
#line 235 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10)
#line 235 "hlds_rtti.m"
{
#line 622 "hlds_rtti.m"
  {
#line 622 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_6;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_7;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_8;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 623 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 623 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Constraint_6;
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_22_22;
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 623 "hlds_rtti.m"
    {
#line 623 "hlds_rtti.m"
      mercury__map__lookup_3_p_0(hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__V_11_11, ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), &hlds__hlds_rtti__conv0_Constraint_6);
    }
#line 623 "hlds_rtti.m"
    hlds__hlds_rtti__Constraint_6 = ((MR_Word) hlds__hlds_rtti__conv0_Constraint_6);
#line 624 "hlds_rtti.m"
    hlds__hlds_rtti__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 624 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 624 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 624 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 625 "hlds_rtti.m"
    {
#line 625 "hlds_rtti.m"
      mercury__map__set_4_p_0(hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__TypeInfo_23_23, ((MR_Box) (hlds__hlds_rtti__Constraint_6)), ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), hlds__hlds_rtti__Map0_7, &hlds__hlds_rtti__Map_8);
    }
#line 626 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 626 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 626 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 626 "hlds_rtti.m"
    hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 626 "hlds_rtti.m"
    {
#line 626 "hlds_rtti.m"
      MR_Word base;
#line 626 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 626 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10 = base;
#line 626 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Map_8));
#line 626 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 626 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_21_21));
#line 626 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_22_22));
#line 626 "hlds_rtti.m"
    }
#line 622 "hlds_rtti.m"
  }
#line 235 "hlds_rtti.m"
}

#line 229 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_typeclass_info_var_4_p_0(
#line 229 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 229 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_6,
#line 229 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 229 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 229 "hlds_rtti.m"
{
#line 617 "hlds_rtti.m"
  {
#line 617 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 617 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 617 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 618 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 618 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 618 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 620 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 620 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 620 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 620 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 619 "hlds_rtti.m"
    {
#line 619 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 620 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 620 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 620 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 620 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 620 "hlds_rtti.m"
    {
#line 620 "hlds_rtti.m"
      MR_Word base;
#line 620 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 620 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 620 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 620 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 620 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 620 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 620 "hlds_rtti.m"
    }
#line 617 "hlds_rtti.m"
  }
#line 229 "hlds_rtti.m"
}

#line 223 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_typeclass_info_var_4_p_0(
#line 223 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 223 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProgVar_6,
#line 223 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 223 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 223 "hlds_rtti.m"
{
#line 612 "hlds_rtti.m"
  {
#line 612 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 612 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 612 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 613 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 613 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 613 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 615 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 615 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 615 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 615 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 614 "hlds_rtti.m"
    {
#line 614 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 615 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 615 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 615 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 615 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 615 "hlds_rtti.m"
    {
#line 615 "hlds_rtti.m"
      MR_Word base;
#line 615 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 615 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 615 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 615 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 615 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 615 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 615 "hlds_rtti.m"
    }
#line 612 "hlds_rtti.m"
  }
#line 223 "hlds_rtti.m"
}

#line 217 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_set_type_info_locn_4_p_0(
#line 217 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 217 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_6,
#line 217 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 217 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 217 "hlds_rtti.m"
{
#line 594 "hlds_rtti.m"
  {
#line 594 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 594 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 594 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 594 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 594 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 595 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 595 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 595 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 597 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 597 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 597 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 596 "hlds_rtti.m"
    {
#line 596 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 597 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 597 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 597 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 597 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 597 "hlds_rtti.m"
    {
#line 597 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 597 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 597 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 597 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 597 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 597 "hlds_rtti.m"
    }
#line 603 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 603 "hlds_rtti.m"
      {
#line 603 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 603 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 604 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 604 "hlds_rtti.m"
        {
#line 604 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 604 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 605 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 605 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 605 "hlds_rtti.m"
          {
#line 605 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 605 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 7724 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 605 "hlds_rtti.m"
            {
#line 605 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 605 "hlds_rtti.m"
          }
#line 607 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 606 "hlds_rtti.m"
          {
#line 606 "hlds_rtti.m"
          }
#line 607 "hlds_rtti.m"
        else
#line 608 "hlds_rtti.m"
          {
#line 608 "hlds_rtti.m"
            {
#line 608 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 608 "hlds_rtti.m"
              return;
            }
#line 608 "hlds_rtti.m"
          }
#line 603 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 603 "hlds_rtti.m"
      }
#line 603 "hlds_rtti.m"
    else
#line 610 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 594 "hlds_rtti.m"
  }
#line 217 "hlds_rtti.m"
}

#line 212 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_det_insert_type_info_locn_4_p_0(
#line 212 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 212 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_6,
#line 212 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10,
#line 212 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11)
#line 212 "hlds_rtti.m"
{
#line 588 "hlds_rtti.m"
  {
#line 588 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 588 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 588 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 588 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 588 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 589 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 589 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 589 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 591 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 591 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 591 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 590 "hlds_rtti.m"
    {
#line 590 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 591 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 591 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 591 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 591 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 591 "hlds_rtti.m"
    {
#line 591 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 591 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 591 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 591 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 591 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 591 "hlds_rtti.m"
    }
#line 603 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 603 "hlds_rtti.m"
      {
#line 603 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 603 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 604 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 604 "hlds_rtti.m"
        {
#line 604 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 604 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 605 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 605 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 605 "hlds_rtti.m"
          {
#line 605 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 605 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 7864 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 605 "hlds_rtti.m"
            {
#line 605 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 605 "hlds_rtti.m"
          }
#line 607 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 606 "hlds_rtti.m"
          {
#line 606 "hlds_rtti.m"
          }
#line 607 "hlds_rtti.m"
        else
#line 608 "hlds_rtti.m"
          {
#line 608 "hlds_rtti.m"
            {
#line 608 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 608 "hlds_rtti.m"
              return;
            }
#line 608 "hlds_rtti.m"
          }
#line 603 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 603 "hlds_rtti.m"
      }
#line 603 "hlds_rtti.m"
    else
#line 610 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 588 "hlds_rtti.m"
  }
#line 212 "hlds_rtti.m"
}

#line 206 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(
#line 206 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 206 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_5,
#line 206 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__VarInfo_6)
#line 206 "hlds_rtti.m"
{
#line 582 "hlds_rtti.m"
  {
#line 582 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 582 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_7;
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 580 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 580 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Type_7;

#line 580 "hlds_rtti.m"
    {
#line 580 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_9_9, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv0_Type_7);
    }
#line 580 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 580 "hlds_rtti.m"
      {
#line 580 "hlds_rtti.m"
        hlds__hlds_rtti__Type_7 = ((MR_Word) hlds__hlds_rtti__conv0_Type_7);
#line 580 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 580 "hlds_rtti.m"
      }
#line 582 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 581 "hlds_rtti.m"
      {
#line 581 "hlds_rtti.m"
        MR_Word base;
#line 581 "hlds_rtti.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 581 "hlds_rtti.m"
        *hlds__hlds_rtti__VarInfo_6 = base;
#line 581 "hlds_rtti.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Type_7));
#line 581 "hlds_rtti.m"
      }
#line 582 "hlds_rtti.m"
    else
#line 584 "hlds_rtti.m"
      {
#line 584 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Constraint_8;
#line 582 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 582 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 582 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 582 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 582 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Constraint_8;

#line 582 "hlds_rtti.m"
        {
#line 582 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_10_10, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv1_Constraint_8);
        }
#line 582 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 582 "hlds_rtti.m"
          {
#line 582 "hlds_rtti.m"
            hlds__hlds_rtti__Constraint_8 = ((MR_Word) hlds__hlds_rtti__conv1_Constraint_8);
#line 582 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 582 "hlds_rtti.m"
          }
#line 584 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 583 "hlds_rtti.m"
          {
#line 583 "hlds_rtti.m"
            MR_Word base;
#line 583 "hlds_rtti.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "hlds_rtti.m"
            *hlds__hlds_rtti__VarInfo_6 = base;
#line 583 "hlds_rtti.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__hlds_rtti__Constraint_8));
#line 583 "hlds_rtti.m"
          }
#line 584 "hlds_rtti.m"
        else
#line 585 "hlds_rtti.m"
          *hlds__hlds_rtti__VarInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "hlds_rtti.m"
      }
#line 582 "hlds_rtti.m"
  }
#line 206 "hlds_rtti.m"
}

#line 201 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_typeclass_info_var_3_p_0(
#line 201 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 201 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 201 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__ProgVar_6)
#line 201 "hlds_rtti.m"
{
#line 576 "hlds_rtti.m"
  {
#line 576 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 576 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 577 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 577 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 577 "hlds_rtti.m"
    {
#line 577 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 577 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 577 "hlds_rtti.m"
      {
#line 577 "hlds_rtti.m"
        *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 577 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 577 "hlds_rtti.m"
      }
#line 576 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 576 "hlds_rtti.m"
  }
#line 201 "hlds_rtti.m"
}

#line 195 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_lookup_typeclass_info_var_3_p_0(
#line 195 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 195 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_5,
#line 195 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__ProgVar_6)
#line 195 "hlds_rtti.m"
{
#line 573 "hlds_rtti.m"
  {
#line 573 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 573 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 574 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 574 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 574 "hlds_rtti.m"
    {
#line 574 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 574 "hlds_rtti.m"
    *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 573 "hlds_rtti.m"
  }
#line 195 "hlds_rtti.m"
}

#line 189 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_search_type_info_locn_3_p_0(
#line 189 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 189 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 189 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Locn_6)
#line 189 "hlds_rtti.m"
{
#line 570 "hlds_rtti.m"
  {
#line 570 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 570 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 571 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 571 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 571 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 571 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 571 "hlds_rtti.m"
    {
#line 571 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 571 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 571 "hlds_rtti.m"
      {
#line 571 "hlds_rtti.m"
        *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 571 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 571 "hlds_rtti.m"
      }
#line 570 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 570 "hlds_rtti.m"
  }
#line 189 "hlds_rtti.m"
}

#line 184 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_lookup_type_info_locn_3_p_0(
#line 184 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_4,
#line 184 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_5,
#line 184 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Locn_6)
#line 184 "hlds_rtti.m"
{
#line 567 "hlds_rtti.m"
  {
#line 567 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 567 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 568 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 568 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 568 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 568 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 568 "hlds_rtti.m"
    {
#line 568 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 568 "hlds_rtti.m"
    *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 567 "hlds_rtti.m"
  }
#line 184 "hlds_rtti.m"
}

#line 180 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti__rtti_varmaps_no_tvars_1_p_0(
#line 180 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiVarMaps_2)
#line 180 "hlds_rtti.m"
{
#line 564 "hlds_rtti.m"
  {
#line 564 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 564 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 1)));
#line 565 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 0)));
#line 565 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 2)));
#line 565 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 3)));

#line 565 "hlds_rtti.m"
    {
#line 565 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_3_3);
    }
#line 564 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 564 "hlds_rtti.m"
  }
#line 180 "hlds_rtti.m"
}

#line 174 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__restrict_rtti_varmaps_3_p_0(
#line 174 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__VarUses_4,
#line 174 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20,
#line 174 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21)
#line 174 "hlds_rtti.m"
{
#line 480 "hlds_rtti.m"
  {
#line 480 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_26_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_28_28;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_29_29;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_30_30;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 0)));
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 1)));
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 2)));
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 3)));
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIList0_10;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTIList_11;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_12;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeList0_13;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTypeList_14;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_15;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintList0_16;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevConstraintList_17;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_18;
#line 480 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_19;

#line 488 "hlds_rtti.m"
    {
#line 488 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__TIMap0_7, &hlds__hlds_rtti__TIList0_10);
    }
#line 489 "hlds_rtti.m"
    {
#line 489 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_varmap_4_p_0(hlds__hlds_rtti__TIList0_10, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTIList_11);
    }
#line 490 "hlds_rtti.m"
    {
#line 490 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__RevTIList_11, &hlds__hlds_rtti__TIMap_12);
    }
#line 8292 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_28_28 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 8294 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 492 "hlds_rtti.m"
    {
#line 492 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__TypeMap0_8, &hlds__hlds_rtti__TypeList0_13);
    }
#line 493 "hlds_rtti.m"
    {
#line 493 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_map_4_p_0(hlds__hlds_rtti__TypeList0_13, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTypeList_14);
    }
#line 494 "hlds_rtti.m"
    {
#line 494 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__RevTypeList_14, &hlds__hlds_rtti__TypeMap_15);
    }
#line 8311 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 496 "hlds_rtti.m"
    {
#line 496 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__ConstraintMap0_9, &hlds__hlds_rtti__ConstraintList0_16);
    }
#line 497 "hlds_rtti.m"
    {
#line 497 "hlds_rtti.m"
      hlds__hlds_rtti__filter_constraint_map_6_p_0(hlds__hlds_rtti__ConstraintList0_16, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevConstraintList_17, hlds__hlds_rtti__TCIMap0_6, &hlds__hlds_rtti__TCIMap_18);
    }
#line 499 "hlds_rtti.m"
    {
#line 499 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__RevConstraintList_17, &hlds__hlds_rtti__ConstraintMap_19);
    }
#line 501 "hlds_rtti.m"
    {
#line 501 "hlds_rtti.m"
      MR_Word base;
#line 501 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 501 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21 = base;
#line 501 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_18));
#line 501 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_12));
#line 501 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_15));
#line 501 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_19));
#line 501 "hlds_rtti.m"
    }
#line 480 "hlds_rtti.m"
  }
#line 174 "hlds_rtti.m"
}

#line 168 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_init_1_p_0(
#line 168 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1)
#line 168 "hlds_rtti.m"
{
#line 474 "hlds_rtti.m"
  {
#line 474 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_6_6 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_7_7 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_2;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_3;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_4;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_5;

#line 475 "hlds_rtti.m"
    {
#line 475 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeCtorInfo_6_6, hlds__hlds_rtti__TypeInfo_7_7, &hlds__hlds_rtti__TCIMap_2);
    }
#line 476 "hlds_rtti.m"
    {
#line 476 "hlds_rtti.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, &hlds__hlds_rtti__TIMap_3);
    }
#line 477 "hlds_rtti.m"
    {
#line 477 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &hlds__hlds_rtti__TypeMap_4);
    }
#line 478 "hlds_rtti.m"
    {
#line 478 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, hlds__hlds_rtti__TypeCtorInfo_6_6, &hlds__hlds_rtti__ConstraintMap_5);
    }
#line 474 "hlds_rtti.m"
    {
#line 474 "hlds_rtti.m"
      MR_Word base;
#line 474 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 474 "hlds_rtti.m"
      *hlds__hlds_rtti__HeadVar__1_1 = base;
#line 474 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_2));
#line 474 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_3));
#line 474 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_4));
#line 474 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_5));
#line 474 "hlds_rtti.m"
    }
#line 474 "hlds_rtti.m"
  }
#line 168 "hlds_rtti.m"
}

#line 144 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__type_info_locn_set_var_3_p_0(
#line 144 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_1,
#line 144 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 144 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_3)
#line 144 "hlds_rtti.m"
{
#line 396 "hlds_rtti.m"
  {
#line 396 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 396 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 396 "hlds_rtti.m"
      {
#line 396 "hlds_rtti.m"
        MR_Word base;
#line 396 "hlds_rtti.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 396 "hlds_rtti.m"
        *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 396 "hlds_rtti.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 396 "hlds_rtti.m"
      }
#line 396 "hlds_rtti.m"
    else
#line 397 "hlds_rtti.m"
      {
#line 397 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 397 "hlds_rtti.m"
        {
#line 397 "hlds_rtti.m"
          MR_Word base;
#line 397 "hlds_rtti.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 397 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 397 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_rtti__Num_8));
#line 397 "hlds_rtti.m"
        }
#line 397 "hlds_rtti.m"
      }
#line 396 "hlds_rtti.m"
  }
#line 144 "hlds_rtti.m"
}

#line 142 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__type_info_locn_var_2_p_0(
#line 142 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 142 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Var_2)
#line 142 "hlds_rtti.m"
{
#line 393 "hlds_rtti.m"
  {
#line 393 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 393 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 393 "hlds_rtti.m"
      *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 393 "hlds_rtti.m"
    else
#line 394 "hlds_rtti.m"
      {
#line 394 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_5_5;

#line 394 "hlds_rtti.m"
        *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 394 "hlds_rtti.m"
        hlds__hlds_rtti__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 394 "hlds_rtti.m"
      }
#line 393 "hlds_rtti.m"
  }
#line 142 "hlds_rtti.m"
}

#line 92 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti__proc_label_pred_proc_id_3_p_0(
#line 92 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__RttiProcLabel_4,
#line 92 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__PredId_5,
#line 92 "hlds_rtti.m"
  MR_Integer * hlds__hlds_rtti__ProcId_6)
#line 92 "hlds_rtti.m"
{
#line 388 "hlds_rtti.m"
  {
#line 388 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 0)));
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 1)));
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 2)));
#line 388 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 3)));
#line 388 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 4)));
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 5)));
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 388 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;

#line 388 "hlds_rtti.m"
    *hlds__hlds_rtti__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 6)));
#line 388 "hlds_rtti.m"
    *hlds__hlds_rtti__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 7)));
#line 388 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 8)));
#line 388 "hlds_rtti.m"
    hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 9)));
#line 388 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 388 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 388 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 388 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 11)));
#line 388 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 388 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 388 "hlds_rtti.m"
  }
#line 92 "hlds_rtti.m"
}

#line 366 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 366 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 366 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1)
#line 366 "hlds_rtti.m"
{
#line 366 "hlds_rtti.m"
  {
#line 366 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__wrapper_arg_2;
#line 366 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 366 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_32;

#line 366 "hlds_rtti.m"
    {
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__conv0_HeadVar__3_32 = hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__366__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1));
    }
#line 366 "hlds_rtti.m"
    hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_32));
#line 366 "hlds_rtti.m"
    return hlds__hlds_rtti__wrapper_arg_2;
#line 366 "hlds_rtti.m"
  }
#line 366 "hlds_rtti.m"
}

#line 88 "hlds_rtti.m"
MR_Word MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0(
#line 88 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ModuleInfo_5,
#line 88 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__PredId_6,
#line 88 "hlds_rtti.m"
  MR_Integer hlds__hlds_rtti__ProcId_7)
#line 88 "hlds_rtti.m"
{
#line 348 "hlds_rtti.m"
  {
#line 348 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcLabel_8;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ThisModule_9;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredInfo_10;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcInfo_11;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredOrFunc_12;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredModule_13;
#line 348 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__PredName_14;
#line 348 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__Arity_15;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_16;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcVarSet_17;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcHeadVars_18;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcModes_19;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcDetism_20;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcArgModes_21;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredIsImported_22;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__PredIsPseudoImp_23;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcIsExported_24;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Origin_25;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcHeadVarsWithNames_26;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ProcIsImported_29;
#line 348 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;

#line 349 "hlds_rtti.m"
    {
#line 349 "hlds_rtti.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__hlds_rtti__ModuleInfo_5, &hlds__hlds_rtti__ThisModule_9);
    }
#line 350 "hlds_rtti.m"
    {
#line 350 "hlds_rtti.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredId_6, hlds__hlds_rtti__ProcId_7, &hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ProcInfo_11);
    }
#line 351 "hlds_rtti.m"
    {
#line 351 "hlds_rtti.m"
      hlds__hlds_rtti__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 352 "hlds_rtti.m"
    {
#line 352 "hlds_rtti.m"
      hlds__hlds_rtti__PredModule_13 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 353 "hlds_rtti.m"
    {
#line 353 "hlds_rtti.m"
      hlds__hlds_rtti__PredName_14 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 354 "hlds_rtti.m"
    {
#line 354 "hlds_rtti.m"
      hlds__hlds_rtti__Arity_15 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 355 "hlds_rtti.m"
    {
#line 355 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__ArgTypes_16);
    }
#line 356 "hlds_rtti.m"
    {
#line 356 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcVarSet_17);
    }
#line 357 "hlds_rtti.m"
    {
#line 357 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 358 "hlds_rtti.m"
    {
#line 358 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcModes_19);
    }
#line 359 "hlds_rtti.m"
    {
#line 359 "hlds_rtti.m"
      hlds__hlds_pred__proc_info_interface_determinism_2_p_0(hlds__hlds_rtti__ProcInfo_11, &hlds__hlds_rtti__ProcDetism_20);
    }
#line 360 "hlds_rtti.m"
    {
#line 360 "hlds_rtti.m"
      check_hlds__mode_util__modes_to_arg_modes_4_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__ProcModes_19, hlds__hlds_rtti__ArgTypes_16, &hlds__hlds_rtti__ProcArgModes_21);
    }
#line 361 "hlds_rtti.m"
    {
#line 361 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 361 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 361 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 1;
#line 361 "hlds_rtti.m"
    else
#line 361 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 0;
#line 362 "hlds_rtti.m"
    {
#line 362 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 362 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 362 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 1;
#line 362 "hlds_rtti.m"
    else
#line 362 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 0;
#line 363 "hlds_rtti.m"
    {
#line 363 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredInfo_10, hlds__hlds_rtti__ProcId_7);
    }
#line 363 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 1;
#line 363 "hlds_rtti.m"
    else
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 0;
#line 365 "hlds_rtti.m"
    {
#line 365 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__Origin_25);
    }
#line 366 "hlds_rtti.m"
    {
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 366 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[0]));
#line 366 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 1) = ((MR_Box) (hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1));
#line 366 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 366 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 3) = ((MR_Box) (hlds__hlds_rtti__ProcVarSet_17));
#line 366 "hlds_rtti.m"
    }
#line 366 "hlds_rtti.m"
    {
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__ProcHeadVarsWithNames_26 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &hlds__hlds_rtti_scalar_common_2[0], hlds__hlds_rtti__V_30_30, hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 371 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsImported_22 == (MR_Integer) 1);
#line 372 "hlds_rtti.m"
    if (!(hlds__hlds_rtti__succeeded))
#line 373 "hlds_rtti.m"
      {
#line 373 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_37_37;

#line 373 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsPseudoImp_23 == (MR_Integer) 1);
#line 373 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 373 "hlds_rtti.m"
          {
#line 374 "hlds_rtti.m"
            {
#line 374 "hlds_rtti.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_rtti__V_37_37);
            }
#line 374 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__ProcId_7 == hlds__hlds_rtti__V_37_37);
#line 373 "hlds_rtti.m"
          }
#line 373 "hlds_rtti.m"
      }
#line 378 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 377 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 1;
#line 378 "hlds_rtti.m"
    else
#line 379 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 0;
#line 381 "hlds_rtti.m"
    {
#line 381 "hlds_rtti.m"
      hlds__hlds_rtti__ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 0) = ((MR_Box) (hlds__hlds_rtti__PredOrFunc_12));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 1) = ((MR_Box) (hlds__hlds_rtti__ThisModule_9));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 2) = ((MR_Box) (hlds__hlds_rtti__PredModule_13));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 3) = ((MR_Box) (hlds__hlds_rtti__PredName_14));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 4) = ((MR_Box) (hlds__hlds_rtti__Arity_15));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 5) = ((MR_Box) (hlds__hlds_rtti__ArgTypes_16));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 6) = ((MR_Box) (hlds__hlds_rtti__PredId_6));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 7) = ((MR_Box) (hlds__hlds_rtti__ProcId_7));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 8) = ((MR_Box) (hlds__hlds_rtti__ProcHeadVarsWithNames_26));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 9) = ((MR_Box) (hlds__hlds_rtti__ProcArgModes_21));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 10) = ((MR_Box) ((hlds__hlds_rtti__ProcDetism_20 | ((((hlds__hlds_rtti__PredIsImported_22 << (MR_Integer) 3)) | ((hlds__hlds_rtti__PredIsPseudoImp_23 << (MR_Integer) 4)))))));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 11) = ((MR_Box) (hlds__hlds_rtti__Origin_25));
#line 381 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 12) = ((MR_Box) ((hlds__hlds_rtti__ProcIsExported_24 | ((hlds__hlds_rtti__ProcIsImported_29 << (MR_Integer) 1)))));
#line 381 "hlds_rtti.m"
    }
#line 348 "hlds_rtti.m"
    return hlds__hlds_rtti__ProcLabel_8;
#line 348 "hlds_rtti.m"
  }
#line 88 "hlds_rtti.m"
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
