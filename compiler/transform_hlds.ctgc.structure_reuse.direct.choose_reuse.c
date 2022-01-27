/*
** Automatically generated from `structure_reuse.direct.choose_reuse.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


/* :- module transform_hlds.ctgc.structure_reuse.direct.choose_reuse. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.mih"


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
#include "float.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "check_hlds.type_util.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mih"



#line 1015 "structure_reuse.direct.choose_reuse.m"
struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s {
#line 1019 "structure_reuse.direct.choose_reuse.m"
  MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
#line 1019 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9;
#line 1022 "structure_reuse.direct.choose_reuse.m"
  jmp_buf transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0;
#line 1022 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10;
#line 1023 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10;
#line 1015 "structure_reuse.direct.choose_reuse.m"
};


#line 162 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 165 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 168 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 171 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 174 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 177 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 180 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 183 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 186 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;

#line 192 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 195 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4];

#line 198 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4];

#line 201 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0;

#line 204 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1];

#line 207 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1];

#line 210 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0[1];

#line 213 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0[1];

#line 216 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2];

#line 219 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2];

#line 222 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0;

#line 225 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1];

#line 228 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1];

#line 231 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0[1];

#line 234 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0[1];

#line 237 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 240 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5];

#line 243 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0[5];

#line 246 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0;

#line 249 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1];

#line 252 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1];

#line 255 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0[1];

#line 258 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0[1];

#line 261 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;

#line 264 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0;

#line 267 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0[4];

#line 270 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0[4];

#line 273 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0;

#line 276 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0[1];

#line 279 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0[1];

#line 282 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0[1];

#line 285 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0[1];

#line 288 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0;

#line 291 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3];

#line 294 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3];

#line 297 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0;

#line 300 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1];

#line 303 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1];

#line 306 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1];

#line 309 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1];

#line 312 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
#line 315 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 317 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 320 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
#line 323 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 325 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 327 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 330 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
#line 333 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 335 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 338 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
#line 341 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 343 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 345 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 348 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
#line 351 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 353 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 356 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
#line 359 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 361 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 363 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 366 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
#line 369 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 371 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 374 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
#line 377 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 379 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 381 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 384 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
#line 387 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 389 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 392 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
#line 395 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 397 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 399 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 402 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
#line 405 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 407 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 410 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
#line 413 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 415 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 417 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 1379 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1379__1_1_f_0(
#line 1379 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16);

#line 854 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__854__1_1_f_0(
#line 854 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85);

#line 684 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__684__1_3_p_0(
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28);

#line 676 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__676__1_3_p_0(
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22);

#line 618 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__618__1_1_f_0(
#line 618 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88);

#line 648 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__648__1_3_p_0(
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117);

#line 433 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__433__1_3_p_0(
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_23);

#line 319 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__319__1_1_f_0(
#line 319 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12);

#line 311 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__311__1_1_f_0(
#line 311 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7);

#line 289 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__289__1_1_f_0(
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12);

#line 219 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 219 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 256 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 256 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 248 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 248 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 197 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 197 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 209 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 209 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 153 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 153 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1505 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
#line 1505 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1505 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10,
#line 1505 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11);

#line 1476 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
#line 1476 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1476 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1476 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1471 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
#line 1471 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1471 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1471 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1466 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
#line 1466 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1466 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1466 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1442 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
#line 1442 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1442 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48,
#line 1442 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49);

#line 1402 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1(
#line 1402 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1402 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1402 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 1402 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 1394 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(
#line 1394 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4);

#line 1381 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2(
#line 1381 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1381 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1379 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1(
#line 1379 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1379 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1376 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(
#line 1376 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4);

#line 289 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1(
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1354 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(
#line 1354 "structure_reuse.direct.choose_reuse.m"
  MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5,
#line 1354 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6);

#line 1339 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(
#line 1339 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6,
#line 1339 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7,
#line 1339 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8);

#line 1314 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
#line 1314 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1314 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3);

#line 1308 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
#line 1308 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1308 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3);

#line 1298 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1294 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
#line 1294 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 1294 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5,
#line 1294 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6);

#line 289 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1305 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
#line 1305 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1305 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1237 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7,
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8,
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40,
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);

#line 1229 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
#line 1229 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1229 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1229 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12,
#line 1229 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13);

#line 1200 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
#line 1200 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1200 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1200 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1195 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
#line 1195 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1195 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1195 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1190 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
#line 1190 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1190 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1190 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1166 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
#line 1166 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1166 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1166 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51,
#line 1166 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52);

#line 1143 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
#line 1143 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14,
#line 1143 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1143 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1114 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
#line 1114 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6,
#line 1114 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7,
#line 1114 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8,
#line 1114 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);

#line 1088 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6,
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7,
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8,
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10);

#line 1074 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
#line 1074 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1074 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1072 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
#line 1072 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1072 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1072 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1052 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
#line 1052 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4,
#line 1052 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5);

#line 1022 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
#line 1022 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1023 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
#line 1023 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1022 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
#line 1022 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1022 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
#line 1022 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1015 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
#line 1015 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3,
#line 1015 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4);

#line 946 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12);

#line 1050 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2(
#line 1050 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1050 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1050 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 926 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
#line 926 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 926 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 926 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 917 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19);

#line 884 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(
#line 884 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1);

#line 880 "structure_reuse.direct.choose_reuse.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
#line 880 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 880 "structure_reuse.direct.choose_reuse.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5);

#line 854 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
#line 854 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 854 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 807 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(
#line 807 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 807 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6,
#line 807 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71,
#line 807 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);

#line 801 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(
#line 801 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 801 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6,
#line 801 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 801 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8);

#line 433 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 796 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
#line 796 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 796 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 796 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 788 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
#line 788 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 788 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6,
#line 788 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 788 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12);

#line 413 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 878 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 776 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 771 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
#line 771 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 771 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6,
#line 771 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 771 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12);

#line 745 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
#line 745 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3);

#line 742 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
#line 742 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 742 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 737 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
#line 737 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5,
#line 737 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6,
#line 737 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10,
#line 737 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11);

#line 413 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 878 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 776 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 734 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
#line 734 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 734 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 734 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 734 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 720 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7,
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8,
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9,
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10);

#line 713 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
#line 713 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4,
#line 713 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5);

#line 694 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 706 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 686 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
#line 686 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 686 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6,
#line 686 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7,
#line 686 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8);

#line 684 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5(
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 694 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 706 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 676 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 661 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
#line 661 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 661 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 661 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 664 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15);

#line 618 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
#line 618 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 618 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 648 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 565 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);

#line 553 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7,
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8,
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12,
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13);

#line 545 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
#line 545 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 545 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6,
#line 545 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 545 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8);

#line 530 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
#line 530 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4,
#line 530 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6,
#line 530 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7);

#line 527 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1(
#line 527 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 527 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 527 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 527 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 522 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(
#line 522 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 522 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7,
#line 522 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8);

#line 357 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
#line 357 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 357 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 357 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 357 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 457 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29);

#line 433 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1(
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 427 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(
#line 427 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3,
#line 427 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4);

#line 396 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
#line 396 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4,
#line 396 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5,
#line 396 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6);

#line 373 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
#line 373 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4,
#line 373 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5,
#line 373 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6);

#line 323 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2(
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 319 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1(
#line 319 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 319 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 316 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(
#line 316 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4,
#line 316 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5);

#line 311 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1(
#line 311 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 311 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 308 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(
#line 308 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3);

#line 271 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(
#line 271 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3);

#line 260 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cond_11);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[26][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[7][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[2][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[10][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[6][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[1][1];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[2][4];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[26][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0])),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[6])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[7])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "%-----"))
  },
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



#line 2045 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 2054 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2062 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2070 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2079 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2087 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2095 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2104 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2112 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2120 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0
  }
};

#line 2128 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2137 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_reuse_strategy_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2145 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4] = {
  (MR_String) "back_strategy",
  (MR_String) "back_module_info",
  (MR_String) "back_proc_info",
  (MR_String) "back_vartypes"
};

#line 2153 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0 = {
  (MR_String) "background",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0,
  NULL,
  NULL
};

#line 2168 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

#line 2173 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0
  }
};

#line 2182 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

#line 2187 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0[1] = {
  (MR_Integer) 0
};

#line 2192 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "background_info",
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0
  },
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0
};

#line 2213 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0
};

#line 2219 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2] = {
  (MR_String) "con_pp",
  (MR_String) "con_reuse"
};

#line 2225 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0 = {
  (MR_String) "con",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0,
  NULL,
  NULL
};

#line 2240 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

#line 2245 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0
  }
};

#line 2254 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

#line 2259 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0[1] = {
  (MR_Integer) 0
};

#line 2264 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "construction_spec",
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0
  },
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0
};

#line 2285 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2293 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0
};

#line 2302 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0[5] = {
  (MR_String) "decon_var",
  (MR_String) "decon_pp",
  (MR_String) "decon_cons_id",
  (MR_String) "decon_args",
  (MR_String) "decon_conds"
};

#line 2311 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0 = {
  (MR_String) "decon",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0,
  NULL,
  NULL
};

#line 2326 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

#line 2331 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0
  }
};

#line 2340 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

#line 2345 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0[1] = {
  (MR_Integer) 0
};

#line 2350 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "deconstruction_spec",
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0
  },
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0
};

#line 2371 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0
  }
};

#line 2379 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0
  }
};

#line 2387 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2395 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0[4] = {
  (MR_String) "decon_specs",
  (MR_String) "con_specs",
  (MR_String) "match_value",
  (MR_String) "match_degree"
};

#line 2403 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0 = {
  (MR_String) "match",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0,
  NULL,
  NULL
};

#line 2418 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0
};

#line 2423 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0
  }
};

#line 2432 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0
};

#line 2437 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0[1] = {
  (MR_Integer) 0
};

#line 2442 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "match",
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0
  },
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0
};

#line 2463 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "match_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2484 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0
  }
};

#line 2492 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2499 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3] = {
  (MR_String) "same_cons",
  (MR_String) "reuse_fields",
  (MR_String) "reuse_value"
};

#line 2506 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0 = {
  (MR_String) "reuse_type",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0,
  NULL,
  NULL
};

#line 2521 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

#line 2526 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0
  }
};

#line 2535 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

#line 2540 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1] = {
  (MR_Integer) 0
};

#line 2545 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "reuse_type",
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0
  },
  {
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0
};

#line 2566 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
#line 2569 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2571 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2573 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2575 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2577 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2580 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2582 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2585 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2587 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2589 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2592 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
#line 2595 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2597 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2599 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2601 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2603 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2605 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2608 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2610 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2613 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2615 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2617 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2620 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
#line 2623 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2625 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2627 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2629 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2631 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2634 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2636 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2639 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2641 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2643 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2646 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
#line 2649 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2651 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2653 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2655 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2657 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2659 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2662 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2664 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2667 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2669 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2671 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2674 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
#line 2677 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2679 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2681 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2683 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2685 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2688 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2690 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2693 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2695 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2697 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2700 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
#line 2703 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2705 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2707 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2709 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2711 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2713 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2716 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2718 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2721 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2723 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2725 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2728 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
#line 2731 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2733 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2735 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2737 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2739 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2742 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2744 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2747 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2749 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2751 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2754 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
#line 2757 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2759 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2761 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2763 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2765 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2767 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2770 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2772 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2775 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2777 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2779 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2782 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
#line 2785 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2787 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2789 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2791 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2793 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2796 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2798 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2801 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2803 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2805 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2808 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
#line 2811 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2813 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2815 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2817 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2819 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2821 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2824 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2826 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2829 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2831 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2833 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2836 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
#line 2839 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2841 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2843 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2845 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2847 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2850 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2852 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2855 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2857 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2859 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2862 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
#line 2865 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2867 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2869 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2871 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2873 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2875 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2878 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2880 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2883 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2885 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2887 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 1379 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1379__1_1_f_0(
#line 1379 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16)
#line 1379 "structure_reuse.direct.choose_reuse.m"
{
#line 1379 "structure_reuse.direct.choose_reuse.m"
  {
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 4)));
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 0)));
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 1)));
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 2)));
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 3)));

#line 1379 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_17;
#line 1379 "structure_reuse.direct.choose_reuse.m"
  }
#line 1379 "structure_reuse.direct.choose_reuse.m"
}

#line 854 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__854__1_1_f_0(
#line 854 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85)
#line 854 "structure_reuse.direct.choose_reuse.m"
{
#line 854 "structure_reuse.direct.choose_reuse.m"
  {
#line 854 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 854 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85, (MR_Integer) 2)));
#line 854 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85, (MR_Integer) 0)));
#line 854 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85, (MR_Integer) 1)));

#line 854 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_86;
#line 854 "structure_reuse.direct.choose_reuse.m"
  }
#line 854 "structure_reuse.direct.choose_reuse.m"
}

#line 684 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__684__1_3_p_0(
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28)
#line 684 "structure_reuse.direct.choose_reuse.m"
{
#line 684 "structure_reuse.direct.choose_reuse.m"
  {
#line 684 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 684 "structure_reuse.direct.choose_reuse.m"
    {
#line 684 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28);
#line 684 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 684 "structure_reuse.direct.choose_reuse.m"
  }
#line 684 "structure_reuse.direct.choose_reuse.m"
}

#line 676 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__676__1_3_p_0(
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22)
#line 676 "structure_reuse.direct.choose_reuse.m"
{
#line 676 "structure_reuse.direct.choose_reuse.m"
  {
#line 676 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 676 "structure_reuse.direct.choose_reuse.m"
    {
#line 676 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22);
#line 676 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 676 "structure_reuse.direct.choose_reuse.m"
  }
#line 676 "structure_reuse.direct.choose_reuse.m"
}

#line 618 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__618__1_1_f_0(
#line 618 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88)
#line 618 "structure_reuse.direct.choose_reuse.m"
{
#line 618 "structure_reuse.direct.choose_reuse.m"
  {
#line 618 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 618 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88, (MR_Integer) 2)));
#line 618 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88, (MR_Integer) 0)));
#line 618 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88, (MR_Integer) 1)));

#line 618 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_89;
#line 618 "structure_reuse.direct.choose_reuse.m"
  }
#line 618 "structure_reuse.direct.choose_reuse.m"
}

#line 648 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__648__1_3_p_0(
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117)
#line 648 "structure_reuse.direct.choose_reuse.m"
{
#line 648 "structure_reuse.direct.choose_reuse.m"
  {
#line 648 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 648 "structure_reuse.direct.choose_reuse.m"
    {
#line 648 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117);
#line 648 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 648 "structure_reuse.direct.choose_reuse.m"
  }
#line 648 "structure_reuse.direct.choose_reuse.m"
}

#line 433 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__433__1_3_p_0(
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_23)
#line 433 "structure_reuse.direct.choose_reuse.m"
{
#line 433 "structure_reuse.direct.choose_reuse.m"
  {
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 0)));
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 1)));
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 1)));
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 2)));
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 3)));
#line 435 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 0)));
#line 435 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 2)));
#line 435 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 3)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 436 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 436 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 436 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;

#line 435 "structure_reuse.direct.choose_reuse.m"
    {
#line 435 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12 = mercury__list__append_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25);
    }
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 0)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 1)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 2)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 3)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 0)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 1)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 2)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 3)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27);
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 438 "structure_reuse.direct.choose_reuse.m"
    {
#line 438 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 438 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 438 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_23 = base;
#line 438 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_11));
#line 438 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12));
#line 438 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13);
#line 438 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14));
#line 438 "structure_reuse.direct.choose_reuse.m"
    }
#line 433 "structure_reuse.direct.choose_reuse.m"
  }
#line 433 "structure_reuse.direct.choose_reuse.m"
}

#line 319 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__319__1_1_f_0(
#line 319 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12)
#line 319 "structure_reuse.direct.choose_reuse.m"
{
#line 319 "structure_reuse.direct.choose_reuse.m"
  {
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 4)));
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 0)));
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 1)));
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 2)));
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 3)));

#line 319 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_13;
#line 319 "structure_reuse.direct.choose_reuse.m"
  }
#line 319 "structure_reuse.direct.choose_reuse.m"
}

#line 311 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__311__1_1_f_0(
#line 311 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7)
#line 311 "structure_reuse.direct.choose_reuse.m"
{
#line 311 "structure_reuse.direct.choose_reuse.m"
  {
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 2)));
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 0)));
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 1)));
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 3)));
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 4)));

#line 311 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_8;
#line 311 "structure_reuse.direct.choose_reuse.m"
  }
#line 311 "structure_reuse.direct.choose_reuse.m"
}

#line 289 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__289__1_1_f_0(
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12)
#line 289 "structure_reuse.direct.choose_reuse.m"
{
#line 289 "structure_reuse.direct.choose_reuse.m"
  {
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 0)));
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 1)));
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 2)));
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 3)));
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 4)));

#line 289 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_13;
#line 289 "structure_reuse.direct.choose_reuse.m"
  }
#line 289 "structure_reuse.direct.choose_reuse.m"
}

#line 219 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 219 "structure_reuse.direct.choose_reuse.m"
{
#line 219 "structure_reuse.direct.choose_reuse.m"
  {
#line 219 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 219 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 219 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 219 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_12 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_13);
#line 219 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3266 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 219 "structure_reuse.direct.choose_reuse.m"
    else
#line 219 "structure_reuse.direct.choose_reuse.m"
      {
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4;
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7;

#line 219 "structure_reuse.direct.choose_reuse.m"
        {
#line 219 "structure_reuse.direct.choose_reuse.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
        }
#line 3296 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 == (MR_Integer) 0);
#line 219 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 219 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 219 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;
#line 219 "structure_reuse.direct.choose_reuse.m"
        else
#line 219 "structure_reuse.direct.choose_reuse.m"
          {
#line 219 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11;

#line 219 "structure_reuse.direct.choose_reuse.m"
            {
#line 219 "structure_reuse.direct.choose_reuse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
            }
#line 3316 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 == (MR_Integer) 0);
#line 219 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 219 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 219 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11;
#line 219 "structure_reuse.direct.choose_reuse.m"
            else
#line 219 "structure_reuse.direct.choose_reuse.m"
              {
#line 219 "structure_reuse.direct.choose_reuse.m"
                mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
#line 219 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 219 "structure_reuse.direct.choose_reuse.m"
          }
#line 219 "structure_reuse.direct.choose_reuse.m"
      }
#line 219 "structure_reuse.direct.choose_reuse.m"
  }
#line 219 "structure_reuse.direct.choose_reuse.m"
}

#line 219 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 219 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 219 "structure_reuse.direct.choose_reuse.m"
{
#line 219 "structure_reuse.direct.choose_reuse.m"
  {
#line 219 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 219 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 219 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 219 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10);
#line 219 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 219 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 219 "structure_reuse.direct.choose_reuse.m"
    else
#line 219 "structure_reuse.direct.choose_reuse.m"
      {
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11;
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 219 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));

#line 3385 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
#line 219 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 219 "structure_reuse.direct.choose_reuse.m"
          {
#line 3391 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5];
#line 3393 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3395 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)));
            }
#line 219 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3400 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
#line 219 "structure_reuse.direct.choose_reuse.m"
          }
#line 219 "structure_reuse.direct.choose_reuse.m"
      }
#line 219 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 219 "structure_reuse.direct.choose_reuse.m"
  }
#line 219 "structure_reuse.direct.choose_reuse.m"
}

#line 256 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 256 "structure_reuse.direct.choose_reuse.m"
{
#line 256 "structure_reuse.direct.choose_reuse.m"
  {
#line 256 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 256 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 256 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 256 "structure_reuse.direct.choose_reuse.m"
    {
#line 256 "structure_reuse.direct.choose_reuse.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_5)));
#line 256 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 256 "structure_reuse.direct.choose_reuse.m"
  }
#line 256 "structure_reuse.direct.choose_reuse.m"
}

#line 256 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 256 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 256 "structure_reuse.direct.choose_reuse.m"
{
#line 256 "structure_reuse.direct.choose_reuse.m"
  {
#line 256 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 256 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 256 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 256 "structure_reuse.direct.choose_reuse.m"
    {
#line 256 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_4)));
    }
#line 256 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 256 "structure_reuse.direct.choose_reuse.m"
  }
#line 256 "structure_reuse.direct.choose_reuse.m"
}

#line 248 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 248 "structure_reuse.direct.choose_reuse.m"
{
#line 248 "structure_reuse.direct.choose_reuse.m"
  {
#line 248 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 248 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 248 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 248 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16);
#line 248 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3499 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "structure_reuse.direct.choose_reuse.m"
    else
#line 248 "structure_reuse.direct.choose_reuse.m"
      {
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 248 "structure_reuse.direct.choose_reuse.m"
        {
#line 248 "structure_reuse.direct.choose_reuse.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
        }
#line 3529 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 == (MR_Integer) 0);
#line 248 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 248 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 248 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;
#line 248 "structure_reuse.direct.choose_reuse.m"
        else
#line 248 "structure_reuse.direct.choose_reuse.m"
          {
#line 248 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 248 "structure_reuse.direct.choose_reuse.m"
            {
#line 248 "structure_reuse.direct.choose_reuse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)));
            }
#line 3549 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 == (MR_Integer) 0);
#line 248 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 248 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 248 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 248 "structure_reuse.direct.choose_reuse.m"
            else
#line 248 "structure_reuse.direct.choose_reuse.m"
              {
#line 248 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 248 "structure_reuse.direct.choose_reuse.m"
                {
#line 248 "structure_reuse.direct.choose_reuse.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 3569 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 248 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 248 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 248 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 248 "structure_reuse.direct.choose_reuse.m"
                else
#line 248 "structure_reuse.direct.choose_reuse.m"
                  {
#line 248 "structure_reuse.direct.choose_reuse.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11);
#line 248 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 248 "structure_reuse.direct.choose_reuse.m"
              }
#line 248 "structure_reuse.direct.choose_reuse.m"
          }
#line 248 "structure_reuse.direct.choose_reuse.m"
      }
#line 248 "structure_reuse.direct.choose_reuse.m"
  }
#line 248 "structure_reuse.direct.choose_reuse.m"
}

#line 248 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 248 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 248 "structure_reuse.direct.choose_reuse.m"
{
#line 248 "structure_reuse.direct.choose_reuse.m"
  {
#line 248 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 248 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 248 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 248 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12);
#line 248 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 248 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 248 "structure_reuse.direct.choose_reuse.m"
    else
#line 248 "structure_reuse.direct.choose_reuse.m"
      {
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14;
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));

#line 3644 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 3646 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)));
        }
#line 248 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 248 "structure_reuse.direct.choose_reuse.m"
          {
#line 3653 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4];
#line 3655 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3657 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
            }
#line 248 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 248 "structure_reuse.direct.choose_reuse.m"
              {
#line 3664 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
#line 248 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3668 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
#line 248 "structure_reuse.direct.choose_reuse.m"
              }
#line 248 "structure_reuse.direct.choose_reuse.m"
          }
#line 248 "structure_reuse.direct.choose_reuse.m"
      }
#line 248 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 248 "structure_reuse.direct.choose_reuse.m"
  }
#line 248 "structure_reuse.direct.choose_reuse.m"
}

#line 197 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 197 "structure_reuse.direct.choose_reuse.m"
{
#line 197 "structure_reuse.direct.choose_reuse.m"
  {
#line 197 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 197 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 197 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_19 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 197 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_18 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_19);
#line 197 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3707 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 197 "structure_reuse.direct.choose_reuse.m"
    else
#line 197 "structure_reuse.direct.choose_reuse.m"
      {
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 4)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 4)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 197 "structure_reuse.direct.choose_reuse.m"
        {
#line 197 "structure_reuse.direct.choose_reuse.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)));
        }
#line 3741 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 197 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 197 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 197 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 197 "structure_reuse.direct.choose_reuse.m"
        else
#line 197 "structure_reuse.direct.choose_reuse.m"
          {
#line 197 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;

#line 197 "structure_reuse.direct.choose_reuse.m"
            {
#line 197 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__smm_common____Compare____program_point_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
            }
#line 3761 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 == (MR_Integer) 0);
#line 197 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 197 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 197 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 197 "structure_reuse.direct.choose_reuse.m"
            else
#line 197 "structure_reuse.direct.choose_reuse.m"
              {
#line 197 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;

#line 197 "structure_reuse.direct.choose_reuse.m"
                {
#line 197 "structure_reuse.direct.choose_reuse.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11);
                }
#line 3781 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 == (MR_Integer) 0);
#line 197 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 197 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 197 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 197 "structure_reuse.direct.choose_reuse.m"
                else
#line 197 "structure_reuse.direct.choose_reuse.m"
                  {
#line 197 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;

#line 197 "structure_reuse.direct.choose_reuse.m"
                    {
#line 197 "structure_reuse.direct.choose_reuse.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12)));
                    }
#line 3801 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 == (MR_Integer) 0);
#line 197 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 197 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 197 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 197 "structure_reuse.direct.choose_reuse.m"
                    else
#line 197 "structure_reuse.direct.choose_reuse.m"
                      {
#line 197 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13);
#line 197 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 197 "structure_reuse.direct.choose_reuse.m"
                  }
#line 197 "structure_reuse.direct.choose_reuse.m"
              }
#line 197 "structure_reuse.direct.choose_reuse.m"
          }
#line 197 "structure_reuse.direct.choose_reuse.m"
      }
#line 197 "structure_reuse.direct.choose_reuse.m"
  }
#line 197 "structure_reuse.direct.choose_reuse.m"
}

#line 197 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 197 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 197 "structure_reuse.direct.choose_reuse.m"
{
#line 197 "structure_reuse.direct.choose_reuse.m"
  {
#line 197 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 197 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 197 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_14 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 197 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_13 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_14);
#line 197 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 197 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 197 "structure_reuse.direct.choose_reuse.m"
    else
#line 197 "structure_reuse.direct.choose_reuse.m"
      {
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18;
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 4)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 197 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 4)));

#line 3882 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 3884 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
        }
#line 197 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 197 "structure_reuse.direct.choose_reuse.m"
          {
#line 3891 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3893 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
            }
#line 197 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 197 "structure_reuse.direct.choose_reuse.m"
              {
#line 3900 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                {
#line 3902 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 197 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 197 "structure_reuse.direct.choose_reuse.m"
                  {
#line 3909 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2];
#line 3911 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    {
#line 3913 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11)));
                    }
#line 197 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3918 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 3920 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                        return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12);
                      }
#line 197 "structure_reuse.direct.choose_reuse.m"
                  }
#line 197 "structure_reuse.direct.choose_reuse.m"
              }
#line 197 "structure_reuse.direct.choose_reuse.m"
          }
#line 197 "structure_reuse.direct.choose_reuse.m"
      }
#line 197 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 197 "structure_reuse.direct.choose_reuse.m"
  }
#line 197 "structure_reuse.direct.choose_reuse.m"
}

#line 209 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 209 "structure_reuse.direct.choose_reuse.m"
{
#line 209 "structure_reuse.direct.choose_reuse.m"
  {
#line 209 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 209 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 209 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 209 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10);
#line 209 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3962 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 209 "structure_reuse.direct.choose_reuse.m"
    else
#line 209 "structure_reuse.direct.choose_reuse.m"
      {
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;

#line 209 "structure_reuse.direct.choose_reuse.m"
        {
#line 209 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__smm_common____Compare____program_point_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
        }
#line 3984 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 == (MR_Integer) 0);
#line 209 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 209 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 209 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;
#line 209 "structure_reuse.direct.choose_reuse.m"
        else
#line 209 "structure_reuse.direct.choose_reuse.m"
          {
#line 209 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7);
#line 209 "structure_reuse.direct.choose_reuse.m"
            return;
          }
#line 209 "structure_reuse.direct.choose_reuse.m"
      }
#line 209 "structure_reuse.direct.choose_reuse.m"
  }
#line 209 "structure_reuse.direct.choose_reuse.m"
}

#line 209 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 209 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 209 "structure_reuse.direct.choose_reuse.m"
{
#line 209 "structure_reuse.direct.choose_reuse.m"
  {
#line 209 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 209 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 209 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 209 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_7 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_8);
#line 209 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 209 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 209 "structure_reuse.direct.choose_reuse.m"
    else
#line 209 "structure_reuse.direct.choose_reuse.m"
      {
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 209 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));

#line 4045 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 4047 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5);
        }
#line 209 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 4052 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          {
#line 4054 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
          }
#line 209 "structure_reuse.direct.choose_reuse.m"
      }
#line 209 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 209 "structure_reuse.direct.choose_reuse.m"
  }
#line 209 "structure_reuse.direct.choose_reuse.m"
}

#line 153 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 153 "structure_reuse.direct.choose_reuse.m"
{
#line 153 "structure_reuse.direct.choose_reuse.m"
  {
#line 153 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 153 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 153 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 153 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16);
#line 153 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 4090 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "structure_reuse.direct.choose_reuse.m"
    else
#line 153 "structure_reuse.direct.choose_reuse.m"
      {
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 153 "structure_reuse.direct.choose_reuse.m"
        {
#line 153 "structure_reuse.direct.choose_reuse.m"
          libs__globals____Compare____reuse_strategy_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
        }
#line 4120 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 == (MR_Integer) 0);
#line 153 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 153 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 153 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;
#line 153 "structure_reuse.direct.choose_reuse.m"
        else
#line 153 "structure_reuse.direct.choose_reuse.m"
          {
#line 153 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 153 "structure_reuse.direct.choose_reuse.m"
            {
#line 153 "structure_reuse.direct.choose_reuse.m"
              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
            }
#line 4140 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 == (MR_Integer) 0);
#line 153 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 153 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 153 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 153 "structure_reuse.direct.choose_reuse.m"
            else
#line 153 "structure_reuse.direct.choose_reuse.m"
              {
#line 153 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 153 "structure_reuse.direct.choose_reuse.m"
                {
#line 153 "structure_reuse.direct.choose_reuse.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 4160 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 153 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 153 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 153 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 153 "structure_reuse.direct.choose_reuse.m"
                else
#line 153 "structure_reuse.direct.choose_reuse.m"
                  {
#line 153 "structure_reuse.direct.choose_reuse.m"
                    {
#line 153 "structure_reuse.direct.choose_reuse.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11)));
#line 153 "structure_reuse.direct.choose_reuse.m"
                      return;
                    }
#line 153 "structure_reuse.direct.choose_reuse.m"
                  }
#line 153 "structure_reuse.direct.choose_reuse.m"
              }
#line 153 "structure_reuse.direct.choose_reuse.m"
          }
#line 153 "structure_reuse.direct.choose_reuse.m"
      }
#line 153 "structure_reuse.direct.choose_reuse.m"
  }
#line 153 "structure_reuse.direct.choose_reuse.m"
}

#line 153 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 153 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 153 "structure_reuse.direct.choose_reuse.m"
{
#line 153 "structure_reuse.direct.choose_reuse.m"
  {
#line 153 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 153 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 153 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 153 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12);
#line 153 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 153 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 153 "structure_reuse.direct.choose_reuse.m"
    else
#line 153 "structure_reuse.direct.choose_reuse.m"
      {
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16;
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));

#line 4239 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 4241 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = libs__globals____Unify____reuse_strategy_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7);
        }
#line 153 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 153 "structure_reuse.direct.choose_reuse.m"
          {
#line 4248 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 4250 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
            }
#line 153 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 153 "structure_reuse.direct.choose_reuse.m"
              {
#line 4257 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                {
#line 4259 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
                }
#line 153 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 153 "structure_reuse.direct.choose_reuse.m"
                  {
#line 4266 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 4268 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    {
#line 4270 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10)));
                    }
#line 153 "structure_reuse.direct.choose_reuse.m"
                  }
#line 153 "structure_reuse.direct.choose_reuse.m"
              }
#line 153 "structure_reuse.direct.choose_reuse.m"
          }
#line 153 "structure_reuse.direct.choose_reuse.m"
      }
#line 153 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 153 "structure_reuse.direct.choose_reuse.m"
  }
#line 153 "structure_reuse.direct.choose_reuse.m"
}

#line 1505 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
#line 1505 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1505 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10,
#line 1505 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11)
#line 1505 "structure_reuse.direct.choose_reuse.m"
{
#line 1508 "structure_reuse.direct.choose_reuse.m"
  {
#line 1508 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1508 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 0)));
#line 1508 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 1)));
#line 1508 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 2)));
#line 1508 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9;

#line 1510 "structure_reuse.direct.choose_reuse.m"
    {
#line 1510 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9);
    }
#line 1511 "structure_reuse.direct.choose_reuse.m"
    {
#line 1511 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1511 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1511 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11 = base;
#line 1511 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_6));
#line 1511 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_7));
#line 1511 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9));
#line 1511 "structure_reuse.direct.choose_reuse.m"
    }
#line 1508 "structure_reuse.direct.choose_reuse.m"
  }
#line 1505 "structure_reuse.direct.choose_reuse.m"
}

#line 1476 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
#line 1476 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1476 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1476 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1476 "structure_reuse.direct.choose_reuse.m"
{
#line 1476 "structure_reuse.direct.choose_reuse.m"
  {
#line 1476 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1476 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11;

#line 1476 "structure_reuse.direct.choose_reuse.m"
    {
#line 1476 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11);
    }
#line 1476 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11));
#line 1476 "structure_reuse.direct.choose_reuse.m"
  }
#line 1476 "structure_reuse.direct.choose_reuse.m"
}

#line 1471 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
#line 1471 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1471 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1471 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1471 "structure_reuse.direct.choose_reuse.m"
{
#line 1471 "structure_reuse.direct.choose_reuse.m"
  {
#line 1471 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1471 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49;

#line 1471 "structure_reuse.direct.choose_reuse.m"
    {
#line 1471 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49);
    }
#line 1471 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49));
#line 1471 "structure_reuse.direct.choose_reuse.m"
  }
#line 1471 "structure_reuse.direct.choose_reuse.m"
}

#line 1466 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
#line 1466 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1466 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1466 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1466 "structure_reuse.direct.choose_reuse.m"
{
#line 1466 "structure_reuse.direct.choose_reuse.m"
  {
#line 1466 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1466 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49;

#line 1466 "structure_reuse.direct.choose_reuse.m"
    {
#line 1466 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49);
    }
#line 1466 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49));
#line 1466 "structure_reuse.direct.choose_reuse.m"
  }
#line 1466 "structure_reuse.direct.choose_reuse.m"
}

#line 1442 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
#line 1442 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1442 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48,
#line 1442 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49)
#line 1442 "structure_reuse.direct.choose_reuse.m"
{
#line 1445 "structure_reuse.direct.choose_reuse.m"
  {
#line 1445 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1445 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48, (MR_Integer) 0)));
#line 1445 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48, (MR_Integer) 1)));
#line 1445 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14;
#line 1445 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15;

#line 1452 "structure_reuse.direct.choose_reuse.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 0))))
#line 1480 "structure_reuse.direct.choose_reuse.m"
      {
#line 1481 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1482 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1480 "structure_reuse.direct.choose_reuse.m"
      }
#line 1452 "structure_reuse.direct.choose_reuse.m"
    else
#line 1452 "structure_reuse.direct.choose_reuse.m"
      if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 2))))
#line 1453 "structure_reuse.direct.choose_reuse.m"
        {
#line 1454 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1455 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1453 "structure_reuse.direct.choose_reuse.m"
        }
#line 1452 "structure_reuse.direct.choose_reuse.m"
      else
#line 1452 "structure_reuse.direct.choose_reuse.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 1))))
#line 1448 "structure_reuse.direct.choose_reuse.m"
          {
#line 1448 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)));
#line 1448 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1448 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1448 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1448 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 4)));
#line 1448 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13;
#line 1530 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80;
#line 1530 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81;
#line 1530 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82;
#line 1530 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83;
#line 1530 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84;
#line 1520 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86;
#line 1520 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88;
#line 1520 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85;

#line 1520 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11)) == (MR_mktag((MR_Integer) 1)));
#line 1520 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1520 "structure_reuse.direct.choose_reuse.m"
              {
#line 1520 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 0)));
#line 1520 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 1)));
#line 1520 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 2)));
#line 1520 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 3)));
#line 1520 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 4)));
#line 1520 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 5)));
#line 1521 "structure_reuse.direct.choose_reuse.m"
                {
#line 1521 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7);
                }
#line 1521 "structure_reuse.direct.choose_reuse.m"
                {
#line 1521 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86);
                }
#line 1520 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1520 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1523 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1523 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86);
                    }
#line 1523 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 1520 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1520 "structure_reuse.direct.choose_reuse.m"
              }
#line 1530 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1526 "structure_reuse.direct.choose_reuse.m"
              {
#line 1525 "structure_reuse.direct.choose_reuse.m"
                {
#line 1525 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80));
#line 1525 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81));
#line 1525 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82));
#line 1525 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83));
#line 1525 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84));
#line 1525 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1525 "structure_reuse.direct.choose_reuse.m"
                }
#line 1529 "structure_reuse.direct.choose_reuse.m"
                {
#line 1529 "structure_reuse.direct.choose_reuse.m"
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[0]), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14);
                }
#line 1526 "structure_reuse.direct.choose_reuse.m"
              }
#line 1530 "structure_reuse.direct.choose_reuse.m"
            else
#line 1531 "structure_reuse.direct.choose_reuse.m"
              {
#line 1531 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1531 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11;
#line 1531 "structure_reuse.direct.choose_reuse.m"
              }
#line 1451 "structure_reuse.direct.choose_reuse.m"
            {
#line 1451 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_8));
#line 1451 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_9));
#line 1451 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_10));
#line 1451 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13));
#line 1451 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_12));
#line 1451 "structure_reuse.direct.choose_reuse.m"
            }
#line 1448 "structure_reuse.direct.choose_reuse.m"
          }
#line 1452 "structure_reuse.direct.choose_reuse.m"
        else
#line 1452 "structure_reuse.direct.choose_reuse.m"
          if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1461 "structure_reuse.direct.choose_reuse.m"
            {
#line 1462 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1463 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1461 "structure_reuse.direct.choose_reuse.m"
            }
#line 1452 "structure_reuse.direct.choose_reuse.m"
          else
#line 1452 "structure_reuse.direct.choose_reuse.m"
            if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1465 "structure_reuse.direct.choose_reuse.m"
              {
#line 1465 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66;
#line 1465 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1465 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35;
#line 1465 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;
#line 1465 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1466 "structure_reuse.direct.choose_reuse.m"
                {
#line 1466 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1466 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[8]));
#line 1466 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1));
#line 1466 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1466 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1466 "structure_reuse.direct.choose_reuse.m"
                }
#line 4652 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1466 "structure_reuse.direct.choose_reuse.m"
                {
#line 1466 "structure_reuse.direct.choose_reuse.m"
                  mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_34, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35);
                }
#line 1467 "structure_reuse.direct.choose_reuse.m"
                {
#line 1467 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1467 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1467 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_57));
#line 1467 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35));
#line 1467 "structure_reuse.direct.choose_reuse.m"
                }
#line 1468 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1465 "structure_reuse.direct.choose_reuse.m"
              }
#line 1452 "structure_reuse.direct.choose_reuse.m"
            else
#line 1452 "structure_reuse.direct.choose_reuse.m"
              if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1470 "structure_reuse.direct.choose_reuse.m"
                {
#line 1470 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69;
#line 1470 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1470 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1470 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59;

#line 1471 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1471 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[8]));
#line 1471 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2));
#line 1471 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1471 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1471 "structure_reuse.direct.choose_reuse.m"
                  }
#line 4704 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1471 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1471 "structure_reuse.direct.choose_reuse.m"
                    mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_58, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59);
                  }
#line 1472 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1472 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1472 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1472 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59));
#line 1472 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1473 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1470 "structure_reuse.direct.choose_reuse.m"
                }
#line 1452 "structure_reuse.direct.choose_reuse.m"
              else
#line 1452 "structure_reuse.direct.choose_reuse.m"
                if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1457 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1458 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1459 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1457 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1452 "structure_reuse.direct.choose_reuse.m"
                else
#line 1452 "structure_reuse.direct.choose_reuse.m"
                  if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1492 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1492 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1492 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1492 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 4)));
#line 1492 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44;
#line 1492 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45;
#line 1492 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46;
#line 1492 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1493 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1493 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_41, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44);
                      }
#line 1494 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1494 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_42, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45);
                      }
#line 1495 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1495 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_43, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46);
                      }
#line 1496 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1496 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1496 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1496 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63));
#line 1496 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44));
#line 1496 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45));
#line 1496 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46));
#line 1496 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1497 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1492 "structure_reuse.direct.choose_reuse.m"
                    }
#line 1452 "structure_reuse.direct.choose_reuse.m"
                  else
#line 1452 "structure_reuse.direct.choose_reuse.m"
                    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1484 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1484 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1484 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40;
#line 1484 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1488 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1488 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_39, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40);
                        }
#line 1489 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1489 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1489 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62));
#line 1489 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40));
#line 1489 "structure_reuse.direct.choose_reuse.m"
                        }
#line 1490 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1484 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1452 "structure_reuse.direct.choose_reuse.m"
                    else
#line 1452 "structure_reuse.direct.choose_reuse.m"
                      if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1499 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1501 "structure_reuse.direct.choose_reuse.m"
                          {
#line 1501 "structure_reuse.direct.choose_reuse.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.check_for_cell_caching_2\'/3", (MR_String) "shorthand");
#line 1501 "structure_reuse.direct.choose_reuse.m"
                            return;
                          }
#line 1499 "structure_reuse.direct.choose_reuse.m"
                        }
#line 1452 "structure_reuse.direct.choose_reuse.m"
                      else
#line 1475 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1475 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72;
#line 1475 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1475 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37;
#line 1475 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 1475 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1475 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));

#line 1476 "structure_reuse.direct.choose_reuse.m"
                          {
#line 1476 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1476 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[9]));
#line 1476 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3));
#line 1476 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1476 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1476 "structure_reuse.direct.choose_reuse.m"
                          }
#line 4873 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1476 "structure_reuse.direct.choose_reuse.m"
                          {
#line 1476 "structure_reuse.direct.choose_reuse.m"
                            mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_36, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37);
                          }
#line 1477 "structure_reuse.direct.choose_reuse.m"
                          {
#line 1477 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1477 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1477 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_60));
#line 1477 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_61));
#line 1477 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37));
#line 1477 "structure_reuse.direct.choose_reuse.m"
                          }
#line 1478 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1475 "structure_reuse.direct.choose_reuse.m"
                        }
#line 1503 "structure_reuse.direct.choose_reuse.m"
    {
#line 1503 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1503 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1503 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49 = base;
#line 1503 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15));
#line 1503 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14));
#line 1503 "structure_reuse.direct.choose_reuse.m"
    }
#line 1445 "structure_reuse.direct.choose_reuse.m"
  }
#line 1442 "structure_reuse.direct.choose_reuse.m"
}

#line 1402 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1(
#line 1402 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1402 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1402 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 1402 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 1402 "structure_reuse.direct.choose_reuse.m"
{
#line 1402 "structure_reuse.direct.choose_reuse.m"
  {
#line 1402 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1402 "structure_reuse.direct.choose_reuse.m"
    {
#line 1402 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
#line 1402 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 1402 "structure_reuse.direct.choose_reuse.m"
  }
#line 1402 "structure_reuse.direct.choose_reuse.m"
}

#line 1394 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(
#line 1394 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4)
#line 1394 "structure_reuse.direct.choose_reuse.m"
{
#line 1399 "structure_reuse.direct.choose_reuse.m"
  {
#line 1399 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 1397 "structure_reuse.direct.choose_reuse.m"
    {
#line 1397 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4);
    }
#line 1399 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1398 "structure_reuse.direct.choose_reuse.m"
      {
#line 1398 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33;
#line 1398 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;

#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, (MR_Integer) 57);
        }
#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33 = mercury__string__f_43_43_2_f_0((MR_String) "%---empty match table", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38);
        }
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33);
        }
#line 1337 "structure_reuse.direct.choose_reuse.m"
        {
#line 1337 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
#line 1337 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 1398 "structure_reuse.direct.choose_reuse.m"
      }
#line 1399 "structure_reuse.direct.choose_reuse.m"
    else
#line 1400 "structure_reuse.direct.choose_reuse.m"
      {
#line 1400 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21;
#line 1400 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6;
#line 1400 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50;
#line 1400 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;
#line 1400 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67;
#line 1400 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72;
#line 1402 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_IO_14_14;

#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, (MR_Integer) 56);
        }
#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50 = mercury__string__f_43_43_2_f_0((MR_String) "%---full table (start)", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55);
        }
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50);
        }
#line 1337 "structure_reuse.direct.choose_reuse.m"
        {
#line 1337 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
        }
#line 5036 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 1401 "structure_reuse.direct.choose_reuse.m"
        {
#line 1401 "structure_reuse.direct.choose_reuse.m"
          mercury__multi_map__values_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6);
        }
#line 1402 "structure_reuse.direct.choose_reuse.m"
        {
#line 1402 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_2(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_IO_14_14);
        }
#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, (MR_Integer) 58);
        }
#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67 = mercury__string__f_43_43_2_f_0((MR_String) "%---full table (end)", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72);
        }
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67);
        }
#line 1337 "structure_reuse.direct.choose_reuse.m"
        {
#line 1337 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
#line 1337 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 1400 "structure_reuse.direct.choose_reuse.m"
      }
#line 1399 "structure_reuse.direct.choose_reuse.m"
  }
#line 1394 "structure_reuse.direct.choose_reuse.m"
}

#line 1381 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2(
#line 1381 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1381 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1381 "structure_reuse.direct.choose_reuse.m"
{
#line 1381 "structure_reuse.direct.choose_reuse.m"
  {
#line 1381 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1381 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1381 "structure_reuse.direct.choose_reuse.m"
    {
#line 1381 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1381 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1381 "structure_reuse.direct.choose_reuse.m"
  }
#line 1381 "structure_reuse.direct.choose_reuse.m"
}

#line 1379 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1(
#line 1379 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1379 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1379 "structure_reuse.direct.choose_reuse.m"
{
#line 1379 "structure_reuse.direct.choose_reuse.m"
  {
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_17;

#line 1379 "structure_reuse.direct.choose_reuse.m"
    {
#line 1379 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_17 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1379__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1379 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_17));
#line 1379 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 1379 "structure_reuse.direct.choose_reuse.m"
  }
#line 1379 "structure_reuse.direct.choose_reuse.m"
}

#line 1376 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(
#line 1376 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4)
#line 1376 "structure_reuse.direct.choose_reuse.m"
{
#line 1378 "structure_reuse.direct.choose_reuse.m"
  {
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 1378 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1381 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1381 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;
#line 1387 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44;
#line 1387 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 1387 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 1388 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 1388 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 1388 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;

#line 1379 "structure_reuse.direct.choose_reuse.m"
    {
#line 1379 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[24], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
    }
#line 1381 "structure_reuse.direct.choose_reuse.m"
    {
#line 1381 "structure_reuse.direct.choose_reuse.m"
      mercury__list__takewhile_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[25], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54);
    }
#line 1381 "structure_reuse.direct.choose_reuse.m"
    {
#line 1381 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[6], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54)));
    }
#line 1383 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1382 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9 = (MR_String) "A";
#line 1383 "structure_reuse.direct.choose_reuse.m"
    else
#line 1384 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9 = (MR_String) "C";
#line 1387 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1387 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1387 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1387 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1387 "structure_reuse.direct.choose_reuse.m"
    {
#line 1387 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21);
    }
#line 1388 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1388 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1388 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1388 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1388 "structure_reuse.direct.choose_reuse.m"
    {
#line 1388 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22);
    }
#line 1389 "structure_reuse.direct.choose_reuse.m"
    {
#line 1389 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = mercury__string__int_to_string_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10);
    }
#line 1390 "structure_reuse.direct.choose_reuse.m"
    {
#line 1390 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = mercury__string__int_to_string_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11);
    }
#line 1391 "structure_reuse.direct.choose_reuse.m"
    {
#line 1391 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9));
#line 1391 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1391 "structure_reuse.direct.choose_reuse.m"
    }
#line 1390 "structure_reuse.direct.choose_reuse.m"
    {
#line 1390 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, 0) = ((MR_Box) ((MR_String) ", Co: "));
#line 1390 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33));
#line 1390 "structure_reuse.direct.choose_reuse.m"
    }
#line 1389 "structure_reuse.direct.choose_reuse.m"
    {
#line 1389 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30));
#line 1389 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31));
#line 1389 "structure_reuse.direct.choose_reuse.m"
    }
#line 1389 "structure_reuse.direct.choose_reuse.m"
    {
#line 1389 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27, 0) = ((MR_Box) ((MR_String) ", c: "));
#line 1389 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29));
#line 1389 "structure_reuse.direct.choose_reuse.m"
    }
#line 1389 "structure_reuse.direct.choose_reuse.m"
    {
#line 1389 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26));
#line 1389 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27));
#line 1389 "structure_reuse.direct.choose_reuse.m"
    }
#line 1389 "structure_reuse.direct.choose_reuse.m"
    {
#line 1389 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1389 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, 0) = ((MR_Box) ((MR_String) "d: "));
#line 1389 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25));
#line 1389 "structure_reuse.direct.choose_reuse.m"
    }
#line 1389 "structure_reuse.direct.choose_reuse.m"
    {
#line 1389 "structure_reuse.direct.choose_reuse.m"
      mercury__string__append_list_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12);
    }
#line 1392 "structure_reuse.direct.choose_reuse.m"
    {
#line 1392 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12);
#line 1392 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 1378 "structure_reuse.direct.choose_reuse.m"
  }
#line 1376 "structure_reuse.direct.choose_reuse.m"
}

#line 289 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1(
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 289 "structure_reuse.direct.choose_reuse.m"
{
#line 289 "structure_reuse.direct.choose_reuse.m"
  {
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13;

#line 289 "structure_reuse.direct.choose_reuse.m"
    {
#line 289 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__289__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 289 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13));
#line 289 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 289 "structure_reuse.direct.choose_reuse.m"
  }
#line 289 "structure_reuse.direct.choose_reuse.m"
}

#line 1354 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(
#line 1354 "structure_reuse.direct.choose_reuse.m"
  MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5,
#line 1354 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6)
#line 1354 "structure_reuse.direct.choose_reuse.m"
{
#line 1356 "structure_reuse.direct.choose_reuse.m"
  {
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_68;
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8;
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9;
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_45;
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_46;
#line 1356 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52;
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65;
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_66_66;
#line 1361 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34;
#line 1361 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 1361 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;
#line 1369 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 1369 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 1369 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;

#line 1357 "structure_reuse.direct.choose_reuse.m"
    {
#line 1357 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5);
    }
#line 1358 "structure_reuse.direct.choose_reuse.m"
    {
#line 1358 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 5433 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_68 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 290 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 290 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 290 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 290 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 290 "structure_reuse.direct.choose_reuse.m"
    {
#line 290 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_45 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_68, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[23], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52);
    }
#line 291 "structure_reuse.direct.choose_reuse.m"
    {
#line 291 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_46 = mercury__list__remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_68, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_45);
    }
#line 300 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "structure_reuse.direct.choose_reuse.m"
      {
#line 302 "structure_reuse.direct.choose_reuse.m"
        {
#line 302 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
#line 302 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 301 "structure_reuse.direct.choose_reuse.m"
      }
#line 300 "structure_reuse.direct.choose_reuse.m"
    else
#line 293 "structure_reuse.direct.choose_reuse.m"
      {
#line 293 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_47;

#line 293 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_46, (MR_Integer) 0)));
#line 293 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_46, (MR_Integer) 1)));
#line 296 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "structure_reuse.direct.choose_reuse.m"
          {
#line 295 "structure_reuse.direct.choose_reuse.m"
          }
#line 296 "structure_reuse.direct.choose_reuse.m"
        else
#line 297 "structure_reuse.direct.choose_reuse.m"
          {
#line 298 "structure_reuse.direct.choose_reuse.m"
            {
#line 298 "structure_reuse.direct.choose_reuse.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
#line 298 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 297 "structure_reuse.direct.choose_reuse.m"
          }
#line 293 "structure_reuse.direct.choose_reuse.m"
      }
#line 1359 "structure_reuse.direct.choose_reuse.m"
    {
#line 1359 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17);
    }
#line 1359 "structure_reuse.direct.choose_reuse.m"
    {
#line 1359 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15);
    }
#line 1360 "structure_reuse.direct.choose_reuse.m"
    {
#line 1360 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 1361 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 1361 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 1361 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 1361 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 1363 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8 == ((MR_Float) 0.0000000000000000));
#line 1363 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 1366 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1365 "structure_reuse.direct.choose_reuse.m"
      {
#line 1365 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 1365 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;

#line 1365 "structure_reuse.direct.choose_reuse.m"
        {
#line 1365 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, 0) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8);
#line 1365 "structure_reuse.direct.choose_reuse.m"
        }
#line 1365 "structure_reuse.direct.choose_reuse.m"
        {
#line 1365 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23));
#line 1365 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "structure_reuse.direct.choose_reuse.m"
        }
#line 1365 "structure_reuse.direct.choose_reuse.m"
        {
#line 1365 "structure_reuse.direct.choose_reuse.m"
          mercury__io__format_4_p_0((MR_String) "%.2f", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21);
        }
#line 1365 "structure_reuse.direct.choose_reuse.m"
      }
#line 1366 "structure_reuse.direct.choose_reuse.m"
    else
#line 1367 "structure_reuse.direct.choose_reuse.m"
      {
#line 1367 "structure_reuse.direct.choose_reuse.m"
        {
#line 1367 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
#line 1367 "structure_reuse.direct.choose_reuse.m"
      }
#line 1369 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 1369 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 1369 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 1369 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 1370 "structure_reuse.direct.choose_reuse.m"
    {
#line 1370 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 1371 "structure_reuse.direct.choose_reuse.m"
    {
#line 1371 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9);
    }
#line 1372 "structure_reuse.direct.choose_reuse.m"
    {
#line 1372 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1373 "structure_reuse.direct.choose_reuse.m"
    {
#line 1373 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6);
    }
#line 1374 "structure_reuse.direct.choose_reuse.m"
    {
#line 1374 "structure_reuse.direct.choose_reuse.m"
      mercury__io__nl_2_p_0();
#line 1374 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 1356 "structure_reuse.direct.choose_reuse.m"
  }
#line 1354 "structure_reuse.direct.choose_reuse.m"
}

#line 1339 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(
#line 1339 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6,
#line 1339 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7,
#line 1339 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8)
#line 1339 "structure_reuse.direct.choose_reuse.m"
{
#line 1344 "structure_reuse.direct.choose_reuse.m"
  {
#line 1344 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 1344 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6 == (MR_Integer) 0))
#line 1351 "structure_reuse.direct.choose_reuse.m"
      {
#line 1351 "structure_reuse.direct.choose_reuse.m"
      }
#line 1344 "structure_reuse.direct.choose_reuse.m"
    else
#line 1344 "structure_reuse.direct.choose_reuse.m"
      {
#line 1344 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28;
#line 1344 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 1344 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45;
#line 1344 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;

#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, (MR_Integer) 63);
        }
#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28 = mercury__string__f_43_43_2_f_0((MR_String) "%---reuse table", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33);
        }
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28);
        }
#line 1337 "structure_reuse.direct.choose_reuse.m"
        {
#line 1337 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
        }
#line 1346 "structure_reuse.direct.choose_reuse.m"
        {
#line 1346 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\t|\tvar\t|\tvalue\t|\tdegree\n");
        }
#line 1347 "structure_reuse.direct.choose_reuse.m"
        {
#line 1347 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0((MR_String) "%-sel- ", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8);
        }
#line 1348 "structure_reuse.direct.choose_reuse.m"
        {
#line 1348 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7);
        }
#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, (MR_Integer) 74);
        }
#line 1335 "structure_reuse.direct.choose_reuse.m"
        {
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45 = mercury__string__f_43_43_2_f_0((MR_String) "%---", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50);
        }
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45);
        }
#line 1337 "structure_reuse.direct.choose_reuse.m"
        {
#line 1337 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
#line 1337 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 1344 "structure_reuse.direct.choose_reuse.m"
      }
#line 1344 "structure_reuse.direct.choose_reuse.m"
  }
#line 1339 "structure_reuse.direct.choose_reuse.m"
}

#line 1314 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
#line 1314 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1314 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3)
#line 1314 "structure_reuse.direct.choose_reuse.m"
{
#line 1317 "structure_reuse.direct.choose_reuse.m"
  {
#line 1317 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1317 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3, (MR_Integer) 0)));
#line 1317 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3, (MR_Integer) 1)));

#line 1317 "structure_reuse.direct.choose_reuse.m"
    {
#line 1317 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5);
    }
#line 1317 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1317 "structure_reuse.direct.choose_reuse.m"
  }
#line 1314 "structure_reuse.direct.choose_reuse.m"
}

#line 1308 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
#line 1308 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1308 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3)
#line 1308 "structure_reuse.direct.choose_reuse.m"
{
#line 1311 "structure_reuse.direct.choose_reuse.m"
  {
#line 1311 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 1)));
#line 1311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 0)));
#line 1311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 2)));
#line 1311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 3)));
#line 1311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 4)));

#line 1311 "structure_reuse.direct.choose_reuse.m"
    {
#line 1311 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
    }
#line 1311 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1311 "structure_reuse.direct.choose_reuse.m"
  }
#line 1308 "structure_reuse.direct.choose_reuse.m"
}

#line 1298 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1298 "structure_reuse.direct.choose_reuse.m"
{
#line 1298 "structure_reuse.direct.choose_reuse.m"
  {
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1298 "structure_reuse.direct.choose_reuse.m"
    {
#line 1298 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1298 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1298 "structure_reuse.direct.choose_reuse.m"
  }
#line 1298 "structure_reuse.direct.choose_reuse.m"
}

#line 1294 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
#line 1294 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 1294 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5,
#line 1294 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6)
#line 1294 "structure_reuse.direct.choose_reuse.m"
{
#line 1297 "structure_reuse.direct.choose_reuse.m"
  {
#line 1297 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1297 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17;
#line 1297 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7;
#line 1297 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1297 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9;
#line 1297 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));

#line 1298 "structure_reuse.direct.choose_reuse.m"
    {
#line 1298 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[6]));
#line 1298 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1));
#line 1298 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1298 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5));
#line 1298 "structure_reuse.direct.choose_reuse.m"
    }
#line 1298 "structure_reuse.direct.choose_reuse.m"
    {
#line 1298 "structure_reuse.direct.choose_reuse.m"
      mercury__list__filter_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
    }
#line 1298 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 1298 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1298 "structure_reuse.direct.choose_reuse.m"
      {
#line 1298 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, (MR_Integer) 0)));
#line 1298 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, (MR_Integer) 1)));
#line 5864 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3];
#line 1298 "structure_reuse.direct.choose_reuse.m"
        {
#line 1298 "structure_reuse.direct.choose_reuse.m"
          return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16)));
        }
#line 1298 "structure_reuse.direct.choose_reuse.m"
      }
#line 1297 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1297 "structure_reuse.direct.choose_reuse.m"
  }
#line 1294 "structure_reuse.direct.choose_reuse.m"
}

#line 289 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 289 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 289 "structure_reuse.direct.choose_reuse.m"
{
#line 289 "structure_reuse.direct.choose_reuse.m"
  {
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 289 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13;

#line 289 "structure_reuse.direct.choose_reuse.m"
    {
#line 289 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__289__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 289 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13));
#line 289 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 289 "structure_reuse.direct.choose_reuse.m"
  }
#line 289 "structure_reuse.direct.choose_reuse.m"
}

#line 1305 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
#line 1305 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1305 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1305 "structure_reuse.direct.choose_reuse.m"
{
#line 1305 "structure_reuse.direct.choose_reuse.m"
  {
#line 1305 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1305 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1305 "structure_reuse.direct.choose_reuse.m"
    {
#line 1305 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1305 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1305 "structure_reuse.direct.choose_reuse.m"
  }
#line 1305 "structure_reuse.direct.choose_reuse.m"
}

#line 1237 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7,
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8,
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40,
#line 1237 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41)
#line 1237 "structure_reuse.direct.choose_reuse.m"
{
#line 1240 "structure_reuse.direct.choose_reuse.m"
  {
#line 1240 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1240 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10;

#line 1241 "structure_reuse.direct.choose_reuse.m"
    {
#line 1241 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40);
    }
#line 1252 "structure_reuse.direct.choose_reuse.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8)) == (MR_mktag((MR_Integer) 2))))
#line 1286 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1252 "structure_reuse.direct.choose_reuse.m"
    else
#line 1252 "structure_reuse.direct.choose_reuse.m"
      if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8)) == (MR_mktag((MR_Integer) 0))))
#line 1282 "structure_reuse.direct.choose_reuse.m"
        {
#line 1282 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25;
#line 1304 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69;
#line 1304 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 1304 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 1)));
#line 1304 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 1304 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68;
#line 1305 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 0)));
#line 1305 "structure_reuse.direct.choose_reuse.m"
          MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 2)));
#line 1305 "structure_reuse.direct.choose_reuse.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 3)));

#line 1305 "structure_reuse.direct.choose_reuse.m"
          {
#line 1305 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[4]));
#line 1305 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1));
#line 1305 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1305 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10));
#line 1305 "structure_reuse.direct.choose_reuse.m"
          }
#line 1305 "structure_reuse.direct.choose_reuse.m"
          {
#line 1305 "structure_reuse.direct.choose_reuse.m"
            mercury__list__filter_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61);
          }
#line 1305 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 1305 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1305 "structure_reuse.direct.choose_reuse.m"
            {
#line 1305 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61, (MR_Integer) 0)));
#line 1305 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61, (MR_Integer) 1)));
#line 6025 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4];
#line 1305 "structure_reuse.direct.choose_reuse.m"
              {
#line 1305 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68)));
              }
#line 1305 "structure_reuse.direct.choose_reuse.m"
            }
#line 1282 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1257 "structure_reuse.direct.choose_reuse.m"
            {
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75;
#line 1257 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 0)));
#line 290 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 1)));
#line 290 "structure_reuse.direct.choose_reuse.m"
              MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 2)));
#line 290 "structure_reuse.direct.choose_reuse.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 3)));
#line 1260 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 1260 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1260 "structure_reuse.direct.choose_reuse.m"
              MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;

#line 290 "structure_reuse.direct.choose_reuse.m"
              {
#line 290 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[22], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81);
              }
#line 291 "structure_reuse.direct.choose_reuse.m"
              {
#line 291 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75 = mercury__list__remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74);
              }
#line 300 "structure_reuse.direct.choose_reuse.m"
              if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "structure_reuse.direct.choose_reuse.m"
                {
#line 302 "structure_reuse.direct.choose_reuse.m"
                  {
#line 302 "structure_reuse.direct.choose_reuse.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
#line 302 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 301 "structure_reuse.direct.choose_reuse.m"
                }
#line 300 "structure_reuse.direct.choose_reuse.m"
              else
#line 293 "structure_reuse.direct.choose_reuse.m"
                {
#line 293 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76;

#line 293 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75, (MR_Integer) 0)));
#line 293 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75, (MR_Integer) 1)));
#line 296 "structure_reuse.direct.choose_reuse.m"
                  if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "structure_reuse.direct.choose_reuse.m"
                    {
#line 295 "structure_reuse.direct.choose_reuse.m"
                    }
#line 296 "structure_reuse.direct.choose_reuse.m"
                  else
#line 297 "structure_reuse.direct.choose_reuse.m"
                    {
#line 298 "structure_reuse.direct.choose_reuse.m"
                      {
#line 298 "structure_reuse.direct.choose_reuse.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
#line 298 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 297 "structure_reuse.direct.choose_reuse.m"
                    }
#line 293 "structure_reuse.direct.choose_reuse.m"
                }
#line 1258 "structure_reuse.direct.choose_reuse.m"
              {
#line 1258 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7);
              }
#line 1259 "structure_reuse.direct.choose_reuse.m"
              {
#line 1259 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7);
              }
#line 1260 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25, (MR_Integer) 0)));
#line 1260 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25, (MR_Integer) 1)));
#line 1260 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 0)));
#line 1260 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 1)));
#line 1260 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 2)));
#line 1262 "structure_reuse.direct.choose_reuse.m"
              {
#line 1262 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28);
              }
#line 1264 "structure_reuse.direct.choose_reuse.m"
              if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1263 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30 = (MR_Integer) 0;
#line 1264 "structure_reuse.direct.choose_reuse.m"
              else
#line 1266 "structure_reuse.direct.choose_reuse.m"
                {
#line 1264 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1264 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28);
                  }
#line 1266 "structure_reuse.direct.choose_reuse.m"
                  if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1265 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30 = (MR_Integer) 1;
#line 1266 "structure_reuse.direct.choose_reuse.m"
                  else
#line 1268 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1268 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1268 "structure_reuse.direct.choose_reuse.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "no reuse conditions");
#line 1268 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 1268 "structure_reuse.direct.choose_reuse.m"
                    }
#line 1266 "structure_reuse.direct.choose_reuse.m"
                }
#line 1270 "structure_reuse.direct.choose_reuse.m"
              {
#line 1270 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26));
#line 1270 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30));
#line 1270 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27));
#line 1270 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29));
#line 1270 "structure_reuse.direct.choose_reuse.m"
              }
#line 1275 "structure_reuse.direct.choose_reuse.m"
              if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30 == (MR_Integer) 0))
#line 1274 "structure_reuse.direct.choose_reuse.m"
                {
#line 1274 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31));
#line 1274 "structure_reuse.direct.choose_reuse.m"
                }
#line 1275 "structure_reuse.direct.choose_reuse.m"
              else
#line 1279 "structure_reuse.direct.choose_reuse.m"
                {
#line 1279 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31));
#line 1279 "structure_reuse.direct.choose_reuse.m"
                }
#line 1281 "structure_reuse.direct.choose_reuse.m"
              {
#line 1281 "structure_reuse.direct.choose_reuse.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);
#line 1281 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1257 "structure_reuse.direct.choose_reuse.m"
            }
#line 1282 "structure_reuse.direct.choose_reuse.m"
          else
#line 1281 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1282 "structure_reuse.direct.choose_reuse.m"
        }
#line 1252 "structure_reuse.direct.choose_reuse.m"
      else
#line 1252 "structure_reuse.direct.choose_reuse.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8)) == (MR_mktag((MR_Integer) 1))))
#line 1249 "structure_reuse.direct.choose_reuse.m"
          {
#line 1245 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse___DeconSpec_17;

#line 1245 "structure_reuse.direct.choose_reuse.m"
            {
#line 1245 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse___DeconSpec_17);
            }
#line 1249 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1248 "structure_reuse.direct.choose_reuse.m"
              {
#line 1248 "structure_reuse.direct.choose_reuse.m"
                {
#line 1248 "structure_reuse.direct.choose_reuse.m"
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[0]), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);
#line 1248 "structure_reuse.direct.choose_reuse.m"
                  return;
                }
#line 1248 "structure_reuse.direct.choose_reuse.m"
              }
#line 1249 "structure_reuse.direct.choose_reuse.m"
            else
#line 1248 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1249 "structure_reuse.direct.choose_reuse.m"
          }
#line 1252 "structure_reuse.direct.choose_reuse.m"
        else
#line 1252 "structure_reuse.direct.choose_reuse.m"
          if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1290 "structure_reuse.direct.choose_reuse.m"
            {
#line 1291 "structure_reuse.direct.choose_reuse.m"
              {
#line 1291 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "complicated_unify");
#line 1291 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1290 "structure_reuse.direct.choose_reuse.m"
            }
#line 1252 "structure_reuse.direct.choose_reuse.m"
          else
#line 1288 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1240 "structure_reuse.direct.choose_reuse.m"
  }
#line 1237 "structure_reuse.direct.choose_reuse.m"
}

#line 1229 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
#line 1229 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1229 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1229 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12,
#line 1229 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13)
#line 1229 "structure_reuse.direct.choose_reuse.m"
{
#line 1232 "structure_reuse.direct.choose_reuse.m"
  {
#line 1232 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1232 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 0)));
#line 1232 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 1)));
#line 1232 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 2)));
#line 1232 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11;

#line 1234 "structure_reuse.direct.choose_reuse.m"
    {
#line 1234 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11);
    }
#line 1235 "structure_reuse.direct.choose_reuse.m"
    {
#line 1235 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1235 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13 = base;
#line 1235 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_8));
#line 1235 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_9));
#line 1235 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11));
#line 1235 "structure_reuse.direct.choose_reuse.m"
    }
#line 1232 "structure_reuse.direct.choose_reuse.m"
  }
#line 1229 "structure_reuse.direct.choose_reuse.m"
}

#line 1200 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
#line 1200 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1200 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1200 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1200 "structure_reuse.direct.choose_reuse.m"
{
#line 1200 "structure_reuse.direct.choose_reuse.m"
  {
#line 1200 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1200 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13;

#line 1200 "structure_reuse.direct.choose_reuse.m"
    {
#line 1200 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13);
    }
#line 1200 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13));
#line 1200 "structure_reuse.direct.choose_reuse.m"
  }
#line 1200 "structure_reuse.direct.choose_reuse.m"
}

#line 1195 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
#line 1195 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1195 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1195 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1195 "structure_reuse.direct.choose_reuse.m"
{
#line 1195 "structure_reuse.direct.choose_reuse.m"
  {
#line 1195 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1195 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52;

#line 1195 "structure_reuse.direct.choose_reuse.m"
    {
#line 1195 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52);
    }
#line 1195 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52));
#line 1195 "structure_reuse.direct.choose_reuse.m"
  }
#line 1195 "structure_reuse.direct.choose_reuse.m"
}

#line 1190 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
#line 1190 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1190 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1190 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1190 "structure_reuse.direct.choose_reuse.m"
{
#line 1190 "structure_reuse.direct.choose_reuse.m"
  {
#line 1190 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1190 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52;

#line 1190 "structure_reuse.direct.choose_reuse.m"
    {
#line 1190 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52);
    }
#line 1190 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52));
#line 1190 "structure_reuse.direct.choose_reuse.m"
  }
#line 1190 "structure_reuse.direct.choose_reuse.m"
}

#line 1166 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
#line 1166 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1166 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1166 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51,
#line 1166 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52)
#line 1166 "structure_reuse.direct.choose_reuse.m"
{
#line 1169 "structure_reuse.direct.choose_reuse.m"
  {
#line 1169 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1169 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51, (MR_Integer) 0)));
#line 1169 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51, (MR_Integer) 1)));
#line 1169 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15;
#line 1169 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16;

#line 1176 "structure_reuse.direct.choose_reuse.m"
    if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1204 "structure_reuse.direct.choose_reuse.m"
      {
#line 1205 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1206 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1204 "structure_reuse.direct.choose_reuse.m"
      }
#line 1176 "structure_reuse.direct.choose_reuse.m"
    else
#line 1176 "structure_reuse.direct.choose_reuse.m"
      if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 2))))
#line 1177 "structure_reuse.direct.choose_reuse.m"
        {
#line 1178 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1179 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1177 "structure_reuse.direct.choose_reuse.m"
        }
#line 1176 "structure_reuse.direct.choose_reuse.m"
      else
#line 1176 "structure_reuse.direct.choose_reuse.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 1))))
#line 1172 "structure_reuse.direct.choose_reuse.m"
          {
#line 1172 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1172 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)));
#line 1172 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1172 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1172 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 4)));

#line 1173 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1174 "structure_reuse.direct.choose_reuse.m"
            {
#line 1174 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16);
            }
#line 1172 "structure_reuse.direct.choose_reuse.m"
          }
#line 1176 "structure_reuse.direct.choose_reuse.m"
        else
#line 1176 "structure_reuse.direct.choose_reuse.m"
          if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1185 "structure_reuse.direct.choose_reuse.m"
            {
#line 1186 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1187 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1185 "structure_reuse.direct.choose_reuse.m"
            }
#line 1176 "structure_reuse.direct.choose_reuse.m"
          else
#line 1176 "structure_reuse.direct.choose_reuse.m"
            if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1189 "structure_reuse.direct.choose_reuse.m"
              {
#line 1189 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67;
#line 1189 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1189 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1189 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37;
#line 1189 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;

#line 1190 "structure_reuse.direct.choose_reuse.m"
                {
#line 1190 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1190 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3]));
#line 1190 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1));
#line 1190 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1190 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1190 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1190 "structure_reuse.direct.choose_reuse.m"
                }
#line 6554 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1190 "structure_reuse.direct.choose_reuse.m"
                {
#line 1190 "structure_reuse.direct.choose_reuse.m"
                  mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_36, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37);
                }
#line 1191 "structure_reuse.direct.choose_reuse.m"
                {
#line 1191 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1191 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_35));
#line 1191 "structure_reuse.direct.choose_reuse.m"
                  MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37));
#line 1191 "structure_reuse.direct.choose_reuse.m"
                }
#line 1192 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1189 "structure_reuse.direct.choose_reuse.m"
              }
#line 1176 "structure_reuse.direct.choose_reuse.m"
            else
#line 1176 "structure_reuse.direct.choose_reuse.m"
              if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1194 "structure_reuse.direct.choose_reuse.m"
                {
#line 1194 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70;
#line 1194 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 1194 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1194 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61;

#line 1195 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1195 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3]));
#line 1195 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2));
#line 1195 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1195 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1195 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1195 "structure_reuse.direct.choose_reuse.m"
                  }
#line 6608 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1195 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1195 "structure_reuse.direct.choose_reuse.m"
                    mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_60, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61);
                  }
#line 1196 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1196 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1196 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61));
#line 1196 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1197 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1194 "structure_reuse.direct.choose_reuse.m"
                }
#line 1176 "structure_reuse.direct.choose_reuse.m"
              else
#line 1176 "structure_reuse.direct.choose_reuse.m"
                if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1181 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1182 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1183 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1181 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1176 "structure_reuse.direct.choose_reuse.m"
                else
#line 1176 "structure_reuse.direct.choose_reuse.m"
                  if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1216 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1216 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1216 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1216 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 4)));
#line 1216 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47;
#line 1216 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48;
#line 1216 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49;
#line 1216 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1217 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1217 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_44, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47);
                      }
#line 1218 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1218 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_45, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48);
                      }
#line 1219 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1219 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_46, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49);
                      }
#line 1220 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1220 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1220 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_64));
#line 1220 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47));
#line 1220 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48));
#line 1220 "structure_reuse.direct.choose_reuse.m"
                        MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49));
#line 1220 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1221 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1216 "structure_reuse.direct.choose_reuse.m"
                    }
#line 1176 "structure_reuse.direct.choose_reuse.m"
                  else
#line 1176 "structure_reuse.direct.choose_reuse.m"
                    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1208 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1208 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1208 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43;
#line 1208 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1212 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1212 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_42, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43);
                        }
#line 1213 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1213 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1213 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63));
#line 1213 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43));
#line 1213 "structure_reuse.direct.choose_reuse.m"
                        }
#line 1214 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1208 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1176 "structure_reuse.direct.choose_reuse.m"
                    else
#line 1176 "structure_reuse.direct.choose_reuse.m"
                      if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1223 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1225 "structure_reuse.direct.choose_reuse.m"
                          {
#line 1225 "structure_reuse.direct.choose_reuse.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuses_in_goal\'/4", (MR_String) "shorthand.");
#line 1225 "structure_reuse.direct.choose_reuse.m"
                            return;
                          }
#line 1223 "structure_reuse.direct.choose_reuse.m"
                        }
#line 1176 "structure_reuse.direct.choose_reuse.m"
                      else
#line 1199 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1199 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73;
#line 1199 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1199 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1199 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40;
#line 1199 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56;
#line 1199 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1200 "structure_reuse.direct.choose_reuse.m"
                          {
#line 1200 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[4]));
#line 1200 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3));
#line 1200 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1200 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1200 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1200 "structure_reuse.direct.choose_reuse.m"
                          }
#line 6779 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1200 "structure_reuse.direct.choose_reuse.m"
                          {
#line 1200 "structure_reuse.direct.choose_reuse.m"
                            mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_39, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40);
                          }
#line 1201 "structure_reuse.direct.choose_reuse.m"
                          {
#line 1201 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_38));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                          }
#line 1202 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1199 "structure_reuse.direct.choose_reuse.m"
                        }
#line 1227 "structure_reuse.direct.choose_reuse.m"
    {
#line 1227 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1227 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52 = base;
#line 1227 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15));
#line 1227 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16));
#line 1227 "structure_reuse.direct.choose_reuse.m"
    }
#line 1169 "structure_reuse.direct.choose_reuse.m"
  }
#line 1166 "structure_reuse.direct.choose_reuse.m"
}

#line 1143 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
#line 1143 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14,
#line 1143 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1143 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 1143 "structure_reuse.direct.choose_reuse.m"
{
#line 1145 "structure_reuse.direct.choose_reuse.m"
  {
#line 1145 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1145 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 1145 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1145 "structure_reuse.direct.choose_reuse.m"
      else
#line 1146 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1145 "structure_reuse.direct.choose_reuse.m"
    else
#line 1145 "structure_reuse.direct.choose_reuse.m"
      {
#line 1145 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 1145 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0));

#line 1145 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1147 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1145 "structure_reuse.direct.choose_reuse.m"
        else
#line 1148 "structure_reuse.direct.choose_reuse.m"
          {
#line 1148 "structure_reuse.direct.choose_reuse.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Y_10 = (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0));
#line 1148 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Ys_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 1148 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12;
#line 1148 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 1148 "structure_reuse.direct.choose_reuse.m"
            {
#line 1148 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Ys_11);
            }
#line 1149 "structure_reuse.direct.choose_reuse.m"
            {
#line 1149 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Y_10);
            }
#line 1151 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1150 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12 = (MR_Integer) 1;
#line 1151 "structure_reuse.direct.choose_reuse.m"
            else
#line 1152 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12 = (MR_Integer) 0;
#line 1148 "structure_reuse.direct.choose_reuse.m"
            {
#line 1148 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12));
#line 1148 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13));
#line 1148 "structure_reuse.direct.choose_reuse.m"
            }
#line 1148 "structure_reuse.direct.choose_reuse.m"
          }
#line 1145 "structure_reuse.direct.choose_reuse.m"
      }
#line 1145 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 1145 "structure_reuse.direct.choose_reuse.m"
  }
#line 1143 "structure_reuse.direct.choose_reuse.m"
}

#line 1114 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
#line 1114 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6,
#line 1114 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7,
#line 1114 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8,
#line 1114 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9)
#line 1114 "structure_reuse.direct.choose_reuse.m"
{
#line 1118 "structure_reuse.direct.choose_reuse.m"
  {
#line 1118 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1118 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10;
#line 1118 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18;
#line 1118 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11;
#line 1118 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12;
#line 1118 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13;
#line 1118 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14;
#line 1118 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;

#line 1130 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6 == (MR_Integer) 0))
#line 1130 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8 == (MR_Integer) 0))
#line 1136 "structure_reuse.direct.choose_reuse.m"
        {
#line 1136 "structure_reuse.direct.choose_reuse.m"
          {
#line 1136 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
          }
#line 1136 "structure_reuse.direct.choose_reuse.m"
        }
#line 1130 "structure_reuse.direct.choose_reuse.m"
      else
#line 1134 "structure_reuse.direct.choose_reuse.m"
        {
#line 1134 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29;

#line 6968 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "structure_reuse.direct.choose_reuse.m"
            if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1145 "structure_reuse.direct.choose_reuse.m"
            else
#line 1146 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6978 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          else
#line 6980 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 6982 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, (MR_Integer) 1)));
#line 1158 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, (MR_Integer) 0)));

#line 1134 "structure_reuse.direct.choose_reuse.m"
              {
#line 1134 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
              }
#line 6992 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            }
#line 1134 "structure_reuse.direct.choose_reuse.m"
          {
#line 1134 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1134 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29));
#line 1134 "structure_reuse.direct.choose_reuse.m"
          }
#line 1134 "structure_reuse.direct.choose_reuse.m"
        }
#line 1130 "structure_reuse.direct.choose_reuse.m"
    else
#line 1130 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8 == (MR_Integer) 0))
#line 1132 "structure_reuse.direct.choose_reuse.m"
        {
#line 1132 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;
#line 1132 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;

#line 1157 "structure_reuse.direct.choose_reuse.m"
          if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1157 "structure_reuse.direct.choose_reuse.m"
          else
#line 1158 "structure_reuse.direct.choose_reuse.m"
            {
#line 1158 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9, (MR_Integer) 0)));

#line 1158 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9, (MR_Integer) 1)));
#line 1158 "structure_reuse.direct.choose_reuse.m"
            }
#line 1132 "structure_reuse.direct.choose_reuse.m"
          {
#line 1132 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25);
          }
#line 1132 "structure_reuse.direct.choose_reuse.m"
          {
#line 1132 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1132 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1132 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24));
#line 1132 "structure_reuse.direct.choose_reuse.m"
          }
#line 1132 "structure_reuse.direct.choose_reuse.m"
        }
#line 1130 "structure_reuse.direct.choose_reuse.m"
      else
#line 1130 "structure_reuse.direct.choose_reuse.m"
        {
#line 1130 "structure_reuse.direct.choose_reuse.m"
          {
#line 1130 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
          }
#line 1130 "structure_reuse.direct.choose_reuse.m"
        }
#line 1121 "structure_reuse.direct.choose_reuse.m"
    {
#line 1121 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7);
    }
#line 7065 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1122 "structure_reuse.direct.choose_reuse.m"
    {
#line 1122 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11);
    }
#line 1123 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13);
#line 1123 "structure_reuse.direct.choose_reuse.m"
    {
#line 1123 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14 = mercury__list__duplicate_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, ((MR_Box) ((MR_Integer) 0)));
    }
#line 1124 "structure_reuse.direct.choose_reuse.m"
    {
#line 1124 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14);
    }
#line 1118 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10;
#line 1118 "structure_reuse.direct.choose_reuse.m"
  }
#line 1114 "structure_reuse.direct.choose_reuse.m"
}

#line 1088 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6,
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7,
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8,
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 1088 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10)
#line 1088 "structure_reuse.direct.choose_reuse.m"
{
#line 1101 "structure_reuse.direct.choose_reuse.m"
  {
#line 1101 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22;
#line 1098 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 1093 "structure_reuse.direct.choose_reuse.m"
    {
#line 1093 "structure_reuse.direct.choose_reuse.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11);
    }
#line 1094 "structure_reuse.direct.choose_reuse.m"
    {
#line 1094 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12);
    }
#line 1093 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1093 "structure_reuse.direct.choose_reuse.m"
      {
#line 1095 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1095 "structure_reuse.direct.choose_reuse.m"
          {
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 0)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 1)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 2)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 3)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 4)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 5)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1095 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 7)));
#line 7183 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7185 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1096 "structure_reuse.direct.choose_reuse.m"
            {
#line 1096 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22);
            }
#line 1096 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1096 "structure_reuse.direct.choose_reuse.m"
              {
#line 1096 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22);
#line 1096 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1096 "structure_reuse.direct.choose_reuse.m"
              }
#line 1093 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1093 "structure_reuse.direct.choose_reuse.m"
              {
#line 1097 "structure_reuse.direct.choose_reuse.m"
                {
#line 1097 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23 = hlds__hlds_data__get_secondary_tag_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22);
                }
#line 1098 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1098 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23, (MR_Integer) 0)));
#line 1093 "structure_reuse.direct.choose_reuse.m"
              }
#line 1095 "structure_reuse.direct.choose_reuse.m"
          }
#line 1093 "structure_reuse.direct.choose_reuse.m"
      }
#line 1101 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1100 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10 = (MR_Integer) 1;
#line 1101 "structure_reuse.direct.choose_reuse.m"
    else
#line 1102 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10 = (MR_Integer) 0;
#line 1101 "structure_reuse.direct.choose_reuse.m"
  }
#line 1088 "structure_reuse.direct.choose_reuse.m"
}

#line 1074 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
#line 1074 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1074 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 1074 "structure_reuse.direct.choose_reuse.m"
{
#line 1076 "structure_reuse.direct.choose_reuse.m"
  {
#line 1076 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1076 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 1076 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 == (MR_Integer) 1))
#line 1076 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 == (MR_Integer) 1))
#line 1079 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 1;
#line 1076 "structure_reuse.direct.choose_reuse.m"
      else
#line 1078 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1076 "structure_reuse.direct.choose_reuse.m"
    else
#line 1076 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 == (MR_Integer) 1))
#line 1077 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1076 "structure_reuse.direct.choose_reuse.m"
      else
#line 1076 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1076 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 1076 "structure_reuse.direct.choose_reuse.m"
  }
#line 1074 "structure_reuse.direct.choose_reuse.m"
}

#line 1072 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
#line 1072 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1072 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1072 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1072 "structure_reuse.direct.choose_reuse.m"
{
#line 1072 "structure_reuse.direct.choose_reuse.m"
  {
#line 1072 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1072 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1072 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3;

#line 1072 "structure_reuse.direct.choose_reuse.m"
    {
#line 1072 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 1072 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3));
#line 1072 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1072 "structure_reuse.direct.choose_reuse.m"
  }
#line 1072 "structure_reuse.direct.choose_reuse.m"
}

#line 1052 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
#line 1052 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4,
#line 1052 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5)
#line 1052 "structure_reuse.direct.choose_reuse.m"
{
#line 1054 "structure_reuse.direct.choose_reuse.m"
  {
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 0)));
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 1)));
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 2)));
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 0)));
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 1)));
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 2)));
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22;
#line 1064 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28;
#line 1064 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 1064 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 1057 "structure_reuse.direct.choose_reuse.m"
    {
#line 1057 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = mercury__bool__and_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons1_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons2_10);
    }
#line 7366 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1064 "structure_reuse.direct.choose_reuse.m"
    {
#line 1064 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
    }
#line 1064 "structure_reuse.direct.choose_reuse.m"
    {
#line 1064 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
    }
#line 1064 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24);
#line 1068 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1066 "structure_reuse.direct.choose_reuse.m"
      {
#line 1066 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29;
#line 1066 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;

#line 1066 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8;
#line 7391 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1067 "structure_reuse.direct.choose_reuse.m"
        {
#line 1067 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
        }
#line 1067 "structure_reuse.direct.choose_reuse.m"
        {
#line 1067 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22 = mercury__list__take_upto_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
        }
#line 1066 "structure_reuse.direct.choose_reuse.m"
      }
#line 1068 "structure_reuse.direct.choose_reuse.m"
    else
#line 1069 "structure_reuse.direct.choose_reuse.m"
      {
#line 1069 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1069 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;

#line 1069 "structure_reuse.direct.choose_reuse.m"
        {
#line 1069 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
        }
#line 1069 "structure_reuse.direct.choose_reuse.m"
        {
#line 1069 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21 = mercury__list__take_upto_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
        }
#line 1070 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11;
#line 1069 "structure_reuse.direct.choose_reuse.m"
      }
#line 7428 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1072 "structure_reuse.direct.choose_reuse.m"
    {
#line 1072 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = mercury__list__map_corresponding_3_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[21], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22);
    }
#line 1058 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_9 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_12);
#line 1057 "structure_reuse.direct.choose_reuse.m"
    {
#line 1057 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, (MR_Float) 2.0000000000000000);
    }
#line 1057 "structure_reuse.direct.choose_reuse.m"
    {
#line 1057 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13));
#line 1057 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14));
#line 1057 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15);
#line 1057 "structure_reuse.direct.choose_reuse.m"
    }
#line 1054 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6;
#line 1054 "structure_reuse.direct.choose_reuse.m"
  }
#line 1052 "structure_reuse.direct.choose_reuse.m"
}

#line 1022 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
#line 1022 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1022 "structure_reuse.direct.choose_reuse.m"
{
#line 1022 "structure_reuse.direct.choose_reuse.m"
  {
#line 1022 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1022 "structure_reuse.direct.choose_reuse.m"
    MR_builtin_longjmp((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0, 1);
#line 1022 "structure_reuse.direct.choose_reuse.m"
  }
#line 1022 "structure_reuse.direct.choose_reuse.m"
}

#line 1023 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
#line 1023 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1023 "structure_reuse.direct.choose_reuse.m"
{
#line 1023 "structure_reuse.direct.choose_reuse.m"
  {
#line 1023 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1023 "structure_reuse.direct.choose_reuse.m"
    (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10);
#line 1023 "structure_reuse.direct.choose_reuse.m"
    {
#line 1023 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
#line 1023 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 1023 "structure_reuse.direct.choose_reuse.m"
  }
#line 1023 "structure_reuse.direct.choose_reuse.m"
}

#line 1022 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
#line 1022 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1022 "structure_reuse.direct.choose_reuse.m"
{
#line 1022 "structure_reuse.direct.choose_reuse.m"
  {
#line 1022 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1022 "structure_reuse.direct.choose_reuse.m"
    {
#line 1025 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 2)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 0)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 1)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 3)));

#line 1025 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1024 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
#line 1024 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded)
#line 1024 "structure_reuse.direct.choose_reuse.m"
        {
#line 1024 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
#line 1024 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 1022 "structure_reuse.direct.choose_reuse.m"
    }
#line 1022 "structure_reuse.direct.choose_reuse.m"
  }
#line 1022 "structure_reuse.direct.choose_reuse.m"
}

#line 1022 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
#line 1022 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1022 "structure_reuse.direct.choose_reuse.m"
{
#line 1022 "structure_reuse.direct.choose_reuse.m"
  {
#line 1022 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1022 "structure_reuse.direct.choose_reuse.m"
    if (MR_builtin_setjmp((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0) == 0)
#line 1022 "structure_reuse.direct.choose_reuse.m"
      {
#line 1022 "structure_reuse.direct.choose_reuse.m"
        {
#line 1023 "structure_reuse.direct.choose_reuse.m"
          {
#line 1023 "structure_reuse.direct.choose_reuse.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, &(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10, (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
          }
#line 1022 "structure_reuse.direct.choose_reuse.m"
        }
#line 1022 "structure_reuse.direct.choose_reuse.m"
        (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
#line 1022 "structure_reuse.direct.choose_reuse.m"
      }
#line 1022 "structure_reuse.direct.choose_reuse.m"
    else
#line 1022 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1022 "structure_reuse.direct.choose_reuse.m"
  }
#line 1022 "structure_reuse.direct.choose_reuse.m"
}

#line 1015 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
#line 1015 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3,
#line 1015 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)
#line 1015 "structure_reuse.direct.choose_reuse.m"
{
#line 1015 "structure_reuse.direct.choose_reuse.m"
  {
#line 1015 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env;

#line 1019 "structure_reuse.direct.choose_reuse.m"
    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1019 "structure_reuse.direct.choose_reuse.m"
      {
#line 1019 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 3)));
#line 1019 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8;
#line 1019 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 1)));
#line 1019 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 2)));
#line 1021 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 1021 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 1021 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 1021 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40;
#line 1021 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;
#line 1021 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 1021 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43;

#line 1020 "structure_reuse.direct.choose_reuse.m"
        {
#line 1020 "structure_reuse.direct.choose_reuse.m"
          check_hlds__type_util__get_cons_defn_det_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtor_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8);
        }
#line 1021 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 0)));
#line 1021 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 1)));
#line 1021 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 2)));
#line 1021 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 3)));
#line 1021 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 4)));
#line 1021 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 5)));
#line 1021 "structure_reuse.direct.choose_reuse.m"
        (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 6)));
#line 1021 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 7)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
        {
#line 1022 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env);
        }
#line 1022 "structure_reuse.direct.choose_reuse.m"
        (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
#line 1019 "structure_reuse.direct.choose_reuse.m"
      }
#line 1019 "structure_reuse.direct.choose_reuse.m"
    else
#line 1019 "structure_reuse.direct.choose_reuse.m"
      if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1028 "structure_reuse.direct.choose_reuse.m"
        (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1019 "structure_reuse.direct.choose_reuse.m"
      else
#line 1019 "structure_reuse.direct.choose_reuse.m"
        if (((((((((((((((((((((((((((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 11)))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 4)))))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 9)))))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 5)))))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 8)))))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 2)))))) || (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) == (MR_Integer) 10)))))) || (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) == (MR_mktag((MR_Integer) 1)))))) || ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 1043 "structure_reuse.direct.choose_reuse.m"
          {
#line 1044 "structure_reuse.direct.choose_reuse.m"
            {
#line 1044 "structure_reuse.direct.choose_reuse.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
            }
#line 1043 "structure_reuse.direct.choose_reuse.m"
            (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1043 "structure_reuse.direct.choose_reuse.m"
          }
#line 1019 "structure_reuse.direct.choose_reuse.m"
        else
#line 1019 "structure_reuse.direct.choose_reuse.m"
          (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
#line 1019 "structure_reuse.direct.choose_reuse.m"
    return (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
#line 1015 "structure_reuse.direct.choose_reuse.m"
  }
#line 1015 "structure_reuse.direct.choose_reuse.m"
}

#line 946 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11,
#line 946 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12)
#line 946 "structure_reuse.direct.choose_reuse.m"
{
#line 950 "structure_reuse.direct.choose_reuse.m"
  {
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 0)));
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 2)));
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 3)));
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 1)));
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 3)));
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 950 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 1)));
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 4)));
#line 953 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 0)));
#line 953 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 2)));
#line 985 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 985 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 985 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83;
#line 1093 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81;
#line 1095 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83;
#line 1098 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85;

#line 956 "structure_reuse.direct.choose_reuse.m"
    {
#line 956 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15);
    }
#line 958 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 957 "structure_reuse.direct.choose_reuse.m"
      {
#line 957 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 = (MR_Integer) 1;
#line 957 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 957 "structure_reuse.direct.choose_reuse.m"
      }
#line 958 "structure_reuse.direct.choose_reuse.m"
    else
#line 959 "structure_reuse.direct.choose_reuse.m"
      {
#line 959 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 = (MR_Integer) 0;
#line 964 "structure_reuse.direct.choose_reuse.m"
        {
#line 964 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9);
        }
#line 959 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 965 "structure_reuse.direct.choose_reuse.m"
          {
#line 965 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15);
          }
#line 959 "structure_reuse.direct.choose_reuse.m"
      }
#line 950 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 950 "structure_reuse.direct.choose_reuse.m"
      {
#line 7873 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 968 "structure_reuse.direct.choose_reuse.m"
        {
#line 968 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10);
        }
#line 969 "structure_reuse.direct.choose_reuse.m"
        {
#line 969 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
        }
#line 972 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 == (MR_Integer) 0);
#line 972 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 950 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 950 "structure_reuse.direct.choose_reuse.m"
          {
#line 976 "structure_reuse.direct.choose_reuse.m"
            {
#line 976 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24);
            }
#line 978 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24 == (MR_Integer) 1);
#line 978 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 978 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Integer) 1;
#line 978 "structure_reuse.direct.choose_reuse.m"
            else
#line 978 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Integer) 0;
#line 978 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35);
#line 985 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 0)));
#line 985 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 1)));
#line 985 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 2)));
#line 985 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 3)));
#line 1093 "structure_reuse.direct.choose_reuse.m"
            {
#line 1093 "structure_reuse.direct.choose_reuse.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72);
            }
#line 1094 "structure_reuse.direct.choose_reuse.m"
            {
#line 1094 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73);
            }
#line 1093 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1093 "structure_reuse.direct.choose_reuse.m"
              {
#line 1095 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73)) == (MR_mktag((MR_Integer) 1)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1095 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 0)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 1)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 2)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 3)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 4)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 5)));
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1095 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 7)));
#line 7956 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7958 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1096 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83);
                    }
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1096 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1096 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83);
#line 1096 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1096 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1093 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1093 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1097 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1097 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84 = hlds__hlds_data__get_secondary_tag_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83);
                        }
#line 1098 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84)) == (MR_mktag((MR_Integer) 1)));
#line 1098 "structure_reuse.direct.choose_reuse.m"
                        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1098 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84, (MR_Integer) 0)));
#line 1093 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1095 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1093 "structure_reuse.direct.choose_reuse.m"
              }
#line 7996 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 7998 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              {
#line 977 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 + (MR_Integer) 1);
#line 981 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26);
#line 8004 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8006 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  {
#line 986 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 990 "structure_reuse.direct.choose_reuse.m"
                    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 990 "structure_reuse.direct.choose_reuse.m"
                    else
#line 988 "structure_reuse.direct.choose_reuse.m"
                      {
#line 988 "structure_reuse.direct.choose_reuse.m"
                        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27, (MR_Integer) 0)));

#line 989 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_29);
#line 988 "structure_reuse.direct.choose_reuse.m"
                      }
#line 8025 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8027 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 999 "structure_reuse.direct.choose_reuse.m"
                        {
#line 999 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
                        }
#line 999 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 8036 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      }
#line 8038 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  }
#line 8040 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              }
#line 8042 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            else
#line 8044 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              {
#line 977 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 + (MR_Integer) 0);
#line 981 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26);
#line 8050 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8052 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  {
#line 986 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 990 "structure_reuse.direct.choose_reuse.m"
                    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 990 "structure_reuse.direct.choose_reuse.m"
                    else
#line 988 "structure_reuse.direct.choose_reuse.m"
                      {
#line 988 "structure_reuse.direct.choose_reuse.m"
                        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27, (MR_Integer) 0)));

#line 989 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_88);
#line 988 "structure_reuse.direct.choose_reuse.m"
                      }
#line 8071 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8073 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 999 "structure_reuse.direct.choose_reuse.m"
                        {
#line 999 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0((MR_Integer) 0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
                        }
#line 999 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 8082 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      }
#line 8084 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  }
#line 8086 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              }
#line 950 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 950 "structure_reuse.direct.choose_reuse.m"
              {
#line 8092 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1002 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = (MR_Integer) 0;
#line 1001 "structure_reuse.direct.choose_reuse.m"
                {
#line 1001 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = mercury__list__delete_all_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37)));
                }
#line 1001 "structure_reuse.direct.choose_reuse.m"
                {
#line 1001 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36);
                }
#line 1006 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 1006 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1006 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32 = (MR_Integer) 0;
#line 1006 "structure_reuse.direct.choose_reuse.m"
                else
#line 1006 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32 = (MR_Integer) 1;
#line 1008 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = (MR_Integer) 6;
#line 1008 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 915 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = (MR_Integer) 1;
#line 1009 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45);
#line 911 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = (MR_Integer) 1;
#line 1009 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31);
#line 1009 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48);
#line 1010 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46);
#line 915 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = (MR_Integer) 1;
#line 1010 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32);
#line 1011 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49);
#line 907 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = (MR_Integer) 5;
#line 1011 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28);
#line 1008 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 1012 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = (MR_Integer) 0;
#line 1012 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53);
#line 950 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 950 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1013 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1013 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33);
                    }
#line 1013 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1013 "structure_reuse.direct.choose_reuse.m"
                      MR_Word base;
#line 1013 "structure_reuse.direct.choose_reuse.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12 = base;
#line 1013 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20));
#line 1013 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30));
#line 1013 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54);
#line 1013 "structure_reuse.direct.choose_reuse.m"
                    }
#line 1013 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 950 "structure_reuse.direct.choose_reuse.m"
                  }
#line 950 "structure_reuse.direct.choose_reuse.m"
              }
#line 950 "structure_reuse.direct.choose_reuse.m"
          }
#line 950 "structure_reuse.direct.choose_reuse.m"
      }
#line 950 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 950 "structure_reuse.direct.choose_reuse.m"
  }
#line 946 "structure_reuse.direct.choose_reuse.m"
}

#line 1050 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2(
#line 1050 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1050 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1050 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1050 "structure_reuse.direct.choose_reuse.m"
{
#line 1050 "structure_reuse.direct.choose_reuse.m"
  {
#line 1050 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1050 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1050 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6;

#line 1050 "structure_reuse.direct.choose_reuse.m"
    {
#line 1050 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 1050 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6));
#line 1050 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1050 "structure_reuse.direct.choose_reuse.m"
  }
#line 1050 "structure_reuse.direct.choose_reuse.m"
}

#line 926 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
#line 926 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 926 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 926 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 926 "structure_reuse.direct.choose_reuse.m"
{
#line 926 "structure_reuse.direct.choose_reuse.m"
  {
#line 926 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 926 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 926 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12;

#line 926 "structure_reuse.direct.choose_reuse.m"
    {
#line 926 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12);
    }
#line 926 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 926 "structure_reuse.direct.choose_reuse.m"
      {
#line 926 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12));
#line 926 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 926 "structure_reuse.direct.choose_reuse.m"
      }
#line 926 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 926 "structure_reuse.direct.choose_reuse.m"
  }
#line 926 "structure_reuse.direct.choose_reuse.m"
}

#line 917 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18,
#line 917 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19)
#line 917 "structure_reuse.direct.choose_reuse.m"
{
#line 920 "structure_reuse.direct.choose_reuse.m"
  {
#line 920 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 920 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 0)));
#line 921 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 1)));
#line 921 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
#line 921 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 3)));
#line 932 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16;
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32;
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15;
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29;
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30;
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 1049 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16;

#line 926 "structure_reuse.direct.choose_reuse.m"
    {
#line 926 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 926 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[0]));
#line 926 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1));
#line 926 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 926 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8));
#line 926 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9));
#line 926 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10));
#line 926 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11));
#line 926 "structure_reuse.direct.choose_reuse.m"
    }
#line 926 "structure_reuse.direct.choose_reuse.m"
    {
#line 926 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__list__map_3_p_2((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_14, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15);
    }
#line 927 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 927 "structure_reuse.direct.choose_reuse.m"
      {
#line 1049 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15)) == (MR_mktag((MR_Integer) 1)));
#line 1049 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1049 "structure_reuse.direct.choose_reuse.m"
          {
#line 1049 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15, (MR_Integer) 0)));
#line 1049 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15, (MR_Integer) 1)));
#line 8353 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0;
#line 1050 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[20];
#line 1049 "structure_reuse.direct.choose_reuse.m"
            {
#line 1049 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16 = mercury__list__foldl_3_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29)));
            }
#line 1049 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16);
#line 1049 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1049 "structure_reuse.direct.choose_reuse.m"
          }
#line 927 "structure_reuse.direct.choose_reuse.m"
      }
#line 932 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 930 "structure_reuse.direct.choose_reuse.m"
      {
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 930 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52;
#line 345 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 345 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 345 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;

#line 930 "structure_reuse.direct.choose_reuse.m"
        {
#line 930 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 930 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12));
#line 930 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16));
#line 930 "structure_reuse.direct.choose_reuse.m"
        }
#line 340 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 0)));
#line 340 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 1)));
#line 340 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
#line 340 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 3)));
#line 341 "structure_reuse.direct.choose_reuse.m"
        {
#line 341 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17));
#line 341 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40));
#line 341 "structure_reuse.direct.choose_reuse.m"
        }
#line 342 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42 + (MR_Integer) 1);
#line 343 "structure_reuse.direct.choose_reuse.m"
        {
#line 343 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42);
        }
#line 344 "structure_reuse.direct.choose_reuse.m"
        {
#line 344 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44);
        }
#line 345 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45);
#line 345 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, (MR_Integer) 0)));
#line 345 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, (MR_Integer) 1)));
#line 345 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 0)));
#line 345 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 1)));
#line 345 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 2)));
#line 345 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 345 "structure_reuse.direct.choose_reuse.m"
        {
#line 345 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46);
        }
#line 346 "structure_reuse.direct.choose_reuse.m"
        {
#line 346 "structure_reuse.direct.choose_reuse.m"
          MR_Word base;
#line 346 "structure_reuse.direct.choose_reuse.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 346 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19 = base;
#line 346 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39));
#line 346 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43));
#line 346 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47);
#line 346 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44));
#line 346 "structure_reuse.direct.choose_reuse.m"
        }
#line 930 "structure_reuse.direct.choose_reuse.m"
      }
#line 932 "structure_reuse.direct.choose_reuse.m"
    else
#line 931 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18;
#line 920 "structure_reuse.direct.choose_reuse.m"
  }
#line 917 "structure_reuse.direct.choose_reuse.m"
}

#line 884 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(
#line 884 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1)
#line 884 "structure_reuse.direct.choose_reuse.m"
{
#line 886 "structure_reuse.direct.choose_reuse.m"
  {
#line 886 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 886 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 886 "structure_reuse.direct.choose_reuse.m"
  }
#line 884 "structure_reuse.direct.choose_reuse.m"
}

#line 880 "structure_reuse.direct.choose_reuse.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
#line 880 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 880 "structure_reuse.direct.choose_reuse.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5)
#line 880 "structure_reuse.direct.choose_reuse.m"
{
#line 882 "structure_reuse.direct.choose_reuse.m"
  {
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));

#line 882 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
#line 882 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 882 "structure_reuse.direct.choose_reuse.m"
  }
#line 880 "structure_reuse.direct.choose_reuse.m"
}

#line 854 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
#line 854 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 854 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 854 "structure_reuse.direct.choose_reuse.m"
{
#line 854 "structure_reuse.direct.choose_reuse.m"
  {
#line 854 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 854 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 854 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_86;

#line 854 "structure_reuse.direct.choose_reuse.m"
    {
#line 854 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_86 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__854__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 854 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_86));
#line 854 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 854 "structure_reuse.direct.choose_reuse.m"
  }
#line 854 "structure_reuse.direct.choose_reuse.m"
}

#line 807 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(
#line 807 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 807 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6,
#line 807 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71,
#line 807 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72)
#line 807 "structure_reuse.direct.choose_reuse.m"
{
#line 810 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 810 "structure_reuse.direct.choose_reuse.m"
    {
#line 810 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 810 "structure_reuse.direct.choose_reuse.m"
      {
#line 810 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 810 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6, (MR_Integer) 0)));
#line 810 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6, (MR_Integer) 1)));

#line 840 "structure_reuse.direct.choose_reuse.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 0))))
#line 864 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 840 "structure_reuse.direct.choose_reuse.m"
        else
#line 840 "structure_reuse.direct.choose_reuse.m"
          if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 2))))
#line 841 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 840 "structure_reuse.direct.choose_reuse.m"
          else
#line 840 "structure_reuse.direct.choose_reuse.m"
            if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 1))))
#line 813 "structure_reuse.direct.choose_reuse.m"
              {
#line 813 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 813 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)));
#line 813 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));
#line 813 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 813 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 4)));

#line 831 "structure_reuse.direct.choose_reuse.m"
                if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13)) == (MR_mktag((MR_Integer) 2))))
#line 833 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 831 "structure_reuse.direct.choose_reuse.m"
                else
#line 831 "structure_reuse.direct.choose_reuse.m"
                  if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13)) == (MR_mktag((MR_Integer) 0))))
#line 815 "structure_reuse.direct.choose_reuse.m"
                    {
#line 815 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 0)));
#line 815 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 1)));
#line 815 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 2)));
#line 815 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 3)));
#line 815 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 4)));
#line 815 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 5)));
#line 815 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 6)));
#line 817 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22;
#line 817 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 3)));
#line 817 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94;
#line 817 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95;
#line 817 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 0)));
#line 817 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 1)));
#line 817 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 2)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_104_104;
#line 818 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_105_105;
#line 818 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106;

#line 817 "structure_reuse.direct.choose_reuse.m"
                      {
#line 817 "structure_reuse.direct.choose_reuse.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22);
                      }
#line 818 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 0)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 1)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 2)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 3)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                      {
#line 818 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__util__top_cell_may_be_reusable_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22);
                      }
#line 817 "structure_reuse.direct.choose_reuse.m"
                      if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 817 "structure_reuse.direct.choose_reuse.m"
                        {
#line 822 "structure_reuse.direct.choose_reuse.m"
                          {
#line 822 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9);
                          }
#line 822 "structure_reuse.direct.choose_reuse.m"
                          {
#line 822 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95);
                          }
#line 817 "structure_reuse.direct.choose_reuse.m"
                        }
#line 828 "structure_reuse.direct.choose_reuse.m"
                      if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 826 "structure_reuse.direct.choose_reuse.m"
                        {
#line 826 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96;

#line 826 "structure_reuse.direct.choose_reuse.m"
                          {
#line 826 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9);
                          }
#line 826 "structure_reuse.direct.choose_reuse.m"
                          {
#line 826 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 826 "structure_reuse.direct.choose_reuse.m"
                            return;
                          }
#line 826 "structure_reuse.direct.choose_reuse.m"
                        }
#line 828 "structure_reuse.direct.choose_reuse.m"
                      else
#line 826 "structure_reuse.direct.choose_reuse.m"
                        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 815 "structure_reuse.direct.choose_reuse.m"
                    }
#line 831 "structure_reuse.direct.choose_reuse.m"
                  else
#line 831 "structure_reuse.direct.choose_reuse.m"
                    if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13)) == (MR_mktag((MR_Integer) 1))))
#line 832 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 831 "structure_reuse.direct.choose_reuse.m"
                    else
#line 831 "structure_reuse.direct.choose_reuse.m"
                      if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 837 "structure_reuse.direct.choose_reuse.m"
                        {
#line 838 "structure_reuse.direct.choose_reuse.m"
                          {
#line 838 "structure_reuse.direct.choose_reuse.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "complicated unify");
#line 838 "structure_reuse.direct.choose_reuse.m"
                            return;
                          }
#line 837 "structure_reuse.direct.choose_reuse.m"
                        }
#line 831 "structure_reuse.direct.choose_reuse.m"
                      else
#line 834 "structure_reuse.direct.choose_reuse.m"
                        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 813 "structure_reuse.direct.choose_reuse.m"
              }
#line 840 "structure_reuse.direct.choose_reuse.m"
            else
#line 840 "structure_reuse.direct.choose_reuse.m"
              if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 845 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 840 "structure_reuse.direct.choose_reuse.m"
              else
#line 840 "structure_reuse.direct.choose_reuse.m"
                if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 847 "structure_reuse.direct.choose_reuse.m"
                  {
#line 847 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 847 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 848 "structure_reuse.direct.choose_reuse.m"
                    {
#line 848 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_55, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 848 "structure_reuse.direct.choose_reuse.m"
                      return;
                    }
#line 847 "structure_reuse.direct.choose_reuse.m"
                  }
#line 840 "structure_reuse.direct.choose_reuse.m"
                else
#line 840 "structure_reuse.direct.choose_reuse.m"
                  if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 850 "structure_reuse.direct.choose_reuse.m"
                    {
#line 850 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 851 "structure_reuse.direct.choose_reuse.m"
                      {
#line 851 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_98, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 851 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 850 "structure_reuse.direct.choose_reuse.m"
                    }
#line 840 "structure_reuse.direct.choose_reuse.m"
                  else
#line 840 "structure_reuse.direct.choose_reuse.m"
                    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 843 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 840 "structure_reuse.direct.choose_reuse.m"
                    else
#line 840 "structure_reuse.direct.choose_reuse.m"
                      if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 857 "structure_reuse.direct.choose_reuse.m"
                        {
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 4)));
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65;
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66;
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82;
#line 857 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 859 "structure_reuse.direct.choose_reuse.m"
                          {
#line 859 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_62));
#line 859 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 859 "structure_reuse.direct.choose_reuse.m"
                          }
#line 859 "structure_reuse.direct.choose_reuse.m"
                          {
#line 859 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_61));
#line 859 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 859 "structure_reuse.direct.choose_reuse.m"
                          }
#line 859 "structure_reuse.direct.choose_reuse.m"
                          {
#line 859 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65);
                          }
#line 861 "structure_reuse.direct.choose_reuse.m"
                          {
#line 861 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_63, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66);
                          }
#line 862 "structure_reuse.direct.choose_reuse.m"
                          {
#line 862 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66));
#line 862 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 862 "structure_reuse.direct.choose_reuse.m"
                          }
#line 862 "structure_reuse.direct.choose_reuse.m"
                          {
#line 862 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65));
#line 862 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82));
#line 862 "structure_reuse.direct.choose_reuse.m"
                          }
#line 862 "structure_reuse.direct.choose_reuse.m"
                          {
#line 862 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 862 "structure_reuse.direct.choose_reuse.m"
                            return;
                          }
#line 857 "structure_reuse.direct.choose_reuse.m"
                        }
#line 840 "structure_reuse.direct.choose_reuse.m"
                      else
#line 840 "structure_reuse.direct.choose_reuse.m"
                        if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 866 "structure_reuse.direct.choose_reuse.m"
                          {
#line 866 "structure_reuse.direct.choose_reuse.m"
                            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 866 "structure_reuse.direct.choose_reuse.m"
                            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 870 "structure_reuse.direct.choose_reuse.m"
                            /* direct tailcall eliminated */
#line 870 "structure_reuse.direct.choose_reuse.m"
                            {
#line 870 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal__tmp_copy_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_69;

#line 870 "structure_reuse.direct.choose_reuse.m"
                              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal__tmp_copy_6;
#line 870 "structure_reuse.direct.choose_reuse.m"
                            }
#line 870 "structure_reuse.direct.choose_reuse.m"
                            continue;
#line 866 "structure_reuse.direct.choose_reuse.m"
                          }
#line 840 "structure_reuse.direct.choose_reuse.m"
                        else
#line 840 "structure_reuse.direct.choose_reuse.m"
                          if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 872 "structure_reuse.direct.choose_reuse.m"
                            {
#line 873 "structure_reuse.direct.choose_reuse.m"
                              {
#line 873 "structure_reuse.direct.choose_reuse.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "shorthand");
#line 873 "structure_reuse.direct.choose_reuse.m"
                                return;
                              }
#line 872 "structure_reuse.direct.choose_reuse.m"
                            }
#line 840 "structure_reuse.direct.choose_reuse.m"
                          else
#line 853 "structure_reuse.direct.choose_reuse.m"
                            {
#line 853 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 853 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100;
#line 853 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));
#line 853 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));

#line 854 "structure_reuse.direct.choose_reuse.m"
                              {
#line 854 "structure_reuse.direct.choose_reuse.m"
                                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[19], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_58);
                              }
#line 855 "structure_reuse.direct.choose_reuse.m"
                              {
#line 855 "structure_reuse.direct.choose_reuse.m"
                                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 855 "structure_reuse.direct.choose_reuse.m"
                                return;
                              }
#line 853 "structure_reuse.direct.choose_reuse.m"
                            }
#line 810 "structure_reuse.direct.choose_reuse.m"
      }
#line 810 "structure_reuse.direct.choose_reuse.m"
      break;
#line 810 "structure_reuse.direct.choose_reuse.m"
    }
#line 807 "structure_reuse.direct.choose_reuse.m"
}

#line 801 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(
#line 801 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 801 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6,
#line 801 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 801 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8)
#line 801 "structure_reuse.direct.choose_reuse.m"
{
#line 805 "structure_reuse.direct.choose_reuse.m"
  {
#line 805 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 805 "structure_reuse.direct.choose_reuse.m"
    {
#line 805 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8);
#line 805 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 805 "structure_reuse.direct.choose_reuse.m"
  }
#line 801 "structure_reuse.direct.choose_reuse.m"
}

#line 433 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 433 "structure_reuse.direct.choose_reuse.m"
{
#line 433 "structure_reuse.direct.choose_reuse.m"
  {
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_23;

#line 433 "structure_reuse.direct.choose_reuse.m"
    {
#line 433 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__433__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_23);
    }
#line 433 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_23));
#line 433 "structure_reuse.direct.choose_reuse.m"
  }
#line 433 "structure_reuse.direct.choose_reuse.m"
}

#line 796 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
#line 796 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 796 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 796 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 796 "structure_reuse.direct.choose_reuse.m"
{
#line 796 "structure_reuse.direct.choose_reuse.m"
  {
#line 796 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 796 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8;

#line 796 "structure_reuse.direct.choose_reuse.m"
    {
#line 796 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8);
    }
#line 796 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8));
#line 796 "structure_reuse.direct.choose_reuse.m"
  }
#line 796 "structure_reuse.direct.choose_reuse.m"
}

#line 788 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
#line 788 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 788 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6,
#line 788 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 788 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12)
#line 788 "structure_reuse.direct.choose_reuse.m"
{
#line 793 "structure_reuse.direct.choose_reuse.m"
  {
#line 793 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 793 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 793 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11;
#line 793 "structure_reuse.direct.choose_reuse.m"
    else
#line 795 "structure_reuse.direct.choose_reuse.m"
      {
#line 795 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10;
#line 795 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 796 "structure_reuse.direct.choose_reuse.m"
        {
#line 796 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 796 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 796 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1));
#line 796 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 796 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 796 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 796 "structure_reuse.direct.choose_reuse.m"
        }
#line 796 "structure_reuse.direct.choose_reuse.m"
        {
#line 796 "structure_reuse.direct.choose_reuse.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10);
        }
#line 431 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "structure_reuse.direct.choose_reuse.m"
          {
#line 445 "structure_reuse.direct.choose_reuse.m"
            {
#line 445 "structure_reuse.direct.choose_reuse.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
#line 445 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 444 "structure_reuse.direct.choose_reuse.m"
          }
#line 431 "structure_reuse.direct.choose_reuse.m"
        else
#line 431 "structure_reuse.direct.choose_reuse.m"
          {
#line 431 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 431 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, (MR_Integer) 0)));
#line 431 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, (MR_Integer) 1)));
#line 431 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23;
#line 431 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31;
#line 431 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 431 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 431 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 440 "structure_reuse.direct.choose_reuse.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31;
#line 442 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74;
#line 442 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75;
#line 442 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;
#line 441 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 441 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 441 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 441 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79;

#line 432 "structure_reuse.direct.choose_reuse.m"
            {
#line 432 "structure_reuse.direct.choose_reuse.m"
              mercury__list__length_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23);
            }
#line 440 "structure_reuse.direct.choose_reuse.m"
            {
#line 440 "structure_reuse.direct.choose_reuse.m"
              mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[18], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_22, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_21)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31);
            }
#line 440 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31);
#line 442 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 0)));
#line 442 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 1)));
#line 442 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 2)));
#line 442 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 3)));
#line 442 "structure_reuse.direct.choose_reuse.m"
            {
#line 442 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23);
            }
#line 441 "structure_reuse.direct.choose_reuse.m"
            {
#line 441 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49);
            }
#line 441 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 0)));
#line 441 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 1)));
#line 441 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 2)));
#line 441 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 3)));
#line 441 "structure_reuse.direct.choose_reuse.m"
            {
#line 441 "structure_reuse.direct.choose_reuse.m"
              MR_Word base;
#line 441 "structure_reuse.direct.choose_reuse.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = base;
#line 441 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77));
#line 441 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 441 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47);
#line 441 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80));
#line 441 "structure_reuse.direct.choose_reuse.m"
            }
#line 431 "structure_reuse.direct.choose_reuse.m"
          }
#line 795 "structure_reuse.direct.choose_reuse.m"
      }
#line 793 "structure_reuse.direct.choose_reuse.m"
  }
#line 788 "structure_reuse.direct.choose_reuse.m"
}

#line 413 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 413 "structure_reuse.direct.choose_reuse.m"
{
#line 413 "structure_reuse.direct.choose_reuse.m"
  {
#line 413 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 413 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6;

#line 413 "structure_reuse.direct.choose_reuse.m"
    {
#line 413 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6);
    }
#line 413 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6));
#line 413 "structure_reuse.direct.choose_reuse.m"
  }
#line 413 "structure_reuse.direct.choose_reuse.m"
}

#line 878 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 878 "structure_reuse.direct.choose_reuse.m"
{
#line 878 "structure_reuse.direct.choose_reuse.m"
  {
#line 878 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 878 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 878 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3;

#line 878 "structure_reuse.direct.choose_reuse.m"
    {
#line 878 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 878 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3));
#line 878 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 878 "structure_reuse.direct.choose_reuse.m"
  }
#line 878 "structure_reuse.direct.choose_reuse.m"
}

#line 776 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 776 "structure_reuse.direct.choose_reuse.m"
{
#line 776 "structure_reuse.direct.choose_reuse.m"
  {
#line 776 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 776 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8;

#line 776 "structure_reuse.direct.choose_reuse.m"
    {
#line 776 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8);
    }
#line 776 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8));
#line 776 "structure_reuse.direct.choose_reuse.m"
  }
#line 776 "structure_reuse.direct.choose_reuse.m"
}

#line 771 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
#line 771 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 771 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6,
#line 771 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 771 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12)
#line 771 "structure_reuse.direct.choose_reuse.m"
{
#line 774 "structure_reuse.direct.choose_reuse.m"
  {
#line 774 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 774 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9;
#line 774 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10;
#line 774 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 774 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14;
#line 774 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35;
#line 774 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 878 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10;
#line 779 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 779 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 779 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 779 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19;

#line 776 "structure_reuse.direct.choose_reuse.m"
    {
#line 776 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1));
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 776 "structure_reuse.direct.choose_reuse.m"
    }
#line 776 "structure_reuse.direct.choose_reuse.m"
    {
#line 776 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9);
    }
#line 878 "structure_reuse.direct.choose_reuse.m"
    {
#line 878 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[16], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9, ((MR_Box) ((MR_Integer) 0)));
    }
#line 878 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10 = ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10);
#line 413 "structure_reuse.direct.choose_reuse.m"
    {
#line 413 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 413 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9));
#line 413 "structure_reuse.direct.choose_reuse.m"
    }
#line 413 "structure_reuse.direct.choose_reuse.m"
    {
#line 413 "structure_reuse.direct.choose_reuse.m"
      mercury__list__sort_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[17], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35);
    }
#line 416 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "structure_reuse.direct.choose_reuse.m"
      {
#line 418 "structure_reuse.direct.choose_reuse.m"
        {
#line 418 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
#line 418 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 417 "structure_reuse.direct.choose_reuse.m"
      }
#line 416 "structure_reuse.direct.choose_reuse.m"
    else
#line 415 "structure_reuse.direct.choose_reuse.m"
      {
#line 415 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;

#line 415 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35, (MR_Integer) 0)));
#line 415 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35, (MR_Integer) 1)));
#line 415 "structure_reuse.direct.choose_reuse.m"
      }
#line 779 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 0)));
#line 779 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 1)));
#line 779 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 2)));
#line 779 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 3)));
#line 779 "structure_reuse.direct.choose_reuse.m"
    {
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 779 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 779 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = base;
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16));
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17));
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10));
#line 779 "structure_reuse.direct.choose_reuse.m"
    }
#line 774 "structure_reuse.direct.choose_reuse.m"
  }
#line 771 "structure_reuse.direct.choose_reuse.m"
}

#line 745 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
#line 745 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3)
#line 745 "structure_reuse.direct.choose_reuse.m"
{
#line 747 "structure_reuse.direct.choose_reuse.m"
  {
#line 747 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 747 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 0)));
#line 747 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 1)));
#line 747 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 2)));
#line 747 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 3)));

#line 747 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 747 "structure_reuse.direct.choose_reuse.m"
  }
#line 745 "structure_reuse.direct.choose_reuse.m"
}

#line 742 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
#line 742 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 742 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 742 "structure_reuse.direct.choose_reuse.m"
{
#line 742 "structure_reuse.direct.choose_reuse.m"
  {
#line 742 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 742 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 742 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2;

#line 742 "structure_reuse.direct.choose_reuse.m"
    {
#line 742 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 742 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2));
#line 742 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 742 "structure_reuse.direct.choose_reuse.m"
  }
#line 742 "structure_reuse.direct.choose_reuse.m"
}

#line 737 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
#line 737 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5,
#line 737 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6,
#line 737 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10,
#line 737 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11)
#line 737 "structure_reuse.direct.choose_reuse.m"
{
#line 740 "structure_reuse.direct.choose_reuse.m"
  {
#line 740 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 740 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 740 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17;
#line 740 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8;
#line 740 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9;
#line 740 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 741 "structure_reuse.direct.choose_reuse.m"
    {
#line 741 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__lookup_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8);
    }
#line 9569 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;
#line 742 "structure_reuse.direct.choose_reuse.m"
    {
#line 742 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[15], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8);
    }
#line 742 "structure_reuse.direct.choose_reuse.m"
    {
#line 742 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9 = mercury__list__condense_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12);
    }
#line 743 "structure_reuse.direct.choose_reuse.m"
    {
#line 743 "structure_reuse.direct.choose_reuse.m"
      mercury__list__append_3_p_1(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11);
#line 743 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 740 "structure_reuse.direct.choose_reuse.m"
  }
#line 737 "structure_reuse.direct.choose_reuse.m"
}

#line 413 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 413 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 413 "structure_reuse.direct.choose_reuse.m"
{
#line 413 "structure_reuse.direct.choose_reuse.m"
  {
#line 413 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 413 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6;

#line 413 "structure_reuse.direct.choose_reuse.m"
    {
#line 413 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6);
    }
#line 413 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6));
#line 413 "structure_reuse.direct.choose_reuse.m"
  }
#line 413 "structure_reuse.direct.choose_reuse.m"
}

#line 878 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 878 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 878 "structure_reuse.direct.choose_reuse.m"
{
#line 878 "structure_reuse.direct.choose_reuse.m"
  {
#line 878 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 878 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 878 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3;

#line 878 "structure_reuse.direct.choose_reuse.m"
    {
#line 878 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 878 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3));
#line 878 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 878 "structure_reuse.direct.choose_reuse.m"
  }
#line 878 "structure_reuse.direct.choose_reuse.m"
}

#line 776 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 776 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 776 "structure_reuse.direct.choose_reuse.m"
{
#line 776 "structure_reuse.direct.choose_reuse.m"
  {
#line 776 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 776 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8;

#line 776 "structure_reuse.direct.choose_reuse.m"
    {
#line 776 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8);
    }
#line 776 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8));
#line 776 "structure_reuse.direct.choose_reuse.m"
  }
#line 776 "structure_reuse.direct.choose_reuse.m"
}

#line 734 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
#line 734 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 734 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 734 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 734 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 734 "structure_reuse.direct.choose_reuse.m"
{
#line 734 "structure_reuse.direct.choose_reuse.m"
  {
#line 734 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 734 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11;

#line 734 "structure_reuse.direct.choose_reuse.m"
    {
#line 734 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11);
    }
#line 734 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11));
#line 734 "structure_reuse.direct.choose_reuse.m"
  }
#line 734 "structure_reuse.direct.choose_reuse.m"
}

#line 720 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7,
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8,
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9,
#line 720 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10)
#line 720 "structure_reuse.direct.choose_reuse.m"
{
#line 723 "structure_reuse.direct.choose_reuse.m"
  {
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74;
#line 723 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 734 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14;
#line 878 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38;
#line 779 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 779 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 407 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75;
#line 407 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;

#line 734 "structure_reuse.direct.choose_reuse.m"
    {
#line 734 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 734 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[1]));
#line 734 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1));
#line 734 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 734 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9));
#line 734 "structure_reuse.direct.choose_reuse.m"
    }
#line 734 "structure_reuse.direct.choose_reuse.m"
    {
#line 734 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14);
    }
#line 734 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14);
#line 273 "structure_reuse.direct.choose_reuse.m"
    {
#line 273 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 273 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14));
#line 273 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 273 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 3) = ((MR_Box) ((MR_Integer) 0));
#line 273 "structure_reuse.direct.choose_reuse.m"
    }
#line 776 "structure_reuse.direct.choose_reuse.m"
    {
#line 776 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2));
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6));
#line 776 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11));
#line 776 "structure_reuse.direct.choose_reuse.m"
    }
#line 776 "structure_reuse.direct.choose_reuse.m"
    {
#line 776 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37);
    }
#line 878 "structure_reuse.direct.choose_reuse.m"
    {
#line 878 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[13], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37, ((MR_Box) ((MR_Integer) 0)));
    }
#line 878 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38 = ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38);
#line 413 "structure_reuse.direct.choose_reuse.m"
    {
#line 413 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11));
#line 413 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37));
#line 413 "structure_reuse.direct.choose_reuse.m"
    }
#line 413 "structure_reuse.direct.choose_reuse.m"
    {
#line 413 "structure_reuse.direct.choose_reuse.m"
      mercury__list__sort_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[14], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61);
    }
#line 416 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 417 "structure_reuse.direct.choose_reuse.m"
      {
#line 418 "structure_reuse.direct.choose_reuse.m"
        {
#line 418 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
        }
#line 417 "structure_reuse.direct.choose_reuse.m"
      }
#line 416 "structure_reuse.direct.choose_reuse.m"
    else
#line 415 "structure_reuse.direct.choose_reuse.m"
      {
#line 415 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;

#line 415 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61, (MR_Integer) 0)));
#line 415 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61, (MR_Integer) 1)));
#line 415 "structure_reuse.direct.choose_reuse.m"
      }
#line 779 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 0)));
#line 779 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 1)));
#line 779 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 2)));
#line 779 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 3)));
#line 779 "structure_reuse.direct.choose_reuse.m"
    {
#line 779 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42));
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73));
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74);
#line 779 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38));
#line 779 "structure_reuse.direct.choose_reuse.m"
    }
#line 407 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73)) == (MR_mktag((MR_Integer) 1)));
#line 407 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 407 "structure_reuse.direct.choose_reuse.m"
      {
#line 407 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73, (MR_Integer) 0)));
#line 407 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73, (MR_Integer) 1)));
#line 408 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Float) 0.0000000000000000;
#line 408 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77);
#line 723 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 723 "structure_reuse.direct.choose_reuse.m"
          {
#line 9927 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 9929 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 727 "structure_reuse.direct.choose_reuse.m"
            {
#line 727 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__init_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13);
            }
#line 728 "structure_reuse.direct.choose_reuse.m"
            {
#line 728 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__det_insert_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10);
            }
#line 728 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 723 "structure_reuse.direct.choose_reuse.m"
          }
#line 407 "structure_reuse.direct.choose_reuse.m"
      }
#line 723 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 723 "structure_reuse.direct.choose_reuse.m"
  }
#line 720 "structure_reuse.direct.choose_reuse.m"
}

#line 713 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
#line 713 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4,
#line 713 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5)
#line 713 "structure_reuse.direct.choose_reuse.m"
{
#line 715 "structure_reuse.direct.choose_reuse.m"
  {
#line 715 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 715 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6;
#line 715 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 715 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7;
#line 715 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8;
#line 715 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9;
#line 715 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;

#line 716 "structure_reuse.direct.choose_reuse.m"
    {
#line 716 "structure_reuse.direct.choose_reuse.m"
      mercury__map__keys_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7);
    }
#line 717 "structure_reuse.direct.choose_reuse.m"
    {
#line 717 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = mercury__set__list_to_set_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5);
    }
#line 717 "structure_reuse.direct.choose_reuse.m"
    {
#line 717 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = mercury__set__list_to_set_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7);
    }
#line 717 "structure_reuse.direct.choose_reuse.m"
    {
#line 717 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8 = mercury__set__intersect_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
    }
#line 718 "structure_reuse.direct.choose_reuse.m"
    {
#line 718 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8);
    }
#line 715 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6;
#line 715 "structure_reuse.direct.choose_reuse.m"
  }
#line 713 "structure_reuse.direct.choose_reuse.m"
}

#line 694 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 694 "structure_reuse.direct.choose_reuse.m"
{
#line 694 "structure_reuse.direct.choose_reuse.m"
  {
#line 694 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 694 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 694 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10;

#line 694 "structure_reuse.direct.choose_reuse.m"
    {
#line 694 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10);
    }
#line 694 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 694 "structure_reuse.direct.choose_reuse.m"
      {
#line 694 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10));
#line 694 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 694 "structure_reuse.direct.choose_reuse.m"
      }
#line 694 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 694 "structure_reuse.direct.choose_reuse.m"
  }
#line 694 "structure_reuse.direct.choose_reuse.m"
}

#line 706 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 706 "structure_reuse.direct.choose_reuse.m"
{
#line 706 "structure_reuse.direct.choose_reuse.m"
  {
#line 706 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 706 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 706 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6;

#line 706 "structure_reuse.direct.choose_reuse.m"
    {
#line 706 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 706 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6));
#line 706 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 706 "structure_reuse.direct.choose_reuse.m"
  }
#line 706 "structure_reuse.direct.choose_reuse.m"
}

#line 686 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
#line 686 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 686 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6,
#line 686 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7,
#line 686 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8)
#line 686 "structure_reuse.direct.choose_reuse.m"
{
#line 10101 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 10103 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 10106 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10110 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    else
#line 10112 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      {
#line 10114 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7, (MR_Integer) 0)));
#line 10116 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7, (MR_Integer) 1)));
#line 10118 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 10120 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30;
#line 706 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30;

#line 706 "structure_reuse.direct.choose_reuse.m"
        {
#line 706 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = mercury__map__keys_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_19);
        }
#line 706 "structure_reuse.direct.choose_reuse.m"
        {
#line 706 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[12], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_20, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22)));
        }
#line 706 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30);
#line 696 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "structure_reuse.direct.choose_reuse.m"
        else
#line 693 "structure_reuse.direct.choose_reuse.m"
          {
#line 693 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 694 "structure_reuse.direct.choose_reuse.m"
            {
#line 694 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7));
#line 694 "structure_reuse.direct.choose_reuse.m"
            }
#line 694 "structure_reuse.direct.choose_reuse.m"
            {
#line 694 "structure_reuse.direct.choose_reuse.m"
              mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8);
#line 694 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 693 "structure_reuse.direct.choose_reuse.m"
          }
#line 10175 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      }
#line 10177 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 686 "structure_reuse.direct.choose_reuse.m"
}

#line 684 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5(
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 684 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 684 "structure_reuse.direct.choose_reuse.m"
{
#line 684 "structure_reuse.direct.choose_reuse.m"
  {
#line 684 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 684 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28;

#line 684 "structure_reuse.direct.choose_reuse.m"
    {
#line 684 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__684__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28);
    }
#line 684 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28));
#line 684 "structure_reuse.direct.choose_reuse.m"
  }
#line 684 "structure_reuse.direct.choose_reuse.m"
}

#line 694 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 694 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 694 "structure_reuse.direct.choose_reuse.m"
{
#line 694 "structure_reuse.direct.choose_reuse.m"
  {
#line 694 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 694 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 694 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10;

#line 694 "structure_reuse.direct.choose_reuse.m"
    {
#line 694 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10);
    }
#line 694 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 694 "structure_reuse.direct.choose_reuse.m"
      {
#line 694 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10));
#line 694 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 694 "structure_reuse.direct.choose_reuse.m"
      }
#line 694 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 694 "structure_reuse.direct.choose_reuse.m"
  }
#line 694 "structure_reuse.direct.choose_reuse.m"
}

#line 706 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 706 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 706 "structure_reuse.direct.choose_reuse.m"
{
#line 706 "structure_reuse.direct.choose_reuse.m"
  {
#line 706 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 706 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 706 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6;

#line 706 "structure_reuse.direct.choose_reuse.m"
    {
#line 706 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 706 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6));
#line 706 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 706 "structure_reuse.direct.choose_reuse.m"
  }
#line 706 "structure_reuse.direct.choose_reuse.m"
}

#line 676 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 676 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 676 "structure_reuse.direct.choose_reuse.m"
{
#line 676 "structure_reuse.direct.choose_reuse.m"
  {
#line 676 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 676 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22;

#line 676 "structure_reuse.direct.choose_reuse.m"
    {
#line 676 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__676__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22);
    }
#line 676 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22));
#line 676 "structure_reuse.direct.choose_reuse.m"
  }
#line 676 "structure_reuse.direct.choose_reuse.m"
}

#line 661 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
#line 661 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 661 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 661 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 661 "structure_reuse.direct.choose_reuse.m"
{
#line 661 "structure_reuse.direct.choose_reuse.m"
  {
#line 661 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 661 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8;

#line 661 "structure_reuse.direct.choose_reuse.m"
    {
#line 661 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8);
    }
#line 661 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8));
#line 661 "structure_reuse.direct.choose_reuse.m"
  }
#line 661 "structure_reuse.direct.choose_reuse.m"
}

#line 664 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14,
#line 664 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15)
#line 664 "structure_reuse.direct.choose_reuse.m"
{
#line 669 "structure_reuse.direct.choose_reuse.m"
  {
#line 669 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 669 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25;
#line 669 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12;
#line 669 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13;
#line 669 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17;
#line 669 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 676 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17;
#line 684 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15;

#line 661 "structure_reuse.direct.choose_reuse.m"
    {
#line 661 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 661 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[0]));
#line 661 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1));
#line 661 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 661 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7));
#line 661 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8));
#line 661 "structure_reuse.direct.choose_reuse.m"
    }
#line 661 "structure_reuse.direct.choose_reuse.m"
    {
#line 661 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12);
    }
#line 10409 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
#line 676 "structure_reuse.direct.choose_reuse.m"
    {
#line 676 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[9], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17);
    }
#line 676 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17);
#line 10418 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10422 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    else
#line 10424 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      {
#line 10426 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, (MR_Integer) 0)));
#line 10428 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, (MR_Integer) 1)));
#line 10430 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 10432 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65;
#line 706 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65;

#line 706 "structure_reuse.direct.choose_reuse.m"
        {
#line 706 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = mercury__map__keys_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_54);
        }
#line 706 "structure_reuse.direct.choose_reuse.m"
        {
#line 706 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[10], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_55, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57)));
        }
#line 706 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65);
#line 696 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 698 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "structure_reuse.direct.choose_reuse.m"
        else
#line 693 "structure_reuse.direct.choose_reuse.m"
          {
#line 693 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;

#line 694 "structure_reuse.direct.choose_reuse.m"
            {
#line 694 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10));
#line 694 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12));
#line 694 "structure_reuse.direct.choose_reuse.m"
            }
#line 694 "structure_reuse.direct.choose_reuse.m"
            {
#line 694 "structure_reuse.direct.choose_reuse.m"
              mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13);
            }
#line 693 "structure_reuse.direct.choose_reuse.m"
          }
#line 10485 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      }
#line 684 "structure_reuse.direct.choose_reuse.m"
    {
#line 684 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[11], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15);
    }
#line 684 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15);
#line 669 "structure_reuse.direct.choose_reuse.m"
  }
#line 664 "structure_reuse.direct.choose_reuse.m"
}

#line 618 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
#line 618 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 618 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 618 "structure_reuse.direct.choose_reuse.m"
{
#line 618 "structure_reuse.direct.choose_reuse.m"
  {
#line 618 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 618 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 618 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_HeadVar__2_89;

#line 618 "structure_reuse.direct.choose_reuse.m"
    {
#line 618 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_HeadVar__2_89 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__618__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 618 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_HeadVar__2_89));
#line 618 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 618 "structure_reuse.direct.choose_reuse.m"
  }
#line 618 "structure_reuse.direct.choose_reuse.m"
}

#line 648 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 648 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 648 "structure_reuse.direct.choose_reuse.m"
{
#line 648 "structure_reuse.direct.choose_reuse.m"
  {
#line 648 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 648 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117;

#line 648 "structure_reuse.direct.choose_reuse.m"
    {
#line 648 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__648__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117);
    }
#line 648 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117));
#line 648 "structure_reuse.direct.choose_reuse.m"
  }
#line 648 "structure_reuse.direct.choose_reuse.m"
}

#line 565 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67,
#line 565 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68)
#line 565 "structure_reuse.direct.choose_reuse.m"
{
#line 570 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 570 "structure_reuse.direct.choose_reuse.m"
    {
#line 570 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 570 "structure_reuse.direct.choose_reuse.m"
      {
#line 570 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 570 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9, (MR_Integer) 0)));
#line 570 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9, (MR_Integer) 1)));

#line 594 "structure_reuse.direct.choose_reuse.m"
        if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 0))))
#line 623 "structure_reuse.direct.choose_reuse.m"
          {
#line 623 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_56 = (MR_Word) MR_body(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12), (MR_Integer) 0);
#line 623 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85;

#line 626 "structure_reuse.direct.choose_reuse.m"
            {
#line 626 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85);
            }
#line 628 "structure_reuse.direct.choose_reuse.m"
            {
#line 628 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 628 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 623 "structure_reuse.direct.choose_reuse.m"
          }
#line 594 "structure_reuse.direct.choose_reuse.m"
        else
#line 594 "structure_reuse.direct.choose_reuse.m"
          if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 2))))
#line 596 "structure_reuse.direct.choose_reuse.m"
            {
#line 596 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 596 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 594 "structure_reuse.direct.choose_reuse.m"
          else
#line 594 "structure_reuse.direct.choose_reuse.m"
            if (((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 1))))
#line 573 "structure_reuse.direct.choose_reuse.m"
              {
#line 573 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 573 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100;
#line 573 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)));
#line 573 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 573 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 573 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 4)));
#line 590 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19;
#line 590 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20;
#line 590 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21;
#line 574 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 574 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 574 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 574 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17)) == (MR_mktag((MR_Integer) 1)));
#line 574 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 574 "structure_reuse.direct.choose_reuse.m"
                  {
#line 574 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 0)));
#line 574 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 1)));
#line 574 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 2)));
#line 574 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 3)));
#line 574 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 4)));
#line 574 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 5)));
#line 576 "structure_reuse.direct.choose_reuse.m"
                    {
#line 576 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25;
#line 587 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26;

#line 576 "structure_reuse.direct.choose_reuse.m"
                      {
#line 576 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_13);
                      }
#line 578 "structure_reuse.direct.choose_reuse.m"
                      {
#line 578 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26);
                      }
#line 587 "structure_reuse.direct.choose_reuse.m"
                      if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 580 "structure_reuse.direct.choose_reuse.m"
                        {
#line 580 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27;
#line 580 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28;
#line 580 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29;
#line 580 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30;
#line 580 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98;

#line 580 "structure_reuse.direct.choose_reuse.m"
                          {
#line 580 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26);
                          }
#line 581 "structure_reuse.direct.choose_reuse.m"
                          {
#line 581 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27);
                          }
#line 583 "structure_reuse.direct.choose_reuse.m"
                          {
#line 583 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28));
#line 583 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 583 "structure_reuse.direct.choose_reuse.m"
                          }
#line 583 "structure_reuse.direct.choose_reuse.m"
                          {
#line 583 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98);
                          }
#line 584 "structure_reuse.direct.choose_reuse.m"
                          {
#line 584 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30);
                          }
#line 586 "structure_reuse.direct.choose_reuse.m"
                          {
#line 586 "structure_reuse.direct.choose_reuse.m"
                            mercury__multi_map__set_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100);
                          }
#line 580 "structure_reuse.direct.choose_reuse.m"
                        }
#line 587 "structure_reuse.direct.choose_reuse.m"
                      else
#line 586 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67;
#line 576 "structure_reuse.direct.choose_reuse.m"
                    }
#line 574 "structure_reuse.direct.choose_reuse.m"
                  }
#line 574 "structure_reuse.direct.choose_reuse.m"
                else
#line 586 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67;
#line 593 "structure_reuse.direct.choose_reuse.m"
                {
#line 593 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 593 "structure_reuse.direct.choose_reuse.m"
                  return;
                }
#line 573 "structure_reuse.direct.choose_reuse.m"
              }
#line 594 "structure_reuse.direct.choose_reuse.m"
            else
#line 594 "structure_reuse.direct.choose_reuse.m"
              if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 604 "structure_reuse.direct.choose_reuse.m"
                {
#line 604 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 604 "structure_reuse.direct.choose_reuse.m"
                  return;
                }
#line 594 "structure_reuse.direct.choose_reuse.m"
              else
#line 594 "structure_reuse.direct.choose_reuse.m"
                if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 607 "structure_reuse.direct.choose_reuse.m"
                  {
#line 607 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 607 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51;
#line 607 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 608 "structure_reuse.direct.choose_reuse.m"
                    {
#line 608 "structure_reuse.direct.choose_reuse.m"
                      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51);
                    }
#line 609 "structure_reuse.direct.choose_reuse.m"
                    {
#line 609 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 609 "structure_reuse.direct.choose_reuse.m"
                      return;
                    }
#line 607 "structure_reuse.direct.choose_reuse.m"
                  }
#line 594 "structure_reuse.direct.choose_reuse.m"
                else
#line 594 "structure_reuse.direct.choose_reuse.m"
                  if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 612 "structure_reuse.direct.choose_reuse.m"
                    {
#line 612 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92;
#line 612 "structure_reuse.direct.choose_reuse.m"
                      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 613 "structure_reuse.direct.choose_reuse.m"
                      {
#line 613 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_102, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92);
                      }
#line 615 "structure_reuse.direct.choose_reuse.m"
                      {
#line 615 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 615 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 612 "structure_reuse.direct.choose_reuse.m"
                    }
#line 594 "structure_reuse.direct.choose_reuse.m"
                  else
#line 594 "structure_reuse.direct.choose_reuse.m"
                    if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 600 "structure_reuse.direct.choose_reuse.m"
                      {
#line 600 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 600 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 594 "structure_reuse.direct.choose_reuse.m"
                    else
#line 594 "structure_reuse.direct.choose_reuse.m"
                      if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 638 "structure_reuse.direct.choose_reuse.m"
                        {
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 4)));
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81;
#line 638 "structure_reuse.direct.choose_reuse.m"
                          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 648 "structure_reuse.direct.choose_reuse.m"
                          MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81;

#line 639 "structure_reuse.direct.choose_reuse.m"
                          {
#line 639 "structure_reuse.direct.choose_reuse.m"
                            mercury__multi_map__init_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62);
                          }
#line 640 "structure_reuse.direct.choose_reuse.m"
                          {
#line 640 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_60));
#line 640 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "structure_reuse.direct.choose_reuse.m"
                          }
#line 640 "structure_reuse.direct.choose_reuse.m"
                          {
#line 640 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_59, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63);
                          }
#line 642 "structure_reuse.direct.choose_reuse.m"
                          {
#line 642 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64);
                          }
#line 644 "structure_reuse.direct.choose_reuse.m"
                          {
#line 644 "structure_reuse.direct.choose_reuse.m"
                            mercury__multi_map__merge_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75);
                          }
#line 645 "structure_reuse.direct.choose_reuse.m"
                          {
#line 645 "structure_reuse.direct.choose_reuse.m"
                            mercury__multi_map__merge_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76);
                          }
#line 647 "structure_reuse.direct.choose_reuse.m"
                          {
#line 647 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 647 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64));
#line 647 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "structure_reuse.direct.choose_reuse.m"
                          }
#line 646 "structure_reuse.direct.choose_reuse.m"
                          {
#line 646 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 646 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63));
#line 646 "structure_reuse.direct.choose_reuse.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 646 "structure_reuse.direct.choose_reuse.m"
                          }
#line 646 "structure_reuse.direct.choose_reuse.m"
                          {
#line 646 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65);
                          }
#line 10945 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
#line 648 "structure_reuse.direct.choose_reuse.m"
                          {
#line 648 "structure_reuse.direct.choose_reuse.m"
                            mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[7], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81);
                          }
#line 648 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81);
#line 649 "structure_reuse.direct.choose_reuse.m"
                          {
#line 649 "structure_reuse.direct.choose_reuse.m"
                            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 649 "structure_reuse.direct.choose_reuse.m"
                            return;
                          }
#line 638 "structure_reuse.direct.choose_reuse.m"
                        }
#line 594 "structure_reuse.direct.choose_reuse.m"
                      else
#line 594 "structure_reuse.direct.choose_reuse.m"
                        if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 631 "structure_reuse.direct.choose_reuse.m"
                          {
#line 631 "structure_reuse.direct.choose_reuse.m"
                            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 631 "structure_reuse.direct.choose_reuse.m"
                            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 635 "structure_reuse.direct.choose_reuse.m"
                            /* direct tailcall eliminated */
#line 635 "structure_reuse.direct.choose_reuse.m"
                            {
#line 635 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal__tmp_copy_9 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_105;

#line 635 "structure_reuse.direct.choose_reuse.m"
                              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal__tmp_copy_9;
#line 635 "structure_reuse.direct.choose_reuse.m"
                            }
#line 635 "structure_reuse.direct.choose_reuse.m"
                            continue;
#line 631 "structure_reuse.direct.choose_reuse.m"
                          }
#line 594 "structure_reuse.direct.choose_reuse.m"
                        else
#line 594 "structure_reuse.direct.choose_reuse.m"
                          if (((((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 652 "structure_reuse.direct.choose_reuse.m"
                            {
#line 654 "structure_reuse.direct.choose_reuse.m"
                              {
#line 654 "structure_reuse.direct.choose_reuse.m"
                                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation\'/6", (MR_String) "shorthand");
#line 654 "structure_reuse.direct.choose_reuse.m"
                                return;
                              }
#line 652 "structure_reuse.direct.choose_reuse.m"
                            }
#line 594 "structure_reuse.direct.choose_reuse.m"
                          else
#line 617 "structure_reuse.direct.choose_reuse.m"
                            {
#line 617 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 617 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90;
#line 617 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104;
#line 617 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 617 "structure_reuse.direct.choose_reuse.m"
                              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));

#line 618 "structure_reuse.direct.choose_reuse.m"
                              {
#line 618 "structure_reuse.direct.choose_reuse.m"
                                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[8], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_54);
                              }
#line 619 "structure_reuse.direct.choose_reuse.m"
                              {
#line 619 "structure_reuse.direct.choose_reuse.m"
                                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90);
                              }
#line 621 "structure_reuse.direct.choose_reuse.m"
                              {
#line 621 "structure_reuse.direct.choose_reuse.m"
                                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 621 "structure_reuse.direct.choose_reuse.m"
                                return;
                              }
#line 617 "structure_reuse.direct.choose_reuse.m"
                            }
#line 570 "structure_reuse.direct.choose_reuse.m"
      }
#line 570 "structure_reuse.direct.choose_reuse.m"
      break;
#line 570 "structure_reuse.direct.choose_reuse.m"
    }
#line 565 "structure_reuse.direct.choose_reuse.m"
}

#line 553 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7,
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8,
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12,
#line 553 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13)
#line 553 "structure_reuse.direct.choose_reuse.m"
{
#line 558 "structure_reuse.direct.choose_reuse.m"
  {
#line 558 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 558 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 558 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12;
#line 558 "structure_reuse.direct.choose_reuse.m"
    else
#line 560 "structure_reuse.direct.choose_reuse.m"
      {
#line 560 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8, (MR_Integer) 0)));
#line 560 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8, (MR_Integer) 1)));

#line 561 "structure_reuse.direct.choose_reuse.m"
        {
#line 561 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13);
#line 561 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 560 "structure_reuse.direct.choose_reuse.m"
      }
#line 558 "structure_reuse.direct.choose_reuse.m"
  }
#line 553 "structure_reuse.direct.choose_reuse.m"
}

#line 545 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
#line 545 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 545 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6,
#line 545 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 545 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8)
#line 545 "structure_reuse.direct.choose_reuse.m"
{
#line 548 "structure_reuse.direct.choose_reuse.m"
  {
#line 548 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 548 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;

#line 550 "structure_reuse.direct.choose_reuse.m"
    {
#line 550 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = mercury__multi_map__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
    }
#line 550 "structure_reuse.direct.choose_reuse.m"
    {
#line 550 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8);
#line 550 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 548 "structure_reuse.direct.choose_reuse.m"
  }
#line 545 "structure_reuse.direct.choose_reuse.m"
}

#line 530 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
#line 530 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4,
#line 530 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6,
#line 530 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7)
#line 530 "structure_reuse.direct.choose_reuse.m"
{
#line 533 "structure_reuse.direct.choose_reuse.m"
  {
#line 533 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 533 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 1)));
#line 534 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 0)));
#line 534 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 2)));
#line 534 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 3)));
#line 534 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 4)));

#line 534 "structure_reuse.direct.choose_reuse.m"
    {
#line 534 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7);
#line 534 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 533 "structure_reuse.direct.choose_reuse.m"
  }
#line 530 "structure_reuse.direct.choose_reuse.m"
}

#line 527 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1(
#line 527 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 527 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 527 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 527 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 527 "structure_reuse.direct.choose_reuse.m"
{
#line 527 "structure_reuse.direct.choose_reuse.m"
  {
#line 527 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 527 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7;

#line 527 "structure_reuse.direct.choose_reuse.m"
    {
#line 527 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7);
    }
#line 527 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7));
#line 527 "structure_reuse.direct.choose_reuse.m"
  }
#line 527 "structure_reuse.direct.choose_reuse.m"
}

#line 522 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(
#line 522 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 522 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7,
#line 522 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8)
#line 522 "structure_reuse.direct.choose_reuse.m"
{
#line 525 "structure_reuse.direct.choose_reuse.m"
  {
#line 525 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 525 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 526 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 526 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 526 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 527 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8;

#line 527 "structure_reuse.direct.choose_reuse.m"
    {
#line 527 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[6], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8);
    }
#line 527 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8);
#line 525 "structure_reuse.direct.choose_reuse.m"
  }
#line 522 "structure_reuse.direct.choose_reuse.m"
}

#line 357 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
#line 357 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 357 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 357 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 357 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 357 "structure_reuse.direct.choose_reuse.m"
{
#line 357 "structure_reuse.direct.choose_reuse.m"
  {
#line 357 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 357 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6;

#line 357 "structure_reuse.direct.choose_reuse.m"
    {
#line 357 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6);
    }
#line 357 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6));
#line 357 "structure_reuse.direct.choose_reuse.m"
  }
#line 357 "structure_reuse.direct.choose_reuse.m"
}

#line 457 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28,
#line 457 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29)
#line 457 "structure_reuse.direct.choose_reuse.m"
{
#line 461 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 461 "structure_reuse.direct.choose_reuse.m"
    {
#line 461 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 461 "structure_reuse.direct.choose_reuse.m"
      {
#line 461 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 461 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 1)));
#line 461 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13;
#line 461 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14;
#line 461 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15;
#line 461 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71;
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 0)));
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 2)));
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 3)));

#line 463 "structure_reuse.direct.choose_reuse.m"
        {
#line 463 "structure_reuse.direct.choose_reuse.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13);
        }
#line 464 "structure_reuse.direct.choose_reuse.m"
        {
#line 464 "structure_reuse.direct.choose_reuse.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13, (MR_Integer) 45, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14);
        }
#line 550 "structure_reuse.direct.choose_reuse.m"
        {
#line 550 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71 = mercury__multi_map__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
        }
#line 550 "structure_reuse.direct.choose_reuse.m"
        {
#line 550 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15);
        }
#line 473 "structure_reuse.direct.choose_reuse.m"
        {
#line 473 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15);
        }
#line 475 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 474 "structure_reuse.direct.choose_reuse.m"
          {
#line 474 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 474 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 474 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24;
#line 474 "structure_reuse.direct.choose_reuse.m"
          }
#line 475 "structure_reuse.direct.choose_reuse.m"
        else
#line 478 "structure_reuse.direct.choose_reuse.m"
          {
#line 478 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 478 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16;
#line 478 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 478 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76;
#line 478 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77;
#line 480 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 480 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;
#line 480 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65;

#line 356 "structure_reuse.direct.choose_reuse.m"
            {
#line 356 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__values_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76);
            }
#line 357 "structure_reuse.direct.choose_reuse.m"
            {
#line 357 "structure_reuse.direct.choose_reuse.m"
              mercury__list__sort_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[5], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77);
            }
#line 360 "structure_reuse.direct.choose_reuse.m"
            if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "structure_reuse.direct.choose_reuse.m"
              {
#line 362 "structure_reuse.direct.choose_reuse.m"
                {
#line 362 "structure_reuse.direct.choose_reuse.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_degree_ratio\'/1", (MR_String) "empty multi_map");
#line 362 "structure_reuse.direct.choose_reuse.m"
                  return;
                }
#line 361 "structure_reuse.direct.choose_reuse.m"
              }
#line 360 "structure_reuse.direct.choose_reuse.m"
            else
#line 359 "structure_reuse.direct.choose_reuse.m"
              {
#line 359 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;

#line 359 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77, (MR_Integer) 0)));
#line 359 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77, (MR_Integer) 1)));
#line 359 "structure_reuse.direct.choose_reuse.m"
              }
#line 480 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 0)));
#line 480 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 1)));
#line 480 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 2)));
#line 480 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 3)));
#line 481 "structure_reuse.direct.choose_reuse.m"
            if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "structure_reuse.direct.choose_reuse.m"
              {
#line 480 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24;
#line 480 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 480 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 480 "structure_reuse.direct.choose_reuse.m"
              }
#line 481 "structure_reuse.direct.choose_reuse.m"
            else
#line 482 "structure_reuse.direct.choose_reuse.m"
              {
#line 482 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22;
#line 482 "structure_reuse.direct.choose_reuse.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23;
#line 482 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36;
#line 482 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37;
#line 482 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 482 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39;
#line 482 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42;
#line 482 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43;
#line 502 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 502 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;
#line 502 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 510 "structure_reuse.direct.choose_reuse.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;

#line 487 "structure_reuse.direct.choose_reuse.m"
                {
#line 487 "structure_reuse.direct.choose_reuse.m"
                  libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14, (MR_String) "% Reuse results: \n");
                }
#line 488 "structure_reuse.direct.choose_reuse.m"
                {
#line 488 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16);
                }
#line 495 "structure_reuse.direct.choose_reuse.m"
                {
#line 495 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36);
                }
#line 498 "structure_reuse.direct.choose_reuse.m"
                {
#line 498 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37);
                }
#line 502 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 0)));
#line 502 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 1)));
#line 502 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 2)));
#line 502 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 3)));
#line 503 "structure_reuse.direct.choose_reuse.m"
                {
#line 503 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16);
                }
#line 503 "structure_reuse.direct.choose_reuse.m"
                {
#line 503 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39);
                }
#line 508 "structure_reuse.direct.choose_reuse.m"
                {
#line 508 "structure_reuse.direct.choose_reuse.m"
                  libs__globals__lookup_int_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13, (MR_Integer) 411, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23);
                }
#line 510 "structure_reuse.direct.choose_reuse.m"
                {
#line 510 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39);
                }
#line 510 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23);
#line 513 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 511 "structure_reuse.direct.choose_reuse.m"
                  {
#line 511 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 512 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 511 "structure_reuse.direct.choose_reuse.m"
                  }
#line 513 "structure_reuse.direct.choose_reuse.m"
                else
#line 514 "structure_reuse.direct.choose_reuse.m"
                  {
#line 514 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39;
#line 514 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36;
#line 514 "structure_reuse.direct.choose_reuse.m"
                  }
#line 518 "structure_reuse.direct.choose_reuse.m"
                /* direct tailcall eliminated */
#line 518 "structure_reuse.direct.choose_reuse.m"
                {
#line 518 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0__tmp_copy_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37;
#line 518 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0__tmp_copy_26 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42;
#line 518 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0__tmp_copy_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43;

#line 518 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0__tmp_copy_28;
#line 518 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0__tmp_copy_26;
#line 518 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0__tmp_copy_24;
#line 518 "structure_reuse.direct.choose_reuse.m"
                }
#line 518 "structure_reuse.direct.choose_reuse.m"
                continue;
#line 482 "structure_reuse.direct.choose_reuse.m"
              }
#line 478 "structure_reuse.direct.choose_reuse.m"
          }
#line 461 "structure_reuse.direct.choose_reuse.m"
      }
#line 461 "structure_reuse.direct.choose_reuse.m"
      break;
#line 461 "structure_reuse.direct.choose_reuse.m"
    }
#line 457 "structure_reuse.direct.choose_reuse.m"
}

#line 433 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1(
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 433 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 433 "structure_reuse.direct.choose_reuse.m"
{
#line 433 "structure_reuse.direct.choose_reuse.m"
  {
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 433 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_23;

#line 433 "structure_reuse.direct.choose_reuse.m"
    {
#line 433 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__433__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_23);
    }
#line 433 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_23));
#line 433 "structure_reuse.direct.choose_reuse.m"
  }
#line 433 "structure_reuse.direct.choose_reuse.m"
}

#line 427 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(
#line 427 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3,
#line 427 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4)
#line 427 "structure_reuse.direct.choose_reuse.m"
{
#line 431 "structure_reuse.direct.choose_reuse.m"
  {
#line 431 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 431 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "structure_reuse.direct.choose_reuse.m"
      {
#line 445 "structure_reuse.direct.choose_reuse.m"
        {
#line 445 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
#line 445 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 444 "structure_reuse.direct.choose_reuse.m"
      }
#line 431 "structure_reuse.direct.choose_reuse.m"
    else
#line 431 "structure_reuse.direct.choose_reuse.m"
      {
#line 431 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 431 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, (MR_Integer) 0)));
#line 431 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, (MR_Integer) 1)));
#line 431 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7;
#line 431 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15;
#line 431 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 431 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32;
#line 431 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 440 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15;
#line 442 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;
#line 442 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 442 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60;
#line 441 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 441 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 441 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 441 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;

#line 432 "structure_reuse.direct.choose_reuse.m"
        {
#line 432 "structure_reuse.direct.choose_reuse.m"
          mercury__list__length_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7);
        }
#line 440 "structure_reuse.direct.choose_reuse.m"
        {
#line 440 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[4], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_5)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15);
        }
#line 440 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15);
#line 442 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 0)));
#line 442 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 1)));
#line 442 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 2)));
#line 442 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 3)));
#line 442 "structure_reuse.direct.choose_reuse.m"
        {
#line 442 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7);
        }
#line 441 "structure_reuse.direct.choose_reuse.m"
        {
#line 441 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33);
        }
#line 441 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 0)));
#line 441 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 1)));
#line 441 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 2)));
#line 441 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 3)));
#line 441 "structure_reuse.direct.choose_reuse.m"
        {
#line 441 "structure_reuse.direct.choose_reuse.m"
          MR_Word base;
#line 441 "structure_reuse.direct.choose_reuse.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 441 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4 = base;
#line 441 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61));
#line 441 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62));
#line 441 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31);
#line 441 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64));
#line 441 "structure_reuse.direct.choose_reuse.m"
        }
#line 431 "structure_reuse.direct.choose_reuse.m"
      }
#line 431 "structure_reuse.direct.choose_reuse.m"
  }
#line 427 "structure_reuse.direct.choose_reuse.m"
}

#line 396 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
#line 396 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4,
#line 396 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5,
#line 396 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6)
#line 396 "structure_reuse.direct.choose_reuse.m"
{
#line 391 "structure_reuse.direct.choose_reuse.m"
  {
#line 391 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 391 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 2)));
#line 391 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 2)));
#line 392 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 0)));
#line 392 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 1)));
#line 392 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 3)));
#line 393 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 0)));
#line 393 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 1)));
#line 393 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 3)));

#line 394 "structure_reuse.direct.choose_reuse.m"
    {
#line 394 "structure_reuse.direct.choose_reuse.m"
      mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_11);
#line 394 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 391 "structure_reuse.direct.choose_reuse.m"
  }
#line 396 "structure_reuse.direct.choose_reuse.m"
}

#line 373 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
#line 373 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4,
#line 373 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5,
#line 373 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6)
#line 373 "structure_reuse.direct.choose_reuse.m"
{
#line 368 "structure_reuse.direct.choose_reuse.m"
  {
#line 368 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 368 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10;
#line 368 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11;
#line 382 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 2)));
#line 382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 0)));
#line 382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 1)));
#line 382 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 3)));
#line 382 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28;
#line 382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32;
#line 382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 382 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34;

#line 382 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == ((MR_Float) 0.0000000000000000));
#line 382 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 381 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 383 "structure_reuse.direct.choose_reuse.m"
      {
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 2)));
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 3)));
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 0)));
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 1)));

#line 383 "structure_reuse.direct.choose_reuse.m"
        {
#line 383 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23);
        }
#line 381 "structure_reuse.direct.choose_reuse.m"
        {
#line 381 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16);
        }
#line 383 "structure_reuse.direct.choose_reuse.m"
      }
#line 381 "structure_reuse.direct.choose_reuse.m"
    else
#line 381 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10 = (MR_Float) 0.0000000000000000;
#line 382 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 0)));
#line 382 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 1)));
#line 382 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 2)));
#line 382 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 3)));
#line 382 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 == ((MR_Float) 0.0000000000000000));
#line 382 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 381 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 383 "structure_reuse.direct.choose_reuse.m"
      {
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 2)));
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30;
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 3)));
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 0)));
#line 383 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 1)));

#line 383 "structure_reuse.direct.choose_reuse.m"
        {
#line 383 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37);
        }
#line 381 "structure_reuse.direct.choose_reuse.m"
        {
#line 381 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30);
        }
#line 383 "structure_reuse.direct.choose_reuse.m"
      }
#line 381 "structure_reuse.direct.choose_reuse.m"
    else
#line 381 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11 = (MR_Float) 0.0000000000000000;
#line 371 "structure_reuse.direct.choose_reuse.m"
    {
#line 371 "structure_reuse.direct.choose_reuse.m"
      mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11);
#line 371 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 368 "structure_reuse.direct.choose_reuse.m"
  }
#line 373 "structure_reuse.direct.choose_reuse.m"
}

#line 323 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2(
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 323 "structure_reuse.direct.choose_reuse.m"
{
#line 323 "structure_reuse.direct.choose_reuse.m"
  {
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5;

#line 323 "structure_reuse.direct.choose_reuse.m"
    {
#line 323 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5);
    }
#line 323 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5));
#line 323 "structure_reuse.direct.choose_reuse.m"
  }
#line 323 "structure_reuse.direct.choose_reuse.m"
}

#line 319 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1(
#line 319 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 319 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 319 "structure_reuse.direct.choose_reuse.m"
{
#line 319 "structure_reuse.direct.choose_reuse.m"
  {
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13;

#line 319 "structure_reuse.direct.choose_reuse.m"
    {
#line 319 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__319__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 319 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13));
#line 319 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 319 "structure_reuse.direct.choose_reuse.m"
  }
#line 319 "structure_reuse.direct.choose_reuse.m"
}

#line 316 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(
#line 316 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4,
#line 316 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5)
#line 316 "structure_reuse.direct.choose_reuse.m"
{
#line 318 "structure_reuse.direct.choose_reuse.m"
  {
#line 318 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 318 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6;
#line 318 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
#line 318 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9;
#line 318 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 0)));
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 1)));
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 2)));
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 3)));

#line 320 "structure_reuse.direct.choose_reuse.m"
    {
#line 320 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[3], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14);
    }
#line 327 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 328 "structure_reuse.direct.choose_reuse.m"
      {
#line 329 "structure_reuse.direct.choose_reuse.m"
        {
#line 329 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_condition\'/2", (MR_String) "no reuse conditions");
        }
#line 328 "structure_reuse.direct.choose_reuse.m"
      }
#line 327 "structure_reuse.direct.choose_reuse.m"
    else
#line 322 "structure_reuse.direct.choose_reuse.m"
      {
#line 322 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9, (MR_Integer) 0)));
#line 322 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9, (MR_Integer) 1)));
#line 322 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 322 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 1)));
#line 322 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 2)));
#line 324 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 0)));
#line 324 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 3)));
#line 323 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6;

#line 323 "structure_reuse.direct.choose_reuse.m"
        {
#line 323 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 323 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[0]));
#line 323 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2));
#line 323 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 323 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19));
#line 323 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30));
#line 323 "structure_reuse.direct.choose_reuse.m"
        }
#line 323 "structure_reuse.direct.choose_reuse.m"
        {
#line 323 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_10)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6);
        }
#line 323 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6);
#line 322 "structure_reuse.direct.choose_reuse.m"
      }
#line 318 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6;
#line 318 "structure_reuse.direct.choose_reuse.m"
  }
#line 316 "structure_reuse.direct.choose_reuse.m"
}

#line 311 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1(
#line 311 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 311 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 311 "structure_reuse.direct.choose_reuse.m"
{
#line 311 "structure_reuse.direct.choose_reuse.m"
  {
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_8;

#line 311 "structure_reuse.direct.choose_reuse.m"
    {
#line 311 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_8 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__311__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 311 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_8));
#line 311 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 311 "structure_reuse.direct.choose_reuse.m"
  }
#line 311 "structure_reuse.direct.choose_reuse.m"
}

#line 308 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(
#line 308 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3)
#line 308 "structure_reuse.direct.choose_reuse.m"
{
#line 310 "structure_reuse.direct.choose_reuse.m"
  {
#line 310 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 310 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4;
#line 310 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 0)));
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 1)));
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 2)));
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 3)));

#line 312 "structure_reuse.direct.choose_reuse.m"
    {
#line 312 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[2], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
    }
#line 310 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4;
#line 310 "structure_reuse.direct.choose_reuse.m"
  }
#line 308 "structure_reuse.direct.choose_reuse.m"
}

#line 271 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(
#line 271 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3)
#line 271 "structure_reuse.direct.choose_reuse.m"
{
#line 273 "structure_reuse.direct.choose_reuse.m"
  {
#line 273 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 273 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 273 "structure_reuse.direct.choose_reuse.m"
    {
#line 273 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 273 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3));
#line 273 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 273 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 0));
#line 273 "structure_reuse.direct.choose_reuse.m"
    }
#line 273 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 273 "structure_reuse.direct.choose_reuse.m"
  }
#line 271 "structure_reuse.direct.choose_reuse.m"
}

#line 260 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cond_11)
#line 260 "structure_reuse.direct.choose_reuse.m"
{
#line 264 "structure_reuse.direct.choose_reuse.m"
  {
#line 264 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 264 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6;

#line 264 "structure_reuse.direct.choose_reuse.m"
    {
#line 264 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 264 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7));
#line 264 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8));
#line 264 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9));
#line 264 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10));
#line 264 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cond_11));
#line 264 "structure_reuse.direct.choose_reuse.m"
    }
#line 264 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6;
#line 264 "structure_reuse.direct.choose_reuse.m"
  }
#line 260 "structure_reuse.direct.choose_reuse.m"
}

#line 108 "structure_reuse.direct.choose_reuse.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_p_0(
#line 108 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_7,
#line 108 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_8,
#line 108 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_9,
#line 108 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_18,
#line 108 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19,
#line 108 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_11)
#line 108 "structure_reuse.direct.choose_reuse.m"
{
#line 131 "structure_reuse.direct.choose_reuse.m"
  {
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12;
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13;
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14;
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15;
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16;
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 131 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29;

#line 133 "structure_reuse.direct.choose_reuse.m"
    {
#line 133 "structure_reuse.direct.choose_reuse.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12);
    }
#line 134 "structure_reuse.direct.choose_reuse.m"
    {
#line 134 "structure_reuse.direct.choose_reuse.m"
      libs__globals__get_reuse_strategy_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13);
    }
#line 165 "structure_reuse.direct.choose_reuse.m"
    {
#line 165 "structure_reuse.direct.choose_reuse.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29);
    }
#line 166 "structure_reuse.direct.choose_reuse.m"
    {
#line 166 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 166 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13));
#line 166 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_7));
#line 166 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_8));
#line 166 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29));
#line 166 "structure_reuse.direct.choose_reuse.m"
    }
#line 136 "structure_reuse.direct.choose_reuse.m"
    {
#line 136 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
    }
#line 136 "structure_reuse.direct.choose_reuse.m"
    {
#line 136 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_18, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_11);
    }
#line 139 "structure_reuse.direct.choose_reuse.m"
    {
#line 139 "structure_reuse.direct.choose_reuse.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, (MR_Integer) 413, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16);
    }
#line 144 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16 == (MR_Integer) 0))
#line 145 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 144 "structure_reuse.direct.choose_reuse.m"
    else
#line 141 "structure_reuse.direct.choose_reuse.m"
      {
#line 141 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17;
#line 141 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35;

#line 142 "structure_reuse.direct.choose_reuse.m"
        {
#line 142 "structure_reuse.direct.choose_reuse.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, (MR_Integer) 45, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17);
        }
#line 1428 "structure_reuse.direct.choose_reuse.m"
        {
#line 1428 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35);
        }
#line 1429 "structure_reuse.direct.choose_reuse.m"
        {
#line 1429 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35);
        }
#line 1434 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1430 "structure_reuse.direct.choose_reuse.m"
          {
#line 1431 "structure_reuse.direct.choose_reuse.m"
            {
#line 1431 "structure_reuse.direct.choose_reuse.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17, (MR_String) "% No cells to be cached/freed.\n");
            }
#line 1430 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 1430 "structure_reuse.direct.choose_reuse.m"
          }
#line 1434 "structure_reuse.direct.choose_reuse.m"
        else
#line 1438 "structure_reuse.direct.choose_reuse.m"
          {
#line 1436 "structure_reuse.direct.choose_reuse.m"
            {
#line 1436 "structure_reuse.direct.choose_reuse.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17, (MR_String) "% Marking cacheable/freeable cells.\n");
            }
#line 1439 "structure_reuse.direct.choose_reuse.m"
            {
#line 1439 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19);
#line 1439 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 1438 "structure_reuse.direct.choose_reuse.m"
          }
#line 141 "structure_reuse.direct.choose_reuse.m"
      }
#line 131 "structure_reuse.direct.choose_reuse.m"
  }
#line 108 "structure_reuse.direct.choose_reuse.m"
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init(void)
{
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_table_0);
	MR_register_type_ctor_info(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0);
}

void mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.ctgc.structure_reuse.direct.choose_reuse. */
