/*
** Automatically generated from `hlds_rtti.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "transform_hlds.mih"
#include "tree234.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 145 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 148 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

#line 154 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 157 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 160 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 163 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 166 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 175 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 178 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 181 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 184 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 187 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 190 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 193 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4];

#line 196 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0;

#line 199 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1];

#line 202 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1];

#line 205 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1];

#line 208 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1];

#line 211 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 214 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 217 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0;

#line 220 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_proc_label_0_0[16];

#line 223 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_proc_label_0_0[16];

#line 226 "hlds.hlds_rtti.c"
static const MR_DuArgLocn hlds__hlds_rtti__hlds__hlds_rtti__field_locns_rtti_proc_label_0_0[16];

#line 229 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0;

#line 232 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1];

#line 235 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1];

#line 238 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1];

#line 241 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1];

#line 244 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1];

#line 247 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0;

#line 250 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1];

#line 253 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1;

#line 256 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2;

#line 259 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1];

#line 262 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1];

#line 265 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1];

#line 268 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_var_info_0[3];

#line 271 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3];

#line 274 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3];

#line 277 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 280 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0;

#line 283 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 286 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 289 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4];

#line 292 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4];

#line 295 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0;

#line 298 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1];

#line 301 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1];

#line 304 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1];

#line 307 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1];

#line 310 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1];

#line 313 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0;

#line 316 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2];

#line 319 "hlds.hlds_rtti.c"
static const MR_DuFunctorDesc hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1;

#line 322 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1];

#line 325 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1];

#line 328 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_type_info_locn_0[2];

#line 331 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2];

#line 334 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2];

#line 337 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 340 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 342 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 345 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 348 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 350 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 352 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 355 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 358 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 360 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 363 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 366 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 368 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 370 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 373 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 376 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 378 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 381 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 384 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 386 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 388 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 391 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 394 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 396 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 399 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 402 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 404 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 406 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 409 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 412 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 414 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 417 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 420 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 422 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 424 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 427 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 430 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 432 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 435 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 438 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 440 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 442 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 445 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 448 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 450 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 453 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 456 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 458 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 460 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 463 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 466 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 468 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 471 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 474 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 476 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 478 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 481 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 484 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 486 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 489 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 492 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 494 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 496 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 499 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 502 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 504 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2);

#line 507 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 510 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 512 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 514 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3);

#line 836 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 836 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 889 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__889__1_3_p_0(
#line 889 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 889 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_22,
#line 889 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_23);

#line 671 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__671__1_3_p_0(
#line 671 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 671 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 671 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21);

#line 368 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__368__1_2_f_0(
#line 368 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 368 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_31);

#line 416 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 416 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 416 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 416 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 416 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 416 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 416 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 474 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 474 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 474 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 474 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 474 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 474 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 474 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 462 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 462 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 462 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 462 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 462 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 462 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 462 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 468 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 468 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 468 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 468 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3);

#line 468 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 468 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 468 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2);

#line 889 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 889 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 889 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 889 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2);

#line 870 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 870 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 870 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 870 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 870 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4);

#line 836 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 836 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8);

#line 825 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 825 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 825 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 825 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 825 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 825 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15);

#line 791 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 791 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 770 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 770 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19);

#line 741 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 741 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37);

#line 723 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 723 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18);

#line 676 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 676 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 676 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 676 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);

#line 544 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 544 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 544 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 544 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 544 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 544 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 544 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6);

#line 526 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 526 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 526 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 526 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 526 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4);

#line 505 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 505 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 505 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 505 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 505 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4);

#line 819 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 819 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 819 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 819 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 819 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 816 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 816 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 816 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 816 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 816 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 816 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 708 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 708 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 708 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 708 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 708 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 708 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4);

#line 706 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
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
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
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
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
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

#line 672 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 672 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 672 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 672 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 672 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 671 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 671 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3);

#line 368 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 368 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 368 "hlds_rtti.m"
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



#line 1150 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1158 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1166 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1174 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1183 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1191 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1199 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1208 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1217 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1226 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1235 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_rtti__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1243 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1252 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1261 "hlds.hlds_rtti.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_rtti__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1270 "hlds.hlds_rtti.c"
static const MR_VA_PseudoTypeInfo_Struct2 hlds__hlds_rtti____vpti_pred_2__plain_parse_tree__prog_data__type_ctor_info_mer_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1280 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1288 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1296 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_instance_method_constraints_0_0[4] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__list__ti_list_1parse_tree__prog_data__type_ctor_info_prog_constraint_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0
};

#line 1304 "hlds.hlds_rtti.c"
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

#line 1319 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1324 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_instance_method_constraints_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_instance_method_constraints_0_0
  }
};

#line 1333 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_instance_method_constraints_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_instance_method_constraints_0_0
};

#line 1338 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_instance_method_constraints_0[1] = {
  (MR_Integer) 0
};

#line 1343 "hlds.hlds_rtti.c"
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

#line 1360 "hlds.hlds_rtti.c"
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

#line 1377 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1386 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__pair__ti_pair_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
  }
};

#line 1394 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct1 hlds__hlds_rtti__list__ti_list_1hlds__hlds_pred__type_ctor_info_arg_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_mode_0
  }
};

#line 1402 "hlds.hlds_rtti.c"
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

#line 1422 "hlds.hlds_rtti.c"
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

#line 1442 "hlds.hlds_rtti.c"
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

#line 1526 "hlds.hlds_rtti.c"
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

#line 1541 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1546 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_proc_label_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_proc_label_0_0
  }
};

#line 1555 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_proc_label_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_proc_label_0_0
};

#line 1560 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_proc_label_0[1] = {
  (MR_Integer) 0
};

#line 1565 "hlds.hlds_rtti.c"
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

#line 1582 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 1587 "hlds.hlds_rtti.c"
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

#line 1602 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_var_info_0_1[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1607 "hlds.hlds_rtti.c"
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

#line 1622 "hlds.hlds_rtti.c"
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

#line 1637 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2
};

#line 1642 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0
};

#line 1647 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_var_info_0_2[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1652 "hlds.hlds_rtti.c"
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

#line 1671 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_var_info_0[3] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_2,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_var_info_0_1
};

#line 1678 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_var_info_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1685 "hlds.hlds_rtti.c"
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

#line 1702 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1711 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0
  }
};

#line 1720 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1729 "hlds.hlds_rtti.c"
static const MR_FA_TypeInfo_Struct2 hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1738 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_rtti_varmaps_0_0[4] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0hlds__hlds_rtti__type_ctor_info_type_info_locn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 1746 "hlds.hlds_rtti.c"
static const MR_ConstString hlds__hlds_rtti__hlds__hlds_rtti__field_names_rtti_varmaps_0_0[4] = {
  (MR_String) "rv_tci_varmap",
  (MR_String) "rv_ti_varmap",
  (MR_String) "rv_ti_type_map",
  (MR_String) "rv_tci_constraint_map"
};

#line 1754 "hlds.hlds_rtti.c"
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

#line 1769 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1774 "hlds.hlds_rtti.c"
static const MR_DuPtagLayout hlds__hlds_rtti__hlds__hlds_rtti__du_ptag_ordered_rtti_varmaps_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_rtti_varmaps_0_0
  }
};

#line 1783 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_rtti_varmaps_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_rtti_varmaps_0_0
};

#line 1788 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_rtti_varmaps_0[1] = {
  (MR_Integer) 0
};

#line 1793 "hlds.hlds_rtti.c"
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

#line 1810 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_0[1] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 1815 "hlds.hlds_rtti.c"
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

#line 1830 "hlds.hlds_rtti.c"
static const MR_PseudoTypeInfo hlds__hlds_rtti__hlds__hlds_rtti__field_types_type_info_locn_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1836 "hlds.hlds_rtti.c"
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

#line 1851 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_0[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0
};

#line 1856 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_stag_ordered_type_info_locn_0_1[1] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1861 "hlds.hlds_rtti.c"
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

#line 1875 "hlds.hlds_rtti.c"
static const MR_DuFunctorDescPtr hlds__hlds_rtti__hlds__hlds_rtti__du_name_ordered_type_info_locn_0[2] = {
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_0,
  &hlds__hlds_rtti__hlds__hlds_rtti__du_functor_desc_type_info_locn_0_1
};

#line 1881 "hlds.hlds_rtti.c"
static const MR_Integer hlds__hlds_rtti__hlds__hlds_rtti__functor_number_map_type_info_locn_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1887 "hlds.hlds_rtti.c"
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

#line 1904 "hlds.hlds_rtti.c"
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

#line 1921 "hlds.hlds_rtti.c"
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

#line 1938 "hlds.hlds_rtti.c"
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

#line 1955 "hlds.hlds_rtti.c"
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

#line 1972 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____instance_method_constraints_0_0_10001(
#line 1975 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 1977 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 1979 "hlds.hlds_rtti.c"
{
#line 1981 "hlds.hlds_rtti.c"
  {
#line 1983 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 1986 "hlds.hlds_rtti.c"
    {
#line 1988 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____instance_method_constraints_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 1991 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 1993 "hlds.hlds_rtti.c"
  }
#line 1995 "hlds.hlds_rtti.c"
}

#line 1998 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____instance_method_constraints_0_0_10001(
#line 2001 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2003 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2005 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2007 "hlds.hlds_rtti.c"
{
#line 2009 "hlds.hlds_rtti.c"
  {
#line 2011 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2014 "hlds.hlds_rtti.c"
    {
#line 2016 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____instance_method_constraints_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2019 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2021 "hlds.hlds_rtti.c"
  }
#line 2023 "hlds.hlds_rtti.c"
}

#line 2026 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____prog_var_name_0_0_10001(
#line 2029 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2031 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2033 "hlds.hlds_rtti.c"
{
#line 2035 "hlds.hlds_rtti.c"
  {
#line 2037 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2040 "hlds.hlds_rtti.c"
    {
#line 2042 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____prog_var_name_0_0(((MR_String) hlds__hlds_rtti__wrapper_arg_1), ((MR_String) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2045 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2047 "hlds.hlds_rtti.c"
  }
#line 2049 "hlds.hlds_rtti.c"
}

#line 2052 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____prog_var_name_0_0_10001(
#line 2055 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2057 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2059 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2061 "hlds.hlds_rtti.c"
{
#line 2063 "hlds.hlds_rtti.c"
  {
#line 2065 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2068 "hlds.hlds_rtti.c"
    {
#line 2070 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____prog_var_name_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_String) hlds__hlds_rtti__wrapper_arg_2), ((MR_String) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2073 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2075 "hlds.hlds_rtti.c"
  }
#line 2077 "hlds.hlds_rtti.c"
}

#line 2080 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_proc_label_0_0_10001(
#line 2083 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2085 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2087 "hlds.hlds_rtti.c"
{
#line 2089 "hlds.hlds_rtti.c"
  {
#line 2091 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2094 "hlds.hlds_rtti.c"
    {
#line 2096 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2099 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2101 "hlds.hlds_rtti.c"
  }
#line 2103 "hlds.hlds_rtti.c"
}

#line 2106 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_proc_label_0_0_10001(
#line 2109 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2111 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2113 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2115 "hlds.hlds_rtti.c"
{
#line 2117 "hlds.hlds_rtti.c"
  {
#line 2119 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2122 "hlds.hlds_rtti.c"
    {
#line 2124 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2127 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2129 "hlds.hlds_rtti.c"
  }
#line 2131 "hlds.hlds_rtti.c"
}

#line 2134 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_var_info_0_0_10001(
#line 2137 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2139 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2141 "hlds.hlds_rtti.c"
{
#line 2143 "hlds.hlds_rtti.c"
  {
#line 2145 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2148 "hlds.hlds_rtti.c"
    {
#line 2150 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_var_info_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2153 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2155 "hlds.hlds_rtti.c"
  }
#line 2157 "hlds.hlds_rtti.c"
}

#line 2160 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_var_info_0_0_10001(
#line 2163 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2165 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2167 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2169 "hlds.hlds_rtti.c"
{
#line 2171 "hlds.hlds_rtti.c"
  {
#line 2173 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2176 "hlds.hlds_rtti.c"
    {
#line 2178 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_var_info_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2181 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2183 "hlds.hlds_rtti.c"
  }
#line 2185 "hlds.hlds_rtti.c"
}

#line 2188 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0_10001(
#line 2191 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2193 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2195 "hlds.hlds_rtti.c"
{
#line 2197 "hlds.hlds_rtti.c"
  {
#line 2199 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2202 "hlds.hlds_rtti.c"
    {
#line 2204 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2207 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2209 "hlds.hlds_rtti.c"
  }
#line 2211 "hlds.hlds_rtti.c"
}

#line 2214 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0_10001(
#line 2217 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2219 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2221 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2223 "hlds.hlds_rtti.c"
{
#line 2225 "hlds.hlds_rtti.c"
  {
#line 2227 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2230 "hlds.hlds_rtti.c"
    {
#line 2232 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2235 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2237 "hlds.hlds_rtti.c"
  }
#line 2239 "hlds.hlds_rtti.c"
}

#line 2242 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_locn_0_0_10001(
#line 2245 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2247 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2249 "hlds.hlds_rtti.c"
{
#line 2251 "hlds.hlds_rtti.c"
  {
#line 2253 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2256 "hlds.hlds_rtti.c"
    {
#line 2258 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_locn_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2261 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2263 "hlds.hlds_rtti.c"
  }
#line 2265 "hlds.hlds_rtti.c"
}

#line 2268 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_locn_0_0_10001(
#line 2271 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2273 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2275 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2277 "hlds.hlds_rtti.c"
{
#line 2279 "hlds.hlds_rtti.c"
  {
#line 2281 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2284 "hlds.hlds_rtti.c"
    {
#line 2286 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_locn_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2289 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2291 "hlds.hlds_rtti.c"
  }
#line 2293 "hlds.hlds_rtti.c"
}

#line 2296 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0_10001(
#line 2299 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2301 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2303 "hlds.hlds_rtti.c"
{
#line 2305 "hlds.hlds_rtti.c"
  {
#line 2307 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2310 "hlds.hlds_rtti.c"
    {
#line 2312 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_type_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2315 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2317 "hlds.hlds_rtti.c"
  }
#line 2319 "hlds.hlds_rtti.c"
}

#line 2322 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0_10001(
#line 2325 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2327 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2329 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2331 "hlds.hlds_rtti.c"
{
#line 2333 "hlds.hlds_rtti.c"
  {
#line 2335 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2338 "hlds.hlds_rtti.c"
    {
#line 2340 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_type_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2343 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2345 "hlds.hlds_rtti.c"
  }
#line 2347 "hlds.hlds_rtti.c"
}

#line 2350 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0_10001(
#line 2353 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2355 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2357 "hlds.hlds_rtti.c"
{
#line 2359 "hlds.hlds_rtti.c"
  {
#line 2361 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2364 "hlds.hlds_rtti.c"
    {
#line 2366 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____type_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2369 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2371 "hlds.hlds_rtti.c"
  }
#line 2373 "hlds.hlds_rtti.c"
}

#line 2376 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0_10001(
#line 2379 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2381 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2383 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2385 "hlds.hlds_rtti.c"
{
#line 2387 "hlds.hlds_rtti.c"
  {
#line 2389 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2392 "hlds.hlds_rtti.c"
    {
#line 2394 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____type_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2397 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2399 "hlds.hlds_rtti.c"
  }
#line 2401 "hlds.hlds_rtti.c"
}

#line 2404 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0_10001(
#line 2407 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2409 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2411 "hlds.hlds_rtti.c"
{
#line 2413 "hlds.hlds_rtti.c"
  {
#line 2415 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2418 "hlds.hlds_rtti.c"
    {
#line 2420 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2423 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2425 "hlds.hlds_rtti.c"
  }
#line 2427 "hlds.hlds_rtti.c"
}

#line 2430 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0_10001(
#line 2433 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2435 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2437 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2439 "hlds.hlds_rtti.c"
{
#line 2441 "hlds.hlds_rtti.c"
  {
#line 2443 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2446 "hlds.hlds_rtti.c"
    {
#line 2448 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2451 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2453 "hlds.hlds_rtti.c"
  }
#line 2455 "hlds.hlds_rtti.c"
}

#line 2458 "hlds.hlds_rtti.c"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0_10001(
#line 2461 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 2463 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2)
#line 2465 "hlds.hlds_rtti.c"
{
#line 2467 "hlds.hlds_rtti.c"
  {
#line 2469 "hlds.hlds_rtti.c"
    MR_bool hlds__hlds_rtti__succeeded;

#line 2472 "hlds.hlds_rtti.c"
    {
#line 2474 "hlds.hlds_rtti.c"
      hlds__hlds_rtti__succeeded = hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2));
    }
#line 2477 "hlds.hlds_rtti.c"
    return hlds__hlds_rtti__succeeded;
#line 2479 "hlds.hlds_rtti.c"
  }
#line 2481 "hlds.hlds_rtti.c"
}

#line 2484 "hlds.hlds_rtti.c"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0_10001(
#line 2487 "hlds.hlds_rtti.c"
  MR_Box * hlds__hlds_rtti__wrapper_arg_1,
#line 2489 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 2491 "hlds.hlds_rtti.c"
  MR_Box hlds__hlds_rtti__wrapper_arg_3)
#line 2493 "hlds.hlds_rtti.c"
{
#line 2495 "hlds.hlds_rtti.c"
  {
#line 2497 "hlds.hlds_rtti.c"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__1_1;

#line 2500 "hlds.hlds_rtti.c"
    {
#line 2502 "hlds.hlds_rtti.c"
      hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(&hlds__hlds_rtti__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3));
    }
#line 2505 "hlds.hlds_rtti.c"
    *hlds__hlds_rtti__wrapper_arg_1 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__1_1));
#line 2507 "hlds.hlds_rtti.c"
  }
#line 2509 "hlds.hlds_rtti.c"
}

#line 836 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 836 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 836 "hlds_rtti.m"
{
#line 840 "hlds_rtti.m"
  {
#line 840 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 840 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 840 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 840 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 840 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_11;

#line 842 "hlds_rtti.m"
    {
#line 842 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__TypeCtorInfo_12_12, hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Args0_10, &hlds__hlds_rtti__Args_11);
    }
#line 843 "hlds_rtti.m"
    {
#line 843 "hlds_rtti.m"
      MR_Word base;
#line 843 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 843 "hlds_rtti.m"
      *hlds__hlds_rtti__Constraint_8 = base;
#line 843 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Name_9));
#line 843 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__Args_11));
#line 843 "hlds_rtti.m"
    }
#line 840 "hlds_rtti.m"
  }
#line 836 "hlds_rtti.m"
}

#line 889 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__889__1_3_p_0(
#line 889 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 889 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_22,
#line 889 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_23)
#line 889 "hlds_rtti.m"
{
#line 889 "hlds_rtti.m"
  {
#line 889 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 889 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Locn_19;
#line 890 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_19;

#line 890 "hlds_rtti.m"
    {
#line 890 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TVarMap_3, ((MR_Box) (hlds__hlds_rtti__HeadVar__2_22)), &hlds__hlds_rtti__conv0_Locn_19);
    }
#line 890 "hlds_rtti.m"
    hlds__hlds_rtti__Locn_19 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_19);
#line 395 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_19)) == (MR_mktag((MR_Integer) 0))))
#line 395 "hlds_rtti.m"
      *hlds__hlds_rtti__HeadVar__3_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 395 "hlds_rtti.m"
    else
#line 396 "hlds_rtti.m"
      {
#line 396 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_32_32;

#line 396 "hlds_rtti.m"
        *hlds__hlds_rtti__HeadVar__3_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 0)));
#line 396 "hlds_rtti.m"
        hlds__hlds_rtti__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_19, (MR_Integer) 1)));
#line 396 "hlds_rtti.m"
      }
#line 889 "hlds_rtti.m"
  }
#line 889 "hlds_rtti.m"
}

#line 671 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__671__1_3_p_0(
#line 671 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_19,
#line 671 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_20,
#line 671 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__3_21)
#line 671 "hlds_rtti.m"
{
#line 671 "hlds_rtti.m"
  {
#line 671 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 671 "hlds_rtti.m"
    {
#line 671 "hlds_rtti.m"
      mercury__set_tree234__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__HeadVar__1_19)), hlds__hlds_rtti__HeadVar__2_20, hlds__hlds_rtti__HeadVar__3_21);
#line 671 "hlds_rtti.m"
      return;
    }
#line 671 "hlds_rtti.m"
  }
#line 671 "hlds_rtti.m"
}

#line 368 "hlds_rtti.m"
static MR_Word MR_CALL 
hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__368__1_2_f_0(
#line 368 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__ProcVarSet_17,
#line 368 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_31)
#line 368 "hlds_rtti.m"
{
#line 368 "hlds_rtti.m"
  {
#line 368 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 368 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__HeadVar__3_32;
#line 368 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__Name_28;

#line 369 "hlds_rtti.m"
    {
#line 369 "hlds_rtti.m"
      hlds__hlds_rtti__Name_28 = mercury__varset__lookup_name_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__ProcVarSet_17, hlds__hlds_rtti__HeadVar__2_31);
    }
#line 368 "hlds_rtti.m"
    {
#line 368 "hlds_rtti.m"
      hlds__hlds_rtti__HeadVar__3_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 368 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_32, 0) = ((MR_Box) (hlds__hlds_rtti__HeadVar__2_31));
#line 368 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_32, 1) = ((MR_Box) (hlds__hlds_rtti__Name_28));
#line 368 "hlds_rtti.m"
    }
#line 368 "hlds_rtti.m"
    return hlds__hlds_rtti__HeadVar__3_32;
#line 368 "hlds_rtti.m"
  }
#line 368 "hlds_rtti.m"
}

#line 416 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_varmap_0_0(
#line 416 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 416 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 416 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 416 "hlds_rtti.m"
{
#line 416 "hlds_rtti.m"
  {
#line 416 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 416 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 416 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 416 "hlds_rtti.m"
    {
#line 416 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 416 "hlds_rtti.m"
      return;
    }
#line 416 "hlds_rtti.m"
  }
#line 416 "hlds_rtti.m"
}

#line 416 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_varmap_0_0(
#line 416 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 416 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 416 "hlds_rtti.m"
{
#line 416 "hlds_rtti.m"
  {
#line 416 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 416 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 416 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 416 "hlds_rtti.m"
    {
#line 416 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 416 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 416 "hlds_rtti.m"
  }
#line 416 "hlds_rtti.m"
}

#line 474 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____typeclass_info_constraint_map_0_0(
#line 474 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 474 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 474 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 474 "hlds_rtti.m"
{
#line 474 "hlds_rtti.m"
  {
#line 474 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 474 "hlds_rtti.m"
    {
#line 474 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 474 "hlds_rtti.m"
      return;
    }
#line 474 "hlds_rtti.m"
  }
#line 474 "hlds_rtti.m"
}

#line 474 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____typeclass_info_constraint_map_0_0(
#line 474 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 474 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 474 "hlds_rtti.m"
{
#line 474 "hlds_rtti.m"
  {
#line 474 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 474 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 474 "hlds_rtti.m"
    {
#line 474 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 474 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 474 "hlds_rtti.m"
  }
#line 474 "hlds_rtti.m"
}

#line 462 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_varmap_0_0(
#line 462 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 462 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 462 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 462 "hlds_rtti.m"
{
#line 462 "hlds_rtti.m"
  {
#line 462 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 462 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 462 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 462 "hlds_rtti.m"
    {
#line 462 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 462 "hlds_rtti.m"
      return;
    }
#line 462 "hlds_rtti.m"
  }
#line 462 "hlds_rtti.m"
}

#line 462 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_varmap_0_0(
#line 462 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 462 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 462 "hlds_rtti.m"
{
#line 462 "hlds_rtti.m"
  {
#line 462 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 462 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 462 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 462 "hlds_rtti.m"
    {
#line 462 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 462 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 462 "hlds_rtti.m"
  }
#line 462 "hlds_rtti.m"
}

#line 468 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti____Compare____type_info_type_map_0_0(
#line 468 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 468 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 468 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 468 "hlds_rtti.m"
{
#line 468 "hlds_rtti.m"
  {
#line 468 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 468 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_4 = hlds__hlds_rtti__HeadVar__2_2;
#line 468 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_5 = hlds__hlds_rtti__HeadVar__3_3;

#line 468 "hlds_rtti.m"
    {
#line 468 "hlds_rtti.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_4)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_5)));
#line 468 "hlds_rtti.m"
      return;
    }
#line 468 "hlds_rtti.m"
  }
#line 468 "hlds_rtti.m"
}

#line 468 "hlds_rtti.m"
static MR_bool MR_CALL 
hlds__hlds_rtti____Unify____type_info_type_map_0_0(
#line 468 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 468 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 468 "hlds_rtti.m"
{
#line 468 "hlds_rtti.m"
  {
#line 468 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 468 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar1_3 = hlds__hlds_rtti__HeadVar__1_1;
#line 468 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Cast_HeadVar2_4 = hlds__hlds_rtti__HeadVar__2_2;

#line 468 "hlds_rtti.m"
    {
#line 468 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar1_3)), ((MR_Box) (hlds__hlds_rtti__Cast_HeadVar2_4)));
    }
#line 468 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 468 "hlds_rtti.m"
  }
#line 468 "hlds_rtti.m"
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
#line 2949 "hlds.hlds_rtti.c"
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
#line 124 "hlds_rtti.m"
              return;
            }
#line 124 "hlds_rtti.m"
          }
#line 124 "hlds_rtti.m"
        else
#line 2978 "hlds.hlds_rtti.c"
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
#line 2993 "hlds.hlds_rtti.c"
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
#line 3011 "hlds.hlds_rtti.c"
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
#line 124 "hlds_rtti.m"
                return;
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
#line 3082 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_11_11 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3084 "hlds.hlds_rtti.c"
            {
#line 3086 "hlds.hlds_rtti.c"
              return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_11_11, ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_4_4)));
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
#line 3118 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_12_12 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 3120 "hlds.hlds_rtti.c"
            {
#line 3122 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_12_12, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
            }
#line 124 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 3127 "hlds.hlds_rtti.c"
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

#line 401 "hlds_rtti.m"
void MR_CALL 
hlds__hlds_rtti____Compare____rtti_varmaps_0_0(
#line 401 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__1_1,
#line 401 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2,
#line 401 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__3_3)
#line 401 "hlds_rtti.m"
{
#line 401 "hlds_rtti.m"
  {
#line 401 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 401 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_15 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;
#line 401 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_16 = (MR_Integer) hlds__hlds_rtti__HeadVar__3_3;

#line 401 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_15 == hlds__hlds_rtti__CastY_16);
#line 401 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 3164 "hlds.hlds_rtti.c"
      *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 401 "hlds_rtti.m"
    else
#line 401 "hlds_rtti.m"
      {
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_12_12;

#line 401 "hlds_rtti.m"
        {
#line 401 "hlds_rtti.m"
          mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], &hlds__hlds_rtti__V_12_12, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
        }
#line 3194 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_12_12 == (MR_Integer) 0);
#line 401 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 401 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 401 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_12_12;
#line 401 "hlds_rtti.m"
        else
#line 401 "hlds_rtti.m"
          {
#line 401 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_13_13;

#line 401 "hlds_rtti.m"
            {
#line 401 "hlds_rtti.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[2], &hlds__hlds_rtti__V_13_13, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
            }
#line 3214 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == (MR_Integer) 0);
#line 401 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 401 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 401 "hlds_rtti.m"
              *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_13_13;
#line 401 "hlds_rtti.m"
            else
#line 401 "hlds_rtti.m"
              {
#line 401 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__V_14_14;

#line 401 "hlds_rtti.m"
                {
#line 401 "hlds_rtti.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[3], &hlds__hlds_rtti__V_14_14, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                }
#line 3234 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == (MR_Integer) 0);
#line 401 "hlds_rtti.m"
                hlds__hlds_rtti__succeeded = !(hlds__hlds_rtti__succeeded);
#line 401 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 401 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__V_14_14;
#line 401 "hlds_rtti.m"
                else
#line 401 "hlds_rtti.m"
                  {
#line 401 "hlds_rtti.m"
                    {
#line 401 "hlds_rtti.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__HeadVar__1_1, ((MR_Box) (hlds__hlds_rtti__V_7_7)), ((MR_Box) (hlds__hlds_rtti__V_11_11)));
#line 401 "hlds_rtti.m"
                      return;
                    }
#line 401 "hlds_rtti.m"
                  }
#line 401 "hlds_rtti.m"
              }
#line 401 "hlds_rtti.m"
          }
#line 401 "hlds_rtti.m"
      }
#line 401 "hlds_rtti.m"
  }
#line 401 "hlds_rtti.m"
}

#line 401 "hlds_rtti.m"
MR_bool MR_CALL 
hlds__hlds_rtti____Unify____rtti_varmaps_0_0(
#line 401 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 401 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_2)
#line 401 "hlds_rtti.m"
{
#line 401 "hlds_rtti.m"
  {
#line 401 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 401 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastX_11 = (MR_Integer) hlds__hlds_rtti__HeadVar__1_1;
#line 401 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__CastY_12 = (MR_Integer) hlds__hlds_rtti__HeadVar__2_2;

#line 401 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__CastX_11 == hlds__hlds_rtti__CastY_12);
#line 401 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 401 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = MR_TRUE;
#line 401 "hlds_rtti.m"
    else
#line 401 "hlds_rtti.m"
      {
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_14_14;
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_15_15;
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_16_16;
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 401 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 3)));

#line 3317 "hlds.hlds_rtti.c"
        {
#line 3319 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_2[1], ((MR_Box) (hlds__hlds_rtti__V_3_3)), ((MR_Box) (hlds__hlds_rtti__V_7_7)));
        }
#line 401 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 401 "hlds_rtti.m"
          {
#line 3326 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[2];
#line 3328 "hlds.hlds_rtti.c"
            {
#line 3330 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 401 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 401 "hlds_rtti.m"
              {
#line 3337 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[3];
#line 3339 "hlds.hlds_rtti.c"
                {
#line 3341 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 401 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 401 "hlds_rtti.m"
                  {
#line 3348 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__TypeInfo_16_16 = (MR_Word) &hlds__hlds_rtti_scalar_common_2[4];
#line 3350 "hlds.hlds_rtti.c"
                    {
#line 3352 "hlds.hlds_rtti.c"
                      return hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_16_16, ((MR_Box) (hlds__hlds_rtti__V_6_6)), ((MR_Box) (hlds__hlds_rtti__V_10_10)));
                    }
#line 401 "hlds_rtti.m"
                  }
#line 401 "hlds_rtti.m"
              }
#line 401 "hlds_rtti.m"
          }
#line 401 "hlds_rtti.m"
      }
#line 401 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 401 "hlds_rtti.m"
  }
#line 401 "hlds_rtti.m"
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
#line 3394 "hlds.hlds_rtti.c"
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
#line 3418 "hlds.hlds_rtti.c"
              *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 151 "hlds_rtti.m"
              break;
#line 151 "hlds_rtti.m"
            case (MR_Integer) 2:
#line 3424 "hlds.hlds_rtti.c"
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
#line 3446 "hlds.hlds_rtti.c"
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
#line 151 "hlds_rtti.m"
                    return;
                  }
#line 151 "hlds_rtti.m"
                }
#line 151 "hlds_rtti.m"
                break;
#line 151 "hlds_rtti.m"
              case (MR_Integer) 2:
#line 3470 "hlds.hlds_rtti.c"
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
#line 3494 "hlds.hlds_rtti.c"
                *hlds__hlds_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 151 "hlds_rtti.m"
                break;
#line 151 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 3500 "hlds.hlds_rtti.c"
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
#line 151 "hlds_rtti.m"
                    return;
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
#line 3598 "hlds.hlds_rtti.c"
                {
#line 3600 "hlds.hlds_rtti.c"
                  return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_4_4);
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
#line 3626 "hlds.hlds_rtti.c"
                {
#line 3628 "hlds.hlds_rtti.c"
                  return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_6_6);
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
#line 3670 "hlds.hlds_rtti.c"
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
#line 3752 "hlds.hlds_rtti.c"
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
#line 3772 "hlds.hlds_rtti.c"
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
#line 3792 "hlds.hlds_rtti.c"
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
#line 3812 "hlds.hlds_rtti.c"
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
#line 3832 "hlds.hlds_rtti.c"
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
#line 3852 "hlds.hlds_rtti.c"
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
#line 3872 "hlds.hlds_rtti.c"
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
#line 3892 "hlds.hlds_rtti.c"
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
#line 3912 "hlds.hlds_rtti.c"
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
#line 3932 "hlds.hlds_rtti.c"
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
#line 3956 "hlds.hlds_rtti.c"
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
#line 3980 "hlds.hlds_rtti.c"
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
#line 4004 "hlds.hlds_rtti.c"
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
#line 4024 "hlds.hlds_rtti.c"
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
#line 4048 "hlds.hlds_rtti.c"
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
#line 41 "hlds_rtti.m"
                                                                      return;
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

#line 4208 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_3_3 == hlds__hlds_rtti__V_19_19);
#line 41 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
          {
#line 4214 "hlds.hlds_rtti.c"
            {
#line 4216 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__V_4_4, hlds__hlds_rtti__V_20_20);
            }
#line 41 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
              {
#line 4223 "hlds.hlds_rtti.c"
                {
#line 4225 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__V_21_21);
                }
#line 41 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                  {
#line 4232 "hlds.hlds_rtti.c"
                    hlds__hlds_rtti__succeeded = (strcmp(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_22_22) == 0);
#line 41 "hlds_rtti.m"
                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                      {
#line 4238 "hlds.hlds_rtti.c"
                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_7_7 == hlds__hlds_rtti__V_23_23);
#line 41 "hlds_rtti.m"
                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                          {
#line 4244 "hlds.hlds_rtti.c"
                            hlds__hlds_rtti__TypeInfo_39_39 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4246 "hlds.hlds_rtti.c"
                            {
#line 4248 "hlds.hlds_rtti.c"
                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_39_39, ((MR_Box) (hlds__hlds_rtti__V_8_8)), ((MR_Box) (hlds__hlds_rtti__V_24_24)));
                            }
#line 41 "hlds_rtti.m"
                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                              {
#line 4255 "hlds.hlds_rtti.c"
                                {
#line 4257 "hlds.hlds_rtti.c"
                                  hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(hlds__hlds_rtti__V_9_9, hlds__hlds_rtti__V_25_25);
                                }
#line 41 "hlds_rtti.m"
                                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                  {
#line 4264 "hlds.hlds_rtti.c"
                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_10_10 == hlds__hlds_rtti__V_26_26);
#line 41 "hlds_rtti.m"
                                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                      {
#line 4270 "hlds.hlds_rtti.c"
                                        hlds__hlds_rtti__TypeInfo_41_41 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[5];
#line 4272 "hlds.hlds_rtti.c"
                                        {
#line 4274 "hlds.hlds_rtti.c"
                                          hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_41_41, ((MR_Box) (hlds__hlds_rtti__V_11_11)), ((MR_Box) (hlds__hlds_rtti__V_27_27)));
                                        }
#line 41 "hlds_rtti.m"
                                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                          {
#line 4281 "hlds.hlds_rtti.c"
                                            hlds__hlds_rtti__TypeInfo_42_42 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[6];
#line 4283 "hlds.hlds_rtti.c"
                                            {
#line 4285 "hlds.hlds_rtti.c"
                                              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_42_42, ((MR_Box) (hlds__hlds_rtti__V_12_12)), ((MR_Box) (hlds__hlds_rtti__V_28_28)));
                                            }
#line 41 "hlds_rtti.m"
                                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                              {
#line 4292 "hlds.hlds_rtti.c"
                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_13_13 == hlds__hlds_rtti__V_29_29);
#line 41 "hlds_rtti.m"
                                                if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                  {
#line 4298 "hlds.hlds_rtti.c"
                                                    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_14_14 == hlds__hlds_rtti__V_30_30);
#line 41 "hlds_rtti.m"
                                                    if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                      {
#line 4304 "hlds.hlds_rtti.c"
                                                        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_15_15 == hlds__hlds_rtti__V_31_31);
#line 41 "hlds_rtti.m"
                                                        if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                          {
#line 4310 "hlds.hlds_rtti.c"
                                                            {
#line 4312 "hlds.hlds_rtti.c"
                                                              hlds__hlds_rtti__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__V_32_32);
                                                            }
#line 41 "hlds_rtti.m"
                                                            if (hlds__hlds_rtti__succeeded)
#line 41 "hlds_rtti.m"
                                                              {
#line 4319 "hlds.hlds_rtti.c"
                                                                hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__V_17_17 == hlds__hlds_rtti__V_33_33);
#line 41 "hlds_rtti.m"
                                                                if (hlds__hlds_rtti__succeeded)
#line 4323 "hlds.hlds_rtti.c"
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
#line 35 "hlds_rtti.m"
      return;
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
#line 4445 "hlds.hlds_rtti.c"
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
#line 4475 "hlds.hlds_rtti.c"
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
#line 4495 "hlds.hlds_rtti.c"
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
#line 4515 "hlds.hlds_rtti.c"
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
#line 107 "hlds_rtti.m"
                    return;
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

#line 4592 "hlds.hlds_rtti.c"
        {
#line 4594 "hlds.hlds_rtti.c"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____class_id_0_0(hlds__hlds_rtti__V_3_3, hlds__hlds_rtti__V_7_7);
        }
#line 107 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 107 "hlds_rtti.m"
          {
#line 4601 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_14_14 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[3];
#line 4603 "hlds.hlds_rtti.c"
            {
#line 4605 "hlds.hlds_rtti.c"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_14_14, ((MR_Box) (hlds__hlds_rtti__V_4_4)), ((MR_Box) (hlds__hlds_rtti__V_8_8)));
            }
#line 107 "hlds_rtti.m"
            if (hlds__hlds_rtti__succeeded)
#line 107 "hlds_rtti.m"
              {
#line 4612 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[4];
#line 4614 "hlds.hlds_rtti.c"
                {
#line 4616 "hlds.hlds_rtti.c"
                  hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, ((MR_Box) (hlds__hlds_rtti__V_5_5)), ((MR_Box) (hlds__hlds_rtti__V_9_9)));
                }
#line 107 "hlds_rtti.m"
                if (hlds__hlds_rtti__succeeded)
#line 4621 "hlds.hlds_rtti.c"
                  {
#line 4623 "hlds.hlds_rtti.c"
                    return hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__hlds_rtti__V_6_6, hlds__hlds_rtti__V_10_10);
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

#line 889 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1(
#line 889 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 889 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 889 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_2)
#line 889 "hlds_rtti.m"
{
#line 889 "hlds_rtti.m"
  {
#line 889 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 889 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_23;

#line 889 "hlds_rtti.m"
    {
#line 889 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__get_typeinfo_vars_2__889__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), &hlds__hlds_rtti__conv0_HeadVar__3_23);
    }
#line 889 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_23));
#line 889 "hlds_rtti.m"
  }
#line 889 "hlds_rtti.m"
}

#line 870 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(
#line 870 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 870 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__VarTypes_2,
#line 870 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVarMap_3,
#line 870 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__HeadVar__4_4)
#line 870 "hlds_rtti.m"
{
#line 873 "hlds_rtti.m"
  while (MR_TRUE)
#line 873 "hlds_rtti.m"
    {
#line 873 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 873 "hlds_rtti.m"
      {
#line 873 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 873 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 873 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "hlds_rtti.m"
        else
#line 874 "hlds_rtti.m"
          {
#line 874 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 874 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Vars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 874 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Type_12;
#line 874 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeVars_13;

#line 875 "hlds_rtti.m"
            {
#line 875 "hlds_rtti.m"
              hlds__vartypes__lookup_var_type_3_p_0(hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__Var_7, &hlds__hlds_rtti__Type_12);
            }
#line 876 "hlds_rtti.m"
            {
#line 876 "hlds_rtti.m"
              parse_tree__prog_type__type_vars_2_p_0(hlds__hlds_rtti__Type_12, &hlds__hlds_rtti__TypeVars_13);
            }
#line 881 "hlds_rtti.m"
            if ((hlds__hlds_rtti__TypeVars_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 880 "hlds_rtti.m"
              {
#line 880 "hlds_rtti.m"
                /* direct tailcall eliminated */
#line 880 "hlds_rtti.m"
                {
#line 880 "hlds_rtti.m"
                  MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__Vars_8;

#line 880 "hlds_rtti.m"
                  hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 880 "hlds_rtti.m"
                }
#line 880 "hlds_rtti.m"
                continue;
#line 880 "hlds_rtti.m"
              }
#line 881 "hlds_rtti.m"
            else
#line 882 "hlds_rtti.m"
              {
#line 882 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfo_29_29;
#line 882 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__LookupVar_16;
#line 882 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsHead_20;
#line 882 "hlds_rtti.m"
                MR_Word hlds__hlds_rtti__TypeInfoVarsTail_21;

#line 889 "hlds_rtti.m"
                {
#line 889 "hlds_rtti.m"
                  hlds__hlds_rtti__LookupVar_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 889 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[3]));
#line 889 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 1) = ((MR_Box) (hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0_1));
#line 889 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 889 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(0), hlds__hlds_rtti__LookupVar_16, 3) = ((MR_Box) (hlds__hlds_rtti__TVarMap_3));
#line 889 "hlds_rtti.m"
                }
#line 4766 "hlds.hlds_rtti.c"
                hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 893 "hlds_rtti.m"
                {
#line 893 "hlds_rtti.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__LookupVar_16, hlds__hlds_rtti__TypeVars_13, &hlds__hlds_rtti__TypeInfoVarsHead_20);
                }
#line 895 "hlds_rtti.m"
                {
#line 895 "hlds_rtti.m"
                  hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__Vars_8, hlds__hlds_rtti__VarTypes_2, hlds__hlds_rtti__TVarMap_3, &hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 896 "hlds_rtti.m"
                {
#line 896 "hlds_rtti.m"
                  *hlds__hlds_rtti__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfoVarsHead_20, hlds__hlds_rtti__TypeInfoVarsTail_21);
                }
#line 882 "hlds_rtti.m"
              }
#line 874 "hlds_rtti.m"
          }
#line 873 "hlds_rtti.m"
      }
#line 873 "hlds_rtti.m"
      break;
#line 873 "hlds_rtti.m"
    }
#line 870 "hlds_rtti.m"
}

#line 836 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_5,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__2_6,
#line 836 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 836 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__Constraint_8)
#line 836 "hlds_rtti.m"
{
#line 840 "hlds_rtti.m"
  {
#line 840 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 840 "hlds_rtti.m"
    {
#line 840 "hlds_rtti.m"
      hlds__hlds_rtti__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_99_111_110_115_116_114_97_105_110_116_95_118_97_108_117_101_95_116_114_97_110_115_102_111_114_109_97_116_105_111_110_95_95_91_50_93_95_48_4_p_0(hlds__hlds_rtti__Pred_5, hlds__hlds_rtti__Constraint0_7, hlds__hlds_rtti__Constraint_8);
#line 840 "hlds_rtti.m"
      return;
    }
#line 840 "hlds_rtti.m"
  }
#line 836 "hlds_rtti.m"
}

#line 825 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(
#line 825 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Pred_6,
#line 825 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_7,
#line 825 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var_8,
#line 825 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_14,
#line 825 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_15)
#line 825 "hlds_rtti.m"
{
#line 830 "hlds_rtti.m"
  {
#line 830 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 830 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_17_17 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 830 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 0)));
#line 830 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint0_7, (MR_Integer) 1)));
#line 830 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Args_12;
#line 830 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_13;

#line 832 "hlds_rtti.m"
    {
#line 832 "hlds_rtti.m"
      mercury__list__map_3_p_0(hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__TypeCtorInfo_17_17, hlds__hlds_rtti__Pred_6, hlds__hlds_rtti__Args0_11, &hlds__hlds_rtti__Args_12);
    }
#line 833 "hlds_rtti.m"
    {
#line 833 "hlds_rtti.m"
      hlds__hlds_rtti__Constraint_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 833 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 0) = ((MR_Box) (hlds__hlds_rtti__Name_10));
#line 833 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_13, 1) = ((MR_Box) (hlds__hlds_rtti__Args_12));
#line 833 "hlds_rtti.m"
    }
#line 834 "hlds_rtti.m"
    {
#line 834 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_13)), ((MR_Box) (hlds__hlds_rtti__Var_8)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_14, hlds__hlds_rtti__STATE_VARIABLE_Map_15);
#line 834 "hlds_rtti.m"
      return;
    }
#line 830 "hlds_rtti.m"
  }
#line 825 "hlds_rtti.m"
}

#line 791 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_12,
#line 791 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 791 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 791 "hlds_rtti.m"
{
#line 797 "hlds_rtti.m"
  {
#line 797 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 797 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 797 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 797 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 719 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_32;
#line 717 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_33;
#line 717 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_32;
#line 808 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingConstraint_17;
#line 802 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingConstraint_17;

#line 798 "hlds_rtti.m"
    {
#line 798 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_12, &hlds__hlds_rtti__Constraint1_14);
    }
#line 800 "hlds_rtti.m"
    {
#line 800 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 4933 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_33 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 717 "hlds_rtti.m"
    {
#line 717 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__TypeInfo_8_33, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_32);
    }
#line 717 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
      {
#line 717 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_32 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_32);
#line 717 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 717 "hlds_rtti.m"
      }
#line 719 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 718 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_32;
#line 719 "hlds_rtti.m"
    else
#line 720 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 802 "hlds_rtti.m"
    {
#line 802 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingConstraint_17);
    }
#line 802 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 802 "hlds_rtti.m"
      {
#line 802 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingConstraint_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingConstraint_17);
#line 802 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 802 "hlds_rtti.m"
      }
#line 808 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 805 "hlds_rtti.m"
      {
#line 803 "hlds_rtti.m"
        {
#line 803 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(hlds__hlds_rtti__Constraint_15, hlds__hlds_rtti__ExistingConstraint_17);
        }
#line 805 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 804 "hlds_rtti.m"
          {
#line 804 "hlds_rtti.m"
          }
#line 805 "hlds_rtti.m"
        else
#line 806 "hlds_rtti.m"
          {
#line 806 "hlds_rtti.m"
            {
#line 806 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_constraint_map\'/7", (MR_String) "inconsistent typeclass_infos");
#line 806 "hlds_rtti.m"
              return;
            }
#line 806 "hlds_rtti.m"
          }
#line 805 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 805 "hlds_rtti.m"
      }
#line 808 "hlds_rtti.m"
    else
#line 809 "hlds_rtti.m"
      {
#line 809 "hlds_rtti.m"
        {
#line 809 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Constraint_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
#line 809 "hlds_rtti.m"
          return;
        }
#line 809 "hlds_rtti.m"
      }
#line 797 "hlds_rtti.m"
  }
#line 791 "hlds_rtti.m"
}

#line 770 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_11,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Type0_12,
#line 770 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_18,
#line 770 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_19)
#line 770 "hlds_rtti.m"
{
#line 774 "hlds_rtti.m"
  {
#line 774 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 774 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type1_14;
#line 774 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_15;
#line 774 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 719 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_61;
#line 717 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_62;
#line 717 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_61;
#line 787 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ExistingType_17;
#line 778 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_ExistingType_17;

#line 775 "hlds_rtti.m"
    {
#line 775 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Type0_12, &hlds__hlds_rtti__Type1_14);
    }
#line 776 "hlds_rtti.m"
    {
#line 776 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Type1_14, &hlds__hlds_rtti__Type_15);
    }
#line 5073 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_62 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 717 "hlds_rtti.m"
    {
#line 717 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_62, hlds__hlds_rtti__TypeInfo_8_62, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_11)), &hlds__hlds_rtti__conv0_Var1_61);
    }
#line 717 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
      {
#line 717 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_61 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_61);
#line 717 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 717 "hlds_rtti.m"
      }
#line 719 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 718 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_61;
#line 719 "hlds_rtti.m"
    else
#line 720 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_11;
#line 778 "hlds_rtti.m"
    {
#line 778 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, ((MR_Box) (hlds__hlds_rtti__Var_16)), &hlds__hlds_rtti__conv1_ExistingType_17);
    }
#line 778 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 778 "hlds_rtti.m"
      {
#line 778 "hlds_rtti.m"
        hlds__hlds_rtti__ExistingType_17 = ((MR_Word) hlds__hlds_rtti__conv1_ExistingType_17);
#line 778 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 778 "hlds_rtti.m"
      }
#line 787 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 781 "hlds_rtti.m"
      {
#line 779 "hlds_rtti.m"
        {
#line 779 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__hlds_rtti__Type_15, hlds__hlds_rtti__ExistingType_17);
        }
#line 781 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 780 "hlds_rtti.m"
          {
#line 780 "hlds_rtti.m"
          }
#line 781 "hlds_rtti.m"
        else
#line 782 "hlds_rtti.m"
          {
#line 782 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 782 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_22_22;
#line 782 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_28_28;
#line 782 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_31_31;
#line 782 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_39_39;
#line 782 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__V_45_45;
#line 782 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_47_47;
#line 782 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_48_48;
#line 782 "hlds_rtti.m"
            MR_String hlds__hlds_rtti__V_55_55;

#line 785 "hlds_rtti.m"
            {
#line 785 "hlds_rtti.m"
              hlds__hlds_rtti__V_28_28 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__Type_15)));
            }
#line 785 "hlds_rtti.m"
            {
#line 785 "hlds_rtti.m"
              hlds__hlds_rtti__V_31_31 = mercury__string__string_1_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, ((MR_Box) (hlds__hlds_rtti__ExistingType_17)));
            }
#line 5161 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__V_45_45 = (MR_Word) &hlds__hlds_rtti_scalar_common_7[0];
#line 785 "hlds_rtti.m"
            {
#line 785 "hlds_rtti.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_rtti__V_45_45, hlds__hlds_rtti__V_31_31, &hlds__hlds_rtti__V_39_39);
            }
#line 783 "hlds_rtti.m"
            {
#line 783 "hlds_rtti.m"
              hlds__hlds_rtti__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " ExistingType: ", hlds__hlds_rtti__V_39_39);
            }
#line 785 "hlds_rtti.m"
            {
#line 785 "hlds_rtti.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__hlds_rtti__V_45_45, hlds__hlds_rtti__V_28_28, &hlds__hlds_rtti__V_48_48);
            }
#line 783 "hlds_rtti.m"
            {
#line 783 "hlds_rtti.m"
              hlds__hlds_rtti__V_55_55 = mercury__string__f_43_43_2_f_0(hlds__hlds_rtti__V_48_48, hlds__hlds_rtti__V_47_47);
            }
#line 783 "hlds_rtti.m"
            {
#line 783 "hlds_rtti.m"
              hlds__hlds_rtti__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "inconsistent type_infos:  Type: ", hlds__hlds_rtti__V_55_55);
            }
#line 782 "hlds_rtti.m"
            {
#line 782 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.apply_substs_to_type_map\'/7", hlds__hlds_rtti__V_22_22);
#line 782 "hlds_rtti.m"
              return;
            }
#line 782 "hlds_rtti.m"
          }
#line 781 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_19 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_18;
#line 781 "hlds_rtti.m"
      }
#line 787 "hlds_rtti.m"
    else
#line 788 "hlds_rtti.m"
      {
#line 788 "hlds_rtti.m"
        {
#line 788 "hlds_rtti.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__Var_16)), ((MR_Box) (hlds__hlds_rtti__Type_15)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_18, hlds__hlds_rtti__STATE_VARIABLE_Map_19);
#line 788 "hlds_rtti.m"
          return;
        }
#line 788 "hlds_rtti.m"
      }
#line 774 "hlds_rtti.m"
  }
#line 770 "hlds_rtti.m"
}

#line 741 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TVar_11,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Locn_12,
#line 741 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_36,
#line 741 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_37)
#line 741 "hlds_rtti.m"
{
#line 745 "hlds_rtti.m"
  {
#line 745 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 745 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_40_40;
#line 745 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewLocn_16;
#line 745 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewTVar1_17;
#line 745 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__NewType_18;
#line 745 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_38_38;

#line 5253 "hlds.hlds_rtti.c"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_12)) == (MR_mktag((MR_Integer) 0))))
#line 5255 "hlds.hlds_rtti.c"
      {
#line 5257 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5259 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_15;
#line 719 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_49;
#line 717 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_50 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 717 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Var1_49;

#line 717 "hlds_rtti.m"
        {
#line 717 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__TypeInfo_8_50, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_14)), &hlds__hlds_rtti__conv0_Var1_49);
        }
#line 717 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
          {
#line 717 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_49 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_49);
#line 717 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 717 "hlds_rtti.m"
          }
#line 719 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 718 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var1_49;
#line 719 "hlds_rtti.m"
        else
#line 720 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_15 = hlds__hlds_rtti__Var_14;
#line 398 "hlds_rtti.m"
        {
#line 398 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_15));
#line 398 "hlds_rtti.m"
        }
#line 5299 "hlds.hlds_rtti.c"
      }
#line 5301 "hlds.hlds_rtti.c"
    else
#line 5303 "hlds.hlds_rtti.c"
      {
#line 5305 "hlds.hlds_rtti.c"
        MR_Integer hlds__hlds_rtti__Num_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 1)));
#line 5307 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_12, (MR_Integer) 0)));
#line 5309 "hlds.hlds_rtti.c"
        MR_Word hlds__hlds_rtti__NewVar_60;
#line 719 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var1_57;
#line 717 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_8_56 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 717 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Var1_57;

#line 717 "hlds_rtti.m"
        {
#line 717 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__TypeInfo_8_56, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var_59)), &hlds__hlds_rtti__conv1_Var1_57);
        }
#line 717 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
          {
#line 717 "hlds_rtti.m"
            hlds__hlds_rtti__Var1_57 = ((MR_Word) hlds__hlds_rtti__conv1_Var1_57);
#line 717 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 717 "hlds_rtti.m"
          }
#line 719 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 718 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var1_57;
#line 719 "hlds_rtti.m"
        else
#line 720 "hlds_rtti.m"
          hlds__hlds_rtti__NewVar_60 = hlds__hlds_rtti__Var_59;
#line 399 "hlds_rtti.m"
        {
#line 399 "hlds_rtti.m"
          hlds__hlds_rtti__NewLocn_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 0) = ((MR_Box) (hlds__hlds_rtti__NewVar_60));
#line 399 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_rtti__NewLocn_16, 1) = ((MR_Box) (hlds__hlds_rtti__Num_55));
#line 399 "hlds_rtti.m"
        }
#line 5351 "hlds.hlds_rtti.c"
      }
#line 749 "hlds_rtti.m"
    {
#line 749 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__TVar_11, &hlds__hlds_rtti__NewTVar1_17);
    }
#line 5358 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_40_40 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 752 "hlds_rtti.m"
    {
#line 752 "hlds_rtti.m"
      hlds__hlds_rtti__V_38_38 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 752 "hlds_rtti.m"
    {
#line 752 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_tvar_4_p_0(hlds__hlds_rtti__V_38_38, hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__NewTVar1_17, &hlds__hlds_rtti__NewType_18);
    }
#line 760 "hlds_rtti.m"
#line 760 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__NewType_18)) {
#line 760 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 760 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 756 "hlds_rtti.m"
        {
#line 756 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__NewTVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)));
#line 756 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__NewType_18, (MR_Integer) 1)));

#line 759 "hlds_rtti.m"
          {
#line 759 "hlds_rtti.m"
            mercury__map__set_4_p_0(hlds__hlds_rtti__TypeInfo_40_40, (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__NewTVar_19)), ((MR_Box) (hlds__hlds_rtti__NewLocn_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_36, hlds__hlds_rtti__STATE_VARIABLE_Map_37);
#line 759 "hlds_rtti.m"
            return;
          }
#line 756 "hlds_rtti.m"
        }
#line 760 "hlds_rtti.m"
        break;
#line 760 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 762 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 760 "hlds_rtti.m"
        break;
#line 760 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 761 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 760 "hlds_rtti.m"
        break;
#line 760 "hlds_rtti.m"
      case (MR_Integer) 3:
#line 760 "hlds_rtti.m"
#line 760 "hlds_rtti.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__hlds_rtti__NewType_18, (MR_Integer) 0)))) {
#line 760 "hlds_rtti.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 760 "hlds_rtti.m"
          case (MR_Integer) 0:
#line 763 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 760 "hlds_rtti.m"
            break;
#line 760 "hlds_rtti.m"
          case (MR_Integer) 1:
#line 764 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 760 "hlds_rtti.m"
            break;
#line 760 "hlds_rtti.m"
          case (MR_Integer) 2:
#line 765 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 760 "hlds_rtti.m"
            break;
#line 760 "hlds_rtti.m"
          case (MR_Integer) 3:
#line 766 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_Map_37 = hlds__hlds_rtti__STATE_VARIABLE_Map_0_36;
#line 760 "hlds_rtti.m"
            break;
#line 760 "hlds_rtti.m"
        }
#line 760 "hlds_rtti.m"
        break;
#line 760 "hlds_rtti.m"
    }
#line 745 "hlds_rtti.m"
  }
#line 741 "hlds_rtti.m"
}

#line 723 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TRenaming_8,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__TSubst_9,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Subst_10,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint0_11,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Var0_12,
#line 723 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_Map_0_17,
#line 723 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_Map_18)
#line 723 "hlds_rtti.m"
{
#line 727 "hlds_rtti.m"
  {
#line 727 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 727 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint1_14;
#line 727 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_15;
#line 727 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var_16;
#line 719 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Var1_25;
#line 717 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_8_26;
#line 717 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Var1_25;

#line 728 "hlds_rtti.m"
    {
#line 728 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(hlds__hlds_rtti__TRenaming_8, hlds__hlds_rtti__Constraint0_11, &hlds__hlds_rtti__Constraint1_14);
    }
#line 730 "hlds_rtti.m"
    {
#line 730 "hlds_rtti.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(hlds__hlds_rtti__TSubst_9, hlds__hlds_rtti__Constraint1_14, &hlds__hlds_rtti__Constraint_15);
    }
#line 5495 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_8_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 717 "hlds_rtti.m"
    {
#line 717 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0(hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__TypeInfo_8_26, hlds__hlds_rtti__Subst_10, ((MR_Box) (hlds__hlds_rtti__Var0_12)), &hlds__hlds_rtti__conv0_Var1_25);
    }
#line 717 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 717 "hlds_rtti.m"
      {
#line 717 "hlds_rtti.m"
        hlds__hlds_rtti__Var1_25 = ((MR_Word) hlds__hlds_rtti__conv0_Var1_25);
#line 717 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 717 "hlds_rtti.m"
      }
#line 719 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 718 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var1_25;
#line 719 "hlds_rtti.m"
    else
#line 720 "hlds_rtti.m"
      hlds__hlds_rtti__Var_16 = hlds__hlds_rtti__Var0_12;
#line 732 "hlds_rtti.m"
    {
#line 732 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_15)), ((MR_Box) (hlds__hlds_rtti__Var_16)), hlds__hlds_rtti__STATE_VARIABLE_Map_0_17, hlds__hlds_rtti__STATE_VARIABLE_Map_18);
#line 732 "hlds_rtti.m"
      return;
    }
#line 727 "hlds_rtti.m"
  }
#line 723 "hlds_rtti.m"
}

#line 676 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(
#line 676 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__Constraint_4,
#line 676 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8,
#line 676 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9)
#line 676 "hlds_rtti.m"
{
#line 679 "hlds_rtti.m"
  {
#line 679 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 679 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ArgTypes_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 1)));
#line 680 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Constraint_4, (MR_Integer) 0)));

#line 681 "hlds_rtti.m"
    {
#line 681 "hlds_rtti.m"
      mercury__set_tree234__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__ArgTypes_7, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_0_8, hlds__hlds_rtti__STATE_VARIABLE_TypeSet_9);
#line 681 "hlds_rtti.m"
      return;
    }
#line 679 "hlds_rtti.m"
  }
#line 676 "hlds_rtti.m"
}

#line 544 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_constraint_map_6_p_0(
#line 544 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 544 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 544 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3,
#line 544 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4,
#line 544 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5,
#line 544 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6)
#line 544 "hlds_rtti.m"
{
#line 550 "hlds_rtti.m"
  while (MR_TRUE)
#line 550 "hlds_rtti.m"
    {
#line 550 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 550 "hlds_rtti.m"
      {
#line 550 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 550 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "hlds_rtti.m"
          {
#line 550 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_TCIMap_6 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 550 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 550 "hlds_rtti.m"
          }
#line 550 "hlds_rtti.m"
        else
#line 552 "hlds_rtti.m"
          {
#line 552 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraint_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 552 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 552 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 0)));
#line 552 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Constraint_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarConstraint_14, (MR_Integer) 1)));
#line 552 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_21;
#line 552 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_22;
#line 552 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;
#line 552 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 555 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_22;

#line 554 "hlds_rtti.m"
            {
#line 554 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_21 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_19);
            }
#line 555 "hlds_rtti.m"
            {
#line 555 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_21, &hlds__hlds_rtti__conv0_Used_22);
            }
#line 555 "hlds_rtti.m"
            hlds__hlds_rtti__Used_22 = ((MR_Word) hlds__hlds_rtti__conv0_Used_22);
#line 559 "hlds_rtti.m"
#line 559 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_22) {
#line 559 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 559 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 560 "hlds_rtti.m"
                {
#line 561 "hlds_rtti.m"
                  {
#line 561 "hlds_rtti.m"
                    mercury__map__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], ((MR_Box) (hlds__hlds_rtti__Constraint_20)), hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5, &hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27);
                  }
#line 560 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3;
#line 560 "hlds_rtti.m"
                }
#line 559 "hlds_rtti.m"
                break;
#line 559 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 557 "hlds_rtti.m"
                {
#line 558 "hlds_rtti.m"
                  {
#line 558 "hlds_rtti.m"
                    hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "hlds_rtti.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 0) = ((MR_Box) (hlds__hlds_rtti__VarConstraint_14));
#line 558 "hlds_rtti.m"
                    MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3));
#line 558 "hlds_rtti.m"
                  }
#line 557 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5;
#line 557 "hlds_rtti.m"
                }
#line 559 "hlds_rtti.m"
                break;
#line 559 "hlds_rtti.m"
            }
#line 563 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 563 "hlds_rtti.m"
            {
#line 563 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarConstraints_15;
#line 563 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_28_28;
#line 563 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_27_27;

#line 563 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0_5 = hlds__hlds_rtti__STATE_VARIABLE_TCIMap_0__tmp_copy_5;
#line 563 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarConstraints_0__tmp_copy_3;
#line 563 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 563 "hlds_rtti.m"
            }
#line 563 "hlds_rtti.m"
            continue;
#line 552 "hlds_rtti.m"
          }
#line 550 "hlds_rtti.m"
      }
#line 550 "hlds_rtti.m"
      break;
#line 550 "hlds_rtti.m"
    }
#line 544 "hlds_rtti.m"
}

#line 526 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_map_4_p_0(
#line 526 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 526 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 526 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3,
#line 526 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4)
#line 526 "hlds_rtti.m"
{
#line 531 "hlds_rtti.m"
  while (MR_TRUE)
#line 531 "hlds_rtti.m"
    {
#line 531 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 531 "hlds_rtti.m"
      {
#line 531 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 531 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_4 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 531 "hlds_rtti.m"
        else
#line 532 "hlds_rtti.m"
          {
#line 532 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarType_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 532 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__VarTypes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 0)));
#line 532 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_15;
#line 532 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_16;
#line 532 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;
#line 533 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarType_9, (MR_Integer) 1)));
#line 535 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_16;

#line 534 "hlds_rtti.m"
            {
#line 534 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_13);
            }
#line 535 "hlds_rtti.m"
            {
#line 535 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_15, &hlds__hlds_rtti__conv0_Used_16);
            }
#line 535 "hlds_rtti.m"
            hlds__hlds_rtti__Used_16 = ((MR_Word) hlds__hlds_rtti__conv0_Used_16);
#line 539 "hlds_rtti.m"
#line 539 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_16) {
#line 539 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 539 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 540 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3;
#line 539 "hlds_rtti.m"
                break;
#line 539 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 538 "hlds_rtti.m"
                {
#line 538 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 0) = ((MR_Box) (hlds__hlds_rtti__VarType_9));
#line 538 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3));
#line 538 "hlds_rtti.m"
                }
#line 539 "hlds_rtti.m"
                break;
#line 539 "hlds_rtti.m"
            }
#line 542 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 542 "hlds_rtti.m"
            {
#line 542 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__VarTypes_10;
#line 542 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_19_19;

#line 542 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevVarTypes_0__tmp_copy_3;
#line 542 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 542 "hlds_rtti.m"
            }
#line 542 "hlds_rtti.m"
            continue;
#line 532 "hlds_rtti.m"
          }
#line 531 "hlds_rtti.m"
      }
#line 531 "hlds_rtti.m"
      break;
#line 531 "hlds_rtti.m"
    }
#line 526 "hlds_rtti.m"
}

#line 505 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__filter_type_info_varmap_4_p_0(
#line 505 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__HeadVar__1_1,
#line 505 "hlds_rtti.m"
  MR_ArrayPtr hlds__hlds_rtti__HeadVar__2_2,
#line 505 "hlds_rtti.m"
  MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3,
#line 505 "hlds_rtti.m"
  MR_Word * hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4)
#line 505 "hlds_rtti.m"
{
#line 510 "hlds_rtti.m"
  while (MR_TRUE)
#line 510 "hlds_rtti.m"
    {
#line 510 "hlds_rtti.m"
      /* tailcall optimized into a loop */
#line 510 "hlds_rtti.m"
      {
#line 510 "hlds_rtti.m"
        MR_bool hlds__hlds_rtti__succeeded;

#line 510 "hlds_rtti.m"
        if ((hlds__hlds_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_4 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 510 "hlds_rtti.m"
        else
#line 511 "hlds_rtti.m"
          {
#line 511 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocn_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 511 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__TVarLocns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 511 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Locn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 1)));
#line 511 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Var_15;
#line 511 "hlds_rtti.m"
            MR_Integer hlds__hlds_rtti__VarNum_17;
#line 511 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__Used_18;
#line 511 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;
#line 512 "hlds_rtti.m"
            MR_Word hlds__hlds_rtti___TVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__TVarLocn_9, (MR_Integer) 0)));
#line 517 "hlds_rtti.m"
            MR_Box hlds__hlds_rtti__conv0_Used_18;

#line 514 "hlds_rtti.m"
            if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_14)) == (MR_mktag((MR_Integer) 0))))
#line 513 "hlds_rtti.m"
              hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 514 "hlds_rtti.m"
            else
#line 514 "hlds_rtti.m"
              {
#line 514 "hlds_rtti.m"
                MR_Integer hlds__hlds_rtti__V_16_16;

#line 514 "hlds_rtti.m"
                hlds__hlds_rtti__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 0)));
#line 514 "hlds_rtti.m"
                hlds__hlds_rtti__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__Locn_14, (MR_Integer) 1)));
#line 514 "hlds_rtti.m"
              }
#line 516 "hlds_rtti.m"
            {
#line 516 "hlds_rtti.m"
              hlds__hlds_rtti__VarNum_17 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Var_15);
            }
#line 517 "hlds_rtti.m"
            {
#line 517 "hlds_rtti.m"
              mercury__array__unsafe_lookup_3_p_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_ArrayPtr) hlds__hlds_rtti__HeadVar__2_2, hlds__hlds_rtti__VarNum_17, &hlds__hlds_rtti__conv0_Used_18);
            }
#line 517 "hlds_rtti.m"
            hlds__hlds_rtti__Used_18 = ((MR_Word) hlds__hlds_rtti__conv0_Used_18);
#line 521 "hlds_rtti.m"
#line 521 "hlds_rtti.m"
            switch (hlds__hlds_rtti__Used_18) {
#line 521 "hlds_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 521 "hlds_rtti.m"
              case (MR_Integer) 0:
#line 522 "hlds_rtti.m"
                hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3;
#line 521 "hlds_rtti.m"
                break;
#line 521 "hlds_rtti.m"
              case (MR_Integer) 1:
#line 520 "hlds_rtti.m"
                {
#line 520 "hlds_rtti.m"
                  hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 0) = ((MR_Box) (hlds__hlds_rtti__TVarLocn_9));
#line 520 "hlds_rtti.m"
                  MR_hl_field(MR_mktag(1), hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21, 1) = ((MR_Box) (hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3));
#line 520 "hlds_rtti.m"
                }
#line 521 "hlds_rtti.m"
                break;
#line 521 "hlds_rtti.m"
            }
#line 524 "hlds_rtti.m"
            /* direct tailcall eliminated */
#line 524 "hlds_rtti.m"
            {
#line 524 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__HeadVar__1__tmp_copy_1 = hlds__hlds_rtti__TVarLocns_10;
#line 524 "hlds_rtti.m"
              MR_Word hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_21_21;

#line 524 "hlds_rtti.m"
              hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0_3 = hlds__hlds_rtti__STATE_VARIABLE_RevTVarLocns_0__tmp_copy_3;
#line 524 "hlds_rtti.m"
              hlds__hlds_rtti__HeadVar__1_1 = hlds__hlds_rtti__HeadVar__1__tmp_copy_1;
#line 524 "hlds_rtti.m"
            }
#line 524 "hlds_rtti.m"
            continue;
#line 511 "hlds_rtti.m"
          }
#line 510 "hlds_rtti.m"
      }
#line 510 "hlds_rtti.m"
      break;
#line 510 "hlds_rtti.m"
    }
#line 505 "hlds_rtti.m"
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
#line 902 "hlds_rtti.m"
  {
#line 902 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 902 "hlds_rtti.m"
#line 902 "hlds_rtti.m"
    switch (hlds__hlds_rtti__TypeInfoLiveness_7) {
#line 902 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 902 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 907 "hlds_rtti.m"
        *hlds__hlds_rtti__Vars_10 = hlds__hlds_rtti__Vars0_6;
#line 902 "hlds_rtti.m"
        break;
#line 902 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 902 "hlds_rtti.m"
        {
#line 902 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeCtorInfo_15_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 902 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfoVars_11;
#line 902 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TVarMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 1)));
#line 902 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__VarList_18;
#line 902 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__TypeInfoVarList_19;
#line 862 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 0)));
#line 862 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 2)));
#line 862 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_9, (MR_Integer) 3)));

#line 863 "hlds_rtti.m"
          {
#line 863 "hlds_rtti.m"
            hlds__hlds_rtti__VarList_18 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__Vars0_6);
          }
#line 864 "hlds_rtti.m"
          {
#line 864 "hlds_rtti.m"
            hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_18, hlds__hlds_rtti__VarTypes_8, hlds__hlds_rtti__TVarMap_17, &hlds__hlds_rtti__TypeInfoVarList_19);
          }
#line 865 "hlds_rtti.m"
          {
#line 865 "hlds_rtti.m"
            hlds__hlds_rtti__TypeInfoVars_11 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_23, hlds__hlds_rtti__TypeInfoVarList_19);
          }
#line 904 "hlds_rtti.m"
          {
#line 904 "hlds_rtti.m"
            parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__hlds_rtti__Vars0_6, hlds__hlds_rtti__TypeInfoVars_11, hlds__hlds_rtti__Vars_10);
#line 904 "hlds_rtti.m"
            return;
          }
#line 902 "hlds_rtti.m"
        }
#line 902 "hlds_rtti.m"
        break;
#line 902 "hlds_rtti.m"
    }
#line 902 "hlds_rtti.m"
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
#line 861 "hlds_rtti.m"
  {
#line 861 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_15_15 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TVarMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 1)));
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarList_10;
#line 861 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfoVarList_11;
#line 862 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 0)));
#line 862 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 2)));
#line 862 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_7, (MR_Integer) 3)));

#line 863 "hlds_rtti.m"
    {
#line 863 "hlds_rtti.m"
      hlds__hlds_rtti__VarList_10 = parse_tree__set_of_var__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__Vars_5);
    }
#line 864 "hlds_rtti.m"
    {
#line 864 "hlds_rtti.m"
      hlds__hlds_rtti__get_typeinfo_vars_2_4_p_0(hlds__hlds_rtti__VarList_10, hlds__hlds_rtti__VarTypes_6, hlds__hlds_rtti__TVarMap_9, &hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 865 "hlds_rtti.m"
    {
#line 865 "hlds_rtti.m"
      *hlds__hlds_rtti__TypeInfoVars_8 = parse_tree__set_of_var__list_to_set_1_f_0(hlds__hlds_rtti__TypeCtorInfo_15_15, hlds__hlds_rtti__TypeInfoVarList_11);
    }
#line 861 "hlds_rtti.m"
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
#line 845 "hlds_rtti.m"
  {
#line 845 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_19_19 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_20_20 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 0)));
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 1)));
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 2)));
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsA_4, (MR_Integer) 3)));
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImapB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 0)));
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImapB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 1)));
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMapB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 2)));
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMapB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__VarMapsB_5, (MR_Integer) 3)));
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCImap_15;
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TImap_16;
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_17;
#line 845 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_18;

#line 850 "hlds_rtti.m"
    {
#line 850 "hlds_rtti.m"
      mercury__map__overlay_3_p_0(hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TCImapA_7, hlds__hlds_rtti__TCImapB_11, &hlds__hlds_rtti__TCImap_15);
    }
#line 851 "hlds_rtti.m"
    {
#line 851 "hlds_rtti.m"
      mercury__map__overlay_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__TImapA_8, hlds__hlds_rtti__TImapB_12, &hlds__hlds_rtti__TImap_16);
    }
#line 854 "hlds_rtti.m"
    {
#line 854 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__TypeMapA_9, hlds__hlds_rtti__TypeMapB_13, &hlds__hlds_rtti__TypeMap_17);
    }
#line 855 "hlds_rtti.m"
    {
#line 855 "hlds_rtti.m"
      mercury__map__old_merge_3_p_0(hlds__hlds_rtti__TypeInfo_20_20, hlds__hlds_rtti__TypeCtorInfo_19_19, hlds__hlds_rtti__ConstraintMapA_10, hlds__hlds_rtti__ConstraintMapB_14, &hlds__hlds_rtti__ConstraintMap_18);
    }
#line 857 "hlds_rtti.m"
    {
#line 857 "hlds_rtti.m"
      MR_Word base;
#line 857 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "hlds_rtti.m"
      *hlds__hlds_rtti__VarMaps_6 = base;
#line 857 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCImap_15));
#line 857 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TImap_16));
#line 857 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_17));
#line 857 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_18));
#line 857 "hlds_rtti.m"
    }
#line 845 "hlds_rtti.m"
  }
#line 314 "hlds_rtti.m"
}

#line 819 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2(
#line 819 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 819 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 819 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 819 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 819 "hlds_rtti.m"
{
#line 819 "hlds_rtti.m"
  {
#line 819 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 819 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_Constraint_8;

#line 819 "hlds_rtti.m"
    {
#line 819 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_value_transformation_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_Constraint_8);
    }
#line 819 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_Constraint_8));
#line 819 "hlds_rtti.m"
  }
#line 819 "hlds_rtti.m"
}

#line 816 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1(
#line 816 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 816 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 816 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 816 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 816 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 816 "hlds_rtti.m"
{
#line 816 "hlds_rtti.m"
  {
#line 816 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 816 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15;

#line 816 "hlds_rtti.m"
    {
#line 816 "hlds_rtti.m"
      hlds__hlds_rtti__apply_constraint_key_transformation_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15);
    }
#line 816 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_15));
#line 816 "hlds_rtti.m"
  }
#line 816 "hlds_rtti.m"
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
#line 812 "hlds_rtti.m"
  {
#line 812 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_45_45;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_46_46;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_48_48;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TciMap_9;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_10;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_11;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_30_30;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_33_33;
#line 812 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_34_34;
#line 813 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 816 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TciMap_9;
#line 821 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_29_29;
#line 821 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_31_31;
#line 821 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_32_32;

#line 816 "hlds_rtti.m"
    {
#line 816 "hlds_rtti.m"
      hlds__hlds_rtti__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 816 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_5[0]));
#line 816 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_1));
#line 816 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 816 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_14_14, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 816 "hlds_rtti.m"
    }
#line 6322 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_45_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6324 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_46_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 817 "hlds_rtti.m"
    {
#line 817 "hlds_rtti.m"
      hlds__hlds_rtti__V_15_15 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46);
    }
#line 816 "hlds_rtti.m"
    {
#line 816 "hlds_rtti.m"
      mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeInfo_46_46, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_14_14, hlds__hlds_rtti__TciMap0_6, ((MR_Box) (hlds__hlds_rtti__V_15_15)), &hlds__hlds_rtti__conv1_TciMap_9);
    }
#line 816 "hlds_rtti.m"
    hlds__hlds_rtti__TciMap_9 = ((MR_Word) hlds__hlds_rtti__conv1_TciMap_9);
#line 6338 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 818 "hlds_rtti.m"
    {
#line 818 "hlds_rtti.m"
      mercury__map__map_values_only_3_p_0(hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeCtorInfo_48_48, hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__Pred_4, hlds__hlds_rtti__TypeMap0_7, &hlds__hlds_rtti__TypeMap_10);
    }
#line 819 "hlds_rtti.m"
    {
#line 819 "hlds_rtti.m"
      hlds__hlds_rtti__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 819 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_6[0]));
#line 819 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 1) = ((MR_Box) (hlds__hlds_rtti__rtti_varmaps_transform_types_3_p_0_2));
#line 819 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 819 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_16_16, 3) = ((MR_Box) (hlds__hlds_rtti__Pred_4));
#line 819 "hlds_rtti.m"
    }
#line 819 "hlds_rtti.m"
    {
#line 819 "hlds_rtti.m"
      mercury__map__map_values_3_p_0(hlds__hlds_rtti__TypeInfo_46_46, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__TypeCtorInfo_45_45, hlds__hlds_rtti__V_16_16, hlds__hlds_rtti__ConstraintMap0_8, &hlds__hlds_rtti__ConstraintMap_11);
    }
#line 821 "hlds_rtti.m"
    hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 0)));
#line 821 "hlds_rtti.m"
    hlds__hlds_rtti__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 1)));
#line 821 "hlds_rtti.m"
    hlds__hlds_rtti__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 2)));
#line 821 "hlds_rtti.m"
    hlds__hlds_rtti__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_12, (MR_Integer) 3)));
#line 822 "hlds_rtti.m"
    hlds__hlds_rtti__V_33_33 = hlds__hlds_rtti__TciMap_9;
#line 822 "hlds_rtti.m"
    hlds__hlds_rtti__V_34_34 = hlds__hlds_rtti__V_30_30;
#line 823 "hlds_rtti.m"
    {
#line 823 "hlds_rtti.m"
      MR_Word base;
#line 823 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 823 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_13 = base;
#line 823 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_33_33));
#line 823 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_34_34));
#line 823 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_10));
#line 823 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_11));
#line 823 "hlds_rtti.m"
    }
#line 812 "hlds_rtti.m"
  }
#line 305 "hlds_rtti.m"
}

#line 708 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4(
#line 708 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 708 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 708 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 708 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_3,
#line 708 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_4)
#line 708 "hlds_rtti.m"
{
#line 708 "hlds_rtti.m"
  {
#line 708 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 708 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19;

#line 708 "hlds_rtti.m"
    {
#line 708 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_constraint_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19);
    }
#line 708 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv6_STATE_VARIABLE_Map_19));
#line 708 "hlds_rtti.m"
  }
#line 708 "hlds_rtti.m"
}

#line 706 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3(
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
    MR_Word hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19;

#line 706 "hlds_rtti.m"
    {
#line 706 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_type_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19);
    }
#line 706 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv4_STATE_VARIABLE_Map_19));
#line 706 "hlds_rtti.m"
  }
#line 706 "hlds_rtti.m"
}

#line 704 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2(
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
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37;

#line 704 "hlds_rtti.m"
    {
#line 704 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_ti_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37);
    }
#line 704 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_Map_37));
#line 704 "hlds_rtti.m"
  }
#line 704 "hlds_rtti.m"
}

#line 702 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1(
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
    MR_Word hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18;

#line 702 "hlds_rtti.m"
    {
#line 702 "hlds_rtti.m"
      hlds__hlds_rtti__apply_substs_to_tci_map_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 5))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), ((MR_Word) hlds__hlds_rtti__wrapper_arg_3), &hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18);
    }
#line 702 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_4 = ((MR_Box) (hlds__hlds_rtti__conv0_STATE_VARIABLE_Map_18));
#line 702 "hlds_rtti.m"
  }
#line 702 "hlds_rtti.m"
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
#line 699 "hlds_rtti.m"
  {
#line 699 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_29_29 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_30_30;
#line 694 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_31_31;

#line 694 "hlds_rtti.m"
    {
#line 694 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__TypeInfo_29_29, hlds__hlds_rtti__Subst_8);
    }
#line 694 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 694 "hlds_rtti.m"
      {
#line 6570 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_30_30 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6572 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 695 "hlds_rtti.m"
        {
#line 695 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeCtorInfo_31_31, hlds__hlds_rtti__TSubst_7);
        }
#line 694 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 696 "hlds_rtti.m"
          {
#line 696 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0(hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TypeInfo_30_30, hlds__hlds_rtti__TRenaming_6);
          }
#line 694 "hlds_rtti.m"
      }
#line 699 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 699 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18;
#line 699 "hlds_rtti.m"
    else
#line 701 "hlds_rtti.m"
      {
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_36_36;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_37_37;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_43_43;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_44_44;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeCtorInfo_50_50;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 0)));
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 1)));
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 2)));
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_18, (MR_Integer) 3)));
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TCIMap_14;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TIMap_15;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeMap_16;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__ConstraintMap_17;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_20_20;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_21_21;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_22_22;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_23_23;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_24_24;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_25_25;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_26_26;
#line 701 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;
#line 702 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_TCIMap_14;
#line 704 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv3_TIMap_15;
#line 706 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv5_TypeMap_16;
#line 708 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv7_ConstraintMap_17;

#line 702 "hlds_rtti.m"
        {
#line 702 "hlds_rtti.m"
          hlds__hlds_rtti__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[0]));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_1));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 702 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_20_20, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 702 "hlds_rtti.m"
        }
#line 6665 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_36_36 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 6667 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_37_37 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 703 "hlds_rtti.m"
        {
#line 703 "hlds_rtti.m"
          hlds__hlds_rtti__V_21_21 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37);
        }
#line 702 "hlds_rtti.m"
        {
#line 702 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeCtorInfo_36_36, hlds__hlds_rtti__TypeInfo_37_37, (MR_Word) &hlds__hlds_rtti_scalar_common_2[1], hlds__hlds_rtti__V_20_20, hlds__hlds_rtti__TCIMap0_10, ((MR_Box) (hlds__hlds_rtti__V_21_21)), &hlds__hlds_rtti__conv1_TCIMap_14);
        }
#line 702 "hlds_rtti.m"
        hlds__hlds_rtti__TCIMap_14 = ((MR_Word) hlds__hlds_rtti__conv1_TCIMap_14);
#line 704 "hlds_rtti.m"
        {
#line 704 "hlds_rtti.m"
          hlds__hlds_rtti__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[1]));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_2));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 704 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_22_22, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 704 "hlds_rtti.m"
        }
#line 6699 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeInfo_43_43 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 6701 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 705 "hlds_rtti.m"
        {
#line 705 "hlds_rtti.m"
          hlds__hlds_rtti__V_23_23 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44);
        }
#line 704 "hlds_rtti.m"
        {
#line 704 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_43_43, hlds__hlds_rtti__TypeCtorInfo_44_44, (MR_Word) &hlds__hlds_rtti_scalar_common_2[2], hlds__hlds_rtti__V_22_22, hlds__hlds_rtti__TIMap0_11, ((MR_Box) (hlds__hlds_rtti__V_23_23)), &hlds__hlds_rtti__conv3_TIMap_15);
        }
#line 704 "hlds_rtti.m"
        hlds__hlds_rtti__TIMap_15 = ((MR_Word) hlds__hlds_rtti__conv3_TIMap_15);
#line 706 "hlds_rtti.m"
        {
#line 706 "hlds_rtti.m"
          hlds__hlds_rtti__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[2]));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_3));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 706 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_24_24, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 706 "hlds_rtti.m"
        }
#line 6733 "hlds.hlds_rtti.c"
        hlds__hlds_rtti__TypeCtorInfo_50_50 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 707 "hlds_rtti.m"
        {
#line 707 "hlds_rtti.m"
          hlds__hlds_rtti__V_25_25 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50);
        }
#line 706 "hlds_rtti.m"
        {
#line 706 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_50_50, (MR_Word) &hlds__hlds_rtti_scalar_common_2[3], hlds__hlds_rtti__V_24_24, hlds__hlds_rtti__TypeMap0_12, ((MR_Box) (hlds__hlds_rtti__V_25_25)), &hlds__hlds_rtti__conv5_TypeMap_16);
        }
#line 706 "hlds_rtti.m"
        hlds__hlds_rtti__TypeMap_16 = ((MR_Word) hlds__hlds_rtti__conv5_TypeMap_16);
#line 708 "hlds_rtti.m"
        {
#line 708 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_4[3]));
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 1) = ((MR_Box) (hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0_4));
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 3) = ((MR_Box) (hlds__hlds_rtti__TRenaming_6));
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 4) = ((MR_Box) (hlds__hlds_rtti__TSubst_7));
#line 708 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_26_26, 5) = ((MR_Box) (hlds__hlds_rtti__Subst_8));
#line 708 "hlds_rtti.m"
        }
#line 709 "hlds_rtti.m"
        {
#line 709 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = mercury__map__init_0_f_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36);
        }
#line 708 "hlds_rtti.m"
        {
#line 708 "hlds_rtti.m"
          mercury__map__foldl_4_p_0(hlds__hlds_rtti__TypeInfo_37_37, hlds__hlds_rtti__TypeCtorInfo_36_36, (MR_Word) &hlds__hlds_rtti_scalar_common_2[4], hlds__hlds_rtti__V_26_26, hlds__hlds_rtti__ConstraintMap0_13, ((MR_Box) (hlds__hlds_rtti__V_27_27)), &hlds__hlds_rtti__conv7_ConstraintMap_17);
        }
#line 708 "hlds_rtti.m"
        hlds__hlds_rtti__ConstraintMap_17 = ((MR_Word) hlds__hlds_rtti__conv7_ConstraintMap_17);
#line 710 "hlds_rtti.m"
        {
#line 710 "hlds_rtti.m"
          MR_Word base;
#line 710 "hlds_rtti.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 710 "hlds_rtti.m"
          *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_19 = base;
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_14));
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_15));
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_16));
#line 710 "hlds_rtti.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_17));
#line 710 "hlds_rtti.m"
        }
#line 701 "hlds_rtti.m"
      }
#line 699 "hlds_rtti.m"
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
#line 686 "hlds_rtti.m"
  {
#line 686 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_15_15 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIVars_5;
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIVars_6;
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 686 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8;
#line 687 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 687 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 687 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 688 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12;
#line 688 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13;
#line 688 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;

#line 687 "hlds_rtti.m"
    {
#line 687 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_7_7, &hlds__hlds_rtti__TIVars_5);
    }
#line 688 "hlds_rtti.m"
    hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 688 "hlds_rtti.m"
    hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 688 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 688 "hlds_rtti.m"
    hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 688 "hlds_rtti.m"
    {
#line 688 "hlds_rtti.m"
      mercury__map__keys_2_p_0(hlds__hlds_rtti__TypeInfo_15_15, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_8_8, &hlds__hlds_rtti__TCIVars_6);
    }
#line 689 "hlds_rtti.m"
    {
#line 689 "hlds_rtti.m"
      mercury__list__append_3_p_1(hlds__hlds_rtti__TypeInfo_15_15, hlds__hlds_rtti__TIVars_5, hlds__hlds_rtti__TCIVars_6, hlds__hlds_rtti__Vars_4);
#line 689 "hlds_rtti.m"
      return;
    }
#line 686 "hlds_rtti.m"
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
#line 683 "hlds_rtti.m"
  {
#line 683 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 683 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 684 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 684 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 684 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 684 "hlds_rtti.m"
    {
#line 684 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__Constraints_4);
#line 684 "hlds_rtti.m"
      return;
    }
#line 683 "hlds_rtti.m"
  }
#line 281 "hlds_rtti.m"
}

#line 672 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_2(
#line 672 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 672 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 672 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 672 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 672 "hlds_rtti.m"
{
#line 672 "hlds_rtti.m"
  {
#line 672 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 672 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9;

#line 672 "hlds_rtti.m"
    {
#line 672 "hlds_rtti.m"
      hlds__hlds_rtti__accumulate_types_in_prog_constraint_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9);
    }
#line 672 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv2_STATE_VARIABLE_TypeSet_9));
#line 672 "hlds_rtti.m"
  }
#line 672 "hlds_rtti.m"
}

#line 671 "hlds_rtti.m"
static void MR_CALL 
hlds__hlds_rtti__rtti_varmaps_types_2_p_0_1(
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1,
#line 671 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_2,
#line 671 "hlds_rtti.m"
  MR_Box * hlds__hlds_rtti__wrapper_arg_3)
#line 671 "hlds_rtti.m"
{
#line 671 "hlds_rtti.m"
  {
#line 671 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 671 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_21;

#line 671 "hlds_rtti.m"
    {
#line 671 "hlds_rtti.m"
      hlds__hlds_rtti__IntroducedFrom__pred__rtti_varmaps_types__671__1_3_p_0(((MR_Word) hlds__hlds_rtti__wrapper_arg_1), ((MR_Word) hlds__hlds_rtti__wrapper_arg_2), &hlds__hlds_rtti__conv0_HeadVar__3_21);
    }
#line 671 "hlds_rtti.m"
    *hlds__hlds_rtti__wrapper_arg_3 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_21));
#line 671 "hlds_rtti.m"
  }
#line 671 "hlds_rtti.m"
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
#line 667 "hlds_rtti.m"
  {
#line 667 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23;
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_24_24;
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet0_7;
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet1_8;
#line 667 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeSet_9;
#line 668 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 668 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 671 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv1_TypeSet1_8;
#line 672 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv3_TypeSet_9;

#line 670 "hlds_rtti.m"
    {
#line 670 "hlds_rtti.m"
      hlds__hlds_rtti__TypeSet0_7 = mercury__set_tree234__init_0_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18);
    }
#line 7009 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[2];
#line 7011 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_24_24 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 671 "hlds_rtti.m"
    {
#line 671 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[5], hlds__hlds_rtti__TypeMap_5, ((MR_Box) (hlds__hlds_rtti__TypeSet0_7)), &hlds__hlds_rtti__conv1_TypeSet1_8);
    }
#line 671 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet1_8 = ((MR_Word) hlds__hlds_rtti__conv1_TypeSet1_8);
#line 672 "hlds_rtti.m"
    {
#line 672 "hlds_rtti.m"
      mercury__map__foldl_values_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeInfo_24_24, (MR_Word) &hlds__hlds_rtti_scalar_common_2[6], hlds__hlds_rtti__ConstraintMap_6, ((MR_Box) (hlds__hlds_rtti__TypeSet1_8)), &hlds__hlds_rtti__conv3_TypeSet_9);
    }
#line 672 "hlds_rtti.m"
    hlds__hlds_rtti__TypeSet_9 = ((MR_Word) hlds__hlds_rtti__conv3_TypeSet_9);
#line 674 "hlds_rtti.m"
    {
#line 674 "hlds_rtti.m"
      *hlds__hlds_rtti__Types_4 = mercury__set_tree234__to_sorted_list_1_f_0(hlds__hlds_rtti__TypeCtorInfo_18_18, hlds__hlds_rtti__TypeSet_9);
    }
#line 667 "hlds_rtti.m"
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
#line 664 "hlds_rtti.m"
  {
#line 664 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 664 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 1)));
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 0)));
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 2)));
#line 665 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_3, (MR_Integer) 3)));

#line 665 "hlds_rtti.m"
    {
#line 665 "hlds_rtti.m"
      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_5_5, hlds__hlds_rtti__TVars_4);
#line 665 "hlds_rtti.m"
      return;
    }
#line 664 "hlds_rtti.m"
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
#line 652 "hlds_rtti.m"
  {
#line 652 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 652 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 653 "hlds_rtti.m"
    {
#line 653 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 657 "hlds_rtti.m"
#line 657 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
#line 657 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 657 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 661 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 657 "hlds_rtti.m"
        break;
#line 657 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 655 "hlds_rtti.m"
        {
#line 655 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 655 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 655 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 636 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 636 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 636 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 638 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 638 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 638 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 638 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 637 "hlds_rtti.m"
          {
#line 637 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 638 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 638 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 638 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 638 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 638 "hlds_rtti.m"
          {
#line 638 "hlds_rtti.m"
            MR_Word base;
#line 638 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 638 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 638 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 638 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 638 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 638 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 638 "hlds_rtti.m"
          }
#line 655 "hlds_rtti.m"
        }
#line 657 "hlds_rtti.m"
        break;
#line 657 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 658 "hlds_rtti.m"
        {
#line 658 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 658 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 658 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 620 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 620 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 620 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 622 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 622 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 622 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 622 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 621 "hlds_rtti.m"
          {
#line 621 "hlds_rtti.m"
            mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 622 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 622 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 622 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 622 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 622 "hlds_rtti.m"
          {
#line 622 "hlds_rtti.m"
            MR_Word base;
#line 622 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 622 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 622 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 622 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 622 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 622 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 622 "hlds_rtti.m"
          }
#line 658 "hlds_rtti.m"
        }
#line 657 "hlds_rtti.m"
        break;
#line 657 "hlds_rtti.m"
    }
#line 652 "hlds_rtti.m"
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
#line 640 "hlds_rtti.m"
  {
#line 640 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 640 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__VarInfo_8;

#line 641 "hlds_rtti.m"
    {
#line 641 "hlds_rtti.m"
      hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, hlds__hlds_rtti__Var_5, &hlds__hlds_rtti__VarInfo_8);
    }
#line 645 "hlds_rtti.m"
#line 645 "hlds_rtti.m"
    switch (MR_tag((MR_Word) hlds__hlds_rtti__VarInfo_8)) {
#line 645 "hlds_rtti.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 645 "hlds_rtti.m"
      case (MR_Integer) 0:
#line 649 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11;
#line 645 "hlds_rtti.m"
        break;
#line 645 "hlds_rtti.m"
      case (MR_Integer) 1:
#line 643 "hlds_rtti.m"
        {
#line 643 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Type_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 643 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 643 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_21;
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 631 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 633 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_26_26;
#line 633 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_27_27;
#line 633 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_29_29;
#line 633 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_28_28;

#line 632 "hlds_rtti.m"
          {
#line 632 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Type_9)), hlds__hlds_rtti__Map0_20, &hlds__hlds_rtti__Map_21);
          }
#line 633 "hlds_rtti.m"
          hlds__hlds_rtti__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 633 "hlds_rtti.m"
          hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 633 "hlds_rtti.m"
          hlds__hlds_rtti__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 633 "hlds_rtti.m"
          hlds__hlds_rtti__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 633 "hlds_rtti.m"
          {
#line 633 "hlds_rtti.m"
            MR_Word base;
#line 633 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 633 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 633 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_26_26));
#line 633 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_27_27));
#line 633 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_21));
#line 633 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_29_29));
#line 633 "hlds_rtti.m"
          }
#line 643 "hlds_rtti.m"
        }
#line 645 "hlds_rtti.m"
        break;
#line 645 "hlds_rtti.m"
      case (MR_Integer) 2:
#line 646 "hlds_rtti.m"
        {
#line 646 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Constraint_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__hlds_rtti__VarInfo_8, (MR_Integer) 0)));
#line 646 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 646 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__Map_38;
#line 615 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 615 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 615 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 617 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_43_43;
#line 617 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_44_44;
#line 617 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_45_45;
#line 617 "hlds_rtti.m"
          MR_Word hlds__hlds_rtti__V_46_46;

#line 616 "hlds_rtti.m"
          {
#line 616 "hlds_rtti.m"
            mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__NewVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_10)), hlds__hlds_rtti__Map0_37, &hlds__hlds_rtti__Map_38);
          }
#line 617 "hlds_rtti.m"
          hlds__hlds_rtti__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 0)));
#line 617 "hlds_rtti.m"
          hlds__hlds_rtti__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 1)));
#line 617 "hlds_rtti.m"
          hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 2)));
#line 617 "hlds_rtti.m"
          hlds__hlds_rtti__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_11, (MR_Integer) 3)));
#line 617 "hlds_rtti.m"
          {
#line 617 "hlds_rtti.m"
            MR_Word base;
#line 617 "hlds_rtti.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 617 "hlds_rtti.m"
            *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12 = base;
#line 617 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_43_43));
#line 617 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_44_44));
#line 617 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_45_45));
#line 617 "hlds_rtti.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_38));
#line 617 "hlds_rtti.m"
          }
#line 646 "hlds_rtti.m"
        }
#line 645 "hlds_rtti.m"
        break;
#line 645 "hlds_rtti.m"
    }
#line 640 "hlds_rtti.m"
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
#line 635 "hlds_rtti.m"
  {
#line 635 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 635 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 636 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 638 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 638 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 638 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 638 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 637 "hlds_rtti.m"
    {
#line 637 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 638 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 638 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 638 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 638 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 638 "hlds_rtti.m"
    {
#line 638 "hlds_rtti.m"
      MR_Word base;
#line 638 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 638 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 638 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 638 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 638 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 638 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 638 "hlds_rtti.m"
    }
#line 635 "hlds_rtti.m"
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
#line 630 "hlds_rtti.m"
  {
#line 630 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 630 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 631 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 633 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 632 "hlds_rtti.m"
    {
#line 632 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_5)), ((MR_Box) (hlds__hlds_rtti__Type_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 633 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 633 "hlds_rtti.m"
    {
#line 633 "hlds_rtti.m"
      MR_Word base;
#line 633 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 633 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 633 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 633 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 633 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 633 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 633 "hlds_rtti.m"
    }
#line 630 "hlds_rtti.m"
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
#line 624 "hlds_rtti.m"
  {
#line 624 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_23_23 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_24_24 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Constraint_6;
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_7;
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_8;
#line 624 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 625 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 625 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Constraint_6;
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 626 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_22_22;
#line 628 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 625 "hlds_rtti.m"
    {
#line 625 "hlds_rtti.m"
      mercury__map__lookup_3_p_0(hlds__hlds_rtti__TypeInfo_23_23, hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__V_11_11, ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), &hlds__hlds_rtti__conv0_Constraint_6);
    }
#line 625 "hlds_rtti.m"
    hlds__hlds_rtti__Constraint_6 = ((MR_Word) hlds__hlds_rtti__conv0_Constraint_6);
#line 626 "hlds_rtti.m"
    hlds__hlds_rtti__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 626 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 626 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 626 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 627 "hlds_rtti.m"
    {
#line 627 "hlds_rtti.m"
      mercury__map__set_4_p_0(hlds__hlds_rtti__TypeCtorInfo_24_24, hlds__hlds_rtti__TypeInfo_23_23, ((MR_Box) (hlds__hlds_rtti__Constraint_6)), ((MR_Box) (hlds__hlds_rtti__ProgVar_4)), hlds__hlds_rtti__Map0_7, &hlds__hlds_rtti__Map_8);
    }
#line 628 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 0)));
#line 628 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 1)));
#line 628 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 2)));
#line 628 "hlds_rtti.m"
    hlds__hlds_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_9, (MR_Integer) 3)));
#line 628 "hlds_rtti.m"
    {
#line 628 "hlds_rtti.m"
      MR_Word base;
#line 628 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 628 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_10 = base;
#line 628 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Map_8));
#line 628 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 628 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_21_21));
#line 628 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__V_22_22));
#line 628 "hlds_rtti.m"
    }
#line 624 "hlds_rtti.m"
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
#line 619 "hlds_rtti.m"
  {
#line 619 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 619 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 619 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 620 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 620 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 620 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 622 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 621 "hlds_rtti.m"
    {
#line 621 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 622 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 622 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 622 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 622 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 622 "hlds_rtti.m"
    {
#line 622 "hlds_rtti.m"
      MR_Word base;
#line 622 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 622 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 622 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 622 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 622 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 622 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 622 "hlds_rtti.m"
    }
#line 619 "hlds_rtti.m"
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
#line 614 "hlds_rtti.m"
  {
#line 614 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 614 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 614 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 615 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 615 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 615 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 617 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 617 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 617 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 617 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;

#line 616 "hlds_rtti.m"
    {
#line 616 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ((MR_Box) (hlds__hlds_rtti__ProgVar_6)), ((MR_Box) (hlds__hlds_rtti__Constraint_5)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 617 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 617 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 617 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 617 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 617 "hlds_rtti.m"
    {
#line 617 "hlds_rtti.m"
      MR_Word base;
#line 617 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 617 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = base;
#line 617 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__V_16_16));
#line 617 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 617 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__V_18_18));
#line 617 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 617 "hlds_rtti.m"
    }
#line 614 "hlds_rtti.m"
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
#line 596 "hlds_rtti.m"
  {
#line 596 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 596 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 596 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 596 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 596 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 597 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 597 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 597 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 599 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 599 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 599 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 598 "hlds_rtti.m"
    {
#line 598 "hlds_rtti.m"
      mercury__map__set_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 599 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 599 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 599 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 599 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 599 "hlds_rtti.m"
    {
#line 599 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 599 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 599 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 599 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 599 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 599 "hlds_rtti.m"
    }
#line 605 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 605 "hlds_rtti.m"
      {
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 606 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 607 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 607 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 607 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 606 "hlds_rtti.m"
        {
#line 606 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 606 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 607 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 607 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 607 "hlds_rtti.m"
          {
#line 607 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 607 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 7885 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 607 "hlds_rtti.m"
            {
#line 607 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 607 "hlds_rtti.m"
          }
#line 609 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 608 "hlds_rtti.m"
          {
#line 608 "hlds_rtti.m"
          }
#line 609 "hlds_rtti.m"
        else
#line 610 "hlds_rtti.m"
          {
#line 610 "hlds_rtti.m"
            {
#line 610 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 610 "hlds_rtti.m"
              return;
            }
#line 610 "hlds_rtti.m"
          }
#line 605 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 605 "hlds_rtti.m"
      }
#line 605 "hlds_rtti.m"
    else
#line 612 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 596 "hlds_rtti.m"
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
#line 590 "hlds_rtti.m"
  {
#line 590 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Map_9;
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 590 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 591 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 591 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 591 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 593 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 593 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 593 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;

#line 592 "hlds_rtti.m"
    {
#line 592 "hlds_rtti.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__Locn_6)), hlds__hlds_rtti__Map0_8, &hlds__hlds_rtti__Map_9);
    }
#line 593 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 0)));
#line 593 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 1)));
#line 593 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 2)));
#line 593 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_10, (MR_Integer) 3)));
#line 593 "hlds_rtti.m"
    {
#line 593 "hlds_rtti.m"
      hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 593 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 0) = ((MR_Box) (hlds__hlds_rtti__V_17_17));
#line 593 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 1) = ((MR_Box) (hlds__hlds_rtti__Map_9));
#line 593 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 2) = ((MR_Box) (hlds__hlds_rtti__V_19_19));
#line 593 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12, 3) = ((MR_Box) (hlds__hlds_rtti__V_20_20));
#line 593 "hlds_rtti.m"
    }
#line 605 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__Locn_6)) == (MR_mktag((MR_Integer) 0))))
#line 605 "hlds_rtti.m"
      {
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Locn_6, (MR_Integer) 0)));
#line 605 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Type_26;
#line 606 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv0_Type_26;
#line 607 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__TypeInfo_28_46;
#line 607 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_45_45;
#line 607 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_27_27;

#line 606 "hlds_rtti.m"
        {
#line 606 "hlds_rtti.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_19_19, ((MR_Box) (hlds__hlds_rtti__Var_23)), &hlds__hlds_rtti__conv0_Type_26);
        }
#line 606 "hlds_rtti.m"
        hlds__hlds_rtti__Type_26 = ((MR_Word) hlds__hlds_rtti__conv0_Type_26);
#line 607 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = ((MR_tag((MR_Word) hlds__hlds_rtti__Type_26)) == (MR_mktag((MR_Integer) 0)));
#line 607 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 607 "hlds_rtti.m"
          {
#line 607 "hlds_rtti.m"
            hlds__hlds_rtti__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 0)));
#line 607 "hlds_rtti.m"
            hlds__hlds_rtti__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__Type_26, (MR_Integer) 1)));
#line 8025 "hlds.hlds_rtti.c"
            hlds__hlds_rtti__TypeInfo_28_46 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 607 "hlds_rtti.m"
            {
#line 607 "hlds_rtti.m"
              hlds__hlds_rtti__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_rtti__TypeInfo_28_46, ((MR_Box) (hlds__hlds_rtti__TVar_5)), ((MR_Box) (hlds__hlds_rtti__V_45_45)));
            }
#line 607 "hlds_rtti.m"
          }
#line 609 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 608 "hlds_rtti.m"
          {
#line 608 "hlds_rtti.m"
          }
#line 609 "hlds_rtti.m"
        else
#line 610 "hlds_rtti.m"
          {
#line 610 "hlds_rtti.m"
            {
#line 610 "hlds_rtti.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_rtti", (MR_String) "predicate \140hlds.hlds_rtti.maybe_check_type_info_var\'/4", (MR_String) "inconsistent info in rtti_varmaps");
#line 610 "hlds_rtti.m"
              return;
            }
#line 610 "hlds_rtti.m"
          }
#line 605 "hlds_rtti.m"
        *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 605 "hlds_rtti.m"
      }
#line 605 "hlds_rtti.m"
    else
#line 612 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_11 = hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_12_12;
#line 590 "hlds_rtti.m"
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
#line 584 "hlds_rtti.m"
  {
#line 584 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 584 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__Type_7;
#line 582 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 582 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 582 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 582 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 582 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Type_7;

#line 582 "hlds_rtti.m"
    {
#line 582 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__hlds_rtti__V_9_9, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv0_Type_7);
    }
#line 582 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 582 "hlds_rtti.m"
      {
#line 582 "hlds_rtti.m"
        hlds__hlds_rtti__Type_7 = ((MR_Word) hlds__hlds_rtti__conv0_Type_7);
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
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 583 "hlds_rtti.m"
        *hlds__hlds_rtti__VarInfo_6 = base;
#line 583 "hlds_rtti.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Type_7));
#line 583 "hlds_rtti.m"
      }
#line 584 "hlds_rtti.m"
    else
#line 586 "hlds_rtti.m"
      {
#line 586 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__Constraint_8;
#line 584 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 584 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 584 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 584 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 584 "hlds_rtti.m"
        MR_Box hlds__hlds_rtti__conv1_Constraint_8;

#line 584 "hlds_rtti.m"
        {
#line 584 "hlds_rtti.m"
          hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, hlds__hlds_rtti__V_10_10, ((MR_Box) (hlds__hlds_rtti__Var_5)), &hlds__hlds_rtti__conv1_Constraint_8);
        }
#line 584 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 584 "hlds_rtti.m"
          {
#line 584 "hlds_rtti.m"
            hlds__hlds_rtti__Constraint_8 = ((MR_Word) hlds__hlds_rtti__conv1_Constraint_8);
#line 584 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = MR_TRUE;
#line 584 "hlds_rtti.m"
          }
#line 586 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 585 "hlds_rtti.m"
          {
#line 585 "hlds_rtti.m"
            MR_Word base;
#line 585 "hlds_rtti.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 585 "hlds_rtti.m"
            *hlds__hlds_rtti__VarInfo_6 = base;
#line 585 "hlds_rtti.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__hlds_rtti__Constraint_8));
#line 585 "hlds_rtti.m"
          }
#line 586 "hlds_rtti.m"
        else
#line 587 "hlds_rtti.m"
          *hlds__hlds_rtti__VarInfo_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 586 "hlds_rtti.m"
      }
#line 584 "hlds_rtti.m"
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
#line 578 "hlds_rtti.m"
  {
#line 578 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 578 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 579 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 579 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 579 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 579 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 579 "hlds_rtti.m"
    {
#line 579 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 579 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 579 "hlds_rtti.m"
      {
#line 579 "hlds_rtti.m"
        *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 579 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 579 "hlds_rtti.m"
      }
#line 578 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 578 "hlds_rtti.m"
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
#line 575 "hlds_rtti.m"
  {
#line 575 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 575 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 576 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 576 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 576 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 576 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_ProgVar_6;

#line 576 "hlds_rtti.m"
    {
#line 576 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_rtti_scalar_common_1[0], hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__Constraint_5)), &hlds__hlds_rtti__conv0_ProgVar_6);
    }
#line 576 "hlds_rtti.m"
    *hlds__hlds_rtti__ProgVar_6 = ((MR_Word) hlds__hlds_rtti__conv0_ProgVar_6);
#line 575 "hlds_rtti.m"
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
#line 572 "hlds_rtti.m"
  {
#line 572 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 572 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 573 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 573 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 573 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 573 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 573 "hlds_rtti.m"
    {
#line 573 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 573 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 573 "hlds_rtti.m"
      {
#line 573 "hlds_rtti.m"
        *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 573 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = MR_TRUE;
#line 573 "hlds_rtti.m"
      }
#line 572 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 572 "hlds_rtti.m"
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
#line 569 "hlds_rtti.m"
  {
#line 569 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 569 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 1)));
#line 570 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 0)));
#line 570 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 2)));
#line 570 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_4, (MR_Integer) 3)));
#line 570 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__conv0_Locn_6;

#line 570 "hlds_rtti.m"
    {
#line 570 "hlds_rtti.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_7_7, ((MR_Box) (hlds__hlds_rtti__TVar_5)), &hlds__hlds_rtti__conv0_Locn_6);
    }
#line 570 "hlds_rtti.m"
    *hlds__hlds_rtti__Locn_6 = ((MR_Word) hlds__hlds_rtti__conv0_Locn_6);
#line 569 "hlds_rtti.m"
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
#line 566 "hlds_rtti.m"
  {
#line 566 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 566 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 1)));
#line 567 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 0)));
#line 567 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 2)));
#line 567 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiVarMaps_2, (MR_Integer) 3)));

#line 567 "hlds_rtti.m"
    {
#line 567 "hlds_rtti.m"
      return hlds__hlds_rtti__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, hlds__hlds_rtti__V_3_3);
    }
#line 566 "hlds_rtti.m"
    return hlds__hlds_rtti__succeeded;
#line 566 "hlds_rtti.m"
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
#line 482 "hlds_rtti.m"
  {
#line 482 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_26_26 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[1];
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_28_28;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_29_29;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_30_30;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 0)));
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 1)));
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 2)));
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_0_20, (MR_Integer) 3)));
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIList0_10;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTIList_11;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_12;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeList0_13;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevTypeList_14;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_15;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintList0_16;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__RevConstraintList_17;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_18;
#line 482 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_19;

#line 490 "hlds_rtti.m"
    {
#line 490 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__TIMap0_7, &hlds__hlds_rtti__TIList0_10);
    }
#line 491 "hlds_rtti.m"
    {
#line 491 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_varmap_4_p_0(hlds__hlds_rtti__TIList0_10, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTIList_11);
    }
#line 492 "hlds_rtti.m"
    {
#line 492 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_26_26, hlds__hlds_rtti__TypeCtorInfo_27_27, hlds__hlds_rtti__RevTIList_11, &hlds__hlds_rtti__TIMap_12);
    }
#line 8453 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeInfo_28_28 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 8455 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 494 "hlds_rtti.m"
    {
#line 494 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__TypeMap0_8, &hlds__hlds_rtti__TypeList0_13);
    }
#line 495 "hlds_rtti.m"
    {
#line 495 "hlds_rtti.m"
      hlds__hlds_rtti__filter_type_info_map_4_p_0(hlds__hlds_rtti__TypeList0_13, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevTypeList_14);
    }
#line 496 "hlds_rtti.m"
    {
#line 496 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_29_29, hlds__hlds_rtti__RevTypeList_14, &hlds__hlds_rtti__TypeMap_15);
    }
#line 8472 "hlds.hlds_rtti.c"
    hlds__hlds_rtti__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 498 "hlds_rtti.m"
    {
#line 498 "hlds_rtti.m"
      mercury__map__to_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__ConstraintMap0_9, &hlds__hlds_rtti__ConstraintList0_16);
    }
#line 499 "hlds_rtti.m"
    {
#line 499 "hlds_rtti.m"
      hlds__hlds_rtti__filter_constraint_map_6_p_0(hlds__hlds_rtti__ConstraintList0_16, hlds__hlds_rtti__VarUses_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__hlds_rtti__RevConstraintList_17, hlds__hlds_rtti__TCIMap0_6, &hlds__hlds_rtti__TCIMap_18);
    }
#line 501 "hlds_rtti.m"
    {
#line 501 "hlds_rtti.m"
      mercury__map__from_rev_sorted_assoc_list_2_p_0(hlds__hlds_rtti__TypeInfo_28_28, hlds__hlds_rtti__TypeCtorInfo_30_30, hlds__hlds_rtti__RevConstraintList_17, &hlds__hlds_rtti__ConstraintMap_19);
    }
#line 503 "hlds_rtti.m"
    {
#line 503 "hlds_rtti.m"
      MR_Word base;
#line 503 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 503 "hlds_rtti.m"
      *hlds__hlds_rtti__STATE_VARIABLE_RttiVarMaps_21 = base;
#line 503 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_18));
#line 503 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_12));
#line 503 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_15));
#line 503 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_19));
#line 503 "hlds_rtti.m"
    }
#line 482 "hlds_rtti.m"
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
#line 476 "hlds_rtti.m"
  {
#line 476 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 476 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeCtorInfo_6_6 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 476 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeInfo_7_7 = (MR_Word) &hlds__hlds_rtti_scalar_common_1[0];
#line 476 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TCIMap_2;
#line 476 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TIMap_3;
#line 476 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__TypeMap_4;
#line 476 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__ConstraintMap_5;

#line 477 "hlds_rtti.m"
    {
#line 477 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeCtorInfo_6_6, hlds__hlds_rtti__TypeInfo_7_7, &hlds__hlds_rtti__TCIMap_2);
    }
#line 478 "hlds_rtti.m"
    {
#line 478 "hlds_rtti.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[1], (MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_type_info_locn_0, &hlds__hlds_rtti__TIMap_3);
    }
#line 479 "hlds_rtti.m"
    {
#line 479 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &hlds__hlds_rtti__TypeMap_4);
    }
#line 480 "hlds_rtti.m"
    {
#line 480 "hlds_rtti.m"
      mercury__map__init_1_p_0(hlds__hlds_rtti__TypeInfo_7_7, hlds__hlds_rtti__TypeCtorInfo_6_6, &hlds__hlds_rtti__ConstraintMap_5);
    }
#line 476 "hlds_rtti.m"
    {
#line 476 "hlds_rtti.m"
      MR_Word base;
#line 476 "hlds_rtti.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 476 "hlds_rtti.m"
      *hlds__hlds_rtti__HeadVar__1_1 = base;
#line 476 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__TCIMap_2));
#line 476 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_rtti__TIMap_3));
#line 476 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_rtti__TypeMap_4));
#line 476 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_rtti__ConstraintMap_5));
#line 476 "hlds_rtti.m"
    }
#line 476 "hlds_rtti.m"
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
#line 398 "hlds_rtti.m"
  {
#line 398 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 398 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 398 "hlds_rtti.m"
      {
#line 398 "hlds_rtti.m"
        MR_Word base;
#line 398 "hlds_rtti.m"
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "hlds_rtti.m"
        *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 398 "hlds_rtti.m"
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 398 "hlds_rtti.m"
      }
#line 398 "hlds_rtti.m"
    else
#line 399 "hlds_rtti.m"
      {
#line 399 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "hlds_rtti.m"
        MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 399 "hlds_rtti.m"
        {
#line 399 "hlds_rtti.m"
          MR_Word base;
#line 399 "hlds_rtti.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "hlds_rtti.m"
          *hlds__hlds_rtti__HeadVar__3_3 = base;
#line 399 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__hlds_rtti__Var_1));
#line 399 "hlds_rtti.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__hlds_rtti__Num_8));
#line 399 "hlds_rtti.m"
        }
#line 399 "hlds_rtti.m"
      }
#line 398 "hlds_rtti.m"
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
#line 395 "hlds_rtti.m"
  {
#line 395 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;

#line 395 "hlds_rtti.m"
    if (((MR_tag((MR_Word) hlds__hlds_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 395 "hlds_rtti.m"
      *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "hlds_rtti.m"
    else
#line 396 "hlds_rtti.m"
      {
#line 396 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_5_5;

#line 396 "hlds_rtti.m"
        *hlds__hlds_rtti__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 396 "hlds_rtti.m"
        hlds__hlds_rtti__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__hlds_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 396 "hlds_rtti.m"
      }
#line 395 "hlds_rtti.m"
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
#line 390 "hlds_rtti.m"
  {
#line 390 "hlds_rtti.m"
    MR_bool hlds__hlds_rtti__succeeded;
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 0)));
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 1)));
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 2)));
#line 390 "hlds_rtti.m"
    MR_String hlds__hlds_rtti__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 3)));
#line 390 "hlds_rtti.m"
    MR_Integer hlds__hlds_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 4)));
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 5)));
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_14_14;
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_15_15;
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_16_16;
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_17_17;
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_18_18;
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_19_19;
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_20_20;
#line 390 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__V_21_21;

#line 390 "hlds_rtti.m"
    *hlds__hlds_rtti__PredId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 6)));
#line 390 "hlds_rtti.m"
    *hlds__hlds_rtti__ProcId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 7)));
#line 390 "hlds_rtti.m"
    hlds__hlds_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 8)));
#line 390 "hlds_rtti.m"
    hlds__hlds_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 9)));
#line 390 "hlds_rtti.m"
    hlds__hlds_rtti__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 390 "hlds_rtti.m"
    hlds__hlds_rtti__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 390 "hlds_rtti.m"
    hlds__hlds_rtti__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 390 "hlds_rtti.m"
    hlds__hlds_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 11)));
#line 390 "hlds_rtti.m"
    hlds__hlds_rtti__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 390 "hlds_rtti.m"
    hlds__hlds_rtti__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 390 "hlds_rtti.m"
  }
#line 94 "hlds_rtti.m"
}

#line 368 "hlds_rtti.m"
static MR_Box MR_CALL 
hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1(
#line 368 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__closure_arg,
#line 368 "hlds_rtti.m"
  MR_Box hlds__hlds_rtti__wrapper_arg_1)
#line 368 "hlds_rtti.m"
{
#line 368 "hlds_rtti.m"
  {
#line 368 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__wrapper_arg_2;
#line 368 "hlds_rtti.m"
    MR_Box hlds__hlds_rtti__closure = hlds__hlds_rtti__closure_arg;
#line 368 "hlds_rtti.m"
    MR_Word hlds__hlds_rtti__conv0_HeadVar__3_32;

#line 368 "hlds_rtti.m"
    {
#line 368 "hlds_rtti.m"
      hlds__hlds_rtti__conv0_HeadVar__3_32 = hlds__hlds_rtti__IntroducedFrom__func__make_rtti_proc_label__368__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_rtti__closure, (MR_Integer) 3))), ((MR_Word) hlds__hlds_rtti__wrapper_arg_1));
    }
#line 368 "hlds_rtti.m"
    hlds__hlds_rtti__wrapper_arg_2 = ((MR_Box) (hlds__hlds_rtti__conv0_HeadVar__3_32));
#line 368 "hlds_rtti.m"
    return hlds__hlds_rtti__wrapper_arg_2;
#line 368 "hlds_rtti.m"
  }
#line 368 "hlds_rtti.m"
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
#line 363 "hlds_rtti.m"
    {
#line 363 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 363 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 363 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 1;
#line 363 "hlds_rtti.m"
    else
#line 363 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsImported_22 = (MR_Integer) 0;
#line 364 "hlds_rtti.m"
    {
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(hlds__hlds_rtti__PredInfo_10);
    }
#line 364 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 1;
#line 364 "hlds_rtti.m"
    else
#line 364 "hlds_rtti.m"
      hlds__hlds_rtti__PredIsPseudoImp_23 = (MR_Integer) 0;
#line 365 "hlds_rtti.m"
    {
#line 365 "hlds_rtti.m"
      hlds__hlds_rtti__succeeded = hlds__hlds_pred__procedure_is_exported_3_p_0(hlds__hlds_rtti__ModuleInfo_5, hlds__hlds_rtti__PredInfo_10, hlds__hlds_rtti__ProcId_7);
    }
#line 365 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 1;
#line 365 "hlds_rtti.m"
    else
#line 366 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsExported_24 = (MR_Integer) 0;
#line 367 "hlds_rtti.m"
    {
#line 367 "hlds_rtti.m"
      hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__hlds_rtti__PredInfo_10, &hlds__hlds_rtti__Origin_25);
    }
#line 368 "hlds_rtti.m"
    {
#line 368 "hlds_rtti.m"
      hlds__hlds_rtti__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 368 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 0) = ((MR_Box) (&hlds__hlds_rtti_scalar_common_3[0]));
#line 368 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 1) = ((MR_Box) (hlds__hlds_rtti__make_rtti_proc_label_3_f_0_1));
#line 368 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 368 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__V_30_30, 3) = ((MR_Box) (hlds__hlds_rtti__ProcVarSet_17));
#line 368 "hlds_rtti.m"
    }
#line 368 "hlds_rtti.m"
    {
#line 368 "hlds_rtti.m"
      hlds__hlds_rtti__ProcHeadVarsWithNames_26 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_rtti_scalar_common_1[0], (MR_Word) &hlds__hlds_rtti_scalar_common_2[0], hlds__hlds_rtti__V_30_30, hlds__hlds_rtti__ProcHeadVars_18);
    }
#line 373 "hlds_rtti.m"
    hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsImported_22 == (MR_Integer) 1);
#line 374 "hlds_rtti.m"
    if (!(hlds__hlds_rtti__succeeded))
#line 375 "hlds_rtti.m"
      {
#line 375 "hlds_rtti.m"
        MR_Integer hlds__hlds_rtti__V_37_37;

#line 375 "hlds_rtti.m"
        hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__PredIsPseudoImp_23 == (MR_Integer) 1);
#line 375 "hlds_rtti.m"
        if (hlds__hlds_rtti__succeeded)
#line 375 "hlds_rtti.m"
          {
#line 376 "hlds_rtti.m"
            {
#line 376 "hlds_rtti.m"
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&hlds__hlds_rtti__V_37_37);
            }
#line 376 "hlds_rtti.m"
            hlds__hlds_rtti__succeeded = (hlds__hlds_rtti__ProcId_7 == hlds__hlds_rtti__V_37_37);
#line 375 "hlds_rtti.m"
          }
#line 375 "hlds_rtti.m"
      }
#line 380 "hlds_rtti.m"
    if (hlds__hlds_rtti__succeeded)
#line 379 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 1;
#line 380 "hlds_rtti.m"
    else
#line 381 "hlds_rtti.m"
      hlds__hlds_rtti__ProcIsImported_29 = (MR_Integer) 0;
#line 383 "hlds_rtti.m"
    {
#line 383 "hlds_rtti.m"
      hlds__hlds_rtti__ProcLabel_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 0) = ((MR_Box) (hlds__hlds_rtti__PredOrFunc_12));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 1) = ((MR_Box) (hlds__hlds_rtti__ThisModule_9));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 2) = ((MR_Box) (hlds__hlds_rtti__PredModule_13));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 3) = ((MR_Box) (hlds__hlds_rtti__PredName_14));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 4) = ((MR_Box) (hlds__hlds_rtti__Arity_15));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 5) = ((MR_Box) (hlds__hlds_rtti__ArgTypes_16));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 6) = ((MR_Box) (hlds__hlds_rtti__PredId_6));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 7) = ((MR_Box) (hlds__hlds_rtti__ProcId_7));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 8) = ((MR_Box) (hlds__hlds_rtti__ProcHeadVarsWithNames_26));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 9) = ((MR_Box) (hlds__hlds_rtti__ProcArgModes_21));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 10) = ((MR_Box) ((hlds__hlds_rtti__ProcDetism_20 | ((((hlds__hlds_rtti__PredIsImported_22 << (MR_Integer) 3)) | ((hlds__hlds_rtti__PredIsPseudoImp_23 << (MR_Integer) 4)))))));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 11) = ((MR_Box) (hlds__hlds_rtti__Origin_25));
#line 383 "hlds_rtti.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_rtti__ProcLabel_8, 12) = ((MR_Box) ((hlds__hlds_rtti__ProcIsExported_24 | ((hlds__hlds_rtti__ProcIsImported_29 << (MR_Integer) 1)))));
#line 383 "hlds_rtti.m"
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
