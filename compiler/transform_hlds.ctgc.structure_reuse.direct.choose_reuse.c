/*
** Automatically generated from `structure_reuse.direct.choose_reuse.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


/* :- module transform_hlds.ctgc.structure_reuse.direct.choose_reuse. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__init
ENDINIT
*/

#include "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "float.mih"
#include "getopt_io.mih"
#include "int.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.smm_common.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.ctgc.util.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"
#include "transform_hlds.ctgc.structure_reuse.direct.detect_garbage.mih"



#line 1016 "structure_reuse.direct.choose_reuse.m"
struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s {
#line 1020 "structure_reuse.direct.choose_reuse.m"
  MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
#line 1020 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9;
#line 1023 "structure_reuse.direct.choose_reuse.m"
  jmp_buf transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0;
#line 1023 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10;
#line 1024 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10;
#line 1016 "structure_reuse.direct.choose_reuse.m"
};


#line 172 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 175 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 181 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 184 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 187 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 190 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 193 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 196 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 199 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;

#line 202 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 205 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4];

#line 208 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4];

#line 211 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0;

#line 214 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1];

#line 217 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1];

#line 220 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0[1];

#line 223 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0[1];

#line 226 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2];

#line 229 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2];

#line 232 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0;

#line 235 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1];

#line 238 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1];

#line 241 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0[1];

#line 244 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0[1];

#line 247 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 250 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5];

#line 253 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0[5];

#line 256 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0;

#line 259 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1];

#line 262 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1];

#line 265 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0[1];

#line 268 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0[1];

#line 271 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;

#line 274 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0;

#line 277 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0[4];

#line 280 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0[4];

#line 283 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0;

#line 286 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0[1];

#line 289 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0[1];

#line 292 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0[1];

#line 295 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0[1];

#line 298 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0;

#line 301 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3];

#line 304 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3];

#line 307 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0;

#line 310 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1];

#line 313 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1];

#line 316 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1];

#line 319 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1];

#line 322 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
#line 325 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 327 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 330 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
#line 333 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 335 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 337 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 340 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
#line 343 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 345 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 348 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
#line 351 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 353 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 355 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 358 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
#line 361 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 363 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 366 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
#line 369 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 371 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 373 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 376 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
#line 379 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 381 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 384 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
#line 387 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 389 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 391 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 394 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
#line 397 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 399 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 402 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
#line 405 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 407 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 409 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 412 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
#line 415 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 417 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 420 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
#line 423 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 425 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 427 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 1380 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1380__1_1_f_0(
#line 1380 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16);

#line 855 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__855__1_1_f_0(
#line 855 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85);

#line 685 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__685__1_3_p_0(
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28);

#line 677 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__677__1_3_p_0(
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22);

#line 619 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__619__1_1_f_0(
#line 619 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88);

#line 649 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__649__1_3_p_0(
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117);

#line 434 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__434__1_3_p_0(
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_23);

#line 320 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__320__1_1_f_0(
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12);

#line 312 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__312__1_1_f_0(
#line 312 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7);

#line 290 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__290__1_1_f_0(
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12);

#line 220 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 220 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 257 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 257 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 249 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 249 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 198 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 198 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 210 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 210 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 154 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 154 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1506 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
#line 1506 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1506 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10,
#line 1506 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11);

#line 1477 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
#line 1477 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1477 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1477 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1472 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
#line 1472 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1472 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1472 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1467 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
#line 1467 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1467 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1467 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1443 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
#line 1443 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1443 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48,
#line 1443 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49);

#line 1403 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1(
#line 1403 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1403 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1403 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 1403 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 1395 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(
#line 1395 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4);

#line 1382 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2(
#line 1382 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1382 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1380 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1(
#line 1380 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1380 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1377 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(
#line 1377 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4);

#line 290 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1(
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1355 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(
#line 1355 "structure_reuse.direct.choose_reuse.m"
  MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5,
#line 1355 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6);

#line 1340 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(
#line 1340 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6,
#line 1340 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7,
#line 1340 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8);

#line 1315 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
#line 1315 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1315 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3);

#line 1309 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
#line 1309 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1309 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3);

#line 1299 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
#line 1299 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1299 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1295 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
#line 1295 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 1295 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5,
#line 1295 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6);

#line 290 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1306 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
#line 1306 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1306 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1238 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7,
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8,
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40,
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);

#line 1230 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
#line 1230 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1230 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1230 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12,
#line 1230 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13);

#line 1201 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
#line 1201 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1201 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1201 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1196 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
#line 1196 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1196 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1196 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1191 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
#line 1191 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1191 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1191 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1167 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
#line 1167 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1167 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1167 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51,
#line 1167 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52);

#line 1144 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
#line 1144 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14,
#line 1144 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1144 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1115 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
#line 1115 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6,
#line 1115 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7,
#line 1115 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8,
#line 1115 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);

#line 1089 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6,
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7,
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8,
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10);

#line 1075 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
#line 1075 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1075 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1073 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
#line 1073 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1073 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1073 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1053 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
#line 1053 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4,
#line 1053 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5);

#line 1023 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
#line 1023 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1024 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
#line 1024 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1023 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
#line 1023 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1023 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
#line 1023 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1016 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
#line 1016 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3,
#line 1016 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4);

#line 947 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12);

#line 1051 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2(
#line 1051 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1051 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1051 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 927 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
#line 927 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 927 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 927 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 918 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19);

#line 885 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(
#line 885 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1);

#line 881 "structure_reuse.direct.choose_reuse.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
#line 881 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 881 "structure_reuse.direct.choose_reuse.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5);

#line 855 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
#line 855 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 855 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 808 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(
#line 808 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 808 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6,
#line 808 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71,
#line 808 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);

#line 802 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(
#line 802 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 802 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6,
#line 802 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 802 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8);

#line 434 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 797 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
#line 797 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 797 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 797 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 789 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
#line 789 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 789 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6,
#line 789 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 789 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12);

#line 414 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 879 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 777 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 772 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
#line 772 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 772 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6,
#line 772 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 772 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12);

#line 746 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
#line 746 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3);

#line 743 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
#line 743 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 743 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 738 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11);

#line 414 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 879 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 777 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 735 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
#line 735 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 735 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 735 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 735 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 721 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7,
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8,
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9,
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10);

#line 714 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
#line 714 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4,
#line 714 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5);

#line 695 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 707 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 687 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
#line 687 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 687 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6,
#line 687 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7,
#line 687 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8);

#line 685 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5(
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 695 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 707 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 677 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 662 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
#line 662 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 662 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 662 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 665 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15);

#line 619 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
#line 619 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 619 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 649 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 566 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);

#line 554 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7,
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8,
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12,
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13);

#line 546 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
#line 546 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 546 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6,
#line 546 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 546 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8);

#line 531 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7);

#line 528 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1(
#line 528 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 528 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 528 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 528 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 523 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(
#line 523 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 523 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7,
#line 523 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8);

#line 358 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
#line 358 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 358 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 358 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 358 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 458 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29);

#line 434 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1(
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 428 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(
#line 428 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3,
#line 428 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4);

#line 397 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
#line 397 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4,
#line 397 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5,
#line 397 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6);

#line 374 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
#line 374 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4,
#line 374 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5,
#line 374 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6);

#line 325 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2(
#line 325 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 325 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 325 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 325 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 320 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1(
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 317 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(
#line 317 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4,
#line 317 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5);

#line 312 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1(
#line 312 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 312 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 309 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(
#line 309 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3);

#line 272 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(
#line 272 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3);

#line 261 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7,
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8,
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10,
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cond_11);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[27][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[7][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[2][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[10][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[6][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[1][9];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[2][1];

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

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[27][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[4])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[2])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[6])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[7])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
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

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2057 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 2066 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2074 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2082 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2091 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2099 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2107 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2116 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2124 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2132 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0
  }
};

#line 2140 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2149 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_reuse_strategy_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2157 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4] = {
  (MR_String) "back_strategy",
  (MR_String) "back_module_info",
  (MR_String) "back_proc_info",
  (MR_String) "back_vartypes"
};

#line 2165 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2180 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

#line 2185 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0
  }
};

#line 2194 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

#line 2199 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0[1] = {
  (MR_Integer) 0
};

#line 2204 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_background_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "background_info",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0
};

#line 2221 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0
};

#line 2227 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2] = {
  (MR_String) "con_pp",
  (MR_String) "con_reuse"
};

#line 2233 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2248 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

#line 2253 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0
  }
};

#line 2262 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

#line 2267 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0[1] = {
  (MR_Integer) 0
};

#line 2272 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "construction_spec",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0
};

#line 2289 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2297 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0
};

#line 2306 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0[5] = {
  (MR_String) "decon_var",
  (MR_String) "decon_pp",
  (MR_String) "decon_cons_id",
  (MR_String) "decon_args",
  (MR_String) "decon_conds"
};

#line 2315 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2330 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

#line 2335 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0
  }
};

#line 2344 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

#line 2349 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0[1] = {
  (MR_Integer) 0
};

#line 2354 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "deconstruction_spec",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0 },
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
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0
};

#line 2459 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "match_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2476 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0
  }
};

#line 2484 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2491 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3] = {
  (MR_String) "same_cons",
  (MR_String) "reuse_fields",
  (MR_String) "reuse_value"
};

#line 2498 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2513 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

#line 2518 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0
  }
};

#line 2527 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

#line 2532 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1] = {
  (MR_Integer) 0
};

#line 2537 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001)),
  ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001)),
  (MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse",
  (MR_String) "reuse_type",
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0 },
  {     transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0
};

#line 2554 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
#line 2557 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2559 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2561 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2563 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2565 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2568 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2570 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2573 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2575 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2577 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2580 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
#line 2583 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2585 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2587 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2589 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2591 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2593 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2596 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2598 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2601 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2603 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2605 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2608 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
#line 2611 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2613 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2615 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2617 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2619 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2622 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2624 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2627 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2629 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2631 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2634 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
#line 2637 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2639 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2641 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2643 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2645 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2647 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2650 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2652 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2655 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2657 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2659 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2662 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
#line 2665 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2667 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2669 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2671 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2673 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2676 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2678 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2681 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2683 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2685 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2688 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
#line 2691 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2693 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2695 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2697 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2699 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2701 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2704 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2706 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2709 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2711 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2713 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2716 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
#line 2719 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2721 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2723 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2725 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2727 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2730 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2732 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2735 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2737 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2739 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2742 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
#line 2745 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2747 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2749 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2751 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2753 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2755 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2758 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2760 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2763 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2765 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2767 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2770 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
#line 2773 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2775 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2777 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2779 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2781 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2784 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2786 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2789 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2791 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2793 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2796 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
#line 2799 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2801 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2803 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2805 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2807 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2809 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2812 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2814 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2817 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2819 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2821 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2824 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
#line 2827 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2829 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2831 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2833 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2835 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2838 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2840 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2843 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2845 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2847 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2850 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
#line 2853 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2855 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2857 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2859 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2861 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2863 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2866 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2868 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2871 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2873 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2875 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 1380 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1380__1_1_f_0(
#line 1380 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16)
#line 1380 "structure_reuse.direct.choose_reuse.m"
{
#line 1380 "structure_reuse.direct.choose_reuse.m"
  {
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 4)));
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 0)));
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 1)));
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 2)));
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_16, (MR_Integer) 3)));

#line 1380 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_17;
#line 1380 "structure_reuse.direct.choose_reuse.m"
  }
#line 1380 "structure_reuse.direct.choose_reuse.m"
}

#line 855 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__855__1_1_f_0(
#line 855 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85)
#line 855 "structure_reuse.direct.choose_reuse.m"
{
#line 855 "structure_reuse.direct.choose_reuse.m"
  {
#line 855 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 855 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85, (MR_Integer) 2)));
#line 855 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85, (MR_Integer) 0)));
#line 855 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_85, (MR_Integer) 1)));

#line 855 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_86;
#line 855 "structure_reuse.direct.choose_reuse.m"
  }
#line 855 "structure_reuse.direct.choose_reuse.m"
}

#line 685 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__685__1_3_p_0(
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28)
#line 685 "structure_reuse.direct.choose_reuse.m"
{
#line 685 "structure_reuse.direct.choose_reuse.m"
  {
#line 685 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 685 "structure_reuse.direct.choose_reuse.m"
    {
#line 685 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28);
#line 685 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 685 "structure_reuse.direct.choose_reuse.m"
  }
#line 685 "structure_reuse.direct.choose_reuse.m"
}

#line 677 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__677__1_3_p_0(
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22)
#line 677 "structure_reuse.direct.choose_reuse.m"
{
#line 677 "structure_reuse.direct.choose_reuse.m"
  {
#line 677 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 677 "structure_reuse.direct.choose_reuse.m"
    {
#line 677 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22);
#line 677 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 677 "structure_reuse.direct.choose_reuse.m"
  }
#line 677 "structure_reuse.direct.choose_reuse.m"
}

#line 619 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__619__1_1_f_0(
#line 619 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88)
#line 619 "structure_reuse.direct.choose_reuse.m"
{
#line 619 "structure_reuse.direct.choose_reuse.m"
  {
#line 619 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 619 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88, (MR_Integer) 2)));
#line 619 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88, (MR_Integer) 0)));
#line 619 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_88, (MR_Integer) 1)));

#line 619 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_89;
#line 619 "structure_reuse.direct.choose_reuse.m"
  }
#line 619 "structure_reuse.direct.choose_reuse.m"
}

#line 649 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__649__1_3_p_0(
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117)
#line 649 "structure_reuse.direct.choose_reuse.m"
{
#line 649 "structure_reuse.direct.choose_reuse.m"
  {
#line 649 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 649 "structure_reuse.direct.choose_reuse.m"
    {
#line 649 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117);
#line 649 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 649 "structure_reuse.direct.choose_reuse.m"
  }
#line 649 "structure_reuse.direct.choose_reuse.m"
}

#line 434 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__434__1_3_p_0(
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_23)
#line 434 "structure_reuse.direct.choose_reuse.m"
{
#line 434 "structure_reuse.direct.choose_reuse.m"
  {
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 0)));
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 1)));
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 1)));
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 435 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 2)));
#line 435 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 3)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 0)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 2)));
#line 436 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 3)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;

#line 436 "structure_reuse.direct.choose_reuse.m"
    {
#line 436 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12 = mercury__list__append_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25);
    }
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 0)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 1)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 2)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_22, (MR_Integer) 3)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 0)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 1)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 2)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_21, (MR_Integer) 3)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27);
#line 438 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 439 "structure_reuse.direct.choose_reuse.m"
    {
#line 439 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 439 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 439 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_23 = base;
#line 439 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_11));
#line 439 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12));
#line 439 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13);
#line 439 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14));
#line 439 "structure_reuse.direct.choose_reuse.m"
    }
#line 434 "structure_reuse.direct.choose_reuse.m"
  }
#line 434 "structure_reuse.direct.choose_reuse.m"
}

#line 320 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__320__1_1_f_0(
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12)
#line 320 "structure_reuse.direct.choose_reuse.m"
{
#line 320 "structure_reuse.direct.choose_reuse.m"
  {
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 4)));
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 0)));
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 1)));
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 2)));
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 3)));

#line 320 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_13;
#line 320 "structure_reuse.direct.choose_reuse.m"
  }
#line 320 "structure_reuse.direct.choose_reuse.m"
}

#line 312 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__312__1_1_f_0(
#line 312 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7)
#line 312 "structure_reuse.direct.choose_reuse.m"
{
#line 312 "structure_reuse.direct.choose_reuse.m"
  {
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 2)));
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 0)));
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 1)));
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 3)));
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_7, (MR_Integer) 4)));

#line 312 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_8;
#line 312 "structure_reuse.direct.choose_reuse.m"
  }
#line 312 "structure_reuse.direct.choose_reuse.m"
}

#line 290 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__290__1_1_f_0(
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12)
#line 290 "structure_reuse.direct.choose_reuse.m"
{
#line 290 "structure_reuse.direct.choose_reuse.m"
  {
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 0)));
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 1)));
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 2)));
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 3)));
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_12, (MR_Integer) 4)));

#line 290 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_13;
#line 290 "structure_reuse.direct.choose_reuse.m"
  }
#line 290 "structure_reuse.direct.choose_reuse.m"
}

#line 220 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 220 "structure_reuse.direct.choose_reuse.m"
{
#line 220 "structure_reuse.direct.choose_reuse.m"
  {
#line 220 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 220 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 220 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 220 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_12 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_13);
#line 220 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3254 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 220 "structure_reuse.direct.choose_reuse.m"
    else
#line 220 "structure_reuse.direct.choose_reuse.m"
      {
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4;
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7;

#line 220 "structure_reuse.direct.choose_reuse.m"
        {
#line 220 "structure_reuse.direct.choose_reuse.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
        }
#line 3284 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 == (MR_Integer) 0);
#line 220 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 220 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 220 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;
#line 220 "structure_reuse.direct.choose_reuse.m"
        else
#line 220 "structure_reuse.direct.choose_reuse.m"
          {
#line 220 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11;

#line 220 "structure_reuse.direct.choose_reuse.m"
            {
#line 220 "structure_reuse.direct.choose_reuse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
            }
#line 3304 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 == (MR_Integer) 0);
#line 220 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 220 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 220 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11;
#line 220 "structure_reuse.direct.choose_reuse.m"
            else
#line 220 "structure_reuse.direct.choose_reuse.m"
              {
#line 220 "structure_reuse.direct.choose_reuse.m"
                mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
#line 220 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 220 "structure_reuse.direct.choose_reuse.m"
          }
#line 220 "structure_reuse.direct.choose_reuse.m"
      }
#line 220 "structure_reuse.direct.choose_reuse.m"
  }
#line 220 "structure_reuse.direct.choose_reuse.m"
}

#line 220 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 220 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 220 "structure_reuse.direct.choose_reuse.m"
{
#line 220 "structure_reuse.direct.choose_reuse.m"
  {
#line 220 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 220 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 220 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 220 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10);
#line 220 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 220 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 220 "structure_reuse.direct.choose_reuse.m"
    else
#line 220 "structure_reuse.direct.choose_reuse.m"
      {
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11;
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 220 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));

#line 3373 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
#line 220 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 220 "structure_reuse.direct.choose_reuse.m"
          {
#line 3379 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5];
#line 3381 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3383 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)));
            }
#line 220 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3388 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
#line 220 "structure_reuse.direct.choose_reuse.m"
          }
#line 220 "structure_reuse.direct.choose_reuse.m"
      }
#line 220 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 220 "structure_reuse.direct.choose_reuse.m"
  }
#line 220 "structure_reuse.direct.choose_reuse.m"
}

#line 257 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 257 "structure_reuse.direct.choose_reuse.m"
{
#line 257 "structure_reuse.direct.choose_reuse.m"
  {
#line 257 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 257 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 257 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 257 "structure_reuse.direct.choose_reuse.m"
    {
#line 257 "structure_reuse.direct.choose_reuse.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_5)));
#line 257 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 257 "structure_reuse.direct.choose_reuse.m"
  }
#line 257 "structure_reuse.direct.choose_reuse.m"
}

#line 257 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 257 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 257 "structure_reuse.direct.choose_reuse.m"
{
#line 257 "structure_reuse.direct.choose_reuse.m"
  {
#line 257 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 257 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 257 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 257 "structure_reuse.direct.choose_reuse.m"
    {
#line 257 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_4)));
    }
#line 257 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 257 "structure_reuse.direct.choose_reuse.m"
  }
#line 257 "structure_reuse.direct.choose_reuse.m"
}

#line 249 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 249 "structure_reuse.direct.choose_reuse.m"
{
#line 249 "structure_reuse.direct.choose_reuse.m"
  {
#line 249 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 249 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 249 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 249 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16);
#line 249 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3487 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "structure_reuse.direct.choose_reuse.m"
    else
#line 249 "structure_reuse.direct.choose_reuse.m"
      {
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 249 "structure_reuse.direct.choose_reuse.m"
        {
#line 249 "structure_reuse.direct.choose_reuse.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
        }
#line 3517 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 == (MR_Integer) 0);
#line 249 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 249 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 249 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;
#line 249 "structure_reuse.direct.choose_reuse.m"
        else
#line 249 "structure_reuse.direct.choose_reuse.m"
          {
#line 249 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 249 "structure_reuse.direct.choose_reuse.m"
            {
#line 249 "structure_reuse.direct.choose_reuse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)));
            }
#line 3537 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 == (MR_Integer) 0);
#line 249 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 249 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 249 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 249 "structure_reuse.direct.choose_reuse.m"
            else
#line 249 "structure_reuse.direct.choose_reuse.m"
              {
#line 249 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 249 "structure_reuse.direct.choose_reuse.m"
                {
#line 249 "structure_reuse.direct.choose_reuse.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 3557 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 249 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 249 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 249 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 249 "structure_reuse.direct.choose_reuse.m"
                else
#line 249 "structure_reuse.direct.choose_reuse.m"
                  {
#line 249 "structure_reuse.direct.choose_reuse.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11);
#line 249 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 249 "structure_reuse.direct.choose_reuse.m"
              }
#line 249 "structure_reuse.direct.choose_reuse.m"
          }
#line 249 "structure_reuse.direct.choose_reuse.m"
      }
#line 249 "structure_reuse.direct.choose_reuse.m"
  }
#line 249 "structure_reuse.direct.choose_reuse.m"
}

#line 249 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 249 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 249 "structure_reuse.direct.choose_reuse.m"
{
#line 249 "structure_reuse.direct.choose_reuse.m"
  {
#line 249 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 249 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 249 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 249 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12);
#line 249 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 249 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 249 "structure_reuse.direct.choose_reuse.m"
    else
#line 249 "structure_reuse.direct.choose_reuse.m"
      {
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14;
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 249 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));

#line 3632 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 3634 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)));
        }
#line 249 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 249 "structure_reuse.direct.choose_reuse.m"
          {
#line 3641 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4];
#line 3643 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3645 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
            }
#line 249 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 249 "structure_reuse.direct.choose_reuse.m"
              {
#line 3652 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
#line 249 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3656 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
#line 249 "structure_reuse.direct.choose_reuse.m"
              }
#line 249 "structure_reuse.direct.choose_reuse.m"
          }
#line 249 "structure_reuse.direct.choose_reuse.m"
      }
#line 249 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 249 "structure_reuse.direct.choose_reuse.m"
  }
#line 249 "structure_reuse.direct.choose_reuse.m"
}

#line 198 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 198 "structure_reuse.direct.choose_reuse.m"
{
#line 198 "structure_reuse.direct.choose_reuse.m"
  {
#line 198 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 198 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 198 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_19 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 198 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_18 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_19);
#line 198 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3695 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 198 "structure_reuse.direct.choose_reuse.m"
    else
#line 198 "structure_reuse.direct.choose_reuse.m"
      {
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 4)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 4)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 198 "structure_reuse.direct.choose_reuse.m"
        {
#line 198 "structure_reuse.direct.choose_reuse.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)));
        }
#line 3729 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 198 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 198 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 198 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 198 "structure_reuse.direct.choose_reuse.m"
        else
#line 198 "structure_reuse.direct.choose_reuse.m"
          {
#line 198 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;

#line 198 "structure_reuse.direct.choose_reuse.m"
            {
#line 198 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__smm_common____Compare____program_point_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
            }
#line 3749 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 == (MR_Integer) 0);
#line 198 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 198 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 198 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 198 "structure_reuse.direct.choose_reuse.m"
            else
#line 198 "structure_reuse.direct.choose_reuse.m"
              {
#line 198 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;

#line 198 "structure_reuse.direct.choose_reuse.m"
                {
#line 198 "structure_reuse.direct.choose_reuse.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11);
                }
#line 3769 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 == (MR_Integer) 0);
#line 198 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 198 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 198 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 198 "structure_reuse.direct.choose_reuse.m"
                else
#line 198 "structure_reuse.direct.choose_reuse.m"
                  {
#line 198 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;

#line 198 "structure_reuse.direct.choose_reuse.m"
                    {
#line 198 "structure_reuse.direct.choose_reuse.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12)));
                    }
#line 3789 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 == (MR_Integer) 0);
#line 198 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 198 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 198 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 198 "structure_reuse.direct.choose_reuse.m"
                    else
#line 198 "structure_reuse.direct.choose_reuse.m"
                      {
#line 198 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13);
#line 198 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 198 "structure_reuse.direct.choose_reuse.m"
                  }
#line 198 "structure_reuse.direct.choose_reuse.m"
              }
#line 198 "structure_reuse.direct.choose_reuse.m"
          }
#line 198 "structure_reuse.direct.choose_reuse.m"
      }
#line 198 "structure_reuse.direct.choose_reuse.m"
  }
#line 198 "structure_reuse.direct.choose_reuse.m"
}

#line 198 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 198 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 198 "structure_reuse.direct.choose_reuse.m"
{
#line 198 "structure_reuse.direct.choose_reuse.m"
  {
#line 198 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 198 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 198 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_14 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 198 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_13 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_14);
#line 198 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 198 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 198 "structure_reuse.direct.choose_reuse.m"
    else
#line 198 "structure_reuse.direct.choose_reuse.m"
      {
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18;
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 4)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 198 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 4)));

#line 3870 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 3872 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
        }
#line 198 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 198 "structure_reuse.direct.choose_reuse.m"
          {
#line 3879 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3881 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
            }
#line 198 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 198 "structure_reuse.direct.choose_reuse.m"
              {
#line 3888 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                {
#line 3890 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 198 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 198 "structure_reuse.direct.choose_reuse.m"
                  {
#line 3897 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2];
#line 3899 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    {
#line 3901 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11)));
                    }
#line 198 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3906 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 3908 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                        return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12);
                      }
#line 198 "structure_reuse.direct.choose_reuse.m"
                  }
#line 198 "structure_reuse.direct.choose_reuse.m"
              }
#line 198 "structure_reuse.direct.choose_reuse.m"
          }
#line 198 "structure_reuse.direct.choose_reuse.m"
      }
#line 198 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 198 "structure_reuse.direct.choose_reuse.m"
  }
#line 198 "structure_reuse.direct.choose_reuse.m"
}

#line 210 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 210 "structure_reuse.direct.choose_reuse.m"
{
#line 210 "structure_reuse.direct.choose_reuse.m"
  {
#line 210 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 210 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 210 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 210 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10);
#line 210 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3950 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "structure_reuse.direct.choose_reuse.m"
    else
#line 210 "structure_reuse.direct.choose_reuse.m"
      {
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;

#line 210 "structure_reuse.direct.choose_reuse.m"
        {
#line 210 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__smm_common____Compare____program_point_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
        }
#line 3972 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 == (MR_Integer) 0);
#line 210 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 210 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 210 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;
#line 210 "structure_reuse.direct.choose_reuse.m"
        else
#line 210 "structure_reuse.direct.choose_reuse.m"
          {
#line 210 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7);
#line 210 "structure_reuse.direct.choose_reuse.m"
            return;
          }
#line 210 "structure_reuse.direct.choose_reuse.m"
      }
#line 210 "structure_reuse.direct.choose_reuse.m"
  }
#line 210 "structure_reuse.direct.choose_reuse.m"
}

#line 210 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 210 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 210 "structure_reuse.direct.choose_reuse.m"
{
#line 210 "structure_reuse.direct.choose_reuse.m"
  {
#line 210 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 210 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 210 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 210 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_7 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_8);
#line 210 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 210 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 210 "structure_reuse.direct.choose_reuse.m"
    else
#line 210 "structure_reuse.direct.choose_reuse.m"
      {
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 210 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));

#line 4033 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 4035 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5);
        }
#line 210 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 4040 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          {
#line 4042 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
          }
#line 210 "structure_reuse.direct.choose_reuse.m"
      }
#line 210 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 210 "structure_reuse.direct.choose_reuse.m"
  }
#line 210 "structure_reuse.direct.choose_reuse.m"
}

#line 154 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 154 "structure_reuse.direct.choose_reuse.m"
{
#line 154 "structure_reuse.direct.choose_reuse.m"
  {
#line 154 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 154 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 154 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 154 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16);
#line 154 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 4078 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 154 "structure_reuse.direct.choose_reuse.m"
    else
#line 154 "structure_reuse.direct.choose_reuse.m"
      {
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 154 "structure_reuse.direct.choose_reuse.m"
        {
#line 154 "structure_reuse.direct.choose_reuse.m"
          libs__globals____Compare____reuse_strategy_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
        }
#line 4108 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 == (MR_Integer) 0);
#line 154 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 154 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 154 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;
#line 154 "structure_reuse.direct.choose_reuse.m"
        else
#line 154 "structure_reuse.direct.choose_reuse.m"
          {
#line 154 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 154 "structure_reuse.direct.choose_reuse.m"
            {
#line 154 "structure_reuse.direct.choose_reuse.m"
              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
            }
#line 4128 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 == (MR_Integer) 0);
#line 154 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 154 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 154 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 154 "structure_reuse.direct.choose_reuse.m"
            else
#line 154 "structure_reuse.direct.choose_reuse.m"
              {
#line 154 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 154 "structure_reuse.direct.choose_reuse.m"
                {
#line 154 "structure_reuse.direct.choose_reuse.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 4148 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 154 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 154 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 154 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 154 "structure_reuse.direct.choose_reuse.m"
                else
#line 154 "structure_reuse.direct.choose_reuse.m"
                  {
#line 154 "structure_reuse.direct.choose_reuse.m"
                    {
#line 154 "structure_reuse.direct.choose_reuse.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[2], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11)));
#line 154 "structure_reuse.direct.choose_reuse.m"
                      return;
                    }
#line 154 "structure_reuse.direct.choose_reuse.m"
                  }
#line 154 "structure_reuse.direct.choose_reuse.m"
              }
#line 154 "structure_reuse.direct.choose_reuse.m"
          }
#line 154 "structure_reuse.direct.choose_reuse.m"
      }
#line 154 "structure_reuse.direct.choose_reuse.m"
  }
#line 154 "structure_reuse.direct.choose_reuse.m"
}

#line 154 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 154 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 154 "structure_reuse.direct.choose_reuse.m"
{
#line 154 "structure_reuse.direct.choose_reuse.m"
  {
#line 154 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 154 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 154 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 154 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12);
#line 154 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 154 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 154 "structure_reuse.direct.choose_reuse.m"
    else
#line 154 "structure_reuse.direct.choose_reuse.m"
      {
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_16_16;
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 154 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));

#line 4227 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 4229 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = libs__globals____Unify____reuse_strategy_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7);
        }
#line 154 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 154 "structure_reuse.direct.choose_reuse.m"
          {
#line 4236 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 4238 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
            }
#line 154 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 154 "structure_reuse.direct.choose_reuse.m"
              {
#line 4245 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                {
#line 4247 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
                }
#line 154 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 154 "structure_reuse.direct.choose_reuse.m"
                  {
#line 4254 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[2];
#line 4256 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    {
#line 4258 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_16_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10)));
                    }
#line 154 "structure_reuse.direct.choose_reuse.m"
                  }
#line 154 "structure_reuse.direct.choose_reuse.m"
              }
#line 154 "structure_reuse.direct.choose_reuse.m"
          }
#line 154 "structure_reuse.direct.choose_reuse.m"
      }
#line 154 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 154 "structure_reuse.direct.choose_reuse.m"
  }
#line 154 "structure_reuse.direct.choose_reuse.m"
}

#line 1506 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
#line 1506 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1506 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10,
#line 1506 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11)
#line 1506 "structure_reuse.direct.choose_reuse.m"
{
#line 1509 "structure_reuse.direct.choose_reuse.m"
  {
#line 1509 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1509 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 0)));
#line 1509 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 1)));
#line 1509 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 2)));
#line 1509 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9;

#line 1511 "structure_reuse.direct.choose_reuse.m"
    {
#line 1511 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9);
    }
#line 1512 "structure_reuse.direct.choose_reuse.m"
    {
#line 1512 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1512 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1512 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11 = base;
#line 1512 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_6));
#line 1512 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_7));
#line 1512 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9));
#line 1512 "structure_reuse.direct.choose_reuse.m"
    }
#line 1509 "structure_reuse.direct.choose_reuse.m"
  }
#line 1506 "structure_reuse.direct.choose_reuse.m"
}

#line 1477 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
#line 1477 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1477 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1477 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1477 "structure_reuse.direct.choose_reuse.m"
{
#line 1477 "structure_reuse.direct.choose_reuse.m"
  {
#line 1477 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1477 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11;

#line 1477 "structure_reuse.direct.choose_reuse.m"
    {
#line 1477 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11);
    }
#line 1477 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11));
#line 1477 "structure_reuse.direct.choose_reuse.m"
  }
#line 1477 "structure_reuse.direct.choose_reuse.m"
}

#line 1472 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
#line 1472 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1472 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1472 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1472 "structure_reuse.direct.choose_reuse.m"
{
#line 1472 "structure_reuse.direct.choose_reuse.m"
  {
#line 1472 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1472 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49;

#line 1472 "structure_reuse.direct.choose_reuse.m"
    {
#line 1472 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49);
    }
#line 1472 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49));
#line 1472 "structure_reuse.direct.choose_reuse.m"
  }
#line 1472 "structure_reuse.direct.choose_reuse.m"
}

#line 1467 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
#line 1467 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1467 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1467 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1467 "structure_reuse.direct.choose_reuse.m"
{
#line 1467 "structure_reuse.direct.choose_reuse.m"
  {
#line 1467 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1467 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49;

#line 1467 "structure_reuse.direct.choose_reuse.m"
    {
#line 1467 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49);
    }
#line 1467 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49));
#line 1467 "structure_reuse.direct.choose_reuse.m"
  }
#line 1467 "structure_reuse.direct.choose_reuse.m"
}

#line 1443 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
#line 1443 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1443 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48,
#line 1443 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49)
#line 1443 "structure_reuse.direct.choose_reuse.m"
{
#line 1446 "structure_reuse.direct.choose_reuse.m"
  {
#line 1446 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1446 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48, (MR_Integer) 0)));
#line 1446 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48, (MR_Integer) 1)));
#line 1446 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14;
#line 1446 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15;

#line 1453 "structure_reuse.direct.choose_reuse.m"
#line 1453 "structure_reuse.direct.choose_reuse.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) {
#line 1453 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1453 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1481 "structure_reuse.direct.choose_reuse.m"
        {
#line 1482 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1483 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1481 "structure_reuse.direct.choose_reuse.m"
        }
#line 1453 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1449 "structure_reuse.direct.choose_reuse.m"
        {
#line 1449 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)));
#line 1449 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1449 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1449 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1449 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 4)));
#line 1449 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13;
#line 1531 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80;
#line 1531 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81;
#line 1531 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82;
#line 1531 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83;
#line 1531 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84;
#line 1521 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86;
#line 1521 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88;
#line 1521 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85;

#line 1521 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11)) == (MR_mktag((MR_Integer) 1)));
#line 1521 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1521 "structure_reuse.direct.choose_reuse.m"
            {
#line 1521 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 0)));
#line 1521 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 1)));
#line 1521 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 2)));
#line 1521 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 3)));
#line 1521 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 4)));
#line 1521 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 5)));
#line 1522 "structure_reuse.direct.choose_reuse.m"
              {
#line 1522 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7);
              }
#line 1522 "structure_reuse.direct.choose_reuse.m"
              {
#line 1522 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86);
              }
#line 1521 "structure_reuse.direct.choose_reuse.m"
              if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1521 "structure_reuse.direct.choose_reuse.m"
                {
#line 1524 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1524 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86);
                  }
#line 1524 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 1521 "structure_reuse.direct.choose_reuse.m"
                }
#line 1521 "structure_reuse.direct.choose_reuse.m"
            }
#line 1531 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1527 "structure_reuse.direct.choose_reuse.m"
            {
#line 1526 "structure_reuse.direct.choose_reuse.m"
              {
#line 1526 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1526 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80));
#line 1526 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81));
#line 1526 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82));
#line 1526 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83));
#line 1526 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84));
#line 1526 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1526 "structure_reuse.direct.choose_reuse.m"
              }
#line 1530 "structure_reuse.direct.choose_reuse.m"
              {
#line 1530 "structure_reuse.direct.choose_reuse.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[0]), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14);
              }
#line 1527 "structure_reuse.direct.choose_reuse.m"
            }
#line 1531 "structure_reuse.direct.choose_reuse.m"
          else
#line 1532 "structure_reuse.direct.choose_reuse.m"
            {
#line 1532 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1532 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11;
#line 1532 "structure_reuse.direct.choose_reuse.m"
            }
#line 1452 "structure_reuse.direct.choose_reuse.m"
          {
#line 1452 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1452 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_8));
#line 1452 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_9));
#line 1452 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_10));
#line 1452 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13));
#line 1452 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_12));
#line 1452 "structure_reuse.direct.choose_reuse.m"
          }
#line 1449 "structure_reuse.direct.choose_reuse.m"
        }
#line 1453 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 2:
#line 1454 "structure_reuse.direct.choose_reuse.m"
        {
#line 1455 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1456 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1454 "structure_reuse.direct.choose_reuse.m"
        }
#line 1453 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 3:
#line 1453 "structure_reuse.direct.choose_reuse.m"
#line 1453 "structure_reuse.direct.choose_reuse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) {
#line 1453 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1453 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1458 "structure_reuse.direct.choose_reuse.m"
            {
#line 1459 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1460 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1458 "structure_reuse.direct.choose_reuse.m"
            }
#line 1453 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1462 "structure_reuse.direct.choose_reuse.m"
            {
#line 1463 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1464 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1462 "structure_reuse.direct.choose_reuse.m"
            }
#line 1453 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 1466 "structure_reuse.direct.choose_reuse.m"
            {
#line 1466 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66;
#line 1466 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1466 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35;
#line 1466 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;
#line 1466 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1467 "structure_reuse.direct.choose_reuse.m"
              {
#line 1467 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1467 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[8]));
#line 1467 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1));
#line 1467 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1467 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1467 "structure_reuse.direct.choose_reuse.m"
              }
#line 4664 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1467 "structure_reuse.direct.choose_reuse.m"
              {
#line 1467 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_34, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35);
              }
#line 1468 "structure_reuse.direct.choose_reuse.m"
              {
#line 1468 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1468 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1468 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_57));
#line 1468 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35));
#line 1468 "structure_reuse.direct.choose_reuse.m"
              }
#line 1469 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1466 "structure_reuse.direct.choose_reuse.m"
            }
#line 1453 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 1471 "structure_reuse.direct.choose_reuse.m"
            {
#line 1471 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69;
#line 1471 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1471 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1471 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59;

#line 1472 "structure_reuse.direct.choose_reuse.m"
              {
#line 1472 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[8]));
#line 1472 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2));
#line 1472 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1472 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1472 "structure_reuse.direct.choose_reuse.m"
              }
#line 4716 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1472 "structure_reuse.direct.choose_reuse.m"
              {
#line 1472 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_58, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59);
              }
#line 1473 "structure_reuse.direct.choose_reuse.m"
              {
#line 1473 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1473 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59));
#line 1473 "structure_reuse.direct.choose_reuse.m"
              }
#line 1474 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1471 "structure_reuse.direct.choose_reuse.m"
            }
#line 1453 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 4:
#line 1476 "structure_reuse.direct.choose_reuse.m"
            {
#line 1476 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72;
#line 1476 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1476 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37;
#line 1476 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 1476 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1476 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));

#line 1477 "structure_reuse.direct.choose_reuse.m"
              {
#line 1477 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1477 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[9]));
#line 1477 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3));
#line 1477 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1477 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1477 "structure_reuse.direct.choose_reuse.m"
              }
#line 4770 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1477 "structure_reuse.direct.choose_reuse.m"
              {
#line 1477 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_36, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37);
              }
#line 1478 "structure_reuse.direct.choose_reuse.m"
              {
#line 1478 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1478 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_60));
#line 1478 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_61));
#line 1478 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37));
#line 1478 "structure_reuse.direct.choose_reuse.m"
              }
#line 1479 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1476 "structure_reuse.direct.choose_reuse.m"
            }
#line 1453 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 5:
#line 1485 "structure_reuse.direct.choose_reuse.m"
            {
#line 1485 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1485 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40;
#line 1485 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1489 "structure_reuse.direct.choose_reuse.m"
              {
#line 1489 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_39, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40);
              }
#line 1490 "structure_reuse.direct.choose_reuse.m"
              {
#line 1490 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1490 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1490 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62));
#line 1490 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40));
#line 1490 "structure_reuse.direct.choose_reuse.m"
              }
#line 1491 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1485 "structure_reuse.direct.choose_reuse.m"
            }
#line 1453 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 6:
#line 1493 "structure_reuse.direct.choose_reuse.m"
            {
#line 1493 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1493 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1493 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 4)));
#line 1493 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44;
#line 1493 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45;
#line 1493 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46;
#line 1493 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1494 "structure_reuse.direct.choose_reuse.m"
              {
#line 1494 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_41, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44);
              }
#line 1495 "structure_reuse.direct.choose_reuse.m"
              {
#line 1495 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_42, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45);
              }
#line 1496 "structure_reuse.direct.choose_reuse.m"
              {
#line 1496 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_43, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46);
              }
#line 1497 "structure_reuse.direct.choose_reuse.m"
              {
#line 1497 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1497 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1497 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63));
#line 1497 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44));
#line 1497 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45));
#line 1497 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46));
#line 1497 "structure_reuse.direct.choose_reuse.m"
              }
#line 1498 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1493 "structure_reuse.direct.choose_reuse.m"
            }
#line 1453 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 7:
#line 1500 "structure_reuse.direct.choose_reuse.m"
            {
#line 1502 "structure_reuse.direct.choose_reuse.m"
              {
#line 1502 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.check_for_cell_caching_2\'/3", (MR_String) "shorthand");
#line 1502 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1500 "structure_reuse.direct.choose_reuse.m"
            }
#line 1453 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
        }
#line 1453 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1453 "structure_reuse.direct.choose_reuse.m"
    }
#line 1504 "structure_reuse.direct.choose_reuse.m"
    {
#line 1504 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1504 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49 = base;
#line 1504 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15));
#line 1504 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14));
#line 1504 "structure_reuse.direct.choose_reuse.m"
    }
#line 1446 "structure_reuse.direct.choose_reuse.m"
  }
#line 1443 "structure_reuse.direct.choose_reuse.m"
}

#line 1403 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1(
#line 1403 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1403 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1403 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 1403 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 1403 "structure_reuse.direct.choose_reuse.m"
{
#line 1403 "structure_reuse.direct.choose_reuse.m"
  {
#line 1403 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1403 "structure_reuse.direct.choose_reuse.m"
    {
#line 1403 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
#line 1403 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 1403 "structure_reuse.direct.choose_reuse.m"
  }
#line 1403 "structure_reuse.direct.choose_reuse.m"
}

#line 1395 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(
#line 1395 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4)
#line 1395 "structure_reuse.direct.choose_reuse.m"
{
#line 1400 "structure_reuse.direct.choose_reuse.m"
  {
#line 1400 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 1398 "structure_reuse.direct.choose_reuse.m"
    {
#line 1398 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4);
    }
#line 1400 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1399 "structure_reuse.direct.choose_reuse.m"
      {
#line 1399 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_32;
#line 1399 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33;
#line 1399 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;

#line 1335 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_32 = ((((MR_Integer) 79 - (MR_Integer) 21)) - (MR_Integer) 1);
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_32);
        }
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33 = mercury__string__f_43_43_2_f_0((MR_String) "%---empty match table", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38);
        }
#line 1337 "structure_reuse.direct.choose_reuse.m"
        {
#line 1337 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33);
        }
#line 1338 "structure_reuse.direct.choose_reuse.m"
        {
#line 1338 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
#line 1338 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 1399 "structure_reuse.direct.choose_reuse.m"
      }
#line 1400 "structure_reuse.direct.choose_reuse.m"
    else
#line 1401 "structure_reuse.direct.choose_reuse.m"
      {
#line 1401 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21;
#line 1401 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6;
#line 1401 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_49;
#line 1401 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50;
#line 1401 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;
#line 1401 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_66;
#line 1401 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67;
#line 1401 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72;
#line 1403 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_IO_14_14;

#line 1335 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_49 = ((((MR_Integer) 79 - (MR_Integer) 22)) - (MR_Integer) 1);
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_49);
        }
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50 = mercury__string__f_43_43_2_f_0((MR_String) "%---full table (start)", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55);
        }
#line 1337 "structure_reuse.direct.choose_reuse.m"
        {
#line 1337 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50);
        }
#line 1338 "structure_reuse.direct.choose_reuse.m"
        {
#line 1338 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
        }
#line 5056 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 1402 "structure_reuse.direct.choose_reuse.m"
        {
#line 1402 "structure_reuse.direct.choose_reuse.m"
          mercury__multi_map__values_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6);
        }
#line 1403 "structure_reuse.direct.choose_reuse.m"
        {
#line 1403 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_2(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_IO_14_14);
        }
#line 1335 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_66 = ((((MR_Integer) 79 - (MR_Integer) 20)) - (MR_Integer) 1);
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_66);
        }
#line 1336 "structure_reuse.direct.choose_reuse.m"
        {
#line 1336 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67 = mercury__string__f_43_43_2_f_0((MR_String) "%---full table (end)", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72);
        }
#line 1337 "structure_reuse.direct.choose_reuse.m"
        {
#line 1337 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67);
        }
#line 1338 "structure_reuse.direct.choose_reuse.m"
        {
#line 1338 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
#line 1338 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 1401 "structure_reuse.direct.choose_reuse.m"
      }
#line 1400 "structure_reuse.direct.choose_reuse.m"
  }
#line 1395 "structure_reuse.direct.choose_reuse.m"
}

#line 1382 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2(
#line 1382 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1382 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1382 "structure_reuse.direct.choose_reuse.m"
{
#line 1382 "structure_reuse.direct.choose_reuse.m"
  {
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1382 "structure_reuse.direct.choose_reuse.m"
    {
#line 1382 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1382 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1382 "structure_reuse.direct.choose_reuse.m"
  }
#line 1382 "structure_reuse.direct.choose_reuse.m"
}

#line 1380 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1(
#line 1380 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1380 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1380 "structure_reuse.direct.choose_reuse.m"
{
#line 1380 "structure_reuse.direct.choose_reuse.m"
  {
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_17;

#line 1380 "structure_reuse.direct.choose_reuse.m"
    {
#line 1380 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_17 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1380__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1380 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_17));
#line 1380 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 1380 "structure_reuse.direct.choose_reuse.m"
  }
#line 1380 "structure_reuse.direct.choose_reuse.m"
}

#line 1377 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(
#line 1377 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4)
#line 1377 "structure_reuse.direct.choose_reuse.m"
{
#line 1379 "structure_reuse.direct.choose_reuse.m"
  {
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 1379 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1380 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;
#line 1388 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44;
#line 1388 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 1388 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 1389 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 1389 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 1389 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;

#line 1380 "structure_reuse.direct.choose_reuse.m"
    {
#line 1380 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[25], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
    }
#line 1382 "structure_reuse.direct.choose_reuse.m"
    {
#line 1382 "structure_reuse.direct.choose_reuse.m"
      mercury__list__takewhile_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[26], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54);
    }
#line 1382 "structure_reuse.direct.choose_reuse.m"
    {
#line 1382 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[6], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54)));
    }
#line 1384 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1383 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9 = (MR_String) "A";
#line 1384 "structure_reuse.direct.choose_reuse.m"
    else
#line 1385 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9 = (MR_String) "C";
#line 1388 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1388 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1388 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1388 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1388 "structure_reuse.direct.choose_reuse.m"
    {
#line 1388 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21);
    }
#line 1389 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1389 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1389 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1389 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1389 "structure_reuse.direct.choose_reuse.m"
    {
#line 1389 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22);
    }
#line 1390 "structure_reuse.direct.choose_reuse.m"
    {
#line 1390 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = mercury__string__int_to_string_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10);
    }
#line 1391 "structure_reuse.direct.choose_reuse.m"
    {
#line 1391 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = mercury__string__int_to_string_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11);
    }
#line 1392 "structure_reuse.direct.choose_reuse.m"
    {
#line 1392 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9));
#line 1392 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1392 "structure_reuse.direct.choose_reuse.m"
    }
#line 1392 "structure_reuse.direct.choose_reuse.m"
    {
#line 1392 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, 0) = ((MR_Box) ((MR_String) ", Co: "));
#line 1392 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33));
#line 1392 "structure_reuse.direct.choose_reuse.m"
    }
#line 1391 "structure_reuse.direct.choose_reuse.m"
    {
#line 1391 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1391 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30));
#line 1391 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31));
#line 1391 "structure_reuse.direct.choose_reuse.m"
    }
#line 1390 "structure_reuse.direct.choose_reuse.m"
    {
#line 1390 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27, 0) = ((MR_Box) ((MR_String) ", c: "));
#line 1390 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29));
#line 1390 "structure_reuse.direct.choose_reuse.m"
    }
#line 1390 "structure_reuse.direct.choose_reuse.m"
    {
#line 1390 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26));
#line 1390 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27));
#line 1390 "structure_reuse.direct.choose_reuse.m"
    }
#line 1390 "structure_reuse.direct.choose_reuse.m"
    {
#line 1390 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1390 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, 0) = ((MR_Box) ((MR_String) "d: "));
#line 1390 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25));
#line 1390 "structure_reuse.direct.choose_reuse.m"
    }
#line 1390 "structure_reuse.direct.choose_reuse.m"
    {
#line 1390 "structure_reuse.direct.choose_reuse.m"
      mercury__string__append_list_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12);
    }
#line 1393 "structure_reuse.direct.choose_reuse.m"
    {
#line 1393 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12);
#line 1393 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 1379 "structure_reuse.direct.choose_reuse.m"
  }
#line 1377 "structure_reuse.direct.choose_reuse.m"
}

#line 290 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1(
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 290 "structure_reuse.direct.choose_reuse.m"
{
#line 290 "structure_reuse.direct.choose_reuse.m"
  {
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13;

#line 290 "structure_reuse.direct.choose_reuse.m"
    {
#line 290 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__290__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 290 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13));
#line 290 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 290 "structure_reuse.direct.choose_reuse.m"
  }
#line 290 "structure_reuse.direct.choose_reuse.m"
}

#line 1355 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(
#line 1355 "structure_reuse.direct.choose_reuse.m"
  MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5,
#line 1355 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6)
#line 1355 "structure_reuse.direct.choose_reuse.m"
{
#line 1357 "structure_reuse.direct.choose_reuse.m"
  {
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_77;
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8;
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9;
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_54;
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55;
#line 1357 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 291 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_73_73;
#line 291 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74;
#line 291 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75;
#line 1362 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34;
#line 1362 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 1362 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;
#line 1370 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 1370 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 1370 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;

#line 1358 "structure_reuse.direct.choose_reuse.m"
    {
#line 1358 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5);
    }
#line 1359 "structure_reuse.direct.choose_reuse.m"
    {
#line 1359 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 5455 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_77 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 291 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 291 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 291 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 291 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 291 "structure_reuse.direct.choose_reuse.m"
    {
#line 291 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_54 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_77, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[24], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61);
    }
#line 292 "structure_reuse.direct.choose_reuse.m"
    {
#line 292 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55 = mercury__list__remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_77, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_54);
    }
#line 301 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "structure_reuse.direct.choose_reuse.m"
      {
#line 303 "structure_reuse.direct.choose_reuse.m"
        {
#line 303 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
#line 303 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 302 "structure_reuse.direct.choose_reuse.m"
      }
#line 301 "structure_reuse.direct.choose_reuse.m"
    else
#line 294 "structure_reuse.direct.choose_reuse.m"
      {
#line 294 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_56;

#line 294 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55, (MR_Integer) 0)));
#line 294 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55, (MR_Integer) 1)));
#line 297 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "structure_reuse.direct.choose_reuse.m"
          {
#line 296 "structure_reuse.direct.choose_reuse.m"
          }
#line 297 "structure_reuse.direct.choose_reuse.m"
        else
#line 298 "structure_reuse.direct.choose_reuse.m"
          {
#line 299 "structure_reuse.direct.choose_reuse.m"
            {
#line 299 "structure_reuse.direct.choose_reuse.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
#line 299 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 298 "structure_reuse.direct.choose_reuse.m"
          }
#line 294 "structure_reuse.direct.choose_reuse.m"
      }
#line 1360 "structure_reuse.direct.choose_reuse.m"
    {
#line 1360 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17);
    }
#line 1360 "structure_reuse.direct.choose_reuse.m"
    {
#line 1360 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15);
    }
#line 1361 "structure_reuse.direct.choose_reuse.m"
    {
#line 1361 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 1362 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 1362 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 1362 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 1362 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 1364 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8 == ((MR_Float) 0.0000000000000000));
#line 1364 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 1367 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1366 "structure_reuse.direct.choose_reuse.m"
      {
#line 1366 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;

#line 1366 "structure_reuse.direct.choose_reuse.m"
        {
#line 1366 "structure_reuse.direct.choose_reuse.m"
          mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[1], (MR_Integer) 2, (MR_Integer) 2, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41);
        }
#line 1366 "structure_reuse.direct.choose_reuse.m"
        {
#line 1366 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41);
        }
#line 1366 "structure_reuse.direct.choose_reuse.m"
      }
#line 1367 "structure_reuse.direct.choose_reuse.m"
    else
#line 1368 "structure_reuse.direct.choose_reuse.m"
      {
#line 1368 "structure_reuse.direct.choose_reuse.m"
        {
#line 1368 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
#line 1368 "structure_reuse.direct.choose_reuse.m"
      }
#line 1370 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 1370 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 1370 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 1370 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 1371 "structure_reuse.direct.choose_reuse.m"
    {
#line 1371 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 1372 "structure_reuse.direct.choose_reuse.m"
    {
#line 1372 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9);
    }
#line 1373 "structure_reuse.direct.choose_reuse.m"
    {
#line 1373 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1374 "structure_reuse.direct.choose_reuse.m"
    {
#line 1374 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6);
    }
#line 1375 "structure_reuse.direct.choose_reuse.m"
    {
#line 1375 "structure_reuse.direct.choose_reuse.m"
      mercury__io__nl_2_p_0();
#line 1375 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 1357 "structure_reuse.direct.choose_reuse.m"
  }
#line 1355 "structure_reuse.direct.choose_reuse.m"
}

#line 1340 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(
#line 1340 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6,
#line 1340 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7,
#line 1340 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8)
#line 1340 "structure_reuse.direct.choose_reuse.m"
{
#line 1345 "structure_reuse.direct.choose_reuse.m"
  {
#line 1345 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 1345 "structure_reuse.direct.choose_reuse.m"
#line 1345 "structure_reuse.direct.choose_reuse.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6) {
#line 1345 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1345 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1352 "structure_reuse.direct.choose_reuse.m"
        {
#line 1352 "structure_reuse.direct.choose_reuse.m"
        }
#line 1345 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1345 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1345 "structure_reuse.direct.choose_reuse.m"
        {
#line 1345 "structure_reuse.direct.choose_reuse.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_27;
#line 1345 "structure_reuse.direct.choose_reuse.m"
          MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28;
#line 1345 "structure_reuse.direct.choose_reuse.m"
          MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 1345 "structure_reuse.direct.choose_reuse.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_44;
#line 1345 "structure_reuse.direct.choose_reuse.m"
          MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45;
#line 1345 "structure_reuse.direct.choose_reuse.m"
          MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;

#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_27 = ((((MR_Integer) 79 - (MR_Integer) 15)) - (MR_Integer) 1);
#line 1336 "structure_reuse.direct.choose_reuse.m"
          {
#line 1336 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_27);
          }
#line 1336 "structure_reuse.direct.choose_reuse.m"
          {
#line 1336 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28 = mercury__string__f_43_43_2_f_0((MR_String) "%---reuse table", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33);
          }
#line 1337 "structure_reuse.direct.choose_reuse.m"
          {
#line 1337 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28);
          }
#line 1338 "structure_reuse.direct.choose_reuse.m"
          {
#line 1338 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0((MR_String) "%\n");
          }
#line 1347 "structure_reuse.direct.choose_reuse.m"
          {
#line 1347 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0((MR_String) "%\t|\tvar\t|\tvalue\t|\tdegree\n");
          }
#line 1348 "structure_reuse.direct.choose_reuse.m"
          {
#line 1348 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0((MR_String) "%-sel- ", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8);
          }
#line 1349 "structure_reuse.direct.choose_reuse.m"
          {
#line 1349 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7);
          }
#line 1335 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_44 = ((((MR_Integer) 79 - (MR_Integer) 4)) - (MR_Integer) 1);
#line 1336 "structure_reuse.direct.choose_reuse.m"
          {
#line 1336 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_44);
          }
#line 1336 "structure_reuse.direct.choose_reuse.m"
          {
#line 1336 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45 = mercury__string__f_43_43_2_f_0((MR_String) "%---", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50);
          }
#line 1337 "structure_reuse.direct.choose_reuse.m"
          {
#line 1337 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45);
          }
#line 1338 "structure_reuse.direct.choose_reuse.m"
          {
#line 1338 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0((MR_String) "%\n");
#line 1338 "structure_reuse.direct.choose_reuse.m"
            return;
          }
#line 1345 "structure_reuse.direct.choose_reuse.m"
        }
#line 1345 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1345 "structure_reuse.direct.choose_reuse.m"
    }
#line 1345 "structure_reuse.direct.choose_reuse.m"
  }
#line 1340 "structure_reuse.direct.choose_reuse.m"
}

#line 1315 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
#line 1315 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1315 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3)
#line 1315 "structure_reuse.direct.choose_reuse.m"
{
#line 1318 "structure_reuse.direct.choose_reuse.m"
  {
#line 1318 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1318 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3, (MR_Integer) 0)));
#line 1318 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3, (MR_Integer) 1)));

#line 1318 "structure_reuse.direct.choose_reuse.m"
    {
#line 1318 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5);
    }
#line 1318 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1318 "structure_reuse.direct.choose_reuse.m"
  }
#line 1315 "structure_reuse.direct.choose_reuse.m"
}

#line 1309 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
#line 1309 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1309 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3)
#line 1309 "structure_reuse.direct.choose_reuse.m"
{
#line 1312 "structure_reuse.direct.choose_reuse.m"
  {
#line 1312 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 1)));
#line 1312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 0)));
#line 1312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 2)));
#line 1312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 3)));
#line 1312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 4)));

#line 1312 "structure_reuse.direct.choose_reuse.m"
    {
#line 1312 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
    }
#line 1312 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1312 "structure_reuse.direct.choose_reuse.m"
  }
#line 1309 "structure_reuse.direct.choose_reuse.m"
}

#line 1299 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
#line 1299 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1299 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1299 "structure_reuse.direct.choose_reuse.m"
{
#line 1299 "structure_reuse.direct.choose_reuse.m"
  {
#line 1299 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1299 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1299 "structure_reuse.direct.choose_reuse.m"
    {
#line 1299 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1299 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1299 "structure_reuse.direct.choose_reuse.m"
  }
#line 1299 "structure_reuse.direct.choose_reuse.m"
}

#line 1295 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
#line 1295 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 1295 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5,
#line 1295 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6)
#line 1295 "structure_reuse.direct.choose_reuse.m"
{
#line 1298 "structure_reuse.direct.choose_reuse.m"
  {
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17;
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7;
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9;
#line 1298 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1299 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1299 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1299 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));

#line 1299 "structure_reuse.direct.choose_reuse.m"
    {
#line 1299 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[6]));
#line 1299 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1));
#line 1299 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1299 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5));
#line 1299 "structure_reuse.direct.choose_reuse.m"
    }
#line 1299 "structure_reuse.direct.choose_reuse.m"
    {
#line 1299 "structure_reuse.direct.choose_reuse.m"
      mercury__list__filter_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
    }
#line 1300 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 1300 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1300 "structure_reuse.direct.choose_reuse.m"
      {
#line 1300 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, (MR_Integer) 0)));
#line 1300 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, (MR_Integer) 1)));
#line 5890 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3];
#line 1300 "structure_reuse.direct.choose_reuse.m"
        {
#line 1300 "structure_reuse.direct.choose_reuse.m"
          return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16)));
        }
#line 1300 "structure_reuse.direct.choose_reuse.m"
      }
#line 1298 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1298 "structure_reuse.direct.choose_reuse.m"
  }
#line 1295 "structure_reuse.direct.choose_reuse.m"
}

#line 290 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 290 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 290 "structure_reuse.direct.choose_reuse.m"
{
#line 290 "structure_reuse.direct.choose_reuse.m"
  {
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 290 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13;

#line 290 "structure_reuse.direct.choose_reuse.m"
    {
#line 290 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__290__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 290 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13));
#line 290 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 290 "structure_reuse.direct.choose_reuse.m"
  }
#line 290 "structure_reuse.direct.choose_reuse.m"
}

#line 1306 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
#line 1306 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1306 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1306 "structure_reuse.direct.choose_reuse.m"
{
#line 1306 "structure_reuse.direct.choose_reuse.m"
  {
#line 1306 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1306 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1306 "structure_reuse.direct.choose_reuse.m"
    {
#line 1306 "structure_reuse.direct.choose_reuse.m"
      return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1306 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1306 "structure_reuse.direct.choose_reuse.m"
  }
#line 1306 "structure_reuse.direct.choose_reuse.m"
}

#line 1238 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7,
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8,
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40,
#line 1238 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41)
#line 1238 "structure_reuse.direct.choose_reuse.m"
{
#line 1241 "structure_reuse.direct.choose_reuse.m"
  {
#line 1241 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1241 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10;

#line 1242 "structure_reuse.direct.choose_reuse.m"
    {
#line 1242 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40);
    }
#line 1253 "structure_reuse.direct.choose_reuse.m"
#line 1253 "structure_reuse.direct.choose_reuse.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8)) {
#line 1253 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1253 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1283 "structure_reuse.direct.choose_reuse.m"
        {
#line 1283 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25;
#line 1305 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69;
#line 1305 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 1305 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 1)));
#line 1305 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 1305 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68;
#line 1306 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 0)));
#line 1306 "structure_reuse.direct.choose_reuse.m"
          MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 2)));
#line 1306 "structure_reuse.direct.choose_reuse.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 3)));

#line 1306 "structure_reuse.direct.choose_reuse.m"
          {
#line 1306 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1306 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[4]));
#line 1306 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1));
#line 1306 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1306 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10));
#line 1306 "structure_reuse.direct.choose_reuse.m"
          }
#line 1306 "structure_reuse.direct.choose_reuse.m"
          {
#line 1306 "structure_reuse.direct.choose_reuse.m"
            mercury__list__filter_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61);
          }
#line 1307 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 1307 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1307 "structure_reuse.direct.choose_reuse.m"
            {
#line 1307 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61, (MR_Integer) 0)));
#line 1307 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61, (MR_Integer) 1)));
#line 6050 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4];
#line 1307 "structure_reuse.direct.choose_reuse.m"
              {
#line 1307 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68)));
              }
#line 1307 "structure_reuse.direct.choose_reuse.m"
            }
#line 1283 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1258 "structure_reuse.direct.choose_reuse.m"
            {
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75;
#line 1258 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 0)));
#line 291 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 1)));
#line 291 "structure_reuse.direct.choose_reuse.m"
              MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 2)));
#line 291 "structure_reuse.direct.choose_reuse.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 3)));
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;

#line 291 "structure_reuse.direct.choose_reuse.m"
              {
#line 291 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[23], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81);
              }
#line 292 "structure_reuse.direct.choose_reuse.m"
              {
#line 292 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75 = mercury__list__remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74);
              }
#line 301 "structure_reuse.direct.choose_reuse.m"
              if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "structure_reuse.direct.choose_reuse.m"
                {
#line 303 "structure_reuse.direct.choose_reuse.m"
                  {
#line 303 "structure_reuse.direct.choose_reuse.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
#line 303 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 302 "structure_reuse.direct.choose_reuse.m"
                }
#line 301 "structure_reuse.direct.choose_reuse.m"
              else
#line 294 "structure_reuse.direct.choose_reuse.m"
                {
#line 294 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76;

#line 294 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75, (MR_Integer) 0)));
#line 294 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75, (MR_Integer) 1)));
#line 297 "structure_reuse.direct.choose_reuse.m"
                  if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "structure_reuse.direct.choose_reuse.m"
                    {
#line 296 "structure_reuse.direct.choose_reuse.m"
                    }
#line 297 "structure_reuse.direct.choose_reuse.m"
                  else
#line 298 "structure_reuse.direct.choose_reuse.m"
                    {
#line 299 "structure_reuse.direct.choose_reuse.m"
                      {
#line 299 "structure_reuse.direct.choose_reuse.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
#line 299 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 298 "structure_reuse.direct.choose_reuse.m"
                    }
#line 294 "structure_reuse.direct.choose_reuse.m"
                }
#line 1259 "structure_reuse.direct.choose_reuse.m"
              {
#line 1259 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7);
              }
#line 1260 "structure_reuse.direct.choose_reuse.m"
              {
#line 1260 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7);
              }
#line 1261 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25, (MR_Integer) 0)));
#line 1261 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25, (MR_Integer) 1)));
#line 1261 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 0)));
#line 1261 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 1)));
#line 1261 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 2)));
#line 1263 "structure_reuse.direct.choose_reuse.m"
              {
#line 1263 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28);
              }
#line 1265 "structure_reuse.direct.choose_reuse.m"
              if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1264 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30 = (MR_Integer) 0;
#line 1265 "structure_reuse.direct.choose_reuse.m"
              else
#line 1267 "structure_reuse.direct.choose_reuse.m"
                {
#line 1265 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1265 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28);
                  }
#line 1267 "structure_reuse.direct.choose_reuse.m"
                  if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1266 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30 = (MR_Integer) 1;
#line 1267 "structure_reuse.direct.choose_reuse.m"
                  else
#line 1269 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1269 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1269 "structure_reuse.direct.choose_reuse.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "no reuse conditions");
#line 1269 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 1269 "structure_reuse.direct.choose_reuse.m"
                    }
#line 1267 "structure_reuse.direct.choose_reuse.m"
                }
#line 1271 "structure_reuse.direct.choose_reuse.m"
              {
#line 1271 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26));
#line 1271 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30));
#line 1271 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27));
#line 1271 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29));
#line 1271 "structure_reuse.direct.choose_reuse.m"
              }
#line 1276 "structure_reuse.direct.choose_reuse.m"
#line 1276 "structure_reuse.direct.choose_reuse.m"
              switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30) {
#line 1276 "structure_reuse.direct.choose_reuse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1276 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 0:
#line 1275 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1275 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1275 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31));
#line 1275 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1276 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 1276 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 1:
#line 1280 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1280 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1280 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31));
#line 1280 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1276 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 1276 "structure_reuse.direct.choose_reuse.m"
              }
#line 1282 "structure_reuse.direct.choose_reuse.m"
              {
#line 1282 "structure_reuse.direct.choose_reuse.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);
#line 1282 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1258 "structure_reuse.direct.choose_reuse.m"
            }
#line 1283 "structure_reuse.direct.choose_reuse.m"
          else
#line 1283 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1283 "structure_reuse.direct.choose_reuse.m"
        }
#line 1253 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1253 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1250 "structure_reuse.direct.choose_reuse.m"
        {
#line 1246 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse___DeconSpec_17;

#line 1246 "structure_reuse.direct.choose_reuse.m"
          {
#line 1246 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse___DeconSpec_17);
          }
#line 1250 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1249 "structure_reuse.direct.choose_reuse.m"
            {
#line 1249 "structure_reuse.direct.choose_reuse.m"
              {
#line 1249 "structure_reuse.direct.choose_reuse.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[0]), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);
#line 1249 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1249 "structure_reuse.direct.choose_reuse.m"
            }
#line 1250 "structure_reuse.direct.choose_reuse.m"
          else
#line 1250 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1250 "structure_reuse.direct.choose_reuse.m"
        }
#line 1253 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1253 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 2:
#line 1287 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1253 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1253 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 3:
#line 1253 "structure_reuse.direct.choose_reuse.m"
#line 1253 "structure_reuse.direct.choose_reuse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8, (MR_Integer) 0)))) {
#line 1253 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1253 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1289 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1253 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1253 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1291 "structure_reuse.direct.choose_reuse.m"
            {
#line 1292 "structure_reuse.direct.choose_reuse.m"
              {
#line 1292 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "complicated_unify");
#line 1292 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1291 "structure_reuse.direct.choose_reuse.m"
            }
#line 1253 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1253 "structure_reuse.direct.choose_reuse.m"
        }
#line 1253 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1253 "structure_reuse.direct.choose_reuse.m"
    }
#line 1241 "structure_reuse.direct.choose_reuse.m"
  }
#line 1238 "structure_reuse.direct.choose_reuse.m"
}

#line 1230 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
#line 1230 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1230 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1230 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12,
#line 1230 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13)
#line 1230 "structure_reuse.direct.choose_reuse.m"
{
#line 1233 "structure_reuse.direct.choose_reuse.m"
  {
#line 1233 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1233 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 0)));
#line 1233 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 1)));
#line 1233 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 2)));
#line 1233 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11;

#line 1235 "structure_reuse.direct.choose_reuse.m"
    {
#line 1235 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11);
    }
#line 1236 "structure_reuse.direct.choose_reuse.m"
    {
#line 1236 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1236 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1236 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13 = base;
#line 1236 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_8));
#line 1236 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_9));
#line 1236 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11));
#line 1236 "structure_reuse.direct.choose_reuse.m"
    }
#line 1233 "structure_reuse.direct.choose_reuse.m"
  }
#line 1230 "structure_reuse.direct.choose_reuse.m"
}

#line 1201 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
#line 1201 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1201 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1201 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1201 "structure_reuse.direct.choose_reuse.m"
{
#line 1201 "structure_reuse.direct.choose_reuse.m"
  {
#line 1201 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1201 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13;

#line 1201 "structure_reuse.direct.choose_reuse.m"
    {
#line 1201 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13);
    }
#line 1201 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13));
#line 1201 "structure_reuse.direct.choose_reuse.m"
  }
#line 1201 "structure_reuse.direct.choose_reuse.m"
}

#line 1196 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
#line 1196 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1196 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1196 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1196 "structure_reuse.direct.choose_reuse.m"
{
#line 1196 "structure_reuse.direct.choose_reuse.m"
  {
#line 1196 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1196 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52;

#line 1196 "structure_reuse.direct.choose_reuse.m"
    {
#line 1196 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52);
    }
#line 1196 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52));
#line 1196 "structure_reuse.direct.choose_reuse.m"
  }
#line 1196 "structure_reuse.direct.choose_reuse.m"
}

#line 1191 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
#line 1191 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1191 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1191 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1191 "structure_reuse.direct.choose_reuse.m"
{
#line 1191 "structure_reuse.direct.choose_reuse.m"
  {
#line 1191 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1191 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52;

#line 1191 "structure_reuse.direct.choose_reuse.m"
    {
#line 1191 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52);
    }
#line 1191 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52));
#line 1191 "structure_reuse.direct.choose_reuse.m"
  }
#line 1191 "structure_reuse.direct.choose_reuse.m"
}

#line 1167 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
#line 1167 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1167 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1167 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51,
#line 1167 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52)
#line 1167 "structure_reuse.direct.choose_reuse.m"
{
#line 1170 "structure_reuse.direct.choose_reuse.m"
  {
#line 1170 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1170 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51, (MR_Integer) 0)));
#line 1170 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51, (MR_Integer) 1)));
#line 1170 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15;
#line 1170 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16;

#line 1177 "structure_reuse.direct.choose_reuse.m"
#line 1177 "structure_reuse.direct.choose_reuse.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) {
#line 1177 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1177 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1205 "structure_reuse.direct.choose_reuse.m"
        {
#line 1206 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1207 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1205 "structure_reuse.direct.choose_reuse.m"
        }
#line 1177 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1173 "structure_reuse.direct.choose_reuse.m"
        {
#line 1173 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1173 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)));
#line 1173 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1173 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1173 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 4)));

#line 1174 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1175 "structure_reuse.direct.choose_reuse.m"
          {
#line 1175 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16);
          }
#line 1173 "structure_reuse.direct.choose_reuse.m"
        }
#line 1177 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 2:
#line 1178 "structure_reuse.direct.choose_reuse.m"
        {
#line 1179 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1180 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1178 "structure_reuse.direct.choose_reuse.m"
        }
#line 1177 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 3:
#line 1177 "structure_reuse.direct.choose_reuse.m"
#line 1177 "structure_reuse.direct.choose_reuse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) {
#line 1177 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1177 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1182 "structure_reuse.direct.choose_reuse.m"
            {
#line 1183 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1184 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1182 "structure_reuse.direct.choose_reuse.m"
            }
#line 1177 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1186 "structure_reuse.direct.choose_reuse.m"
            {
#line 1187 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1188 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1186 "structure_reuse.direct.choose_reuse.m"
            }
#line 1177 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 1190 "structure_reuse.direct.choose_reuse.m"
            {
#line 1190 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67;
#line 1190 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1190 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1190 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37;
#line 1190 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;

#line 1191 "structure_reuse.direct.choose_reuse.m"
              {
#line 1191 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1191 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3]));
#line 1191 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1));
#line 1191 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1191 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1191 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1191 "structure_reuse.direct.choose_reuse.m"
              }
#line 6637 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1191 "structure_reuse.direct.choose_reuse.m"
              {
#line 1191 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_36, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37);
              }
#line 1192 "structure_reuse.direct.choose_reuse.m"
              {
#line 1192 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1192 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_35));
#line 1192 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37));
#line 1192 "structure_reuse.direct.choose_reuse.m"
              }
#line 1193 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1190 "structure_reuse.direct.choose_reuse.m"
            }
#line 1177 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 1195 "structure_reuse.direct.choose_reuse.m"
            {
#line 1195 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70;
#line 1195 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 1195 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1195 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61;

#line 1196 "structure_reuse.direct.choose_reuse.m"
              {
#line 1196 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3]));
#line 1196 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2));
#line 1196 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1196 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1196 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1196 "structure_reuse.direct.choose_reuse.m"
              }
#line 6691 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1196 "structure_reuse.direct.choose_reuse.m"
              {
#line 1196 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_60, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61);
              }
#line 1197 "structure_reuse.direct.choose_reuse.m"
              {
#line 1197 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1197 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61));
#line 1197 "structure_reuse.direct.choose_reuse.m"
              }
#line 1198 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1195 "structure_reuse.direct.choose_reuse.m"
            }
#line 1177 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 4:
#line 1200 "structure_reuse.direct.choose_reuse.m"
            {
#line 1200 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73;
#line 1200 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1200 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1200 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40;
#line 1200 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56;
#line 1200 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1201 "structure_reuse.direct.choose_reuse.m"
              {
#line 1201 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1201 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[4]));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1201 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1201 "structure_reuse.direct.choose_reuse.m"
              }
#line 6747 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1201 "structure_reuse.direct.choose_reuse.m"
              {
#line 1201 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_39, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40);
              }
#line 1202 "structure_reuse.direct.choose_reuse.m"
              {
#line 1202 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1202 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62));
#line 1202 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_38));
#line 1202 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40));
#line 1202 "structure_reuse.direct.choose_reuse.m"
              }
#line 1203 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1200 "structure_reuse.direct.choose_reuse.m"
            }
#line 1177 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 5:
#line 1209 "structure_reuse.direct.choose_reuse.m"
            {
#line 1209 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1209 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43;
#line 1209 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1213 "structure_reuse.direct.choose_reuse.m"
              {
#line 1213 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_42, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43);
              }
#line 1214 "structure_reuse.direct.choose_reuse.m"
              {
#line 1214 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1214 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63));
#line 1214 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43));
#line 1214 "structure_reuse.direct.choose_reuse.m"
              }
#line 1215 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1209 "structure_reuse.direct.choose_reuse.m"
            }
#line 1177 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 6:
#line 1217 "structure_reuse.direct.choose_reuse.m"
            {
#line 1217 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1217 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1217 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 4)));
#line 1217 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47;
#line 1217 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48;
#line 1217 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49;
#line 1217 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1218 "structure_reuse.direct.choose_reuse.m"
              {
#line 1218 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_44, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47);
              }
#line 1219 "structure_reuse.direct.choose_reuse.m"
              {
#line 1219 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_45, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48);
              }
#line 1220 "structure_reuse.direct.choose_reuse.m"
              {
#line 1220 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_46, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49);
              }
#line 1221 "structure_reuse.direct.choose_reuse.m"
              {
#line 1221 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1221 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1221 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_64));
#line 1221 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47));
#line 1221 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48));
#line 1221 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49));
#line 1221 "structure_reuse.direct.choose_reuse.m"
              }
#line 1222 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1217 "structure_reuse.direct.choose_reuse.m"
            }
#line 1177 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 7:
#line 1224 "structure_reuse.direct.choose_reuse.m"
            {
#line 1226 "structure_reuse.direct.choose_reuse.m"
              {
#line 1226 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuses_in_goal\'/4", (MR_String) "shorthand.");
#line 1226 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1224 "structure_reuse.direct.choose_reuse.m"
            }
#line 1177 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
        }
#line 1177 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1177 "structure_reuse.direct.choose_reuse.m"
    }
#line 1228 "structure_reuse.direct.choose_reuse.m"
    {
#line 1228 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1228 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1228 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52 = base;
#line 1228 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15));
#line 1228 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16));
#line 1228 "structure_reuse.direct.choose_reuse.m"
    }
#line 1170 "structure_reuse.direct.choose_reuse.m"
  }
#line 1167 "structure_reuse.direct.choose_reuse.m"
}

#line 1144 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
#line 1144 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14,
#line 1144 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1144 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 1144 "structure_reuse.direct.choose_reuse.m"
{
#line 1146 "structure_reuse.direct.choose_reuse.m"
  {
#line 1146 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1146 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 1146 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "structure_reuse.direct.choose_reuse.m"
      else
#line 1147 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "structure_reuse.direct.choose_reuse.m"
    else
#line 1146 "structure_reuse.direct.choose_reuse.m"
      {
#line 1146 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 1146 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0));

#line 1146 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1148 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "structure_reuse.direct.choose_reuse.m"
        else
#line 1149 "structure_reuse.direct.choose_reuse.m"
          {
#line 1149 "structure_reuse.direct.choose_reuse.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Y_10 = (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0));
#line 1149 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Ys_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 1149 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12;
#line 1149 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 1149 "structure_reuse.direct.choose_reuse.m"
            {
#line 1149 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Ys_11);
            }
#line 1150 "structure_reuse.direct.choose_reuse.m"
            {
#line 1150 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Y_10);
            }
#line 1152 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1151 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12 = (MR_Integer) 1;
#line 1152 "structure_reuse.direct.choose_reuse.m"
            else
#line 1153 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12 = (MR_Integer) 0;
#line 1149 "structure_reuse.direct.choose_reuse.m"
            {
#line 1149 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12));
#line 1149 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13));
#line 1149 "structure_reuse.direct.choose_reuse.m"
            }
#line 1149 "structure_reuse.direct.choose_reuse.m"
          }
#line 1146 "structure_reuse.direct.choose_reuse.m"
      }
#line 1146 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 1146 "structure_reuse.direct.choose_reuse.m"
  }
#line 1144 "structure_reuse.direct.choose_reuse.m"
}

#line 1115 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
#line 1115 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6,
#line 1115 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7,
#line 1115 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8,
#line 1115 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9)
#line 1115 "structure_reuse.direct.choose_reuse.m"
{
#line 1119 "structure_reuse.direct.choose_reuse.m"
  {
#line 1119 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1119 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10;
#line 1119 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18;
#line 1119 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11;
#line 1119 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12;
#line 1119 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13;
#line 1119 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14;
#line 1119 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;

#line 1131 "structure_reuse.direct.choose_reuse.m"
#line 1131 "structure_reuse.direct.choose_reuse.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6) {
#line 1131 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1131 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1131 "structure_reuse.direct.choose_reuse.m"
#line 1131 "structure_reuse.direct.choose_reuse.m"
        switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8) {
#line 1131 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1131 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1137 "structure_reuse.direct.choose_reuse.m"
            {
#line 1137 "structure_reuse.direct.choose_reuse.m"
              {
#line 1137 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
              }
#line 1137 "structure_reuse.direct.choose_reuse.m"
            }
#line 1131 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1131 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1135 "structure_reuse.direct.choose_reuse.m"
            {
#line 1135 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29;

#line 7061 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "structure_reuse.direct.choose_reuse.m"
                if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "structure_reuse.direct.choose_reuse.m"
                else
#line 1147 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7071 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              else
#line 7073 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                {
#line 7075 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, (MR_Integer) 1)));
#line 1159 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, (MR_Integer) 0)));

#line 1135 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1135 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
                  }
#line 7085 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                }
#line 1135 "structure_reuse.direct.choose_reuse.m"
              {
#line 1135 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1135 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29));
#line 1135 "structure_reuse.direct.choose_reuse.m"
              }
#line 1135 "structure_reuse.direct.choose_reuse.m"
            }
#line 1131 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1131 "structure_reuse.direct.choose_reuse.m"
        }
#line 1131 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1131 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1131 "structure_reuse.direct.choose_reuse.m"
#line 1131 "structure_reuse.direct.choose_reuse.m"
        switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8) {
#line 1131 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1131 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1133 "structure_reuse.direct.choose_reuse.m"
            {
#line 1133 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;
#line 1133 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;

#line 1158 "structure_reuse.direct.choose_reuse.m"
              if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1158 "structure_reuse.direct.choose_reuse.m"
              else
#line 1159 "structure_reuse.direct.choose_reuse.m"
                {
#line 1159 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9, (MR_Integer) 0)));

#line 1159 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9, (MR_Integer) 1)));
#line 1159 "structure_reuse.direct.choose_reuse.m"
                }
#line 1133 "structure_reuse.direct.choose_reuse.m"
              {
#line 1133 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25);
              }
#line 1133 "structure_reuse.direct.choose_reuse.m"
              {
#line 1133 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1133 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24));
#line 1133 "structure_reuse.direct.choose_reuse.m"
              }
#line 1133 "structure_reuse.direct.choose_reuse.m"
            }
#line 1131 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1131 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1131 "structure_reuse.direct.choose_reuse.m"
            {
#line 1131 "structure_reuse.direct.choose_reuse.m"
              {
#line 1131 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
              }
#line 1131 "structure_reuse.direct.choose_reuse.m"
            }
#line 1131 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1131 "structure_reuse.direct.choose_reuse.m"
        }
#line 1131 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1131 "structure_reuse.direct.choose_reuse.m"
    }
#line 1122 "structure_reuse.direct.choose_reuse.m"
    {
#line 1122 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7);
    }
#line 7179 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1123 "structure_reuse.direct.choose_reuse.m"
    {
#line 1123 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11);
    }
#line 1124 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13);
#line 1124 "structure_reuse.direct.choose_reuse.m"
    {
#line 1124 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14 = mercury__list__duplicate_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, ((MR_Box) ((MR_Integer) 0)));
    }
#line 1125 "structure_reuse.direct.choose_reuse.m"
    {
#line 1125 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14);
    }
#line 1119 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10;
#line 1119 "structure_reuse.direct.choose_reuse.m"
  }
#line 1115 "structure_reuse.direct.choose_reuse.m"
}

#line 1089 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6,
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7,
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8,
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 1089 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10)
#line 1089 "structure_reuse.direct.choose_reuse.m"
{
#line 1102 "structure_reuse.direct.choose_reuse.m"
  {
#line 1102 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 1094 "structure_reuse.direct.choose_reuse.m"
    {
#line 1094 "structure_reuse.direct.choose_reuse.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11);
    }
#line 1095 "structure_reuse.direct.choose_reuse.m"
    {
#line 1095 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12);
    }
#line 1094 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1094 "structure_reuse.direct.choose_reuse.m"
      {
#line 1096 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1096 "structure_reuse.direct.choose_reuse.m"
          {
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 0)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 1)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 2)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 3)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 4)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 5)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1096 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 7)));
#line 7297 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7299 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1097 "structure_reuse.direct.choose_reuse.m"
            {
#line 1097 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22);
            }
#line 1097 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1097 "structure_reuse.direct.choose_reuse.m"
              {
#line 1097 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22);
#line 1097 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1097 "structure_reuse.direct.choose_reuse.m"
              }
#line 1094 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1094 "structure_reuse.direct.choose_reuse.m"
              {
#line 1098 "structure_reuse.direct.choose_reuse.m"
                {
#line 1098 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23 = hlds__hlds_data__get_secondary_tag_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22);
                }
#line 1099 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23)) == (MR_mktag((MR_Integer) 1)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1099 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23, (MR_Integer) 0)));
#line 1094 "structure_reuse.direct.choose_reuse.m"
              }
#line 1096 "structure_reuse.direct.choose_reuse.m"
          }
#line 1094 "structure_reuse.direct.choose_reuse.m"
      }
#line 1102 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1101 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10 = (MR_Integer) 1;
#line 1102 "structure_reuse.direct.choose_reuse.m"
    else
#line 1103 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10 = (MR_Integer) 0;
#line 1102 "structure_reuse.direct.choose_reuse.m"
  }
#line 1089 "structure_reuse.direct.choose_reuse.m"
}

#line 1075 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
#line 1075 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1075 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 1075 "structure_reuse.direct.choose_reuse.m"
{
#line 1077 "structure_reuse.direct.choose_reuse.m"
  {
#line 1077 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1077 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 1077 "structure_reuse.direct.choose_reuse.m"
#line 1077 "structure_reuse.direct.choose_reuse.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1) {
#line 1077 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1077 "structure_reuse.direct.choose_reuse.m"
#line 1077 "structure_reuse.direct.choose_reuse.m"
        switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2) {
#line 1077 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1081 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 1;
#line 1077 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1077 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1079 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1077 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1077 "structure_reuse.direct.choose_reuse.m"
        }
#line 1077 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1077 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1077 "structure_reuse.direct.choose_reuse.m"
#line 1077 "structure_reuse.direct.choose_reuse.m"
        switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2) {
#line 1077 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1077 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1078 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1077 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1077 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1077 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1077 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1077 "structure_reuse.direct.choose_reuse.m"
        }
#line 1077 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1077 "structure_reuse.direct.choose_reuse.m"
    }
#line 1077 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 1077 "structure_reuse.direct.choose_reuse.m"
  }
#line 1075 "structure_reuse.direct.choose_reuse.m"
}

#line 1073 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
#line 1073 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1073 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1073 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1073 "structure_reuse.direct.choose_reuse.m"
{
#line 1073 "structure_reuse.direct.choose_reuse.m"
  {
#line 1073 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1073 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1073 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3;

#line 1073 "structure_reuse.direct.choose_reuse.m"
    {
#line 1073 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 1073 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3));
#line 1073 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1073 "structure_reuse.direct.choose_reuse.m"
  }
#line 1073 "structure_reuse.direct.choose_reuse.m"
}

#line 1053 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
#line 1053 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4,
#line 1053 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5)
#line 1053 "structure_reuse.direct.choose_reuse.m"
{
#line 1055 "structure_reuse.direct.choose_reuse.m"
  {
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6;
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31;
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 0)));
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 1)));
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 2)));
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 0)));
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 1)));
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 2)));
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21;
#line 1055 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22;
#line 1065 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28;
#line 1065 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 1065 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 1058 "structure_reuse.direct.choose_reuse.m"
    {
#line 1058 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = mercury__bool__and_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons1_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons2_10);
    }
#line 7513 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1065 "structure_reuse.direct.choose_reuse.m"
    {
#line 1065 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
    }
#line 1065 "structure_reuse.direct.choose_reuse.m"
    {
#line 1065 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
    }
#line 1065 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24);
#line 1069 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1067 "structure_reuse.direct.choose_reuse.m"
      {
#line 1067 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29;
#line 1067 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;

#line 1067 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8;
#line 7538 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1068 "structure_reuse.direct.choose_reuse.m"
        {
#line 1068 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
        }
#line 1068 "structure_reuse.direct.choose_reuse.m"
        {
#line 1068 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22 = mercury__list__take_upto_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
        }
#line 1067 "structure_reuse.direct.choose_reuse.m"
      }
#line 1069 "structure_reuse.direct.choose_reuse.m"
    else
#line 1070 "structure_reuse.direct.choose_reuse.m"
      {
#line 1070 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1070 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;

#line 1070 "structure_reuse.direct.choose_reuse.m"
        {
#line 1070 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
        }
#line 1070 "structure_reuse.direct.choose_reuse.m"
        {
#line 1070 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21 = mercury__list__take_upto_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
        }
#line 1071 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11;
#line 1070 "structure_reuse.direct.choose_reuse.m"
      }
#line 7575 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1073 "structure_reuse.direct.choose_reuse.m"
    {
#line 1073 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = mercury__list__map_corresponding_3_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[22], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22);
    }
#line 1059 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_9 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_12);
#line 1059 "structure_reuse.direct.choose_reuse.m"
    {
#line 1059 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, (MR_Float) 2.0000000000000000);
    }
#line 1058 "structure_reuse.direct.choose_reuse.m"
    {
#line 1058 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13));
#line 1058 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14));
#line 1058 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15);
#line 1058 "structure_reuse.direct.choose_reuse.m"
    }
#line 1055 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6;
#line 1055 "structure_reuse.direct.choose_reuse.m"
  }
#line 1053 "structure_reuse.direct.choose_reuse.m"
}

#line 1023 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
#line 1023 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1023 "structure_reuse.direct.choose_reuse.m"
{
#line 1023 "structure_reuse.direct.choose_reuse.m"
  {
#line 1023 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1023 "structure_reuse.direct.choose_reuse.m"
    MR_builtin_longjmp((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0, 1);
#line 1023 "structure_reuse.direct.choose_reuse.m"
  }
#line 1023 "structure_reuse.direct.choose_reuse.m"
}

#line 1024 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
#line 1024 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1024 "structure_reuse.direct.choose_reuse.m"
{
#line 1024 "structure_reuse.direct.choose_reuse.m"
  {
#line 1024 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1024 "structure_reuse.direct.choose_reuse.m"
    (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10);
#line 1024 "structure_reuse.direct.choose_reuse.m"
    {
#line 1024 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
#line 1024 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 1024 "structure_reuse.direct.choose_reuse.m"
  }
#line 1024 "structure_reuse.direct.choose_reuse.m"
}

#line 1023 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
#line 1023 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1023 "structure_reuse.direct.choose_reuse.m"
{
#line 1023 "structure_reuse.direct.choose_reuse.m"
  {
#line 1023 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1023 "structure_reuse.direct.choose_reuse.m"
    {
#line 1026 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 2)));
#line 1026 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 0)));
#line 1026 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 1)));
#line 1026 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 3)));

#line 1026 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1025 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
#line 1025 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded)
#line 1025 "structure_reuse.direct.choose_reuse.m"
        {
#line 1025 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
#line 1025 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 1023 "structure_reuse.direct.choose_reuse.m"
    }
#line 1023 "structure_reuse.direct.choose_reuse.m"
  }
#line 1023 "structure_reuse.direct.choose_reuse.m"
}

#line 1023 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
#line 1023 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1023 "structure_reuse.direct.choose_reuse.m"
{
#line 1023 "structure_reuse.direct.choose_reuse.m"
  {
#line 1023 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1023 "structure_reuse.direct.choose_reuse.m"
    if (MR_builtin_setjmp((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0) == 0)
#line 1023 "structure_reuse.direct.choose_reuse.m"
      {
#line 1023 "structure_reuse.direct.choose_reuse.m"
        {
#line 1024 "structure_reuse.direct.choose_reuse.m"
          {
#line 1024 "structure_reuse.direct.choose_reuse.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, &(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10, (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
          }
#line 1023 "structure_reuse.direct.choose_reuse.m"
        }
#line 1023 "structure_reuse.direct.choose_reuse.m"
        (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
#line 1023 "structure_reuse.direct.choose_reuse.m"
      }
#line 1023 "structure_reuse.direct.choose_reuse.m"
    else
#line 1023 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1023 "structure_reuse.direct.choose_reuse.m"
  }
#line 1023 "structure_reuse.direct.choose_reuse.m"
}

#line 1016 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
#line 1016 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3,
#line 1016 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)
#line 1016 "structure_reuse.direct.choose_reuse.m"
{
#line 1016 "structure_reuse.direct.choose_reuse.m"
  {
#line 1016 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env;

#line 1020 "structure_reuse.direct.choose_reuse.m"
#line 1020 "structure_reuse.direct.choose_reuse.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) {
#line 1020 "structure_reuse.direct.choose_reuse.m"
      default:
#line 1020 "structure_reuse.direct.choose_reuse.m"
        (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
#line 1020 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1044 "structure_reuse.direct.choose_reuse.m"
        {
#line 1045 "structure_reuse.direct.choose_reuse.m"
          {
#line 1045 "structure_reuse.direct.choose_reuse.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
          }
#line 1044 "structure_reuse.direct.choose_reuse.m"
          (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1044 "structure_reuse.direct.choose_reuse.m"
        }
#line 1020 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1044 "structure_reuse.direct.choose_reuse.m"
        {
#line 1045 "structure_reuse.direct.choose_reuse.m"
          {
#line 1045 "structure_reuse.direct.choose_reuse.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
          }
#line 1044 "structure_reuse.direct.choose_reuse.m"
          (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1044 "structure_reuse.direct.choose_reuse.m"
        }
#line 1020 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 2:
#line 1044 "structure_reuse.direct.choose_reuse.m"
        {
#line 1045 "structure_reuse.direct.choose_reuse.m"
          {
#line 1045 "structure_reuse.direct.choose_reuse.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
          }
#line 1044 "structure_reuse.direct.choose_reuse.m"
          (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1044 "structure_reuse.direct.choose_reuse.m"
        }
#line 1020 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 3:
#line 1020 "structure_reuse.direct.choose_reuse.m"
#line 1020 "structure_reuse.direct.choose_reuse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) {
#line 1020 "structure_reuse.direct.choose_reuse.m"
          default:
#line 1020 "structure_reuse.direct.choose_reuse.m"
            (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
#line 1020 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 4:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 5:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 6:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 7:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 8:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 9:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 10:
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 11:
#line 1044 "structure_reuse.direct.choose_reuse.m"
            {
#line 1045 "structure_reuse.direct.choose_reuse.m"
              {
#line 1045 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
              }
#line 1044 "structure_reuse.direct.choose_reuse.m"
              (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1044 "structure_reuse.direct.choose_reuse.m"
            }
#line 1020 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 1020 "structure_reuse.direct.choose_reuse.m"
            {
#line 1020 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 3)));
#line 1020 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8;
#line 1020 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 1)));
#line 1020 "structure_reuse.direct.choose_reuse.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 2)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 1022 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 1022 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 1022 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40;
#line 1022 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;
#line 1022 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 1022 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43;

#line 1021 "structure_reuse.direct.choose_reuse.m"
              {
#line 1021 "structure_reuse.direct.choose_reuse.m"
                check_hlds__type_util__get_cons_defn_det_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtor_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8);
              }
#line 1022 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 0)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 1)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 2)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 3)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 4)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 5)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
              (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 6)));
#line 1022 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 7)));
#line 1023 "structure_reuse.direct.choose_reuse.m"
              {
#line 1023 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env);
              }
#line 1023 "structure_reuse.direct.choose_reuse.m"
              (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
#line 1020 "structure_reuse.direct.choose_reuse.m"
            }
#line 1020 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 1029 "structure_reuse.direct.choose_reuse.m"
            (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1020 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
        }
#line 1020 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1020 "structure_reuse.direct.choose_reuse.m"
    }
#line 1020 "structure_reuse.direct.choose_reuse.m"
    return (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
#line 1016 "structure_reuse.direct.choose_reuse.m"
  }
#line 1016 "structure_reuse.direct.choose_reuse.m"
}

#line 947 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11,
#line 947 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12)
#line 947 "structure_reuse.direct.choose_reuse.m"
{
#line 951 "structure_reuse.direct.choose_reuse.m"
  {
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 0)));
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 2)));
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 3)));
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 1)));
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 3)));
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 951 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 952 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 1)));
#line 952 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 4)));
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 0)));
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 2)));
#line 986 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 986 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 986 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83;
#line 1094 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81;
#line 1096 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85;

#line 957 "structure_reuse.direct.choose_reuse.m"
    {
#line 957 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15);
    }
#line 959 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 958 "structure_reuse.direct.choose_reuse.m"
      {
#line 958 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 = (MR_Integer) 1;
#line 958 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 958 "structure_reuse.direct.choose_reuse.m"
      }
#line 959 "structure_reuse.direct.choose_reuse.m"
    else
#line 960 "structure_reuse.direct.choose_reuse.m"
      {
#line 960 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 = (MR_Integer) 0;
#line 965 "structure_reuse.direct.choose_reuse.m"
        {
#line 965 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9);
        }
#line 960 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 966 "structure_reuse.direct.choose_reuse.m"
          {
#line 966 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15);
          }
#line 960 "structure_reuse.direct.choose_reuse.m"
      }
#line 951 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 951 "structure_reuse.direct.choose_reuse.m"
      {
#line 8111 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 969 "structure_reuse.direct.choose_reuse.m"
        {
#line 969 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10);
        }
#line 970 "structure_reuse.direct.choose_reuse.m"
        {
#line 970 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
        }
#line 973 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 == (MR_Integer) 0);
#line 973 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 951 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 951 "structure_reuse.direct.choose_reuse.m"
          {
#line 977 "structure_reuse.direct.choose_reuse.m"
            {
#line 977 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24);
            }
#line 979 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24 == (MR_Integer) 1);
#line 979 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 979 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Integer) 1;
#line 979 "structure_reuse.direct.choose_reuse.m"
            else
#line 979 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Integer) 0;
#line 979 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35);
#line 986 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 0)));
#line 986 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 1)));
#line 986 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 2)));
#line 986 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 3)));
#line 1094 "structure_reuse.direct.choose_reuse.m"
            {
#line 1094 "structure_reuse.direct.choose_reuse.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72);
            }
#line 1095 "structure_reuse.direct.choose_reuse.m"
            {
#line 1095 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73);
            }
#line 1094 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1094 "structure_reuse.direct.choose_reuse.m"
              {
#line 1096 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1096 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 0)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 1)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 2)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 3)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 4)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 5)));
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1096 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 7)));
#line 8194 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 8196 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1097 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1097 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83);
                    }
#line 1097 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1097 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1097 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83);
#line 1097 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1097 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1094 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1094 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1098 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1098 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84 = hlds__hlds_data__get_secondary_tag_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83);
                        }
#line 1099 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84)) == (MR_mktag((MR_Integer) 1)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1099 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84, (MR_Integer) 0)));
#line 1094 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1096 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1094 "structure_reuse.direct.choose_reuse.m"
              }
#line 8234 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8236 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              {
#line 978 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 + (MR_Integer) 1);
#line 982 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26);
#line 8242 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8244 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  {
#line 987 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 991 "structure_reuse.direct.choose_reuse.m"
                    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 991 "structure_reuse.direct.choose_reuse.m"
                    else
#line 989 "structure_reuse.direct.choose_reuse.m"
                      {
#line 989 "structure_reuse.direct.choose_reuse.m"
                        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27, (MR_Integer) 0)));

#line 990 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_29);
#line 989 "structure_reuse.direct.choose_reuse.m"
                      }
#line 8263 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8265 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 1000 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1000 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
                        }
#line 1000 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 8274 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      }
#line 8276 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  }
#line 8278 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              }
#line 8280 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            else
#line 8282 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              {
#line 978 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 + (MR_Integer) 0);
#line 982 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26);
#line 8288 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8290 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  {
#line 987 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 991 "structure_reuse.direct.choose_reuse.m"
                    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 991 "structure_reuse.direct.choose_reuse.m"
                    else
#line 989 "structure_reuse.direct.choose_reuse.m"
                      {
#line 989 "structure_reuse.direct.choose_reuse.m"
                        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27, (MR_Integer) 0)));

#line 990 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_88);
#line 989 "structure_reuse.direct.choose_reuse.m"
                      }
#line 8309 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8311 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 1000 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1000 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0((MR_Integer) 0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
                        }
#line 1000 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 8320 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      }
#line 8322 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  }
#line 8324 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              }
#line 951 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 951 "structure_reuse.direct.choose_reuse.m"
              {
#line 8330 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1003 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = (MR_Integer) 0;
#line 1003 "structure_reuse.direct.choose_reuse.m"
                {
#line 1003 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = mercury__list__delete_all_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37)));
                }
#line 1002 "structure_reuse.direct.choose_reuse.m"
                {
#line 1002 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36);
                }
#line 1007 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 1007 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1007 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32 = (MR_Integer) 0;
#line 1007 "structure_reuse.direct.choose_reuse.m"
                else
#line 1007 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32 = (MR_Integer) 1;
#line 908 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = (MR_Integer) 5;
#line 912 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44 = (MR_Integer) 1;
#line 1009 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44);
#line 1009 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 916 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = (MR_Integer) 1;
#line 1009 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45);
#line 912 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = (MR_Integer) 1;
#line 1010 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31);
#line 1010 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48);
#line 1010 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46);
#line 916 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = (MR_Integer) 1;
#line 1011 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32);
#line 1011 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49);
#line 908 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = (MR_Integer) 5;
#line 1012 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28);
#line 1012 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 1013 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = (MR_Integer) 0;
#line 1013 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53);
#line 951 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 951 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1014 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1014 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33);
                    }
#line 1014 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1014 "structure_reuse.direct.choose_reuse.m"
                      MR_Word base;
#line 1014 "structure_reuse.direct.choose_reuse.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1014 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12 = base;
#line 1014 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20));
#line 1014 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30));
#line 1014 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54);
#line 1014 "structure_reuse.direct.choose_reuse.m"
                    }
#line 1014 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 951 "structure_reuse.direct.choose_reuse.m"
                  }
#line 951 "structure_reuse.direct.choose_reuse.m"
              }
#line 951 "structure_reuse.direct.choose_reuse.m"
          }
#line 951 "structure_reuse.direct.choose_reuse.m"
      }
#line 951 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 951 "structure_reuse.direct.choose_reuse.m"
  }
#line 947 "structure_reuse.direct.choose_reuse.m"
}

#line 1051 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2(
#line 1051 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1051 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1051 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1051 "structure_reuse.direct.choose_reuse.m"
{
#line 1051 "structure_reuse.direct.choose_reuse.m"
  {
#line 1051 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1051 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1051 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6;

#line 1051 "structure_reuse.direct.choose_reuse.m"
    {
#line 1051 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 1051 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6));
#line 1051 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1051 "structure_reuse.direct.choose_reuse.m"
  }
#line 1051 "structure_reuse.direct.choose_reuse.m"
}

#line 927 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
#line 927 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 927 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 927 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 927 "structure_reuse.direct.choose_reuse.m"
{
#line 927 "structure_reuse.direct.choose_reuse.m"
  {
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 927 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12;

#line 927 "structure_reuse.direct.choose_reuse.m"
    {
#line 927 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12);
    }
#line 927 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 927 "structure_reuse.direct.choose_reuse.m"
      {
#line 927 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12));
#line 927 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 927 "structure_reuse.direct.choose_reuse.m"
      }
#line 927 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 927 "structure_reuse.direct.choose_reuse.m"
  }
#line 927 "structure_reuse.direct.choose_reuse.m"
}

#line 918 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18,
#line 918 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19)
#line 918 "structure_reuse.direct.choose_reuse.m"
{
#line 921 "structure_reuse.direct.choose_reuse.m"
  {
#line 921 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 921 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 0)));
#line 922 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 1)));
#line 922 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
#line 922 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 3)));
#line 933 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16;
#line 928 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32;
#line 928 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15;
#line 928 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 928 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29;
#line 928 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30;
#line 928 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 1051 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16;

#line 927 "structure_reuse.direct.choose_reuse.m"
    {
#line 927 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 927 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[0]));
#line 927 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1));
#line 927 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 927 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8));
#line 927 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9));
#line 927 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10));
#line 927 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11));
#line 927 "structure_reuse.direct.choose_reuse.m"
    }
#line 927 "structure_reuse.direct.choose_reuse.m"
    {
#line 927 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__list__map_3_p_2((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_14, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15);
    }
#line 928 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 928 "structure_reuse.direct.choose_reuse.m"
      {
#line 1050 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15)) == (MR_mktag((MR_Integer) 1)));
#line 1050 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1050 "structure_reuse.direct.choose_reuse.m"
          {
#line 1050 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15, (MR_Integer) 0)));
#line 1050 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15, (MR_Integer) 1)));
#line 8595 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0;
#line 1051 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[21];
#line 1051 "structure_reuse.direct.choose_reuse.m"
            {
#line 1051 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16 = mercury__list__foldl_3_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29)));
            }
#line 1051 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16);
#line 1051 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1050 "structure_reuse.direct.choose_reuse.m"
          }
#line 928 "structure_reuse.direct.choose_reuse.m"
      }
#line 933 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 931 "structure_reuse.direct.choose_reuse.m"
      {
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 931 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52;
#line 346 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 346 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 346 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;

#line 931 "structure_reuse.direct.choose_reuse.m"
        {
#line 931 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12));
#line 931 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16));
#line 931 "structure_reuse.direct.choose_reuse.m"
        }
#line 341 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 0)));
#line 341 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 1)));
#line 341 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
#line 341 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 3)));
#line 342 "structure_reuse.direct.choose_reuse.m"
        {
#line 342 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17));
#line 342 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40));
#line 342 "structure_reuse.direct.choose_reuse.m"
        }
#line 343 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42 + (MR_Integer) 1);
#line 344 "structure_reuse.direct.choose_reuse.m"
        {
#line 344 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42);
        }
#line 345 "structure_reuse.direct.choose_reuse.m"
        {
#line 345 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44);
        }
#line 346 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45);
#line 346 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, (MR_Integer) 0)));
#line 346 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, (MR_Integer) 1)));
#line 346 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 0)));
#line 346 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 1)));
#line 346 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 2)));
#line 346 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 346 "structure_reuse.direct.choose_reuse.m"
        {
#line 346 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46);
        }
#line 347 "structure_reuse.direct.choose_reuse.m"
        {
#line 347 "structure_reuse.direct.choose_reuse.m"
          MR_Word base;
#line 347 "structure_reuse.direct.choose_reuse.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 347 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19 = base;
#line 347 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39));
#line 347 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43));
#line 347 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47);
#line 347 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44));
#line 347 "structure_reuse.direct.choose_reuse.m"
        }
#line 931 "structure_reuse.direct.choose_reuse.m"
      }
#line 933 "structure_reuse.direct.choose_reuse.m"
    else
#line 933 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18;
#line 921 "structure_reuse.direct.choose_reuse.m"
  }
#line 918 "structure_reuse.direct.choose_reuse.m"
}

#line 885 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(
#line 885 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1)
#line 885 "structure_reuse.direct.choose_reuse.m"
{
#line 887 "structure_reuse.direct.choose_reuse.m"
  {
#line 887 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 887 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 887 "structure_reuse.direct.choose_reuse.m"
  }
#line 885 "structure_reuse.direct.choose_reuse.m"
}

#line 881 "structure_reuse.direct.choose_reuse.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
#line 881 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 881 "structure_reuse.direct.choose_reuse.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5)
#line 881 "structure_reuse.direct.choose_reuse.m"
{
#line 883 "structure_reuse.direct.choose_reuse.m"
  {
#line 883 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 883 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 883 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 883 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 883 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 883 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));

#line 883 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
#line 883 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 883 "structure_reuse.direct.choose_reuse.m"
  }
#line 881 "structure_reuse.direct.choose_reuse.m"
}

#line 855 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
#line 855 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 855 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 855 "structure_reuse.direct.choose_reuse.m"
{
#line 855 "structure_reuse.direct.choose_reuse.m"
  {
#line 855 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 855 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 855 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_86;

#line 855 "structure_reuse.direct.choose_reuse.m"
    {
#line 855 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_86 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__855__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 855 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_86));
#line 855 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 855 "structure_reuse.direct.choose_reuse.m"
  }
#line 855 "structure_reuse.direct.choose_reuse.m"
}

#line 808 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(
#line 808 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 808 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6,
#line 808 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71,
#line 808 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72)
#line 808 "structure_reuse.direct.choose_reuse.m"
{
#line 811 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 811 "structure_reuse.direct.choose_reuse.m"
    {
#line 811 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 811 "structure_reuse.direct.choose_reuse.m"
      {
#line 811 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 811 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6, (MR_Integer) 0)));
#line 811 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6, (MR_Integer) 1)));

#line 841 "structure_reuse.direct.choose_reuse.m"
#line 841 "structure_reuse.direct.choose_reuse.m"
        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) {
#line 841 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 841 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 865 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 841 "structure_reuse.direct.choose_reuse.m"
            break;
#line 841 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 814 "structure_reuse.direct.choose_reuse.m"
            {
#line 814 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 814 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)));
#line 814 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));
#line 814 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 814 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 4)));

#line 832 "structure_reuse.direct.choose_reuse.m"
#line 832 "structure_reuse.direct.choose_reuse.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13)) {
#line 832 "structure_reuse.direct.choose_reuse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 832 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 0:
#line 816 "structure_reuse.direct.choose_reuse.m"
                  {
#line 816 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 0)));
#line 816 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 1)));
#line 816 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 2)));
#line 816 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 3)));
#line 816 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 4)));
#line 816 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 5)));
#line 816 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 6)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22;
#line 818 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 3)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94;
#line 818 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95;
#line 818 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 0)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 1)));
#line 818 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 2)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_104_104;
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_105_105;
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106;

#line 818 "structure_reuse.direct.choose_reuse.m"
                    {
#line 818 "structure_reuse.direct.choose_reuse.m"
                      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22);
                    }
#line 819 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 0)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 1)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 2)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 3)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    {
#line 819 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__util__top_cell_may_be_reusable_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22);
                    }
#line 818 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 818 "structure_reuse.direct.choose_reuse.m"
                      {
#line 823 "structure_reuse.direct.choose_reuse.m"
                        {
#line 823 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9);
                        }
#line 823 "structure_reuse.direct.choose_reuse.m"
                        {
#line 823 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95);
                        }
#line 818 "structure_reuse.direct.choose_reuse.m"
                      }
#line 829 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 827 "structure_reuse.direct.choose_reuse.m"
                      {
#line 827 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96;

#line 828 "structure_reuse.direct.choose_reuse.m"
                        {
#line 828 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9);
                        }
#line 827 "structure_reuse.direct.choose_reuse.m"
                        {
#line 827 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 827 "structure_reuse.direct.choose_reuse.m"
                          return;
                        }
#line 827 "structure_reuse.direct.choose_reuse.m"
                      }
#line 829 "structure_reuse.direct.choose_reuse.m"
                    else
#line 829 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 816 "structure_reuse.direct.choose_reuse.m"
                  }
#line 832 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 832 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 1:
#line 833 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 832 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 832 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 2:
#line 834 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 832 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 832 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 3:
#line 832 "structure_reuse.direct.choose_reuse.m"
#line 832 "structure_reuse.direct.choose_reuse.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 0)))) {
#line 832 "structure_reuse.direct.choose_reuse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 832 "structure_reuse.direct.choose_reuse.m"
                    case (MR_Integer) 0:
#line 835 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 832 "structure_reuse.direct.choose_reuse.m"
                      break;
#line 832 "structure_reuse.direct.choose_reuse.m"
                    case (MR_Integer) 1:
#line 838 "structure_reuse.direct.choose_reuse.m"
                      {
#line 839 "structure_reuse.direct.choose_reuse.m"
                        {
#line 839 "structure_reuse.direct.choose_reuse.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "complicated unify");
#line 839 "structure_reuse.direct.choose_reuse.m"
                          return;
                        }
#line 838 "structure_reuse.direct.choose_reuse.m"
                      }
#line 832 "structure_reuse.direct.choose_reuse.m"
                      break;
#line 832 "structure_reuse.direct.choose_reuse.m"
                  }
#line 832 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 832 "structure_reuse.direct.choose_reuse.m"
              }
#line 814 "structure_reuse.direct.choose_reuse.m"
            }
#line 841 "structure_reuse.direct.choose_reuse.m"
            break;
#line 841 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 842 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 841 "structure_reuse.direct.choose_reuse.m"
            break;
#line 841 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 841 "structure_reuse.direct.choose_reuse.m"
#line 841 "structure_reuse.direct.choose_reuse.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) {
#line 841 "structure_reuse.direct.choose_reuse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 841 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 0:
#line 844 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 841 "structure_reuse.direct.choose_reuse.m"
                break;
#line 841 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 1:
#line 846 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 841 "structure_reuse.direct.choose_reuse.m"
                break;
#line 841 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 2:
#line 848 "structure_reuse.direct.choose_reuse.m"
                {
#line 848 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 848 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 849 "structure_reuse.direct.choose_reuse.m"
                  {
#line 849 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_55, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 849 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 848 "structure_reuse.direct.choose_reuse.m"
                }
#line 841 "structure_reuse.direct.choose_reuse.m"
                break;
#line 841 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 3:
#line 851 "structure_reuse.direct.choose_reuse.m"
                {
#line 851 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 852 "structure_reuse.direct.choose_reuse.m"
                  {
#line 852 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_98, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 852 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 851 "structure_reuse.direct.choose_reuse.m"
                }
#line 841 "structure_reuse.direct.choose_reuse.m"
                break;
#line 841 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 4:
#line 854 "structure_reuse.direct.choose_reuse.m"
                {
#line 854 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 854 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100;
#line 854 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));
#line 854 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));

#line 855 "structure_reuse.direct.choose_reuse.m"
                  {
#line 855 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[20], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_58);
                  }
#line 856 "structure_reuse.direct.choose_reuse.m"
                  {
#line 856 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 856 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 854 "structure_reuse.direct.choose_reuse.m"
                }
#line 841 "structure_reuse.direct.choose_reuse.m"
                break;
#line 841 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 5:
#line 867 "structure_reuse.direct.choose_reuse.m"
                {
#line 867 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 867 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 871 "structure_reuse.direct.choose_reuse.m"
                  /* direct tailcall eliminated */
#line 871 "structure_reuse.direct.choose_reuse.m"
                  {
#line 871 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal__tmp_copy_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_69;

#line 871 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal__tmp_copy_6;
#line 871 "structure_reuse.direct.choose_reuse.m"
                  }
#line 871 "structure_reuse.direct.choose_reuse.m"
                  continue;
#line 867 "structure_reuse.direct.choose_reuse.m"
                }
#line 841 "structure_reuse.direct.choose_reuse.m"
                break;
#line 841 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 6:
#line 858 "structure_reuse.direct.choose_reuse.m"
                {
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 4)));
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65;
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66;
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82;
#line 858 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 860 "structure_reuse.direct.choose_reuse.m"
                  {
#line 860 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_62));
#line 860 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "structure_reuse.direct.choose_reuse.m"
                  }
#line 860 "structure_reuse.direct.choose_reuse.m"
                  {
#line 860 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_61));
#line 860 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 860 "structure_reuse.direct.choose_reuse.m"
                  }
#line 860 "structure_reuse.direct.choose_reuse.m"
                  {
#line 860 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65);
                  }
#line 862 "structure_reuse.direct.choose_reuse.m"
                  {
#line 862 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_63, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66);
                  }
#line 863 "structure_reuse.direct.choose_reuse.m"
                  {
#line 863 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66));
#line 863 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "structure_reuse.direct.choose_reuse.m"
                  }
#line 863 "structure_reuse.direct.choose_reuse.m"
                  {
#line 863 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65));
#line 863 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82));
#line 863 "structure_reuse.direct.choose_reuse.m"
                  }
#line 863 "structure_reuse.direct.choose_reuse.m"
                  {
#line 863 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
#line 863 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 858 "structure_reuse.direct.choose_reuse.m"
                }
#line 841 "structure_reuse.direct.choose_reuse.m"
                break;
#line 841 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 7:
#line 873 "structure_reuse.direct.choose_reuse.m"
                {
#line 874 "structure_reuse.direct.choose_reuse.m"
                  {
#line 874 "structure_reuse.direct.choose_reuse.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "shorthand");
#line 874 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 873 "structure_reuse.direct.choose_reuse.m"
                }
#line 841 "structure_reuse.direct.choose_reuse.m"
                break;
#line 841 "structure_reuse.direct.choose_reuse.m"
            }
#line 841 "structure_reuse.direct.choose_reuse.m"
            break;
#line 841 "structure_reuse.direct.choose_reuse.m"
        }
#line 811 "structure_reuse.direct.choose_reuse.m"
      }
#line 811 "structure_reuse.direct.choose_reuse.m"
      break;
#line 811 "structure_reuse.direct.choose_reuse.m"
    }
#line 808 "structure_reuse.direct.choose_reuse.m"
}

#line 802 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(
#line 802 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 802 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6,
#line 802 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 802 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8)
#line 802 "structure_reuse.direct.choose_reuse.m"
{
#line 806 "structure_reuse.direct.choose_reuse.m"
  {
#line 806 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 806 "structure_reuse.direct.choose_reuse.m"
    {
#line 806 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8);
#line 806 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 806 "structure_reuse.direct.choose_reuse.m"
  }
#line 802 "structure_reuse.direct.choose_reuse.m"
}

#line 434 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 434 "structure_reuse.direct.choose_reuse.m"
{
#line 434 "structure_reuse.direct.choose_reuse.m"
  {
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_23;

#line 434 "structure_reuse.direct.choose_reuse.m"
    {
#line 434 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__434__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_23);
    }
#line 434 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_23));
#line 434 "structure_reuse.direct.choose_reuse.m"
  }
#line 434 "structure_reuse.direct.choose_reuse.m"
}

#line 797 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
#line 797 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 797 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 797 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 797 "structure_reuse.direct.choose_reuse.m"
{
#line 797 "structure_reuse.direct.choose_reuse.m"
  {
#line 797 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 797 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8;

#line 797 "structure_reuse.direct.choose_reuse.m"
    {
#line 797 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8);
    }
#line 797 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8));
#line 797 "structure_reuse.direct.choose_reuse.m"
  }
#line 797 "structure_reuse.direct.choose_reuse.m"
}

#line 789 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
#line 789 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 789 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6,
#line 789 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 789 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12)
#line 789 "structure_reuse.direct.choose_reuse.m"
{
#line 794 "structure_reuse.direct.choose_reuse.m"
  {
#line 794 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 794 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 794 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11;
#line 794 "structure_reuse.direct.choose_reuse.m"
    else
#line 796 "structure_reuse.direct.choose_reuse.m"
      {
#line 796 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10;
#line 796 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 797 "structure_reuse.direct.choose_reuse.m"
        {
#line 797 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 797 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 797 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1));
#line 797 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 797 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 797 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 797 "structure_reuse.direct.choose_reuse.m"
        }
#line 797 "structure_reuse.direct.choose_reuse.m"
        {
#line 797 "structure_reuse.direct.choose_reuse.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10);
        }
#line 432 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "structure_reuse.direct.choose_reuse.m"
          {
#line 446 "structure_reuse.direct.choose_reuse.m"
            {
#line 446 "structure_reuse.direct.choose_reuse.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
#line 446 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 445 "structure_reuse.direct.choose_reuse.m"
          }
#line 432 "structure_reuse.direct.choose_reuse.m"
        else
#line 432 "structure_reuse.direct.choose_reuse.m"
          {
#line 432 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 432 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, (MR_Integer) 0)));
#line 432 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, (MR_Integer) 1)));
#line 432 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23;
#line 432 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31;
#line 432 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 432 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 432 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 441 "structure_reuse.direct.choose_reuse.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31;
#line 443 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74;
#line 443 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75;
#line 443 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;
#line 442 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 442 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 442 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 442 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79;

#line 433 "structure_reuse.direct.choose_reuse.m"
            {
#line 433 "structure_reuse.direct.choose_reuse.m"
              mercury__list__length_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23);
            }
#line 441 "structure_reuse.direct.choose_reuse.m"
            {
#line 441 "structure_reuse.direct.choose_reuse.m"
              mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[19], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_22, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_21)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31);
            }
#line 441 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31);
#line 443 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 0)));
#line 443 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 1)));
#line 443 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 2)));
#line 443 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 3)));
#line 443 "structure_reuse.direct.choose_reuse.m"
            {
#line 443 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23);
            }
#line 443 "structure_reuse.direct.choose_reuse.m"
            {
#line 443 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49);
            }
#line 442 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 0)));
#line 442 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 1)));
#line 442 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 2)));
#line 442 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 3)));
#line 442 "structure_reuse.direct.choose_reuse.m"
            {
#line 442 "structure_reuse.direct.choose_reuse.m"
              MR_Word base;
#line 442 "structure_reuse.direct.choose_reuse.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = base;
#line 442 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77));
#line 442 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 442 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47);
#line 442 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80));
#line 442 "structure_reuse.direct.choose_reuse.m"
            }
#line 432 "structure_reuse.direct.choose_reuse.m"
          }
#line 796 "structure_reuse.direct.choose_reuse.m"
      }
#line 794 "structure_reuse.direct.choose_reuse.m"
  }
#line 789 "structure_reuse.direct.choose_reuse.m"
}

#line 414 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 414 "structure_reuse.direct.choose_reuse.m"
{
#line 414 "structure_reuse.direct.choose_reuse.m"
  {
#line 414 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 414 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6;

#line 414 "structure_reuse.direct.choose_reuse.m"
    {
#line 414 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6);
    }
#line 414 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6));
#line 414 "structure_reuse.direct.choose_reuse.m"
  }
#line 414 "structure_reuse.direct.choose_reuse.m"
}

#line 879 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 879 "structure_reuse.direct.choose_reuse.m"
{
#line 879 "structure_reuse.direct.choose_reuse.m"
  {
#line 879 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 879 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 879 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3;

#line 879 "structure_reuse.direct.choose_reuse.m"
    {
#line 879 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 879 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3));
#line 879 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 879 "structure_reuse.direct.choose_reuse.m"
  }
#line 879 "structure_reuse.direct.choose_reuse.m"
}

#line 777 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 777 "structure_reuse.direct.choose_reuse.m"
{
#line 777 "structure_reuse.direct.choose_reuse.m"
  {
#line 777 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 777 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8;

#line 777 "structure_reuse.direct.choose_reuse.m"
    {
#line 777 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8);
    }
#line 777 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8));
#line 777 "structure_reuse.direct.choose_reuse.m"
  }
#line 777 "structure_reuse.direct.choose_reuse.m"
}

#line 772 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
#line 772 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 772 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6,
#line 772 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 772 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12)
#line 772 "structure_reuse.direct.choose_reuse.m"
{
#line 775 "structure_reuse.direct.choose_reuse.m"
  {
#line 775 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 775 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9;
#line 775 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10;
#line 775 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 775 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14;
#line 775 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35;
#line 775 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 879 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10;
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19;

#line 777 "structure_reuse.direct.choose_reuse.m"
    {
#line 777 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1));
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 777 "structure_reuse.direct.choose_reuse.m"
    }
#line 777 "structure_reuse.direct.choose_reuse.m"
    {
#line 777 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9);
    }
#line 879 "structure_reuse.direct.choose_reuse.m"
    {
#line 879 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[17], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9, ((MR_Box) ((MR_Integer) 0)));
    }
#line 879 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10 = ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10);
#line 414 "structure_reuse.direct.choose_reuse.m"
    {
#line 414 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 414 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9));
#line 414 "structure_reuse.direct.choose_reuse.m"
    }
#line 414 "structure_reuse.direct.choose_reuse.m"
    {
#line 414 "structure_reuse.direct.choose_reuse.m"
      mercury__list__sort_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[18], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35);
    }
#line 417 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "structure_reuse.direct.choose_reuse.m"
      {
#line 419 "structure_reuse.direct.choose_reuse.m"
        {
#line 419 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
#line 419 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 418 "structure_reuse.direct.choose_reuse.m"
      }
#line 417 "structure_reuse.direct.choose_reuse.m"
    else
#line 416 "structure_reuse.direct.choose_reuse.m"
      {
#line 416 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;

#line 416 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35, (MR_Integer) 0)));
#line 416 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35, (MR_Integer) 1)));
#line 416 "structure_reuse.direct.choose_reuse.m"
      }
#line 780 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 0)));
#line 780 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 1)));
#line 780 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 2)));
#line 780 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 3)));
#line 780 "structure_reuse.direct.choose_reuse.m"
    {
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 780 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 780 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = base;
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10));
#line 780 "structure_reuse.direct.choose_reuse.m"
    }
#line 775 "structure_reuse.direct.choose_reuse.m"
  }
#line 772 "structure_reuse.direct.choose_reuse.m"
}

#line 746 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
#line 746 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3)
#line 746 "structure_reuse.direct.choose_reuse.m"
{
#line 748 "structure_reuse.direct.choose_reuse.m"
  {
#line 748 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 748 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 0)));
#line 748 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 1)));
#line 748 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 2)));
#line 748 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 3)));

#line 748 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 748 "structure_reuse.direct.choose_reuse.m"
  }
#line 746 "structure_reuse.direct.choose_reuse.m"
}

#line 743 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
#line 743 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 743 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 743 "structure_reuse.direct.choose_reuse.m"
{
#line 743 "structure_reuse.direct.choose_reuse.m"
  {
#line 743 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 743 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 743 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2;

#line 743 "structure_reuse.direct.choose_reuse.m"
    {
#line 743 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 743 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2));
#line 743 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 743 "structure_reuse.direct.choose_reuse.m"
  }
#line 743 "structure_reuse.direct.choose_reuse.m"
}

#line 738 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11)
#line 738 "structure_reuse.direct.choose_reuse.m"
{
#line 741 "structure_reuse.direct.choose_reuse.m"
  {
#line 741 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 741 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 741 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17;
#line 741 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8;
#line 741 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9;
#line 741 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 742 "structure_reuse.direct.choose_reuse.m"
    {
#line 742 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__lookup_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8);
    }
#line 9855 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;
#line 743 "structure_reuse.direct.choose_reuse.m"
    {
#line 743 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[16], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8);
    }
#line 743 "structure_reuse.direct.choose_reuse.m"
    {
#line 743 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9 = mercury__list__condense_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12);
    }
#line 744 "structure_reuse.direct.choose_reuse.m"
    {
#line 744 "structure_reuse.direct.choose_reuse.m"
      mercury__list__append_3_p_1(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11);
#line 744 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 741 "structure_reuse.direct.choose_reuse.m"
  }
#line 738 "structure_reuse.direct.choose_reuse.m"
}

#line 414 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 414 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 414 "structure_reuse.direct.choose_reuse.m"
{
#line 414 "structure_reuse.direct.choose_reuse.m"
  {
#line 414 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 414 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6;

#line 414 "structure_reuse.direct.choose_reuse.m"
    {
#line 414 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6);
    }
#line 414 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6));
#line 414 "structure_reuse.direct.choose_reuse.m"
  }
#line 414 "structure_reuse.direct.choose_reuse.m"
}

#line 879 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 879 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 879 "structure_reuse.direct.choose_reuse.m"
{
#line 879 "structure_reuse.direct.choose_reuse.m"
  {
#line 879 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 879 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 879 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3;

#line 879 "structure_reuse.direct.choose_reuse.m"
    {
#line 879 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 879 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3));
#line 879 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 879 "structure_reuse.direct.choose_reuse.m"
  }
#line 879 "structure_reuse.direct.choose_reuse.m"
}

#line 777 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 777 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 777 "structure_reuse.direct.choose_reuse.m"
{
#line 777 "structure_reuse.direct.choose_reuse.m"
  {
#line 777 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 777 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8;

#line 777 "structure_reuse.direct.choose_reuse.m"
    {
#line 777 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8);
    }
#line 777 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8));
#line 777 "structure_reuse.direct.choose_reuse.m"
  }
#line 777 "structure_reuse.direct.choose_reuse.m"
}

#line 735 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
#line 735 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 735 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 735 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 735 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 735 "structure_reuse.direct.choose_reuse.m"
{
#line 735 "structure_reuse.direct.choose_reuse.m"
  {
#line 735 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 735 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11;

#line 735 "structure_reuse.direct.choose_reuse.m"
    {
#line 735 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11);
    }
#line 735 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11));
#line 735 "structure_reuse.direct.choose_reuse.m"
  }
#line 735 "structure_reuse.direct.choose_reuse.m"
}

#line 721 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7,
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8,
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9,
#line 721 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10)
#line 721 "structure_reuse.direct.choose_reuse.m"
{
#line 724 "structure_reuse.direct.choose_reuse.m"
  {
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74;
#line 724 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 735 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14;
#line 879 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38;
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 408 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75;
#line 408 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;

#line 735 "structure_reuse.direct.choose_reuse.m"
    {
#line 735 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 735 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[1]));
#line 735 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1));
#line 735 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 735 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9));
#line 735 "structure_reuse.direct.choose_reuse.m"
    }
#line 735 "structure_reuse.direct.choose_reuse.m"
    {
#line 735 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14);
    }
#line 735 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14);
#line 274 "structure_reuse.direct.choose_reuse.m"
    {
#line 274 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 274 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14));
#line 274 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 274 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 3) = ((MR_Box) ((MR_Integer) 0));
#line 274 "structure_reuse.direct.choose_reuse.m"
    }
#line 777 "structure_reuse.direct.choose_reuse.m"
    {
#line 777 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2));
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6));
#line 777 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11));
#line 777 "structure_reuse.direct.choose_reuse.m"
    }
#line 777 "structure_reuse.direct.choose_reuse.m"
    {
#line 777 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37);
    }
#line 879 "structure_reuse.direct.choose_reuse.m"
    {
#line 879 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[14], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37, ((MR_Box) ((MR_Integer) 0)));
    }
#line 879 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38 = ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38);
#line 414 "structure_reuse.direct.choose_reuse.m"
    {
#line 414 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11));
#line 414 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37));
#line 414 "structure_reuse.direct.choose_reuse.m"
    }
#line 414 "structure_reuse.direct.choose_reuse.m"
    {
#line 414 "structure_reuse.direct.choose_reuse.m"
      mercury__list__sort_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[15], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61);
    }
#line 417 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "structure_reuse.direct.choose_reuse.m"
      {
#line 419 "structure_reuse.direct.choose_reuse.m"
        {
#line 419 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
        }
#line 418 "structure_reuse.direct.choose_reuse.m"
      }
#line 417 "structure_reuse.direct.choose_reuse.m"
    else
#line 416 "structure_reuse.direct.choose_reuse.m"
      {
#line 416 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;

#line 416 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61, (MR_Integer) 0)));
#line 416 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61, (MR_Integer) 1)));
#line 416 "structure_reuse.direct.choose_reuse.m"
      }
#line 780 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 0)));
#line 780 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 1)));
#line 780 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 2)));
#line 780 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 3)));
#line 780 "structure_reuse.direct.choose_reuse.m"
    {
#line 780 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74);
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38));
#line 780 "structure_reuse.direct.choose_reuse.m"
    }
#line 408 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73)) == (MR_mktag((MR_Integer) 1)));
#line 408 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 408 "structure_reuse.direct.choose_reuse.m"
      {
#line 408 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73, (MR_Integer) 0)));
#line 408 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73, (MR_Integer) 1)));
#line 409 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Float) 0.0000000000000000;
#line 409 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77);
#line 724 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 724 "structure_reuse.direct.choose_reuse.m"
          {
#line 10213 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 10215 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 728 "structure_reuse.direct.choose_reuse.m"
            {
#line 728 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__init_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13);
            }
#line 729 "structure_reuse.direct.choose_reuse.m"
            {
#line 729 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__det_insert_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10);
            }
#line 729 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 724 "structure_reuse.direct.choose_reuse.m"
          }
#line 408 "structure_reuse.direct.choose_reuse.m"
      }
#line 724 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 724 "structure_reuse.direct.choose_reuse.m"
  }
#line 721 "structure_reuse.direct.choose_reuse.m"
}

#line 714 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
#line 714 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4,
#line 714 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5)
#line 714 "structure_reuse.direct.choose_reuse.m"
{
#line 716 "structure_reuse.direct.choose_reuse.m"
  {
#line 716 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 716 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6;
#line 716 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 716 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7;
#line 716 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8;
#line 716 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9;
#line 716 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;

#line 717 "structure_reuse.direct.choose_reuse.m"
    {
#line 717 "structure_reuse.direct.choose_reuse.m"
      mercury__map__keys_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7);
    }
#line 718 "structure_reuse.direct.choose_reuse.m"
    {
#line 718 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = mercury__set__list_to_set_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5);
    }
#line 718 "structure_reuse.direct.choose_reuse.m"
    {
#line 718 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = mercury__set__list_to_set_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7);
    }
#line 718 "structure_reuse.direct.choose_reuse.m"
    {
#line 718 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8 = mercury__set__intersect_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
    }
#line 719 "structure_reuse.direct.choose_reuse.m"
    {
#line 719 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8);
    }
#line 716 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6;
#line 716 "structure_reuse.direct.choose_reuse.m"
  }
#line 714 "structure_reuse.direct.choose_reuse.m"
}

#line 695 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 695 "structure_reuse.direct.choose_reuse.m"
{
#line 695 "structure_reuse.direct.choose_reuse.m"
  {
#line 695 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 695 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 695 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10;

#line 695 "structure_reuse.direct.choose_reuse.m"
    {
#line 695 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10);
    }
#line 695 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 695 "structure_reuse.direct.choose_reuse.m"
      {
#line 695 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10));
#line 695 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 695 "structure_reuse.direct.choose_reuse.m"
      }
#line 695 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 695 "structure_reuse.direct.choose_reuse.m"
  }
#line 695 "structure_reuse.direct.choose_reuse.m"
}

#line 707 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 707 "structure_reuse.direct.choose_reuse.m"
{
#line 707 "structure_reuse.direct.choose_reuse.m"
  {
#line 707 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 707 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 707 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6;

#line 707 "structure_reuse.direct.choose_reuse.m"
    {
#line 707 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 707 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6));
#line 707 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 707 "structure_reuse.direct.choose_reuse.m"
  }
#line 707 "structure_reuse.direct.choose_reuse.m"
}

#line 687 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
#line 687 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 687 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6,
#line 687 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7,
#line 687 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8)
#line 687 "structure_reuse.direct.choose_reuse.m"
{
#line 10387 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 10389 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 10392 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10396 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    else
#line 10398 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      {
#line 10400 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7, (MR_Integer) 0)));
#line 10402 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7, (MR_Integer) 1)));
#line 10404 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 10406 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30;
#line 707 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30;

#line 708 "structure_reuse.direct.choose_reuse.m"
        {
#line 708 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = mercury__map__keys_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_19);
        }
#line 707 "structure_reuse.direct.choose_reuse.m"
        {
#line 707 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[13], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_20, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22)));
        }
#line 707 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30);
#line 697 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "structure_reuse.direct.choose_reuse.m"
        else
#line 694 "structure_reuse.direct.choose_reuse.m"
          {
#line 694 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 695 "structure_reuse.direct.choose_reuse.m"
            {
#line 695 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7));
#line 695 "structure_reuse.direct.choose_reuse.m"
            }
#line 695 "structure_reuse.direct.choose_reuse.m"
            {
#line 695 "structure_reuse.direct.choose_reuse.m"
              mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8);
#line 695 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 694 "structure_reuse.direct.choose_reuse.m"
          }
#line 10461 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      }
#line 10463 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 687 "structure_reuse.direct.choose_reuse.m"
}

#line 685 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5(
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 685 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 685 "structure_reuse.direct.choose_reuse.m"
{
#line 685 "structure_reuse.direct.choose_reuse.m"
  {
#line 685 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 685 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28;

#line 685 "structure_reuse.direct.choose_reuse.m"
    {
#line 685 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__685__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28);
    }
#line 685 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28));
#line 685 "structure_reuse.direct.choose_reuse.m"
  }
#line 685 "structure_reuse.direct.choose_reuse.m"
}

#line 695 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 695 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 695 "structure_reuse.direct.choose_reuse.m"
{
#line 695 "structure_reuse.direct.choose_reuse.m"
  {
#line 695 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 695 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 695 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10;

#line 695 "structure_reuse.direct.choose_reuse.m"
    {
#line 695 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10);
    }
#line 695 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 695 "structure_reuse.direct.choose_reuse.m"
      {
#line 695 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10));
#line 695 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 695 "structure_reuse.direct.choose_reuse.m"
      }
#line 695 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 695 "structure_reuse.direct.choose_reuse.m"
  }
#line 695 "structure_reuse.direct.choose_reuse.m"
}

#line 707 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 707 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 707 "structure_reuse.direct.choose_reuse.m"
{
#line 707 "structure_reuse.direct.choose_reuse.m"
  {
#line 707 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 707 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 707 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6;

#line 707 "structure_reuse.direct.choose_reuse.m"
    {
#line 707 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 707 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6));
#line 707 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 707 "structure_reuse.direct.choose_reuse.m"
  }
#line 707 "structure_reuse.direct.choose_reuse.m"
}

#line 677 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 677 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 677 "structure_reuse.direct.choose_reuse.m"
{
#line 677 "structure_reuse.direct.choose_reuse.m"
  {
#line 677 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 677 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22;

#line 677 "structure_reuse.direct.choose_reuse.m"
    {
#line 677 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__677__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22);
    }
#line 677 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22));
#line 677 "structure_reuse.direct.choose_reuse.m"
  }
#line 677 "structure_reuse.direct.choose_reuse.m"
}

#line 662 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
#line 662 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 662 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 662 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 662 "structure_reuse.direct.choose_reuse.m"
{
#line 662 "structure_reuse.direct.choose_reuse.m"
  {
#line 662 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 662 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8;

#line 662 "structure_reuse.direct.choose_reuse.m"
    {
#line 662 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8);
    }
#line 662 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8));
#line 662 "structure_reuse.direct.choose_reuse.m"
  }
#line 662 "structure_reuse.direct.choose_reuse.m"
}

#line 665 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15)
#line 665 "structure_reuse.direct.choose_reuse.m"
{
#line 670 "structure_reuse.direct.choose_reuse.m"
  {
#line 670 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 670 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25;
#line 670 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12;
#line 670 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13;
#line 670 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17;
#line 670 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 677 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17;
#line 685 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15;

#line 662 "structure_reuse.direct.choose_reuse.m"
    {
#line 662 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 662 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[0]));
#line 662 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1));
#line 662 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 662 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7));
#line 662 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8));
#line 662 "structure_reuse.direct.choose_reuse.m"
    }
#line 662 "structure_reuse.direct.choose_reuse.m"
    {
#line 662 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12);
    }
#line 10695 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
#line 677 "structure_reuse.direct.choose_reuse.m"
    {
#line 677 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[10], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17);
    }
#line 677 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17);
#line 10704 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10708 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    else
#line 10710 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      {
#line 10712 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, (MR_Integer) 0)));
#line 10714 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, (MR_Integer) 1)));
#line 10716 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 10718 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65;
#line 707 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65;

#line 708 "structure_reuse.direct.choose_reuse.m"
        {
#line 708 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = mercury__map__keys_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_54);
        }
#line 707 "structure_reuse.direct.choose_reuse.m"
        {
#line 707 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[11], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_55, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57)));
        }
#line 707 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65);
#line 697 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 699 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "structure_reuse.direct.choose_reuse.m"
        else
#line 694 "structure_reuse.direct.choose_reuse.m"
          {
#line 694 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;

#line 695 "structure_reuse.direct.choose_reuse.m"
            {
#line 695 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10));
#line 695 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12));
#line 695 "structure_reuse.direct.choose_reuse.m"
            }
#line 695 "structure_reuse.direct.choose_reuse.m"
            {
#line 695 "structure_reuse.direct.choose_reuse.m"
              mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13);
            }
#line 694 "structure_reuse.direct.choose_reuse.m"
          }
#line 10771 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      }
#line 685 "structure_reuse.direct.choose_reuse.m"
    {
#line 685 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[12], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15);
    }
#line 685 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15);
#line 670 "structure_reuse.direct.choose_reuse.m"
  }
#line 665 "structure_reuse.direct.choose_reuse.m"
}

#line 619 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
#line 619 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 619 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 619 "structure_reuse.direct.choose_reuse.m"
{
#line 619 "structure_reuse.direct.choose_reuse.m"
  {
#line 619 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 619 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 619 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_HeadVar__2_89;

#line 619 "structure_reuse.direct.choose_reuse.m"
    {
#line 619 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_HeadVar__2_89 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__619__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 619 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_HeadVar__2_89));
#line 619 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 619 "structure_reuse.direct.choose_reuse.m"
  }
#line 619 "structure_reuse.direct.choose_reuse.m"
}

#line 649 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 649 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 649 "structure_reuse.direct.choose_reuse.m"
{
#line 649 "structure_reuse.direct.choose_reuse.m"
  {
#line 649 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 649 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117;

#line 649 "structure_reuse.direct.choose_reuse.m"
    {
#line 649 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__649__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117);
    }
#line 649 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117));
#line 649 "structure_reuse.direct.choose_reuse.m"
  }
#line 649 "structure_reuse.direct.choose_reuse.m"
}

#line 566 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67,
#line 566 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68)
#line 566 "structure_reuse.direct.choose_reuse.m"
{
#line 571 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 571 "structure_reuse.direct.choose_reuse.m"
    {
#line 571 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 571 "structure_reuse.direct.choose_reuse.m"
      {
#line 571 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 571 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9, (MR_Integer) 0)));
#line 571 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9, (MR_Integer) 1)));

#line 595 "structure_reuse.direct.choose_reuse.m"
#line 595 "structure_reuse.direct.choose_reuse.m"
        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) {
#line 595 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 595 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 624 "structure_reuse.direct.choose_reuse.m"
            {
#line 624 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_56 = (MR_Word) MR_body(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12), (MR_Integer) 0);
#line 624 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85;

#line 627 "structure_reuse.direct.choose_reuse.m"
              {
#line 627 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85);
              }
#line 629 "structure_reuse.direct.choose_reuse.m"
              {
#line 629 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 629 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 624 "structure_reuse.direct.choose_reuse.m"
            }
#line 595 "structure_reuse.direct.choose_reuse.m"
            break;
#line 595 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 574 "structure_reuse.direct.choose_reuse.m"
            {
#line 574 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 574 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100;
#line 574 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)));
#line 574 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 574 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 574 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 4)));
#line 591 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19;
#line 591 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20;
#line 591 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21;
#line 575 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 575 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 575 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 575 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17)) == (MR_mktag((MR_Integer) 1)));
#line 575 "structure_reuse.direct.choose_reuse.m"
              if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 575 "structure_reuse.direct.choose_reuse.m"
                {
#line 575 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 0)));
#line 575 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 1)));
#line 575 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 2)));
#line 575 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 3)));
#line 575 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 4)));
#line 575 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 5)));
#line 577 "structure_reuse.direct.choose_reuse.m"
                  {
#line 577 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25;
#line 588 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26;

#line 577 "structure_reuse.direct.choose_reuse.m"
                    {
#line 577 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_13);
                    }
#line 579 "structure_reuse.direct.choose_reuse.m"
                    {
#line 579 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26);
                    }
#line 588 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 581 "structure_reuse.direct.choose_reuse.m"
                      {
#line 581 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27;
#line 581 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28;
#line 581 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29;
#line 581 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30;
#line 581 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98;

#line 581 "structure_reuse.direct.choose_reuse.m"
                        {
#line 581 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26);
                        }
#line 582 "structure_reuse.direct.choose_reuse.m"
                        {
#line 582 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27);
                        }
#line 584 "structure_reuse.direct.choose_reuse.m"
                        {
#line 584 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28));
#line 584 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 584 "structure_reuse.direct.choose_reuse.m"
                        }
#line 584 "structure_reuse.direct.choose_reuse.m"
                        {
#line 584 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98);
                        }
#line 585 "structure_reuse.direct.choose_reuse.m"
                        {
#line 585 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30);
                        }
#line 587 "structure_reuse.direct.choose_reuse.m"
                        {
#line 587 "structure_reuse.direct.choose_reuse.m"
                          mercury__multi_map__set_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100);
                        }
#line 581 "structure_reuse.direct.choose_reuse.m"
                      }
#line 588 "structure_reuse.direct.choose_reuse.m"
                    else
#line 588 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67;
#line 577 "structure_reuse.direct.choose_reuse.m"
                  }
#line 575 "structure_reuse.direct.choose_reuse.m"
                }
#line 575 "structure_reuse.direct.choose_reuse.m"
              else
#line 591 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67;
#line 594 "structure_reuse.direct.choose_reuse.m"
              {
#line 594 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 594 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 574 "structure_reuse.direct.choose_reuse.m"
            }
#line 595 "structure_reuse.direct.choose_reuse.m"
            break;
#line 595 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 597 "structure_reuse.direct.choose_reuse.m"
            {
#line 597 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 597 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 595 "structure_reuse.direct.choose_reuse.m"
            break;
#line 595 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 595 "structure_reuse.direct.choose_reuse.m"
#line 595 "structure_reuse.direct.choose_reuse.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) {
#line 595 "structure_reuse.direct.choose_reuse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 595 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 0:
#line 601 "structure_reuse.direct.choose_reuse.m"
                {
#line 601 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 601 "structure_reuse.direct.choose_reuse.m"
                  return;
                }
#line 595 "structure_reuse.direct.choose_reuse.m"
                break;
#line 595 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 1:
#line 605 "structure_reuse.direct.choose_reuse.m"
                {
#line 605 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 605 "structure_reuse.direct.choose_reuse.m"
                  return;
                }
#line 595 "structure_reuse.direct.choose_reuse.m"
                break;
#line 595 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 2:
#line 608 "structure_reuse.direct.choose_reuse.m"
                {
#line 608 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 608 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51;
#line 608 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 609 "structure_reuse.direct.choose_reuse.m"
                  {
#line 609 "structure_reuse.direct.choose_reuse.m"
                    mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51);
                  }
#line 610 "structure_reuse.direct.choose_reuse.m"
                  {
#line 610 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 610 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 608 "structure_reuse.direct.choose_reuse.m"
                }
#line 595 "structure_reuse.direct.choose_reuse.m"
                break;
#line 595 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 3:
#line 613 "structure_reuse.direct.choose_reuse.m"
                {
#line 613 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92;
#line 613 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 614 "structure_reuse.direct.choose_reuse.m"
                  {
#line 614 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_102, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92);
                  }
#line 616 "structure_reuse.direct.choose_reuse.m"
                  {
#line 616 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 616 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 613 "structure_reuse.direct.choose_reuse.m"
                }
#line 595 "structure_reuse.direct.choose_reuse.m"
                break;
#line 595 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 4:
#line 618 "structure_reuse.direct.choose_reuse.m"
                {
#line 618 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 618 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90;
#line 618 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104;
#line 618 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 618 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));

#line 619 "structure_reuse.direct.choose_reuse.m"
                  {
#line 619 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[9], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_54);
                  }
#line 620 "structure_reuse.direct.choose_reuse.m"
                  {
#line 620 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90);
                  }
#line 622 "structure_reuse.direct.choose_reuse.m"
                  {
#line 622 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 622 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 618 "structure_reuse.direct.choose_reuse.m"
                }
#line 595 "structure_reuse.direct.choose_reuse.m"
                break;
#line 595 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 5:
#line 632 "structure_reuse.direct.choose_reuse.m"
                {
#line 632 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 632 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 636 "structure_reuse.direct.choose_reuse.m"
                  /* direct tailcall eliminated */
#line 636 "structure_reuse.direct.choose_reuse.m"
                  {
#line 636 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal__tmp_copy_9 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_105;

#line 636 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal__tmp_copy_9;
#line 636 "structure_reuse.direct.choose_reuse.m"
                  }
#line 636 "structure_reuse.direct.choose_reuse.m"
                  continue;
#line 632 "structure_reuse.direct.choose_reuse.m"
                }
#line 595 "structure_reuse.direct.choose_reuse.m"
                break;
#line 595 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 6:
#line 639 "structure_reuse.direct.choose_reuse.m"
                {
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 4)));
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 649 "structure_reuse.direct.choose_reuse.m"
                  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81;

#line 640 "structure_reuse.direct.choose_reuse.m"
                  {
#line 640 "structure_reuse.direct.choose_reuse.m"
                    mercury__multi_map__init_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62);
                  }
#line 642 "structure_reuse.direct.choose_reuse.m"
                  {
#line 642 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_60));
#line 642 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 642 "structure_reuse.direct.choose_reuse.m"
                  }
#line 641 "structure_reuse.direct.choose_reuse.m"
                  {
#line 641 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_59, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63);
                  }
#line 643 "structure_reuse.direct.choose_reuse.m"
                  {
#line 643 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64);
                  }
#line 645 "structure_reuse.direct.choose_reuse.m"
                  {
#line 645 "structure_reuse.direct.choose_reuse.m"
                    mercury__multi_map__merge_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75);
                  }
#line 646 "structure_reuse.direct.choose_reuse.m"
                  {
#line 646 "structure_reuse.direct.choose_reuse.m"
                    mercury__multi_map__merge_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76);
                  }
#line 648 "structure_reuse.direct.choose_reuse.m"
                  {
#line 648 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64));
#line 648 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 648 "structure_reuse.direct.choose_reuse.m"
                  }
#line 648 "structure_reuse.direct.choose_reuse.m"
                  {
#line 648 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 648 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63));
#line 648 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 648 "structure_reuse.direct.choose_reuse.m"
                  }
#line 647 "structure_reuse.direct.choose_reuse.m"
                  {
#line 647 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65);
                  }
#line 11305 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
#line 649 "structure_reuse.direct.choose_reuse.m"
                  {
#line 649 "structure_reuse.direct.choose_reuse.m"
                    mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[8], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81);
                  }
#line 649 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81);
#line 650 "structure_reuse.direct.choose_reuse.m"
                  {
#line 650 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
#line 650 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 639 "structure_reuse.direct.choose_reuse.m"
                }
#line 595 "structure_reuse.direct.choose_reuse.m"
                break;
#line 595 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 7:
#line 653 "structure_reuse.direct.choose_reuse.m"
                {
#line 655 "structure_reuse.direct.choose_reuse.m"
                  {
#line 655 "structure_reuse.direct.choose_reuse.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation\'/6", (MR_String) "shorthand");
#line 655 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 653 "structure_reuse.direct.choose_reuse.m"
                }
#line 595 "structure_reuse.direct.choose_reuse.m"
                break;
#line 595 "structure_reuse.direct.choose_reuse.m"
            }
#line 595 "structure_reuse.direct.choose_reuse.m"
            break;
#line 595 "structure_reuse.direct.choose_reuse.m"
        }
#line 571 "structure_reuse.direct.choose_reuse.m"
      }
#line 571 "structure_reuse.direct.choose_reuse.m"
      break;
#line 571 "structure_reuse.direct.choose_reuse.m"
    }
#line 566 "structure_reuse.direct.choose_reuse.m"
}

#line 554 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7,
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8,
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12,
#line 554 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13)
#line 554 "structure_reuse.direct.choose_reuse.m"
{
#line 559 "structure_reuse.direct.choose_reuse.m"
  {
#line 559 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 559 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 559 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12;
#line 559 "structure_reuse.direct.choose_reuse.m"
    else
#line 561 "structure_reuse.direct.choose_reuse.m"
      {
#line 561 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8, (MR_Integer) 0)));
#line 561 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8, (MR_Integer) 1)));

#line 562 "structure_reuse.direct.choose_reuse.m"
        {
#line 562 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13);
#line 562 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 561 "structure_reuse.direct.choose_reuse.m"
      }
#line 559 "structure_reuse.direct.choose_reuse.m"
  }
#line 554 "structure_reuse.direct.choose_reuse.m"
}

#line 546 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
#line 546 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 546 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6,
#line 546 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 546 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8)
#line 546 "structure_reuse.direct.choose_reuse.m"
{
#line 549 "structure_reuse.direct.choose_reuse.m"
  {
#line 549 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 549 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;

#line 552 "structure_reuse.direct.choose_reuse.m"
    {
#line 552 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = mercury__multi_map__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
    }
#line 551 "structure_reuse.direct.choose_reuse.m"
    {
#line 551 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8);
#line 551 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 549 "structure_reuse.direct.choose_reuse.m"
  }
#line 546 "structure_reuse.direct.choose_reuse.m"
}

#line 531 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7)
#line 531 "structure_reuse.direct.choose_reuse.m"
{
#line 534 "structure_reuse.direct.choose_reuse.m"
  {
#line 534 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 534 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 1)));
#line 535 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 0)));
#line 535 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 2)));
#line 535 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 3)));
#line 535 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 4)));

#line 535 "structure_reuse.direct.choose_reuse.m"
    {
#line 535 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7);
#line 535 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 534 "structure_reuse.direct.choose_reuse.m"
  }
#line 531 "structure_reuse.direct.choose_reuse.m"
}

#line 528 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1(
#line 528 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 528 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 528 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 528 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 528 "structure_reuse.direct.choose_reuse.m"
{
#line 528 "structure_reuse.direct.choose_reuse.m"
  {
#line 528 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 528 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7;

#line 528 "structure_reuse.direct.choose_reuse.m"
    {
#line 528 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7);
    }
#line 528 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7));
#line 528 "structure_reuse.direct.choose_reuse.m"
  }
#line 528 "structure_reuse.direct.choose_reuse.m"
}

#line 523 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(
#line 523 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 523 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7,
#line 523 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8)
#line 523 "structure_reuse.direct.choose_reuse.m"
{
#line 526 "structure_reuse.direct.choose_reuse.m"
  {
#line 526 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 526 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 527 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 527 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 527 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 528 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8;

#line 528 "structure_reuse.direct.choose_reuse.m"
    {
#line 528 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[7], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8);
    }
#line 528 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8);
#line 526 "structure_reuse.direct.choose_reuse.m"
  }
#line 523 "structure_reuse.direct.choose_reuse.m"
}

#line 358 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
#line 358 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 358 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 358 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 358 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 358 "structure_reuse.direct.choose_reuse.m"
{
#line 358 "structure_reuse.direct.choose_reuse.m"
  {
#line 358 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 358 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6;

#line 358 "structure_reuse.direct.choose_reuse.m"
    {
#line 358 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6);
    }
#line 358 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6));
#line 358 "structure_reuse.direct.choose_reuse.m"
  }
#line 358 "structure_reuse.direct.choose_reuse.m"
}

#line 458 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28,
#line 458 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29)
#line 458 "structure_reuse.direct.choose_reuse.m"
{
#line 462 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 462 "structure_reuse.direct.choose_reuse.m"
    {
#line 462 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 462 "structure_reuse.direct.choose_reuse.m"
      {
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 1)));
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13;
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14;
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15;
#line 462 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71;
#line 463 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 0)));
#line 463 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 2)));
#line 463 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 3)));

#line 464 "structure_reuse.direct.choose_reuse.m"
        {
#line 464 "structure_reuse.direct.choose_reuse.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13);
        }
#line 465 "structure_reuse.direct.choose_reuse.m"
        {
#line 465 "structure_reuse.direct.choose_reuse.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13, (MR_Integer) 46, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14);
        }
#line 552 "structure_reuse.direct.choose_reuse.m"
        {
#line 552 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71 = mercury__multi_map__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
        }
#line 551 "structure_reuse.direct.choose_reuse.m"
        {
#line 551 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15);
        }
#line 474 "structure_reuse.direct.choose_reuse.m"
        {
#line 474 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15);
        }
#line 476 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 475 "structure_reuse.direct.choose_reuse.m"
          {
#line 475 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 475 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 475 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24;
#line 475 "structure_reuse.direct.choose_reuse.m"
          }
#line 476 "structure_reuse.direct.choose_reuse.m"
        else
#line 479 "structure_reuse.direct.choose_reuse.m"
          {
#line 479 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 479 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16;
#line 479 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 479 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76;
#line 479 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77;
#line 481 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 481 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;
#line 481 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65;

#line 357 "structure_reuse.direct.choose_reuse.m"
            {
#line 357 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__values_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76);
            }
#line 358 "structure_reuse.direct.choose_reuse.m"
            {
#line 358 "structure_reuse.direct.choose_reuse.m"
              mercury__list__sort_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[6], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77);
            }
#line 361 "structure_reuse.direct.choose_reuse.m"
            if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "structure_reuse.direct.choose_reuse.m"
              {
#line 363 "structure_reuse.direct.choose_reuse.m"
                {
#line 363 "structure_reuse.direct.choose_reuse.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_degree_ratio\'/1", (MR_String) "empty multi_map");
#line 363 "structure_reuse.direct.choose_reuse.m"
                  return;
                }
#line 362 "structure_reuse.direct.choose_reuse.m"
              }
#line 361 "structure_reuse.direct.choose_reuse.m"
            else
#line 360 "structure_reuse.direct.choose_reuse.m"
              {
#line 360 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;

#line 360 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77, (MR_Integer) 0)));
#line 360 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77, (MR_Integer) 1)));
#line 360 "structure_reuse.direct.choose_reuse.m"
              }
#line 481 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 0)));
#line 481 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 1)));
#line 481 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 2)));
#line 481 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 3)));
#line 482 "structure_reuse.direct.choose_reuse.m"
            if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "structure_reuse.direct.choose_reuse.m"
              {
#line 481 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24;
#line 481 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 481 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 481 "structure_reuse.direct.choose_reuse.m"
              }
#line 482 "structure_reuse.direct.choose_reuse.m"
            else
#line 483 "structure_reuse.direct.choose_reuse.m"
              {
#line 483 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22;
#line 483 "structure_reuse.direct.choose_reuse.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23;
#line 483 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36;
#line 483 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37;
#line 483 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 483 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39;
#line 483 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42;
#line 483 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43;
#line 503 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 503 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;
#line 503 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 511 "structure_reuse.direct.choose_reuse.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;

#line 488 "structure_reuse.direct.choose_reuse.m"
                {
#line 488 "structure_reuse.direct.choose_reuse.m"
                  libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14, (MR_String) "% Reuse results: \n");
                }
#line 489 "structure_reuse.direct.choose_reuse.m"
                {
#line 489 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16);
                }
#line 496 "structure_reuse.direct.choose_reuse.m"
                {
#line 496 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36);
                }
#line 499 "structure_reuse.direct.choose_reuse.m"
                {
#line 499 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37);
                }
#line 503 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 0)));
#line 503 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 1)));
#line 503 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 2)));
#line 503 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 3)));
#line 505 "structure_reuse.direct.choose_reuse.m"
                {
#line 505 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16);
                }
#line 504 "structure_reuse.direct.choose_reuse.m"
                {
#line 504 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39);
                }
#line 509 "structure_reuse.direct.choose_reuse.m"
                {
#line 509 "structure_reuse.direct.choose_reuse.m"
                  libs__globals__lookup_int_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13, (MR_Integer) 406, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23);
                }
#line 511 "structure_reuse.direct.choose_reuse.m"
                {
#line 511 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39);
                }
#line 511 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23);
#line 514 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 512 "structure_reuse.direct.choose_reuse.m"
                  {
#line 512 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 513 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 512 "structure_reuse.direct.choose_reuse.m"
                  }
#line 514 "structure_reuse.direct.choose_reuse.m"
                else
#line 515 "structure_reuse.direct.choose_reuse.m"
                  {
#line 515 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39;
#line 515 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36;
#line 515 "structure_reuse.direct.choose_reuse.m"
                  }
#line 519 "structure_reuse.direct.choose_reuse.m"
                /* direct tailcall eliminated */
#line 519 "structure_reuse.direct.choose_reuse.m"
                {
#line 519 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0__tmp_copy_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37;
#line 519 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0__tmp_copy_26 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42;
#line 519 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0__tmp_copy_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43;

#line 519 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0__tmp_copy_28;
#line 519 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0__tmp_copy_26;
#line 519 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0__tmp_copy_24;
#line 519 "structure_reuse.direct.choose_reuse.m"
                }
#line 519 "structure_reuse.direct.choose_reuse.m"
                continue;
#line 483 "structure_reuse.direct.choose_reuse.m"
              }
#line 479 "structure_reuse.direct.choose_reuse.m"
          }
#line 462 "structure_reuse.direct.choose_reuse.m"
      }
#line 462 "structure_reuse.direct.choose_reuse.m"
      break;
#line 462 "structure_reuse.direct.choose_reuse.m"
    }
#line 458 "structure_reuse.direct.choose_reuse.m"
}

#line 434 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1(
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 434 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 434 "structure_reuse.direct.choose_reuse.m"
{
#line 434 "structure_reuse.direct.choose_reuse.m"
  {
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 434 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_23;

#line 434 "structure_reuse.direct.choose_reuse.m"
    {
#line 434 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__434__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_23);
    }
#line 434 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_23));
#line 434 "structure_reuse.direct.choose_reuse.m"
  }
#line 434 "structure_reuse.direct.choose_reuse.m"
}

#line 428 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(
#line 428 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3,
#line 428 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4)
#line 428 "structure_reuse.direct.choose_reuse.m"
{
#line 432 "structure_reuse.direct.choose_reuse.m"
  {
#line 432 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 432 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "structure_reuse.direct.choose_reuse.m"
      {
#line 446 "structure_reuse.direct.choose_reuse.m"
        {
#line 446 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
#line 446 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 445 "structure_reuse.direct.choose_reuse.m"
      }
#line 432 "structure_reuse.direct.choose_reuse.m"
    else
#line 432 "structure_reuse.direct.choose_reuse.m"
      {
#line 432 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 432 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, (MR_Integer) 0)));
#line 432 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, (MR_Integer) 1)));
#line 432 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7;
#line 432 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15;
#line 432 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 432 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32;
#line 432 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 441 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15;
#line 443 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;
#line 443 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 443 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60;
#line 442 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 442 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 442 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 442 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;

#line 433 "structure_reuse.direct.choose_reuse.m"
        {
#line 433 "structure_reuse.direct.choose_reuse.m"
          mercury__list__length_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7);
        }
#line 441 "structure_reuse.direct.choose_reuse.m"
        {
#line 441 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[5], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_5)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15);
        }
#line 441 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15);
#line 443 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 0)));
#line 443 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 1)));
#line 443 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 2)));
#line 443 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 3)));
#line 443 "structure_reuse.direct.choose_reuse.m"
        {
#line 443 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7);
        }
#line 443 "structure_reuse.direct.choose_reuse.m"
        {
#line 443 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33);
        }
#line 442 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 0)));
#line 442 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 1)));
#line 442 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 2)));
#line 442 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 3)));
#line 442 "structure_reuse.direct.choose_reuse.m"
        {
#line 442 "structure_reuse.direct.choose_reuse.m"
          MR_Word base;
#line 442 "structure_reuse.direct.choose_reuse.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4 = base;
#line 442 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61));
#line 442 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62));
#line 442 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31);
#line 442 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64));
#line 442 "structure_reuse.direct.choose_reuse.m"
        }
#line 432 "structure_reuse.direct.choose_reuse.m"
      }
#line 432 "structure_reuse.direct.choose_reuse.m"
  }
#line 428 "structure_reuse.direct.choose_reuse.m"
}

#line 397 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
#line 397 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4,
#line 397 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5,
#line 397 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6)
#line 397 "structure_reuse.direct.choose_reuse.m"
{
#line 392 "structure_reuse.direct.choose_reuse.m"
  {
#line 392 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 392 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 2)));
#line 392 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 2)));
#line 393 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 0)));
#line 393 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 1)));
#line 393 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 3)));
#line 394 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 0)));
#line 394 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 1)));
#line 394 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 3)));

#line 395 "structure_reuse.direct.choose_reuse.m"
    {
#line 395 "structure_reuse.direct.choose_reuse.m"
      mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_11);
#line 395 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 392 "structure_reuse.direct.choose_reuse.m"
  }
#line 397 "structure_reuse.direct.choose_reuse.m"
}

#line 374 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
#line 374 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4,
#line 374 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5,
#line 374 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6)
#line 374 "structure_reuse.direct.choose_reuse.m"
{
#line 369 "structure_reuse.direct.choose_reuse.m"
  {
#line 369 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 369 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10;
#line 369 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11;
#line 383 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 2)));
#line 383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 0)));
#line 383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 1)));
#line 383 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 3)));
#line 383 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28;
#line 383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32;
#line 383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 383 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34;

#line 383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == ((MR_Float) 0.0000000000000000));
#line 383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 382 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 384 "structure_reuse.direct.choose_reuse.m"
      {
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 2)));
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 3)));
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 0)));
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 1)));

#line 384 "structure_reuse.direct.choose_reuse.m"
        {
#line 384 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23);
        }
#line 384 "structure_reuse.direct.choose_reuse.m"
        {
#line 384 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16);
        }
#line 384 "structure_reuse.direct.choose_reuse.m"
      }
#line 382 "structure_reuse.direct.choose_reuse.m"
    else
#line 386 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10 = (MR_Float) 0.0000000000000000;
#line 383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 0)));
#line 383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 1)));
#line 383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 2)));
#line 383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 3)));
#line 383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 == ((MR_Float) 0.0000000000000000));
#line 383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 382 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 384 "structure_reuse.direct.choose_reuse.m"
      {
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 2)));
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30;
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 3)));
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 0)));
#line 384 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 1)));

#line 384 "structure_reuse.direct.choose_reuse.m"
        {
#line 384 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37);
        }
#line 384 "structure_reuse.direct.choose_reuse.m"
        {
#line 384 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30);
        }
#line 384 "structure_reuse.direct.choose_reuse.m"
      }
#line 382 "structure_reuse.direct.choose_reuse.m"
    else
#line 386 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11 = (MR_Float) 0.0000000000000000;
#line 372 "structure_reuse.direct.choose_reuse.m"
    {
#line 372 "structure_reuse.direct.choose_reuse.m"
      mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11);
#line 372 "structure_reuse.direct.choose_reuse.m"
      return;
    }
#line 369 "structure_reuse.direct.choose_reuse.m"
  }
#line 374 "structure_reuse.direct.choose_reuse.m"
}

#line 325 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2(
#line 325 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 325 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 325 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 325 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 325 "structure_reuse.direct.choose_reuse.m"
{
#line 325 "structure_reuse.direct.choose_reuse.m"
  {
#line 325 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 325 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5;

#line 325 "structure_reuse.direct.choose_reuse.m"
    {
#line 325 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5);
    }
#line 325 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5));
#line 325 "structure_reuse.direct.choose_reuse.m"
  }
#line 325 "structure_reuse.direct.choose_reuse.m"
}

#line 320 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1(
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 320 "structure_reuse.direct.choose_reuse.m"
{
#line 320 "structure_reuse.direct.choose_reuse.m"
  {
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 320 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13;

#line 320 "structure_reuse.direct.choose_reuse.m"
    {
#line 320 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__320__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 320 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_13));
#line 320 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 320 "structure_reuse.direct.choose_reuse.m"
  }
#line 320 "structure_reuse.direct.choose_reuse.m"
}

#line 317 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(
#line 317 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4,
#line 317 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5)
#line 317 "structure_reuse.direct.choose_reuse.m"
{
#line 319 "structure_reuse.direct.choose_reuse.m"
  {
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6;
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9;
#line 319 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 0)));
#line 321 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 1)));
#line 321 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 2)));
#line 321 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 3)));

#line 321 "structure_reuse.direct.choose_reuse.m"
    {
#line 321 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[4], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14);
    }
#line 328 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 329 "structure_reuse.direct.choose_reuse.m"
      {
#line 330 "structure_reuse.direct.choose_reuse.m"
        {
#line 330 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_condition\'/2", (MR_String) "no reuse conditions");
        }
#line 329 "structure_reuse.direct.choose_reuse.m"
      }
#line 328 "structure_reuse.direct.choose_reuse.m"
    else
#line 323 "structure_reuse.direct.choose_reuse.m"
      {
#line 323 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9, (MR_Integer) 0)));
#line 323 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9, (MR_Integer) 1)));
#line 323 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 323 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 1)));
#line 323 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 2)));
#line 325 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 0)));
#line 325 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 3)));
#line 324 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6;

#line 325 "structure_reuse.direct.choose_reuse.m"
        {
#line 325 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 325 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[0]));
#line 325 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2));
#line 325 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 325 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19));
#line 325 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30));
#line 325 "structure_reuse.direct.choose_reuse.m"
        }
#line 324 "structure_reuse.direct.choose_reuse.m"
        {
#line 324 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_10)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6);
        }
#line 324 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6);
#line 323 "structure_reuse.direct.choose_reuse.m"
      }
#line 319 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6;
#line 319 "structure_reuse.direct.choose_reuse.m"
  }
#line 317 "structure_reuse.direct.choose_reuse.m"
}

#line 312 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1(
#line 312 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 312 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 312 "structure_reuse.direct.choose_reuse.m"
{
#line 312 "structure_reuse.direct.choose_reuse.m"
  {
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 312 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_8;

#line 312 "structure_reuse.direct.choose_reuse.m"
    {
#line 312 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_8 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__312__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 312 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_8));
#line 312 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 312 "structure_reuse.direct.choose_reuse.m"
  }
#line 312 "structure_reuse.direct.choose_reuse.m"
}

#line 309 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(
#line 309 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3)
#line 309 "structure_reuse.direct.choose_reuse.m"
{
#line 311 "structure_reuse.direct.choose_reuse.m"
  {
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4;
#line 311 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 0)));
#line 313 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 1)));
#line 313 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 2)));
#line 313 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 3)));

#line 313 "structure_reuse.direct.choose_reuse.m"
    {
#line 313 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[3], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
    }
#line 311 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4;
#line 311 "structure_reuse.direct.choose_reuse.m"
  }
#line 309 "structure_reuse.direct.choose_reuse.m"
}

#line 272 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(
#line 272 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3)
#line 272 "structure_reuse.direct.choose_reuse.m"
{
#line 274 "structure_reuse.direct.choose_reuse.m"
  {
#line 274 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 274 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 274 "structure_reuse.direct.choose_reuse.m"
    {
#line 274 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 274 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3));
#line 274 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 274 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 0));
#line 274 "structure_reuse.direct.choose_reuse.m"
    }
#line 274 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 274 "structure_reuse.direct.choose_reuse.m"
  }
#line 272 "structure_reuse.direct.choose_reuse.m"
}

#line 261 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7,
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8,
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10,
#line 261 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cond_11)
#line 261 "structure_reuse.direct.choose_reuse.m"
{
#line 265 "structure_reuse.direct.choose_reuse.m"
  {
#line 265 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 265 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6;

#line 265 "structure_reuse.direct.choose_reuse.m"
    {
#line 265 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 265 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7));
#line 265 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8));
#line 265 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9));
#line 265 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10));
#line 265 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cond_11));
#line 265 "structure_reuse.direct.choose_reuse.m"
    }
#line 265 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6;
#line 265 "structure_reuse.direct.choose_reuse.m"
  }
#line 261 "structure_reuse.direct.choose_reuse.m"
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
#line 132 "structure_reuse.direct.choose_reuse.m"
  {
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12;
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13;
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14;
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15;
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16;
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 132 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29;

#line 134 "structure_reuse.direct.choose_reuse.m"
    {
#line 134 "structure_reuse.direct.choose_reuse.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12);
    }
#line 135 "structure_reuse.direct.choose_reuse.m"
    {
#line 135 "structure_reuse.direct.choose_reuse.m"
      libs__globals__get_reuse_strategy_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13);
    }
#line 166 "structure_reuse.direct.choose_reuse.m"
    {
#line 166 "structure_reuse.direct.choose_reuse.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29);
    }
#line 167 "structure_reuse.direct.choose_reuse.m"
    {
#line 167 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 167 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13));
#line 167 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_7));
#line 167 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_8));
#line 167 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29));
#line 167 "structure_reuse.direct.choose_reuse.m"
    }
#line 138 "structure_reuse.direct.choose_reuse.m"
    {
#line 138 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
    }
#line 137 "structure_reuse.direct.choose_reuse.m"
    {
#line 137 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_18, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_11);
    }
#line 140 "structure_reuse.direct.choose_reuse.m"
    {
#line 140 "structure_reuse.direct.choose_reuse.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, (MR_Integer) 408, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16);
    }
#line 145 "structure_reuse.direct.choose_reuse.m"
#line 145 "structure_reuse.direct.choose_reuse.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16) {
#line 145 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 145 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 146 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 145 "structure_reuse.direct.choose_reuse.m"
        break;
#line 145 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 142 "structure_reuse.direct.choose_reuse.m"
        {
#line 142 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17;
#line 142 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35;

#line 143 "structure_reuse.direct.choose_reuse.m"
          {
#line 143 "structure_reuse.direct.choose_reuse.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, (MR_Integer) 46, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17);
          }
#line 1429 "structure_reuse.direct.choose_reuse.m"
          {
#line 1429 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35);
          }
#line 1430 "structure_reuse.direct.choose_reuse.m"
          {
#line 1430 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35);
          }
#line 1435 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1431 "structure_reuse.direct.choose_reuse.m"
            {
#line 1432 "structure_reuse.direct.choose_reuse.m"
              {
#line 1432 "structure_reuse.direct.choose_reuse.m"
                libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17, (MR_String) "% No cells to be cached/freed.\n");
              }
#line 1431 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 1431 "structure_reuse.direct.choose_reuse.m"
            }
#line 1435 "structure_reuse.direct.choose_reuse.m"
          else
#line 1439 "structure_reuse.direct.choose_reuse.m"
            {
#line 1437 "structure_reuse.direct.choose_reuse.m"
              {
#line 1437 "structure_reuse.direct.choose_reuse.m"
                libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17, (MR_String) "% Marking cacheable/freeable cells.\n");
              }
#line 1440 "structure_reuse.direct.choose_reuse.m"
              {
#line 1440 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19);
#line 1440 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1439 "structure_reuse.direct.choose_reuse.m"
            }
#line 142 "structure_reuse.direct.choose_reuse.m"
        }
#line 145 "structure_reuse.direct.choose_reuse.m"
        break;
#line 145 "structure_reuse.direct.choose_reuse.m"
    }
#line 132 "structure_reuse.direct.choose_reuse.m"
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
