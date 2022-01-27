/*
** Automatically generated from `structure_reuse.direct.choose_reuse.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "parse_tree.maybe_error.mih"
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



#line 1019 "structure_reuse.direct.choose_reuse.m"
struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s {
#line 1023 "structure_reuse.direct.choose_reuse.m"
  MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
#line 1023 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9;
#line 1026 "structure_reuse.direct.choose_reuse.m"
  jmp_buf transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0;
#line 1026 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10;
#line 1027 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10;
#line 1019 "structure_reuse.direct.choose_reuse.m"
};


#line 173 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0;

#line 176 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 179 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 182 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 185 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 188 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 191 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 194 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;

#line 197 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;

#line 203 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 206 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4];

#line 209 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4];

#line 212 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0;

#line 215 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1];

#line 218 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1];

#line 221 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0[1];

#line 224 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0[1];

#line 227 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2];

#line 230 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2];

#line 233 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0;

#line 236 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1];

#line 239 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1];

#line 242 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0[1];

#line 245 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0[1];

#line 248 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 251 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5];

#line 254 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0[5];

#line 257 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0;

#line 260 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1];

#line 263 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1];

#line 266 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0[1];

#line 269 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0[1];

#line 272 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;

#line 275 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0;

#line 278 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0[4];

#line 281 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0[4];

#line 284 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0;

#line 287 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0[1];

#line 290 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0[1];

#line 293 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0[1];

#line 296 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0[1];

#line 299 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0;

#line 302 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3];

#line 305 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3];

#line 308 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0;

#line 311 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1];

#line 314 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1];

#line 317 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1];

#line 320 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1];

#line 323 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
#line 326 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 328 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 331 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
#line 334 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 336 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 338 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 341 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
#line 344 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 346 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 349 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
#line 352 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 354 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 356 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 359 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
#line 362 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 364 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 367 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
#line 370 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 372 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 374 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 377 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
#line 380 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 382 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 385 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
#line 388 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 390 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 392 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 395 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
#line 398 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 400 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 403 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
#line 406 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 408 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 410 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 413 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
#line 416 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 418 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 421 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
#line 424 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 426 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 428 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 1383 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1383__1_1_f_0(
#line 1383 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_16);

#line 858 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__858__1_1_f_0(
#line 858 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_85);

#line 688 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__688__1_3_p_0(
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28);

#line 680 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__680__1_3_p_0(
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22);

#line 622 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__622__1_1_f_0(
#line 622 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_88);

#line 652 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__652__1_3_p_0(
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117);

#line 437 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__437__1_3_p_0(
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__3_23);

#line 323 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__323__1_1_f_0(
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12);

#line 315 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__315__1_1_f_0(
#line 315 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_7);

#line 293 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__293__1_1_f_0(
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12);

#line 223 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 223 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 260 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 260 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 252 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 252 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 201 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 201 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 213 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 213 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 157 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3);

#line 157 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1509 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
#line 1509 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1509 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10,
#line 1509 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11);

#line 1480 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
#line 1480 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1480 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1480 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1475 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
#line 1475 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1475 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1475 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1470 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
#line 1470 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1470 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1470 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1446 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
#line 1446 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1446 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48,
#line 1446 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49);

#line 1406 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1(
#line 1406 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1406 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1406 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 1406 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 1398 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(
#line 1398 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4);

#line 1385 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2(
#line 1385 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1385 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1383 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1(
#line 1383 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1383 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1380 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(
#line 1380 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4);

#line 293 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1(
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1358 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(
#line 1358 "structure_reuse.direct.choose_reuse.m"
  MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5,
#line 1358 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6);

#line 1343 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(
#line 1343 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6,
#line 1343 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7,
#line 1343 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8);

#line 1318 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
#line 1318 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1318 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3);

#line 1312 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
#line 1312 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1312 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3);

#line 1302 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
#line 1302 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1302 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1298 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5,
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6);

#line 293 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1309 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
#line 1309 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1309 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 1241 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7,
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8,
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40,
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);

#line 1233 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
#line 1233 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1233 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1233 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12,
#line 1233 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13);

#line 1204 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
#line 1204 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1204 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1204 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1199 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
#line 1199 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1199 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1199 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1194 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
#line 1194 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1194 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1194 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1170 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
#line 1170 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1170 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1170 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51,
#line 1170 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52);

#line 1147 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
#line 1147 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14,
#line 1147 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1147 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1118 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
#line 1118 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6,
#line 1118 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7,
#line 1118 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8,
#line 1118 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);

#line 1092 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6,
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7,
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8,
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10);

#line 1078 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
#line 1078 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1078 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2);

#line 1076 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
#line 1076 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1076 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1076 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 1056 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
#line 1056 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4,
#line 1056 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5);

#line 1026 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
#line 1026 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1027 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
#line 1027 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1026 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
#line 1026 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1026 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
#line 1026 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg);

#line 1019 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
#line 1019 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3,
#line 1019 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4);

#line 950 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12);

#line 1054 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2(
#line 1054 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1054 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1054 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 930 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
#line 930 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 930 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 930 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 921 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19);

#line 888 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(
#line 888 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1);

#line 884 "structure_reuse.direct.choose_reuse.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
#line 884 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 884 "structure_reuse.direct.choose_reuse.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5);

#line 858 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
#line 858 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 858 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 811 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(
#line 811 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 811 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6,
#line 811 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71,
#line 811 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);

#line 805 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(
#line 805 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 805 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6,
#line 805 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 805 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8);

#line 437 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 800 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
#line 800 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 800 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 800 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 792 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
#line 792 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 792 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6,
#line 792 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 792 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12);

#line 417 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 882 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 780 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 775 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
#line 775 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 775 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6,
#line 775 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 775 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12);

#line 749 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
#line 749 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3);

#line 746 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
#line 746 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 746 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 741 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
#line 741 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5,
#line 741 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6,
#line 741 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10,
#line 741 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11);

#line 417 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 882 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 780 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 738 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 724 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7,
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8,
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9,
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10);

#line 717 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
#line 717 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4,
#line 717 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5);

#line 698 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 710 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 690 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
#line 690 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 690 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6,
#line 690 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7,
#line 690 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8);

#line 688 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5(
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 698 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 710 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 680 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 665 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2);

#line 668 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15);

#line 622 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
#line 622 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 622 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 652 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 569 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);

#line 557 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7,
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8,
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12,
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13);

#line 549 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
#line 549 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 549 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6,
#line 549 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 549 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8);

#line 534 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
#line 534 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4,
#line 534 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6,
#line 534 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7);

#line 531 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1(
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 526 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(
#line 526 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 526 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7,
#line 526 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8);

#line 361 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
#line 361 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 361 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 361 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 361 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 461 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29);

#line 437 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1(
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 431 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(
#line 431 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3,
#line 431 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4);

#line 400 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
#line 400 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4,
#line 400 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5,
#line 400 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6);

#line 377 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
#line 377 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4,
#line 377 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5,
#line 377 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6);

#line 328 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2(
#line 328 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 328 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 328 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 328 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3);

#line 323 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1(
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 320 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4,
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5);

#line 315 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1(
#line 315 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 315 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1);

#line 312 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(
#line 312 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3);

#line 275 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(
#line 275 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3);

#line 264 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7,
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8,
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10,
#line 264 "structure_reuse.direct.choose_reuse.m"
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



#line 2058 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_transform_hlds__smm_common__type_ctor_info_program_point_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_condition_0
  }
};

#line 2067 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2075 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2083 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2092 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2100 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 2108 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2117 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0
  }
};

#line 2125 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2133 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__pti_list_1__plain_transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0
  }
};

#line 2141 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2150 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_background_info_0_0[4] = {
  (MR_PseudoTypeInfo) &libs__globals__libs__globals__type_ctor_info_reuse_strategy_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2158 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_background_info_0_0[4] = {
  (MR_String) "back_strategy",
  (MR_String) "back_module_info",
  (MR_String) "back_proc_info",
  (MR_String) "back_vartypes"
};

#line 2166 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2181 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

#line 2186 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_background_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_background_info_0_0
  }
};

#line 2195 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_background_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_background_info_0_0
};

#line 2200 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_background_info_0[1] = {
  (MR_Integer) 0
};

#line 2205 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2222 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_construction_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0
};

#line 2228 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_construction_spec_0_0[2] = {
  (MR_String) "con_pp",
  (MR_String) "con_reuse"
};

#line 2234 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2249 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

#line 2254 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_construction_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_construction_spec_0_0
  }
};

#line 2263 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_construction_spec_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_construction_spec_0_0
};

#line 2268 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_construction_spec_0[1] = {
  (MR_Integer) 0
};

#line 2273 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2290 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2298 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_deconstruction_spec_0_0[5] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__smm_common__transform_hlds__smm_common__type_ctor_info_program_point_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0
};

#line 2307 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_deconstruction_spec_0_0[5] = {
  (MR_String) "decon_var",
  (MR_String) "decon_pp",
  (MR_String) "decon_cons_id",
  (MR_String) "decon_args",
  (MR_String) "decon_conds"
};

#line 2316 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2331 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

#line 2336 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_deconstruction_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_deconstruction_spec_0_0
  }
};

#line 2345 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_deconstruction_spec_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_deconstruction_spec_0_0
};

#line 2350 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_deconstruction_spec_0[1] = {
  (MR_Integer) 0
};

#line 2355 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2372 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0
  }
};

#line 2380 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0
  }
};

#line 2388 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_match_0_0[4] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2396 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_match_0_0[4] = {
  (MR_String) "decon_specs",
  (MR_String) "con_specs",
  (MR_String) "match_value",
  (MR_String) "match_degree"
};

#line 2404 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2419 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0
};

#line 2424 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_match_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_match_0_0
  }
};

#line 2433 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_match_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_match_0_0
};

#line 2438 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_match_0[1] = {
  (MR_Integer) 0
};

#line 2443 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2460 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2477 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0
  }
};

#line 2485 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_types_reuse_type_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__list__ti_list_1hlds__hlds_goal__type_ctor_info_needs_update_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 2492 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_ConstString transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__field_names_reuse_type_0_0[3] = {
  (MR_String) "same_cons",
  (MR_String) "reuse_fields",
  (MR_String) "reuse_value"
};

#line 2499 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2514 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

#line 2519 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_ptag_ordered_reuse_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_stag_ordered_reuse_type_0_0
  }
};

#line 2528 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_name_ordered_reuse_type_0[1] = {
  &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__du_functor_desc_reuse_type_0_0
};

#line 2533 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static const MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__functor_number_map_reuse_type_0[1] = {
  (MR_Integer) 0
};

#line 2538 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
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

#line 2555 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0_10001(
#line 2558 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2560 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2562 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2564 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2566 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2569 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2571 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2574 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2576 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2578 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2581 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0_10001(
#line 2584 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2586 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2588 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2590 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2592 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2594 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2597 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2599 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2602 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2604 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2606 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2609 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0_10001(
#line 2612 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2614 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2616 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2618 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2620 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2623 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2625 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2628 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2630 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2632 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2635 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0_10001(
#line 2638 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2640 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2642 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2644 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2646 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2648 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2651 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2653 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2656 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2658 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2660 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2663 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0_10001(
#line 2666 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2668 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2670 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2672 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2674 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2677 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2679 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2682 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2684 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2686 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2689 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0_10001(
#line 2692 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2694 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2696 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2698 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2700 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2702 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2705 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2707 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2710 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2712 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2714 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2717 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0_10001(
#line 2720 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2722 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2724 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2726 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2728 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2731 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2733 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2736 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2738 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2740 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2743 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0_10001(
#line 2746 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2748 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2750 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2752 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2754 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2756 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2759 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2761 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2764 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2766 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2768 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2771 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0_10001(
#line 2774 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2776 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2778 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2780 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2782 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2785 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2787 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2790 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2792 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2794 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2797 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0_10001(
#line 2800 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2802 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2804 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2806 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2808 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2810 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2813 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2815 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2818 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2820 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2822 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2825 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0_10001(
#line 2828 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2830 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 2832 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2834 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2836 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 2839 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2841 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 2844 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 2846 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2848 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 2851 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0_10001(
#line 2854 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 2856 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 2858 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 2860 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
{
#line 2862 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 2864 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1;

#line 2867 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    {
#line 2869 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3));
    }
#line 2872 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__1_1));
#line 2874 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 2876 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
}

#line 1383 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1383__1_1_f_0(
#line 1383 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_16)
#line 1383 "structure_reuse.direct.choose_reuse.m"
{
#line 1383 "structure_reuse.direct.choose_reuse.m"
  {
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_16, (MR_Integer) 4)));
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_16, (MR_Integer) 0)));
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_16, (MR_Integer) 1)));
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_16, (MR_Integer) 2)));
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_16, (MR_Integer) 3)));

#line 1383 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_17;
#line 1383 "structure_reuse.direct.choose_reuse.m"
  }
#line 1383 "structure_reuse.direct.choose_reuse.m"
}

#line 858 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__858__1_1_f_0(
#line 858 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_85)
#line 858 "structure_reuse.direct.choose_reuse.m"
{
#line 858 "structure_reuse.direct.choose_reuse.m"
  {
#line 858 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 858 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_85, (MR_Integer) 2)));
#line 858 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_85, (MR_Integer) 0)));
#line 858 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_85, (MR_Integer) 1)));

#line 858 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_86;
#line 858 "structure_reuse.direct.choose_reuse.m"
  }
#line 858 "structure_reuse.direct.choose_reuse.m"
}

#line 688 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__688__1_3_p_0(
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28)
#line 688 "structure_reuse.direct.choose_reuse.m"
{
#line 688 "structure_reuse.direct.choose_reuse.m"
  {
#line 688 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 688 "structure_reuse.direct.choose_reuse.m"
    {
#line 688 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_27, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_28);
    }
#line 688 "structure_reuse.direct.choose_reuse.m"
  }
#line 688 "structure_reuse.direct.choose_reuse.m"
}

#line 680 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__680__1_3_p_0(
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22)
#line 680 "structure_reuse.direct.choose_reuse.m"
{
#line 680 "structure_reuse.direct.choose_reuse.m"
  {
#line 680 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 680 "structure_reuse.direct.choose_reuse.m"
    {
#line 680 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_22);
    }
#line 680 "structure_reuse.direct.choose_reuse.m"
  }
#line 680 "structure_reuse.direct.choose_reuse.m"
}

#line 622 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__622__1_1_f_0(
#line 622 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_88)
#line 622 "structure_reuse.direct.choose_reuse.m"
{
#line 622 "structure_reuse.direct.choose_reuse.m"
  {
#line 622 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 622 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_88, (MR_Integer) 2)));
#line 622 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_88, (MR_Integer) 0)));
#line 622 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_88, (MR_Integer) 1)));

#line 622 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_89;
#line 622 "structure_reuse.direct.choose_reuse.m"
  }
#line 622 "structure_reuse.direct.choose_reuse.m"
}

#line 652 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__652__1_3_p_0(
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117)
#line 652 "structure_reuse.direct.choose_reuse.m"
{
#line 652 "structure_reuse.direct.choose_reuse.m"
  {
#line 652 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 652 "structure_reuse.direct.choose_reuse.m"
    {
#line 652 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__merge_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_115, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_116, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_117);
    }
#line 652 "structure_reuse.direct.choose_reuse.m"
  }
#line 652 "structure_reuse.direct.choose_reuse.m"
}

#line 437 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__437__1_3_p_0(
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__3_23)
#line 437 "structure_reuse.direct.choose_reuse.m"
{
#line 437 "structure_reuse.direct.choose_reuse.m"
  {
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22, (MR_Integer) 0)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21, (MR_Integer) 1)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22, (MR_Integer) 1)));
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 438 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22, (MR_Integer) 2)));
#line 438 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22, (MR_Integer) 3)));
#line 439 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21, (MR_Integer) 0)));
#line 439 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21, (MR_Integer) 2)));
#line 439 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21, (MR_Integer) 3)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 440 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 440 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 440 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;

#line 439 "structure_reuse.direct.choose_reuse.m"
    {
#line 439 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12 = mercury__list__append_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25);
    }
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22, (MR_Integer) 0)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22, (MR_Integer) 1)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22, (MR_Integer) 2)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_22, (MR_Integer) 3)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21, (MR_Integer) 0)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21, (MR_Integer) 1)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21, (MR_Integer) 2)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_21, (MR_Integer) 3)));
#line 440 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27);
#line 441 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 442 "structure_reuse.direct.choose_reuse.m"
    {
#line 442 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 442 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 442 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__3_23 = base;
#line 442 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_11));
#line 442 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_12));
#line 442 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_13);
#line 442 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Deg_14));
#line 442 "structure_reuse.direct.choose_reuse.m"
    }
#line 437 "structure_reuse.direct.choose_reuse.m"
  }
#line 437 "structure_reuse.direct.choose_reuse.m"
}

#line 323 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__323__1_1_f_0(
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12)
#line 323 "structure_reuse.direct.choose_reuse.m"
{
#line 323 "structure_reuse.direct.choose_reuse.m"
  {
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 4)));
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 0)));
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 1)));
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 2)));
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 3)));

#line 323 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_13;
#line 323 "structure_reuse.direct.choose_reuse.m"
  }
#line 323 "structure_reuse.direct.choose_reuse.m"
}

#line 315 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__315__1_1_f_0(
#line 315 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_7)
#line 315 "structure_reuse.direct.choose_reuse.m"
{
#line 315 "structure_reuse.direct.choose_reuse.m"
  {
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_7, (MR_Integer) 2)));
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_7, (MR_Integer) 0)));
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_7, (MR_Integer) 1)));
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_7, (MR_Integer) 3)));
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_7, (MR_Integer) 4)));

#line 315 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_8;
#line 315 "structure_reuse.direct.choose_reuse.m"
  }
#line 315 "structure_reuse.direct.choose_reuse.m"
}

#line 293 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__293__1_1_f_0(
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12)
#line 293 "structure_reuse.direct.choose_reuse.m"
{
#line 293 "structure_reuse.direct.choose_reuse.m"
  {
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 0)));
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 1)));
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 2)));
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 3)));
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__1_12, (MR_Integer) 4)));

#line 293 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LambdaHeadVar__2_13;
#line 293 "structure_reuse.direct.choose_reuse.m"
  }
#line 293 "structure_reuse.direct.choose_reuse.m"
}

#line 223 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 223 "structure_reuse.direct.choose_reuse.m"
{
#line 223 "structure_reuse.direct.choose_reuse.m"
  {
#line 223 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 223 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 223 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 223 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_12 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_13);
#line 223 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3249 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 223 "structure_reuse.direct.choose_reuse.m"
    else
#line 223 "structure_reuse.direct.choose_reuse.m"
      {
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4;
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7;

#line 223 "structure_reuse.direct.choose_reuse.m"
        {
#line 223 "structure_reuse.direct.choose_reuse.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
        }
#line 3279 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 == (MR_Integer) 0);
#line 223 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 223 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 223 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;
#line 223 "structure_reuse.direct.choose_reuse.m"
        else
#line 223 "structure_reuse.direct.choose_reuse.m"
          {
#line 223 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11;

#line 223 "structure_reuse.direct.choose_reuse.m"
            {
#line 223 "structure_reuse.direct.choose_reuse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
            }
#line 3299 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 == (MR_Integer) 0);
#line 223 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 223 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 223 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11;
#line 223 "structure_reuse.direct.choose_reuse.m"
            else
#line 223 "structure_reuse.direct.choose_reuse.m"
              {
#line 223 "structure_reuse.direct.choose_reuse.m"
                mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
              }
#line 223 "structure_reuse.direct.choose_reuse.m"
          }
#line 223 "structure_reuse.direct.choose_reuse.m"
      }
#line 223 "structure_reuse.direct.choose_reuse.m"
  }
#line 223 "structure_reuse.direct.choose_reuse.m"
}

#line 223 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 223 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 223 "structure_reuse.direct.choose_reuse.m"
{
#line 223 "structure_reuse.direct.choose_reuse.m"
  {
#line 223 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 223 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 223 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 223 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10);
#line 223 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 223 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 223 "structure_reuse.direct.choose_reuse.m"
    else
#line 223 "structure_reuse.direct.choose_reuse.m"
      {
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11;
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 223 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));

#line 3366 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
#line 223 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 223 "structure_reuse.direct.choose_reuse.m"
          {
#line 3372 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[5];
#line 3374 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3376 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)));
            }
#line 223 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3381 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
#line 223 "structure_reuse.direct.choose_reuse.m"
          }
#line 223 "structure_reuse.direct.choose_reuse.m"
      }
#line 223 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 223 "structure_reuse.direct.choose_reuse.m"
  }
#line 223 "structure_reuse.direct.choose_reuse.m"
}

#line 260 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_table_0_0(
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 260 "structure_reuse.direct.choose_reuse.m"
{
#line 260 "structure_reuse.direct.choose_reuse.m"
  {
#line 260 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 260 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_4 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 260 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_5 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 260 "structure_reuse.direct.choose_reuse.m"
    {
#line 260 "structure_reuse.direct.choose_reuse.m"
      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_5)));
    }
#line 260 "structure_reuse.direct.choose_reuse.m"
  }
#line 260 "structure_reuse.direct.choose_reuse.m"
}

#line 260 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_table_0_0(
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 260 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 260 "structure_reuse.direct.choose_reuse.m"
{
#line 260 "structure_reuse.direct.choose_reuse.m"
  {
#line 260 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 260 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 260 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_4 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 260 "structure_reuse.direct.choose_reuse.m"
    {
#line 260 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar1_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cast_HeadVar2_4)));
    }
#line 260 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 260 "structure_reuse.direct.choose_reuse.m"
  }
#line 260 "structure_reuse.direct.choose_reuse.m"
}

#line 252 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____match_0_0(
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 252 "structure_reuse.direct.choose_reuse.m"
{
#line 252 "structure_reuse.direct.choose_reuse.m"
  {
#line 252 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 252 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 252 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 252 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16);
#line 252 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3478 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 252 "structure_reuse.direct.choose_reuse.m"
    else
#line 252 "structure_reuse.direct.choose_reuse.m"
      {
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 252 "structure_reuse.direct.choose_reuse.m"
        {
#line 252 "structure_reuse.direct.choose_reuse.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
        }
#line 3508 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 == (MR_Integer) 0);
#line 252 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 252 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 252 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;
#line 252 "structure_reuse.direct.choose_reuse.m"
        else
#line 252 "structure_reuse.direct.choose_reuse.m"
          {
#line 252 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 252 "structure_reuse.direct.choose_reuse.m"
            {
#line 252 "structure_reuse.direct.choose_reuse.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)));
            }
#line 3528 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 == (MR_Integer) 0);
#line 252 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 252 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 252 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 252 "structure_reuse.direct.choose_reuse.m"
            else
#line 252 "structure_reuse.direct.choose_reuse.m"
              {
#line 252 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 252 "structure_reuse.direct.choose_reuse.m"
                {
#line 252 "structure_reuse.direct.choose_reuse.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 3548 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 252 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 252 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 252 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 252 "structure_reuse.direct.choose_reuse.m"
                else
#line 252 "structure_reuse.direct.choose_reuse.m"
                  {
#line 252 "structure_reuse.direct.choose_reuse.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11);
                  }
#line 252 "structure_reuse.direct.choose_reuse.m"
              }
#line 252 "structure_reuse.direct.choose_reuse.m"
          }
#line 252 "structure_reuse.direct.choose_reuse.m"
      }
#line 252 "structure_reuse.direct.choose_reuse.m"
  }
#line 252 "structure_reuse.direct.choose_reuse.m"
}

#line 252 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____match_0_0(
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 252 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 252 "structure_reuse.direct.choose_reuse.m"
{
#line 252 "structure_reuse.direct.choose_reuse.m"
  {
#line 252 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 252 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 252 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 252 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12);
#line 252 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 252 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 252 "structure_reuse.direct.choose_reuse.m"
    else
#line 252 "structure_reuse.direct.choose_reuse.m"
      {
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14;
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 252 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));

#line 3621 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 3623 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)));
        }
#line 252 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 252 "structure_reuse.direct.choose_reuse.m"
          {
#line 3630 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4];
#line 3632 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3634 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
            }
#line 252 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 252 "structure_reuse.direct.choose_reuse.m"
              {
#line 3641 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
#line 252 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3645 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
#line 252 "structure_reuse.direct.choose_reuse.m"
              }
#line 252 "structure_reuse.direct.choose_reuse.m"
          }
#line 252 "structure_reuse.direct.choose_reuse.m"
      }
#line 252 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 252 "structure_reuse.direct.choose_reuse.m"
  }
#line 252 "structure_reuse.direct.choose_reuse.m"
}

#line 201 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____deconstruction_spec_0_0(
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 201 "structure_reuse.direct.choose_reuse.m"
{
#line 201 "structure_reuse.direct.choose_reuse.m"
  {
#line 201 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 201 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_18 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 201 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_19 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 201 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_18 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_19);
#line 201 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3684 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 201 "structure_reuse.direct.choose_reuse.m"
    else
#line 201 "structure_reuse.direct.choose_reuse.m"
      {
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 4)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 4)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 201 "structure_reuse.direct.choose_reuse.m"
        {
#line 201 "structure_reuse.direct.choose_reuse.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)));
        }
#line 3718 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 201 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 201 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 201 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 201 "structure_reuse.direct.choose_reuse.m"
        else
#line 201 "structure_reuse.direct.choose_reuse.m"
          {
#line 201 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;

#line 201 "structure_reuse.direct.choose_reuse.m"
            {
#line 201 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__smm_common____Compare____program_point_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
            }
#line 3738 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 == (MR_Integer) 0);
#line 201 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 201 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 201 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 201 "structure_reuse.direct.choose_reuse.m"
            else
#line 201 "structure_reuse.direct.choose_reuse.m"
              {
#line 201 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;

#line 201 "structure_reuse.direct.choose_reuse.m"
                {
#line 201 "structure_reuse.direct.choose_reuse.m"
                  parse_tree__prog_data____Compare____cons_id_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11);
                }
#line 3758 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 == (MR_Integer) 0);
#line 201 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 201 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 201 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 201 "structure_reuse.direct.choose_reuse.m"
                else
#line 201 "structure_reuse.direct.choose_reuse.m"
                  {
#line 201 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;

#line 201 "structure_reuse.direct.choose_reuse.m"
                    {
#line 201 "structure_reuse.direct.choose_reuse.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12)));
                    }
#line 3778 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 == (MR_Integer) 0);
#line 201 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 201 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 201 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 201 "structure_reuse.direct.choose_reuse.m"
                    else
#line 201 "structure_reuse.direct.choose_reuse.m"
                      {
#line 201 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13);
                      }
#line 201 "structure_reuse.direct.choose_reuse.m"
                  }
#line 201 "structure_reuse.direct.choose_reuse.m"
              }
#line 201 "structure_reuse.direct.choose_reuse.m"
          }
#line 201 "structure_reuse.direct.choose_reuse.m"
      }
#line 201 "structure_reuse.direct.choose_reuse.m"
  }
#line 201 "structure_reuse.direct.choose_reuse.m"
}

#line 201 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____deconstruction_spec_0_0(
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 201 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 201 "structure_reuse.direct.choose_reuse.m"
{
#line 201 "structure_reuse.direct.choose_reuse.m"
  {
#line 201 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 201 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_13 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 201 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_14 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 201 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_13 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_14);
#line 201 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 201 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 201 "structure_reuse.direct.choose_reuse.m"
    else
#line 201 "structure_reuse.direct.choose_reuse.m"
      {
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18;
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 4)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 201 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 4)));

#line 3857 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 3859 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8)));
        }
#line 201 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 201 "structure_reuse.direct.choose_reuse.m"
          {
#line 3866 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 3868 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
            }
#line 201 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 201 "structure_reuse.direct.choose_reuse.m"
              {
#line 3875 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                {
#line 3877 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 201 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 201 "structure_reuse.direct.choose_reuse.m"
                  {
#line 3884 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2];
#line 3886 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    {
#line 3888 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_18_18, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11)));
                    }
#line 201 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3893 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 3895 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12);
                      }
#line 201 "structure_reuse.direct.choose_reuse.m"
                  }
#line 201 "structure_reuse.direct.choose_reuse.m"
              }
#line 201 "structure_reuse.direct.choose_reuse.m"
          }
#line 201 "structure_reuse.direct.choose_reuse.m"
      }
#line 201 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 201 "structure_reuse.direct.choose_reuse.m"
  }
#line 201 "structure_reuse.direct.choose_reuse.m"
}

#line 213 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____construction_spec_0_0(
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 213 "structure_reuse.direct.choose_reuse.m"
{
#line 213 "structure_reuse.direct.choose_reuse.m"
  {
#line 213 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 213 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 213 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 213 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_9 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_10);
#line 213 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 3937 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 213 "structure_reuse.direct.choose_reuse.m"
    else
#line 213 "structure_reuse.direct.choose_reuse.m"
      {
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;

#line 213 "structure_reuse.direct.choose_reuse.m"
        {
#line 213 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__smm_common____Compare____program_point_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
        }
#line 3959 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 == (MR_Integer) 0);
#line 213 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 213 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 213 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;
#line 213 "structure_reuse.direct.choose_reuse.m"
        else
#line 213 "structure_reuse.direct.choose_reuse.m"
          {
#line 213 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____reuse_type_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7);
          }
#line 213 "structure_reuse.direct.choose_reuse.m"
      }
#line 213 "structure_reuse.direct.choose_reuse.m"
  }
#line 213 "structure_reuse.direct.choose_reuse.m"
}

#line 213 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____construction_spec_0_0(
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 213 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 213 "structure_reuse.direct.choose_reuse.m"
{
#line 213 "structure_reuse.direct.choose_reuse.m"
  {
#line 213 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 213 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_7 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 213 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_8 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 213 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_7 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_8);
#line 213 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 213 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 213 "structure_reuse.direct.choose_reuse.m"
    else
#line 213 "structure_reuse.direct.choose_reuse.m"
      {
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));

#line 4018 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 4020 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5);
        }
#line 213 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 4025 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          {
#line 4027 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____reuse_type_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
          }
#line 213 "structure_reuse.direct.choose_reuse.m"
      }
#line 213 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 213 "structure_reuse.direct.choose_reuse.m"
  }
#line 213 "structure_reuse.direct.choose_reuse.m"
}

#line 157 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Compare____background_info_0_0(
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2,
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3)
#line 157 "structure_reuse.direct.choose_reuse.m"
{
#line 157 "structure_reuse.direct.choose_reuse.m"
  {
#line 157 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 157 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 157 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 157 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_15 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_16);
#line 157 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 4063 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = (MR_Integer) 0;
#line 157 "structure_reuse.direct.choose_reuse.m"
    else
#line 157 "structure_reuse.direct.choose_reuse.m"
      {
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 0)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 1)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 2)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, (MR_Integer) 3)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 157 "structure_reuse.direct.choose_reuse.m"
        {
#line 157 "structure_reuse.direct.choose_reuse.m"
          libs__globals____Compare____reuse_strategy_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
        }
#line 4093 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 == (MR_Integer) 0);
#line 157 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 157 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 157 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;
#line 157 "structure_reuse.direct.choose_reuse.m"
        else
#line 157 "structure_reuse.direct.choose_reuse.m"
          {
#line 157 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 157 "structure_reuse.direct.choose_reuse.m"
            {
#line 157 "structure_reuse.direct.choose_reuse.m"
              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
            }
#line 4113 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 == (MR_Integer) 0);
#line 157 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 157 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 157 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 157 "structure_reuse.direct.choose_reuse.m"
            else
#line 157 "structure_reuse.direct.choose_reuse.m"
              {
#line 157 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;

#line 157 "structure_reuse.direct.choose_reuse.m"
                {
#line 157 "structure_reuse.direct.choose_reuse.m"
                  hlds__hlds_pred____Compare____proc_info_0_0(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
                }
#line 4133 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == (MR_Integer) 0);
#line 157 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 157 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 157 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 157 "structure_reuse.direct.choose_reuse.m"
                else
#line 157 "structure_reuse.direct.choose_reuse.m"
                  {
#line 157 "structure_reuse.direct.choose_reuse.m"
                    {
#line 157 "structure_reuse.direct.choose_reuse.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[2], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11)));
                    }
#line 157 "structure_reuse.direct.choose_reuse.m"
                  }
#line 157 "structure_reuse.direct.choose_reuse.m"
              }
#line 157 "structure_reuse.direct.choose_reuse.m"
          }
#line 157 "structure_reuse.direct.choose_reuse.m"
      }
#line 157 "structure_reuse.direct.choose_reuse.m"
  }
#line 157 "structure_reuse.direct.choose_reuse.m"
}

#line 157 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse____Unify____background_info_0_0(
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 157 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 157 "structure_reuse.direct.choose_reuse.m"
{
#line 157 "structure_reuse.direct.choose_reuse.m"
  {
#line 157 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 157 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1;
#line 157 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12 = (MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 157 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastX_11 == transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CastY_12);
#line 157 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 157 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 157 "structure_reuse.direct.choose_reuse.m"
    else
#line 157 "structure_reuse.direct.choose_reuse.m"
      {
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_16_16;
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 2)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 3)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 2)));
#line 157 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 3)));

#line 4210 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        {
#line 4212 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = libs__globals____Unify____reuse_strategy_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_3_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7);
        }
#line 157 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 157 "structure_reuse.direct.choose_reuse.m"
          {
#line 4219 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            {
#line 4221 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
            }
#line 157 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 157 "structure_reuse.direct.choose_reuse.m"
              {
#line 4228 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                {
#line 4230 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = hlds__hlds_pred____Unify____proc_info_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
                }
#line 157 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 157 "structure_reuse.direct.choose_reuse.m"
                  {
#line 4237 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[2];
#line 4239 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    {
#line 4241 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_16_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10)));
                    }
#line 157 "structure_reuse.direct.choose_reuse.m"
                  }
#line 157 "structure_reuse.direct.choose_reuse.m"
              }
#line 157 "structure_reuse.direct.choose_reuse.m"
          }
#line 157 "structure_reuse.direct.choose_reuse.m"
      }
#line 157 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 157 "structure_reuse.direct.choose_reuse.m"
  }
#line 157 "structure_reuse.direct.choose_reuse.m"
}

#line 1509 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(
#line 1509 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1509 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10,
#line 1509 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11)
#line 1509 "structure_reuse.direct.choose_reuse.m"
{
#line 1512 "structure_reuse.direct.choose_reuse.m"
  {
#line 1512 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1512 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 0)));
#line 1512 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 1)));
#line 1512 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_10, (MR_Integer) 2)));
#line 1512 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9;

#line 1514 "structure_reuse.direct.choose_reuse.m"
    {
#line 1514 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9);
    }
#line 1515 "structure_reuse.direct.choose_reuse.m"
    {
#line 1515 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1515 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1515 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_11 = base;
#line 1515 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_6));
#line 1515 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_7));
#line 1515 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_9));
#line 1515 "structure_reuse.direct.choose_reuse.m"
    }
#line 1512 "structure_reuse.direct.choose_reuse.m"
  }
#line 1509 "structure_reuse.direct.choose_reuse.m"
}

#line 1480 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3(
#line 1480 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1480 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1480 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1480 "structure_reuse.direct.choose_reuse.m"
{
#line 1480 "structure_reuse.direct.choose_reuse.m"
  {
#line 1480 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1480 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11;

#line 1480 "structure_reuse.direct.choose_reuse.m"
    {
#line 1480 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_in_case_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11);
    }
#line 1480 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_11));
#line 1480 "structure_reuse.direct.choose_reuse.m"
  }
#line 1480 "structure_reuse.direct.choose_reuse.m"
}

#line 1475 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2(
#line 1475 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1475 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1475 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1475 "structure_reuse.direct.choose_reuse.m"
{
#line 1475 "structure_reuse.direct.choose_reuse.m"
  {
#line 1475 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1475 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49;

#line 1475 "structure_reuse.direct.choose_reuse.m"
    {
#line 1475 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49);
    }
#line 1475 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_49));
#line 1475 "structure_reuse.direct.choose_reuse.m"
  }
#line 1475 "structure_reuse.direct.choose_reuse.m"
}

#line 1470 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1(
#line 1470 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1470 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1470 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1470 "structure_reuse.direct.choose_reuse.m"
{
#line 1470 "structure_reuse.direct.choose_reuse.m"
  {
#line 1470 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1470 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49;

#line 1470 "structure_reuse.direct.choose_reuse.m"
    {
#line 1470 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49);
    }
#line 1470 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_49));
#line 1470 "structure_reuse.direct.choose_reuse.m"
  }
#line 1470 "structure_reuse.direct.choose_reuse.m"
}

#line 1446 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(
#line 1446 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4,
#line 1446 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48,
#line 1446 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49)
#line 1446 "structure_reuse.direct.choose_reuse.m"
{
#line 1449 "structure_reuse.direct.choose_reuse.m"
  {
#line 1449 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1449 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48, (MR_Integer) 0)));
#line 1449 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_48, (MR_Integer) 1)));
#line 1449 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14;
#line 1449 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15;

#line 1456 "structure_reuse.direct.choose_reuse.m"
#line 1456 "structure_reuse.direct.choose_reuse.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6)) {
#line 1456 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1456 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1484 "structure_reuse.direct.choose_reuse.m"
        {
#line 1485 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1486 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1484 "structure_reuse.direct.choose_reuse.m"
        }
#line 1456 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1452 "structure_reuse.direct.choose_reuse.m"
        {
#line 1452 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)));
#line 1452 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1452 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1452 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1452 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 4)));
#line 1452 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13;
#line 1534 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80;
#line 1534 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81;
#line 1534 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82;
#line 1534 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83;
#line 1534 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84;
#line 1524 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86;
#line 1524 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88;
#line 1524 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85;

#line 1524 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11)) == (MR_mktag((MR_Integer) 1)));
#line 1524 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1524 "structure_reuse.direct.choose_reuse.m"
            {
#line 1524 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 0)));
#line 1524 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 1)));
#line 1524 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 2)));
#line 1524 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 3)));
#line 1524 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 4)));
#line 1524 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11, (MR_Integer) 5)));
#line 1525 "structure_reuse.direct.choose_reuse.m"
              {
#line 1525 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7);
              }
#line 1525 "structure_reuse.direct.choose_reuse.m"
              {
#line 1525 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_88_88, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86);
              }
#line 1524 "structure_reuse.direct.choose_reuse.m"
              if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1524 "structure_reuse.direct.choose_reuse.m"
                {
#line 1527 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1527 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_condition_is_conditional_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_86);
                  }
#line 1527 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 1524 "structure_reuse.direct.choose_reuse.m"
                }
#line 1524 "structure_reuse.direct.choose_reuse.m"
            }
#line 1534 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1530 "structure_reuse.direct.choose_reuse.m"
            {
#line 1529 "structure_reuse.direct.choose_reuse.m"
              {
#line 1529 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1529 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_80));
#line 1529 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_81));
#line 1529 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_82));
#line 1529 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ArgModes_83));
#line 1529 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CanFail_84));
#line 1529 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1529 "structure_reuse.direct.choose_reuse.m"
              }
#line 1533 "structure_reuse.direct.choose_reuse.m"
              {
#line 1533 "structure_reuse.direct.choose_reuse.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[0]), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14);
              }
#line 1530 "structure_reuse.direct.choose_reuse.m"
            }
#line 1534 "structure_reuse.direct.choose_reuse.m"
          else
#line 1535 "structure_reuse.direct.choose_reuse.m"
            {
#line 1535 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1535 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification0_11;
#line 1535 "structure_reuse.direct.choose_reuse.m"
            }
#line 1455 "structure_reuse.direct.choose_reuse.m"
          {
#line 1455 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_8));
#line 1455 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_9));
#line 1455 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_10));
#line 1455 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13));
#line 1455 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_12));
#line 1455 "structure_reuse.direct.choose_reuse.m"
          }
#line 1452 "structure_reuse.direct.choose_reuse.m"
        }
#line 1456 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 2:
#line 1457 "structure_reuse.direct.choose_reuse.m"
        {
#line 1458 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1459 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1457 "structure_reuse.direct.choose_reuse.m"
        }
#line 1456 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 3:
#line 1456 "structure_reuse.direct.choose_reuse.m"
#line 1456 "structure_reuse.direct.choose_reuse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 0)))) {
#line 1456 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1456 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1461 "structure_reuse.direct.choose_reuse.m"
            {
#line 1462 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1463 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1461 "structure_reuse.direct.choose_reuse.m"
            }
#line 1456 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1465 "structure_reuse.direct.choose_reuse.m"
            {
#line 1466 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6;
#line 1467 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1465 "structure_reuse.direct.choose_reuse.m"
            }
#line 1456 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 1469 "structure_reuse.direct.choose_reuse.m"
            {
#line 1469 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66;
#line 1469 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1469 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35;
#line 1469 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;
#line 1469 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1470 "structure_reuse.direct.choose_reuse.m"
              {
#line 1470 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[8]));
#line 1470 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_1));
#line 1470 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1470 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1470 "structure_reuse.direct.choose_reuse.m"
              }
#line 4647 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1470 "structure_reuse.direct.choose_reuse.m"
              {
#line 1470 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_66_66, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_34, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35);
              }
#line 1471 "structure_reuse.direct.choose_reuse.m"
              {
#line 1471 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1471 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_57));
#line 1471 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_35));
#line 1471 "structure_reuse.direct.choose_reuse.m"
              }
#line 1472 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1469 "structure_reuse.direct.choose_reuse.m"
            }
#line 1456 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 1474 "structure_reuse.direct.choose_reuse.m"
            {
#line 1474 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69;
#line 1474 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1474 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1474 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59;

#line 1475 "structure_reuse.direct.choose_reuse.m"
              {
#line 1475 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1475 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[8]));
#line 1475 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_2));
#line 1475 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1475 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1475 "structure_reuse.direct.choose_reuse.m"
              }
#line 4699 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1475 "structure_reuse.direct.choose_reuse.m"
              {
#line 1475 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_69_69, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_58, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59);
              }
#line 1476 "structure_reuse.direct.choose_reuse.m"
              {
#line 1476 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1476 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_59));
#line 1476 "structure_reuse.direct.choose_reuse.m"
              }
#line 1477 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1474 "structure_reuse.direct.choose_reuse.m"
            }
#line 1456 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 4:
#line 1479 "structure_reuse.direct.choose_reuse.m"
            {
#line 1479 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72;
#line 1479 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1479 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37;
#line 1479 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 1479 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));
#line 1479 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));

#line 1480 "structure_reuse.direct.choose_reuse.m"
              {
#line 1480 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1480 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_5[9]));
#line 1480 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0_3));
#line 1480 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1480 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4));
#line 1480 "structure_reuse.direct.choose_reuse.m"
              }
#line 4753 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1480 "structure_reuse.direct.choose_reuse.m"
              {
#line 1480 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_36, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37);
              }
#line 1481 "structure_reuse.direct.choose_reuse.m"
              {
#line 1481 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1481 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1481 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_60));
#line 1481 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_61));
#line 1481 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_37));
#line 1481 "structure_reuse.direct.choose_reuse.m"
              }
#line 1482 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1479 "structure_reuse.direct.choose_reuse.m"
            }
#line 1456 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 5:
#line 1488 "structure_reuse.direct.choose_reuse.m"
            {
#line 1488 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1488 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40;
#line 1488 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1492 "structure_reuse.direct.choose_reuse.m"
              {
#line 1492 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_39, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40);
              }
#line 1493 "structure_reuse.direct.choose_reuse.m"
              {
#line 1493 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1493 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62));
#line 1493 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_40));
#line 1493 "structure_reuse.direct.choose_reuse.m"
              }
#line 1494 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1488 "structure_reuse.direct.choose_reuse.m"
            }
#line 1456 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 6:
#line 1496 "structure_reuse.direct.choose_reuse.m"
            {
#line 1496 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 2)));
#line 1496 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 3)));
#line 1496 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 4)));
#line 1496 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44;
#line 1496 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45;
#line 1496 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46;
#line 1496 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_6, (MR_Integer) 1)));

#line 1497 "structure_reuse.direct.choose_reuse.m"
              {
#line 1497 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_41, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44);
              }
#line 1498 "structure_reuse.direct.choose_reuse.m"
              {
#line 1498 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_42, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45);
              }
#line 1499 "structure_reuse.direct.choose_reuse.m"
              {
#line 1499 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_4, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_43, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46);
              }
#line 1500 "structure_reuse.direct.choose_reuse.m"
              {
#line 1500 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1500 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63));
#line 1500 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_44));
#line 1500 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_45));
#line 1500 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_46));
#line 1500 "structure_reuse.direct.choose_reuse.m"
              }
#line 1501 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_7;
#line 1496 "structure_reuse.direct.choose_reuse.m"
            }
#line 1456 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 7:
#line 1503 "structure_reuse.direct.choose_reuse.m"
            {
#line 1505 "structure_reuse.direct.choose_reuse.m"
              {
#line 1505 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.check_for_cell_caching_2\'/3", (MR_String) "shorthand");
#line 1505 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1503 "structure_reuse.direct.choose_reuse.m"
            }
#line 1456 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
        }
#line 1456 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1456 "structure_reuse.direct.choose_reuse.m"
    }
#line 1507 "structure_reuse.direct.choose_reuse.m"
    {
#line 1507 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1507 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1507 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_49 = base;
#line 1507 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15));
#line 1507 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_14));
#line 1507 "structure_reuse.direct.choose_reuse.m"
    }
#line 1449 "structure_reuse.direct.choose_reuse.m"
  }
#line 1446 "structure_reuse.direct.choose_reuse.m"
}

#line 1406 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0_1(
#line 1406 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1406 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1406 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 1406 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 1406 "structure_reuse.direct.choose_reuse.m"
{
#line 1406 "structure_reuse.direct.choose_reuse.m"
  {
#line 1406 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1406 "structure_reuse.direct.choose_reuse.m"
    {
#line 1406 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1406 "structure_reuse.direct.choose_reuse.m"
  }
#line 1406 "structure_reuse.direct.choose_reuse.m"
}

#line 1398 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(
#line 1398 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4)
#line 1398 "structure_reuse.direct.choose_reuse.m"
{
#line 1403 "structure_reuse.direct.choose_reuse.m"
  {
#line 1403 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 1401 "structure_reuse.direct.choose_reuse.m"
    {
#line 1401 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4);
    }
#line 1403 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1402 "structure_reuse.direct.choose_reuse.m"
      {
#line 1402 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_32;
#line 1402 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33;
#line 1402 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;

#line 1338 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_32 = ((((MR_Integer) 79 - (MR_Integer) 21)) - (MR_Integer) 1);
#line 1339 "structure_reuse.direct.choose_reuse.m"
        {
#line 1339 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_32);
        }
#line 1339 "structure_reuse.direct.choose_reuse.m"
        {
#line 1339 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33 = mercury__string__f_43_43_2_f_0((MR_String) "%---empty match table", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38);
        }
#line 1340 "structure_reuse.direct.choose_reuse.m"
        {
#line 1340 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_33);
        }
#line 1341 "structure_reuse.direct.choose_reuse.m"
        {
#line 1341 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
        }
#line 1402 "structure_reuse.direct.choose_reuse.m"
      }
#line 1403 "structure_reuse.direct.choose_reuse.m"
    else
#line 1404 "structure_reuse.direct.choose_reuse.m"
      {
#line 1404 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21;
#line 1404 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6;
#line 1404 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_49;
#line 1404 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50;
#line 1404 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;
#line 1404 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_66;
#line 1404 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67;
#line 1404 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72;
#line 1406 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_IO_14_14;

#line 1338 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_49 = ((((MR_Integer) 79 - (MR_Integer) 22)) - (MR_Integer) 1);
#line 1339 "structure_reuse.direct.choose_reuse.m"
        {
#line 1339 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_49);
        }
#line 1339 "structure_reuse.direct.choose_reuse.m"
        {
#line 1339 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50 = mercury__string__f_43_43_2_f_0((MR_String) "%---full table (start)", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55);
        }
#line 1340 "structure_reuse.direct.choose_reuse.m"
        {
#line 1340 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_50);
        }
#line 1341 "structure_reuse.direct.choose_reuse.m"
        {
#line 1341 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
        }
#line 5035 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 1405 "structure_reuse.direct.choose_reuse.m"
        {
#line 1405 "structure_reuse.direct.choose_reuse.m"
          mercury__multi_map__values_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6);
        }
#line 1406 "structure_reuse.direct.choose_reuse.m"
        {
#line 1406 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_2(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_21_21, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_9[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_IO_14_14);
        }
#line 1338 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_66 = ((((MR_Integer) 79 - (MR_Integer) 20)) - (MR_Integer) 1);
#line 1339 "structure_reuse.direct.choose_reuse.m"
        {
#line 1339 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_66);
        }
#line 1339 "structure_reuse.direct.choose_reuse.m"
        {
#line 1339 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67 = mercury__string__f_43_43_2_f_0((MR_String) "%---full table (end)", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72);
        }
#line 1340 "structure_reuse.direct.choose_reuse.m"
        {
#line 1340 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_67);
        }
#line 1341 "structure_reuse.direct.choose_reuse.m"
        {
#line 1341 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "%\n");
        }
#line 1404 "structure_reuse.direct.choose_reuse.m"
      }
#line 1403 "structure_reuse.direct.choose_reuse.m"
  }
#line 1398 "structure_reuse.direct.choose_reuse.m"
}

#line 1385 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_2(
#line 1385 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1385 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1385 "structure_reuse.direct.choose_reuse.m"
{
#line 1385 "structure_reuse.direct.choose_reuse.m"
  {
#line 1385 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1385 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1385 "structure_reuse.direct.choose_reuse.m"
    {
#line 1385 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1385 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1385 "structure_reuse.direct.choose_reuse.m"
  }
#line 1385 "structure_reuse.direct.choose_reuse.m"
}

#line 1383 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0_1(
#line 1383 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1383 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1383 "structure_reuse.direct.choose_reuse.m"
{
#line 1383 "structure_reuse.direct.choose_reuse.m"
  {
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_17;

#line 1383 "structure_reuse.direct.choose_reuse.m"
    {
#line 1383 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_17 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__dump_match_details__1383__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1383 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_17));
#line 1383 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 1383 "structure_reuse.direct.choose_reuse.m"
  }
#line 1383 "structure_reuse.direct.choose_reuse.m"
}

#line 1380 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(
#line 1380 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4)
#line 1380 "structure_reuse.direct.choose_reuse.m"
{
#line 1382 "structure_reuse.direct.choose_reuse.m"
  {
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 1382 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1383 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1385 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1385 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8;
#line 1391 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44;
#line 1391 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 1391 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 1392 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 1392 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 1392 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;

#line 1383 "structure_reuse.direct.choose_reuse.m"
    {
#line 1383 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[25], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
    }
#line 1385 "structure_reuse.direct.choose_reuse.m"
    {
#line 1385 "structure_reuse.direct.choose_reuse.m"
      mercury__list__takewhile_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_51_51, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[26], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conds_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54);
    }
#line 1385 "structure_reuse.direct.choose_reuse.m"
    {
#line 1385 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[6], ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54)));
    }
#line 1387 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1386 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9 = (MR_String) "A";
#line 1387 "structure_reuse.direct.choose_reuse.m"
    else
#line 1388 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9 = (MR_String) "C";
#line 1391 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1391 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1391 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1391 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1391 "structure_reuse.direct.choose_reuse.m"
    {
#line 1391 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_50_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21);
    }
#line 1392 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1392 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1392 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1392 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 1392 "structure_reuse.direct.choose_reuse.m"
    {
#line 1392 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22);
    }
#line 1393 "structure_reuse.direct.choose_reuse.m"
    {
#line 1393 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = mercury__string__int_to_string_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__D_10);
    }
#line 1394 "structure_reuse.direct.choose_reuse.m"
    {
#line 1394 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = mercury__string__int_to_string_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__C_11);
    }
#line 1395 "structure_reuse.direct.choose_reuse.m"
    {
#line 1395 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondsString_9));
#line 1395 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1395 "structure_reuse.direct.choose_reuse.m"
    }
#line 1395 "structure_reuse.direct.choose_reuse.m"
    {
#line 1395 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1395 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, 0) = ((MR_Box) ((MR_String) ", Co: "));
#line 1395 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33));
#line 1395 "structure_reuse.direct.choose_reuse.m"
    }
#line 1394 "structure_reuse.direct.choose_reuse.m"
    {
#line 1394 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30));
#line 1394 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31));
#line 1394 "structure_reuse.direct.choose_reuse.m"
    }
#line 1393 "structure_reuse.direct.choose_reuse.m"
    {
#line 1393 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27, 0) = ((MR_Box) ((MR_String) ", c: "));
#line 1393 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29));
#line 1393 "structure_reuse.direct.choose_reuse.m"
    }
#line 1393 "structure_reuse.direct.choose_reuse.m"
    {
#line 1393 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26));
#line 1393 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27));
#line 1393 "structure_reuse.direct.choose_reuse.m"
    }
#line 1393 "structure_reuse.direct.choose_reuse.m"
    {
#line 1393 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, 0) = ((MR_Box) ((MR_String) "d: "));
#line 1393 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25));
#line 1393 "structure_reuse.direct.choose_reuse.m"
    }
#line 1393 "structure_reuse.direct.choose_reuse.m"
    {
#line 1393 "structure_reuse.direct.choose_reuse.m"
      mercury__string__append_list_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12);
    }
#line 1396 "structure_reuse.direct.choose_reuse.m"
    {
#line 1396 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Details_12);
    }
#line 1382 "structure_reuse.direct.choose_reuse.m"
  }
#line 1380 "structure_reuse.direct.choose_reuse.m"
}

#line 293 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0_1(
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 293 "structure_reuse.direct.choose_reuse.m"
{
#line 293 "structure_reuse.direct.choose_reuse.m"
  {
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13;

#line 293 "structure_reuse.direct.choose_reuse.m"
    {
#line 293 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__293__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 293 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13));
#line 293 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 293 "structure_reuse.direct.choose_reuse.m"
  }
#line 293 "structure_reuse.direct.choose_reuse.m"
}

#line 1358 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0(
#line 1358 "structure_reuse.direct.choose_reuse.m"
  MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5,
#line 1358 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6)
#line 1358 "structure_reuse.direct.choose_reuse.m"
{
#line 1360 "structure_reuse.direct.choose_reuse.m"
  {
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_77;
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8;
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9;
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_54;
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55;
#line 1360 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 294 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_73_73;
#line 294 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74;
#line 294 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75;
#line 1365 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34;
#line 1365 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 1365 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;
#line 1373 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 1373 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 1373 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;

#line 1361 "structure_reuse.direct.choose_reuse.m"
    {
#line 1361 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Prefix_5);
    }
#line 1362 "structure_reuse.direct.choose_reuse.m"
    {
#line 1362 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 5430 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_77 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 294 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 294 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 294 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 294 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 294 "structure_reuse.direct.choose_reuse.m"
    {
#line 294 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_54 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_77, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[24], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61);
    }
#line 295 "structure_reuse.direct.choose_reuse.m"
    {
#line 295 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55 = mercury__list__remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_77, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_54);
    }
#line 304 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "structure_reuse.direct.choose_reuse.m"
      {
#line 306 "structure_reuse.direct.choose_reuse.m"
        {
#line 306 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
#line 306 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 305 "structure_reuse.direct.choose_reuse.m"
      }
#line 304 "structure_reuse.direct.choose_reuse.m"
    else
#line 297 "structure_reuse.direct.choose_reuse.m"
      {
#line 297 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_56;

#line 297 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55, (MR_Integer) 0)));
#line 297 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_55, (MR_Integer) 1)));
#line 300 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "structure_reuse.direct.choose_reuse.m"
          {
#line 299 "structure_reuse.direct.choose_reuse.m"
          }
#line 300 "structure_reuse.direct.choose_reuse.m"
        else
#line 301 "structure_reuse.direct.choose_reuse.m"
          {
#line 302 "structure_reuse.direct.choose_reuse.m"
            {
#line 302 "structure_reuse.direct.choose_reuse.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
#line 302 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 301 "structure_reuse.direct.choose_reuse.m"
          }
#line 297 "structure_reuse.direct.choose_reuse.m"
      }
#line 1363 "structure_reuse.direct.choose_reuse.m"
    {
#line 1363 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17);
    }
#line 1363 "structure_reuse.direct.choose_reuse.m"
    {
#line 1363 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15);
    }
#line 1364 "structure_reuse.direct.choose_reuse.m"
    {
#line 1364 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 1365 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 1365 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 1365 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 1365 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 1367 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8 == ((MR_Float) 0.0000000000000000));
#line 1367 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 1370 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1369 "structure_reuse.direct.choose_reuse.m"
      {
#line 1369 "structure_reuse.direct.choose_reuse.m"
        MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;

#line 1369 "structure_reuse.direct.choose_reuse.m"
        {
#line 1369 "structure_reuse.direct.choose_reuse.m"
          mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[1], (MR_Integer) 2, (MR_Integer) 2, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Val_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41);
        }
#line 1369 "structure_reuse.direct.choose_reuse.m"
        {
#line 1369 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41);
        }
#line 1369 "structure_reuse.direct.choose_reuse.m"
      }
#line 1370 "structure_reuse.direct.choose_reuse.m"
    else
#line 1371 "structure_reuse.direct.choose_reuse.m"
      {
#line 1371 "structure_reuse.direct.choose_reuse.m"
        {
#line 1371 "structure_reuse.direct.choose_reuse.m"
          mercury__io__write_string_3_p_0((MR_String) "-");
        }
#line 1371 "structure_reuse.direct.choose_reuse.m"
      }
#line 1373 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 0)));
#line 1373 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 1)));
#line 1373 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 2)));
#line 1373 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, (MR_Integer) 3)));
#line 1374 "structure_reuse.direct.choose_reuse.m"
    {
#line 1374 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t|\t");
    }
#line 1375 "structure_reuse.direct.choose_reuse.m"
    {
#line 1375 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_int_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_9);
    }
#line 1376 "structure_reuse.direct.choose_reuse.m"
    {
#line 1376 "structure_reuse.direct.choose_reuse.m"
      mercury__io__write_string_3_p_0((MR_String) "\t");
    }
#line 1377 "structure_reuse.direct.choose_reuse.m"
    {
#line 1377 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_details_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6);
    }
#line 1378 "structure_reuse.direct.choose_reuse.m"
    {
#line 1378 "structure_reuse.direct.choose_reuse.m"
      mercury__io__nl_2_p_0();
    }
#line 1360 "structure_reuse.direct.choose_reuse.m"
  }
#line 1358 "structure_reuse.direct.choose_reuse.m"
}

#line 1343 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(
#line 1343 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6,
#line 1343 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7,
#line 1343 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8)
#line 1343 "structure_reuse.direct.choose_reuse.m"
{
#line 1348 "structure_reuse.direct.choose_reuse.m"
  {
#line 1348 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 1348 "structure_reuse.direct.choose_reuse.m"
#line 1348 "structure_reuse.direct.choose_reuse.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_6) {
#line 1348 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1348 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1355 "structure_reuse.direct.choose_reuse.m"
        {
#line 1355 "structure_reuse.direct.choose_reuse.m"
        }
#line 1348 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1348 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1348 "structure_reuse.direct.choose_reuse.m"
        {
#line 1348 "structure_reuse.direct.choose_reuse.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_27;
#line 1348 "structure_reuse.direct.choose_reuse.m"
          MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28;
#line 1348 "structure_reuse.direct.choose_reuse.m"
          MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 1348 "structure_reuse.direct.choose_reuse.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_44;
#line 1348 "structure_reuse.direct.choose_reuse.m"
          MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45;
#line 1348 "structure_reuse.direct.choose_reuse.m"
          MR_String transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;

#line 1338 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_27 = ((((MR_Integer) 79 - (MR_Integer) 15)) - (MR_Integer) 1);
#line 1339 "structure_reuse.direct.choose_reuse.m"
          {
#line 1339 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_27);
          }
#line 1339 "structure_reuse.direct.choose_reuse.m"
          {
#line 1339 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28 = mercury__string__f_43_43_2_f_0((MR_String) "%---reuse table", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33);
          }
#line 1340 "structure_reuse.direct.choose_reuse.m"
          {
#line 1340 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_28);
          }
#line 1341 "structure_reuse.direct.choose_reuse.m"
          {
#line 1341 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0((MR_String) "%\n");
          }
#line 1350 "structure_reuse.direct.choose_reuse.m"
          {
#line 1350 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0((MR_String) "%\t|\tvar\t|\tvalue\t|\tdegree\n");
          }
#line 1351 "structure_reuse.direct.choose_reuse.m"
          {
#line 1351 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_match_4_p_0((MR_String) "%-sel- ", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HighestMatch_8);
          }
#line 1352 "structure_reuse.direct.choose_reuse.m"
          {
#line 1352 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__dump_full_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_7);
          }
#line 1338 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_44 = ((((MR_Integer) 79 - (MR_Integer) 4)) - (MR_Integer) 1);
#line 1339 "structure_reuse.direct.choose_reuse.m"
          {
#line 1339 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = mercury__string__duplicate_char_2_f_0((MR_Char) 45, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Remainder_44);
          }
#line 1339 "structure_reuse.direct.choose_reuse.m"
          {
#line 1339 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45 = mercury__string__f_43_43_2_f_0((MR_String) "%---", transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50);
          }
#line 1340 "structure_reuse.direct.choose_reuse.m"
          {
#line 1340 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Line_45);
          }
#line 1341 "structure_reuse.direct.choose_reuse.m"
          {
#line 1341 "structure_reuse.direct.choose_reuse.m"
            mercury__io__write_string_3_p_0((MR_String) "%\n");
          }
#line 1348 "structure_reuse.direct.choose_reuse.m"
        }
#line 1348 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1348 "structure_reuse.direct.choose_reuse.m"
    }
#line 1348 "structure_reuse.direct.choose_reuse.m"
  }
#line 1343 "structure_reuse.direct.choose_reuse.m"
}

#line 1318 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(
#line 1318 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1318 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3)
#line 1318 "structure_reuse.direct.choose_reuse.m"
{
#line 1321 "structure_reuse.direct.choose_reuse.m"
  {
#line 1321 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1321 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3, (MR_Integer) 0)));
#line 1321 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConstructionSpec_3, (MR_Integer) 1)));

#line 1321 "structure_reuse.direct.choose_reuse.m"
    {
#line 1321 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5);
    }
#line 1321 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1321 "structure_reuse.direct.choose_reuse.m"
  }
#line 1318 "structure_reuse.direct.choose_reuse.m"
}

#line 1312 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(
#line 1312 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1312 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3)
#line 1312 "structure_reuse.direct.choose_reuse.m"
{
#line 1315 "structure_reuse.direct.choose_reuse.m"
  {
#line 1315 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 1)));
#line 1315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 0)));
#line 1315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 2)));
#line 1315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 3)));
#line 1315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_3, (MR_Integer) 4)));

#line 1315 "structure_reuse.direct.choose_reuse.m"
    {
#line 1315 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__smm_common____Unify____program_point_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8);
    }
#line 1315 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1315 "structure_reuse.direct.choose_reuse.m"
  }
#line 1312 "structure_reuse.direct.choose_reuse.m"
}

#line 1302 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1(
#line 1302 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1302 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1302 "structure_reuse.direct.choose_reuse.m"
{
#line 1302 "structure_reuse.direct.choose_reuse.m"
  {
#line 1302 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1302 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1302 "structure_reuse.direct.choose_reuse.m"
    {
#line 1302 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_with_program_point_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1302 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1302 "structure_reuse.direct.choose_reuse.m"
  }
#line 1302 "structure_reuse.direct.choose_reuse.m"
}

#line 1298 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5,
#line 1298 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6)
#line 1298 "structure_reuse.direct.choose_reuse.m"
{
#line 1301 "structure_reuse.direct.choose_reuse.m"
  {
#line 1301 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1301 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17;
#line 1301 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7;
#line 1301 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 1301 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9;
#line 1301 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1302 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 1302 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 1302 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));

#line 1302 "structure_reuse.direct.choose_reuse.m"
    {
#line 1302 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[6]));
#line 1302 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0_1));
#line 1302 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1302 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_5));
#line 1302 "structure_reuse.direct.choose_reuse.m"
    }
#line 1302 "structure_reuse.direct.choose_reuse.m"
    {
#line 1302 "structure_reuse.direct.choose_reuse.m"
      mercury__list__filter_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
    }
#line 1303 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 1303 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1303 "structure_reuse.direct.choose_reuse.m"
      {
#line 1303 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, (MR_Integer) 0)));
#line 1303 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, (MR_Integer) 1)));
#line 5861 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3];
#line 1303 "structure_reuse.direct.choose_reuse.m"
        {
#line 1303 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16)));
        }
#line 1303 "structure_reuse.direct.choose_reuse.m"
      }
#line 1301 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1301 "structure_reuse.direct.choose_reuse.m"
  }
#line 1298 "structure_reuse.direct.choose_reuse.m"
}

#line 293 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_2(
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 293 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 293 "structure_reuse.direct.choose_reuse.m"
{
#line 293 "structure_reuse.direct.choose_reuse.m"
  {
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 293 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13;

#line 293 "structure_reuse.direct.choose_reuse.m"
    {
#line 293 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_var__293__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 293 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13));
#line 293 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 293 "structure_reuse.direct.choose_reuse.m"
  }
#line 293 "structure_reuse.direct.choose_reuse.m"
}

#line 1309 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1(
#line 1309 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1309 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 1309 "structure_reuse.direct.choose_reuse.m"
{
#line 1309 "structure_reuse.direct.choose_reuse.m"
  {
#line 1309 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1309 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;

#line 1309 "structure_reuse.direct.choose_reuse.m"
    {
#line 1309 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__construction_spec_with_program_point_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 1309 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1309 "structure_reuse.direct.choose_reuse.m"
  }
#line 1309 "structure_reuse.direct.choose_reuse.m"
}

#line 1241 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7,
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8,
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40,
#line 1241 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41)
#line 1241 "structure_reuse.direct.choose_reuse.m"
{
#line 1244 "structure_reuse.direct.choose_reuse.m"
  {
#line 1244 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1244 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10;

#line 1245 "structure_reuse.direct.choose_reuse.m"
    {
#line 1245 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40);
    }
#line 1256 "structure_reuse.direct.choose_reuse.m"
#line 1256 "structure_reuse.direct.choose_reuse.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8)) {
#line 1256 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1256 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1286 "structure_reuse.direct.choose_reuse.m"
        {
#line 1286 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25;
#line 1308 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69;
#line 1308 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 1308 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 1)));
#line 1308 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 1308 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68;
#line 1309 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 0)));
#line 1309 "structure_reuse.direct.choose_reuse.m"
          MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 2)));
#line 1309 "structure_reuse.direct.choose_reuse.m"
          MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 3)));

#line 1309 "structure_reuse.direct.choose_reuse.m"
          {
#line 1309 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_3[4]));
#line 1309 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0_1));
#line 1309 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1309 "structure_reuse.direct.choose_reuse.m"
            MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10));
#line 1309 "structure_reuse.direct.choose_reuse.m"
          }
#line 1309 "structure_reuse.direct.choose_reuse.m"
          {
#line 1309 "structure_reuse.direct.choose_reuse.m"
            mercury__list__filter_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_construction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61);
          }
#line 1310 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61)) == (MR_mktag((MR_Integer) 1)));
#line 1310 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1310 "structure_reuse.direct.choose_reuse.m"
            {
#line 1310 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61, (MR_Integer) 0)));
#line 1310 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61, (MR_Integer) 1)));
#line 6021 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[4];
#line 1310 "structure_reuse.direct.choose_reuse.m"
              {
#line 1310 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_17_69, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68)));
              }
#line 1310 "structure_reuse.direct.choose_reuse.m"
            }
#line 1286 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1261 "structure_reuse.direct.choose_reuse.m"
            {
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75;
#line 1261 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 0)));
#line 294 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 1)));
#line 294 "structure_reuse.direct.choose_reuse.m"
              MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 2)));
#line 294 "structure_reuse.direct.choose_reuse.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, (MR_Integer) 3)));
#line 1264 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 1264 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 1264 "structure_reuse.direct.choose_reuse.m"
              MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;

#line 294 "structure_reuse.direct.choose_reuse.m"
              {
#line 294 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[23], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81);
              }
#line 295 "structure_reuse.direct.choose_reuse.m"
              {
#line 295 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75 = mercury__list__remove_dups_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_30_97, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars0_74);
              }
#line 304 "structure_reuse.direct.choose_reuse.m"
              if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "structure_reuse.direct.choose_reuse.m"
                {
#line 306 "structure_reuse.direct.choose_reuse.m"
                  {
#line 306 "structure_reuse.direct.choose_reuse.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "empty list of vars");
#line 306 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 305 "structure_reuse.direct.choose_reuse.m"
                }
#line 304 "structure_reuse.direct.choose_reuse.m"
              else
#line 297 "structure_reuse.direct.choose_reuse.m"
                {
#line 297 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76;

#line 297 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75, (MR_Integer) 0)));
#line 297 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVars_75, (MR_Integer) 1)));
#line 300 "structure_reuse.direct.choose_reuse.m"
                  if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 299 "structure_reuse.direct.choose_reuse.m"
                    {
#line 299 "structure_reuse.direct.choose_reuse.m"
                    }
#line 300 "structure_reuse.direct.choose_reuse.m"
                  else
#line 301 "structure_reuse.direct.choose_reuse.m"
                    {
#line 302 "structure_reuse.direct.choose_reuse.m"
                      {
#line 302 "structure_reuse.direct.choose_reuse.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_dead_var\'/1", (MR_String) "too many dead vars");
#line 302 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 301 "structure_reuse.direct.choose_reuse.m"
                    }
#line 297 "structure_reuse.direct.choose_reuse.m"
                }
#line 1262 "structure_reuse.direct.choose_reuse.m"
              {
#line 1262 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7);
              }
#line 1263 "structure_reuse.direct.choose_reuse.m"
              {
#line 1263 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7);
              }
#line 1264 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25, (MR_Integer) 0)));
#line 1264 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_25, (MR_Integer) 1)));
#line 1264 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 0)));
#line 1264 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 1)));
#line 1264 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45, (MR_Integer) 2)));
#line 1266 "structure_reuse.direct.choose_reuse.m"
              {
#line 1266 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28);
              }
#line 1268 "structure_reuse.direct.choose_reuse.m"
              if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1267 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30 = (MR_Integer) 0;
#line 1268 "structure_reuse.direct.choose_reuse.m"
              else
#line 1270 "structure_reuse.direct.choose_reuse.m"
                {
#line 1268 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1268 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_28);
                  }
#line 1270 "structure_reuse.direct.choose_reuse.m"
                  if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1269 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30 = (MR_Integer) 1;
#line 1270 "structure_reuse.direct.choose_reuse.m"
                  else
#line 1272 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1272 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1272 "structure_reuse.direct.choose_reuse.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "no reuse conditions");
#line 1272 "structure_reuse.direct.choose_reuse.m"
                        return;
                      }
#line 1272 "structure_reuse.direct.choose_reuse.m"
                    }
#line 1270 "structure_reuse.direct.choose_reuse.m"
                }
#line 1274 "structure_reuse.direct.choose_reuse.m"
              {
#line 1274 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_26));
#line 1274 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30));
#line 1274 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadConsIds_27));
#line 1274 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_29));
#line 1274 "structure_reuse.direct.choose_reuse.m"
              }
#line 1279 "structure_reuse.direct.choose_reuse.m"
#line 1279 "structure_reuse.direct.choose_reuse.m"
              switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Kind_30) {
#line 1279 "structure_reuse.direct.choose_reuse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1279 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 0:
#line 1278 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1278 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(2), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31));
#line 1278 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1279 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 1279 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 1:
#line 1283 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1283 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CellReused_31));
#line 1283 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1279 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 1279 "structure_reuse.direct.choose_reuse.m"
              }
#line 1285 "structure_reuse.direct.choose_reuse.m"
              {
#line 1285 "structure_reuse.direct.choose_reuse.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__KindReuse_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);
              }
#line 1261 "structure_reuse.direct.choose_reuse.m"
            }
#line 1286 "structure_reuse.direct.choose_reuse.m"
          else
#line 1286 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1286 "structure_reuse.direct.choose_reuse.m"
        }
#line 1256 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1256 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1253 "structure_reuse.direct.choose_reuse.m"
        {
#line 1249 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse___DeconSpec_17;

#line 1249 "structure_reuse.direct.choose_reuse.m"
          {
#line 1249 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_find_deconstruction_spec_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentProgramPoint_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse___DeconSpec_17);
          }
#line 1253 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1252 "structure_reuse.direct.choose_reuse.m"
            {
#line 1252 "structure_reuse.direct.choose_reuse.m"
              {
#line 1252 "structure_reuse.direct.choose_reuse.m"
                hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_8[0]), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41);
              }
#line 1252 "structure_reuse.direct.choose_reuse.m"
            }
#line 1253 "structure_reuse.direct.choose_reuse.m"
          else
#line 1253 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1253 "structure_reuse.direct.choose_reuse.m"
        }
#line 1256 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1256 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 2:
#line 1290 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1256 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1256 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 3:
#line 1256 "structure_reuse.direct.choose_reuse.m"
#line 1256 "structure_reuse.direct.choose_reuse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_8, (MR_Integer) 0)))) {
#line 1256 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1256 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1292 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_41 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_GoalInfo_0_40;
#line 1256 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1256 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1294 "structure_reuse.direct.choose_reuse.m"
            {
#line 1295 "structure_reuse.direct.choose_reuse.m"
              {
#line 1295 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuse_for_unification\'/5", (MR_String) "complicated_unify");
#line 1295 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1294 "structure_reuse.direct.choose_reuse.m"
            }
#line 1256 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1256 "structure_reuse.direct.choose_reuse.m"
        }
#line 1256 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1256 "structure_reuse.direct.choose_reuse.m"
    }
#line 1244 "structure_reuse.direct.choose_reuse.m"
  }
#line 1241 "structure_reuse.direct.choose_reuse.m"
}

#line 1233 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(
#line 1233 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1233 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1233 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12,
#line 1233 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13)
#line 1233 "structure_reuse.direct.choose_reuse.m"
{
#line 1236 "structure_reuse.direct.choose_reuse.m"
  {
#line 1236 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1236 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 0)));
#line 1236 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 1)));
#line 1236 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_0_12, (MR_Integer) 2)));
#line 1236 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11;

#line 1238 "structure_reuse.direct.choose_reuse.m"
    {
#line 1238 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal0_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11);
    }
#line 1239 "structure_reuse.direct.choose_reuse.m"
    {
#line 1239 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1239 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Case_13 = base;
#line 1239 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MainConsId_8));
#line 1239 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__OtherConsIds_9));
#line 1239 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_11));
#line 1239 "structure_reuse.direct.choose_reuse.m"
    }
#line 1236 "structure_reuse.direct.choose_reuse.m"
  }
#line 1233 "structure_reuse.direct.choose_reuse.m"
}

#line 1204 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3(
#line 1204 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1204 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1204 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1204 "structure_reuse.direct.choose_reuse.m"
{
#line 1204 "structure_reuse.direct.choose_reuse.m"
  {
#line 1204 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1204 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13;

#line 1204 "structure_reuse.direct.choose_reuse.m"
    {
#line 1204 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_case_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13);
    }
#line 1204 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Case_13));
#line 1204 "structure_reuse.direct.choose_reuse.m"
  }
#line 1204 "structure_reuse.direct.choose_reuse.m"
}

#line 1199 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2(
#line 1199 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1199 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1199 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1199 "structure_reuse.direct.choose_reuse.m"
{
#line 1199 "structure_reuse.direct.choose_reuse.m"
  {
#line 1199 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1199 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52;

#line 1199 "structure_reuse.direct.choose_reuse.m"
    {
#line 1199 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52);
    }
#line 1199 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Goal_52));
#line 1199 "structure_reuse.direct.choose_reuse.m"
  }
#line 1199 "structure_reuse.direct.choose_reuse.m"
}

#line 1194 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1(
#line 1194 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1194 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1194 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1194 "structure_reuse.direct.choose_reuse.m"
{
#line 1194 "structure_reuse.direct.choose_reuse.m"
  {
#line 1194 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1194 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52;

#line 1194 "structure_reuse.direct.choose_reuse.m"
    {
#line 1194 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52);
    }
#line 1194 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_Goal_52));
#line 1194 "structure_reuse.direct.choose_reuse.m"
  }
#line 1194 "structure_reuse.direct.choose_reuse.m"
}

#line 1170 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(
#line 1170 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 1170 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6,
#line 1170 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51,
#line 1170 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52)
#line 1170 "structure_reuse.direct.choose_reuse.m"
{
#line 1173 "structure_reuse.direct.choose_reuse.m"
  {
#line 1173 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1173 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51, (MR_Integer) 0)));
#line 1173 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_51, (MR_Integer) 1)));
#line 1173 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15;
#line 1173 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16;

#line 1180 "structure_reuse.direct.choose_reuse.m"
#line 1180 "structure_reuse.direct.choose_reuse.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8)) {
#line 1180 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1180 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1208 "structure_reuse.direct.choose_reuse.m"
        {
#line 1209 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1210 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1208 "structure_reuse.direct.choose_reuse.m"
        }
#line 1180 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1176 "structure_reuse.direct.choose_reuse.m"
        {
#line 1176 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1176 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)));
#line 1176 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1176 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1176 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 4)));

#line 1177 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1178 "structure_reuse.direct.choose_reuse.m"
          {
#line 1178 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuse_for_unification_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16);
          }
#line 1176 "structure_reuse.direct.choose_reuse.m"
        }
#line 1180 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 2:
#line 1181 "structure_reuse.direct.choose_reuse.m"
        {
#line 1182 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1183 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1181 "structure_reuse.direct.choose_reuse.m"
        }
#line 1180 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 3:
#line 1180 "structure_reuse.direct.choose_reuse.m"
#line 1180 "structure_reuse.direct.choose_reuse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 0)))) {
#line 1180 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1180 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1185 "structure_reuse.direct.choose_reuse.m"
            {
#line 1186 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1187 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1185 "structure_reuse.direct.choose_reuse.m"
            }
#line 1180 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1189 "structure_reuse.direct.choose_reuse.m"
            {
#line 1190 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8;
#line 1191 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1189 "structure_reuse.direct.choose_reuse.m"
            }
#line 1180 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 1193 "structure_reuse.direct.choose_reuse.m"
            {
#line 1193 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67;
#line 1193 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1193 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1193 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37;
#line 1193 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;

#line 1194 "structure_reuse.direct.choose_reuse.m"
              {
#line 1194 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3]));
#line 1194 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_1));
#line 1194 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1194 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1194 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1194 "structure_reuse.direct.choose_reuse.m"
              }
#line 6604 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1194 "structure_reuse.direct.choose_reuse.m"
              {
#line 1194 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_67_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_36, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37);
              }
#line 1195 "structure_reuse.direct.choose_reuse.m"
              {
#line 1195 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1195 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_35));
#line 1195 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_37));
#line 1195 "structure_reuse.direct.choose_reuse.m"
              }
#line 1196 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1193 "structure_reuse.direct.choose_reuse.m"
            }
#line 1180 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 1198 "structure_reuse.direct.choose_reuse.m"
            {
#line 1198 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70;
#line 1198 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 1198 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));
#line 1198 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61;

#line 1199 "structure_reuse.direct.choose_reuse.m"
              {
#line 1199 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1199 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[3]));
#line 1199 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_2));
#line 1199 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1199 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1199 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1199 "structure_reuse.direct.choose_reuse.m"
              }
#line 6658 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1199 "structure_reuse.direct.choose_reuse.m"
              {
#line 1199 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_70_70, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals0_60, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61);
              }
#line 1200 "structure_reuse.direct.choose_reuse.m"
              {
#line 1200 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1200 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1200 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_61));
#line 1200 "structure_reuse.direct.choose_reuse.m"
              }
#line 1201 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1198 "structure_reuse.direct.choose_reuse.m"
            }
#line 1180 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 4:
#line 1203 "structure_reuse.direct.choose_reuse.m"
            {
#line 1203 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73;
#line 1203 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1203 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1203 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40;
#line 1203 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56;
#line 1203 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1204 "structure_reuse.direct.choose_reuse.m"
              {
#line 1204 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[4]));
#line 1204 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0_3));
#line 1204 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1204 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 1204 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6));
#line 1204 "structure_reuse.direct.choose_reuse.m"
              }
#line 6714 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
#line 1204 "structure_reuse.direct.choose_reuse.m"
              {
#line 1204 "structure_reuse.direct.choose_reuse.m"
                mercury__list__map_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_73_73, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases0_39, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40);
              }
#line 1205 "structure_reuse.direct.choose_reuse.m"
              {
#line 1205 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1205 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_62));
#line 1205 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__B_38));
#line 1205 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_40));
#line 1205 "structure_reuse.direct.choose_reuse.m"
              }
#line 1206 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1203 "structure_reuse.direct.choose_reuse.m"
            }
#line 1180 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 5:
#line 1212 "structure_reuse.direct.choose_reuse.m"
            {
#line 1212 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1212 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43;
#line 1212 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1216 "structure_reuse.direct.choose_reuse.m"
              {
#line 1216 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal0_42, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43);
              }
#line 1217 "structure_reuse.direct.choose_reuse.m"
              {
#line 1217 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1217 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_63));
#line 1217 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_43));
#line 1217 "structure_reuse.direct.choose_reuse.m"
              }
#line 1218 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1212 "structure_reuse.direct.choose_reuse.m"
            }
#line 1180 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 6:
#line 1220 "structure_reuse.direct.choose_reuse.m"
            {
#line 1220 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 2)));
#line 1220 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 3)));
#line 1220 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 4)));
#line 1220 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47;
#line 1220 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48;
#line 1220 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49;
#line 1220 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr0_8, (MR_Integer) 1)));

#line 1221 "structure_reuse.direct.choose_reuse.m"
              {
#line 1221 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal0_44, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47);
              }
#line 1222 "structure_reuse.direct.choose_reuse.m"
              {
#line 1222 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal0_45, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48);
              }
#line 1223 "structure_reuse.direct.choose_reuse.m"
              {
#line 1223 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal0_46, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49);
              }
#line 1224 "structure_reuse.direct.choose_reuse.m"
              {
#line 1224 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1224 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__A_64));
#line 1224 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_47));
#line 1224 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_48));
#line 1224 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_49));
#line 1224 "structure_reuse.direct.choose_reuse.m"
              }
#line 1225 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo0_9;
#line 1220 "structure_reuse.direct.choose_reuse.m"
            }
#line 1180 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 7:
#line 1227 "structure_reuse.direct.choose_reuse.m"
            {
#line 1229 "structure_reuse.direct.choose_reuse.m"
              {
#line 1229 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.annotate_reuses_in_goal\'/4", (MR_String) "shorthand.");
#line 1229 "structure_reuse.direct.choose_reuse.m"
                return;
              }
#line 1227 "structure_reuse.direct.choose_reuse.m"
            }
#line 1180 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
        }
#line 1180 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1180 "structure_reuse.direct.choose_reuse.m"
    }
#line 1231 "structure_reuse.direct.choose_reuse.m"
    {
#line 1231 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 1231 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_52 = base;
#line 1231 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_15));
#line 1231 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_16));
#line 1231 "structure_reuse.direct.choose_reuse.m"
    }
#line 1173 "structure_reuse.direct.choose_reuse.m"
  }
#line 1170 "structure_reuse.direct.choose_reuse.m"
}

#line 1147 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(
#line 1147 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14,
#line 1147 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1147 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 1147 "structure_reuse.direct.choose_reuse.m"
{
#line 1149 "structure_reuse.direct.choose_reuse.m"
  {
#line 1149 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1149 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 1149 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1149 "structure_reuse.direct.choose_reuse.m"
      else
#line 1150 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1149 "structure_reuse.direct.choose_reuse.m"
    else
#line 1149 "structure_reuse.direct.choose_reuse.m"
      {
#line 1149 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 1)));
#line 1149 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1, (MR_Integer) 0));

#line 1149 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1151 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1149 "structure_reuse.direct.choose_reuse.m"
        else
#line 1152 "structure_reuse.direct.choose_reuse.m"
          {
#line 1152 "structure_reuse.direct.choose_reuse.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Y_10 = (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 0));
#line 1152 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Ys_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, (MR_Integer) 1)));
#line 1152 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12;
#line 1152 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 1152 "structure_reuse.direct.choose_reuse.m"
            {
#line 1152 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Ys_11);
            }
#line 1153 "structure_reuse.direct.choose_reuse.m"
            {
#line 1153 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_for_T_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Y_10);
            }
#line 1155 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1154 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12 = (MR_Integer) 1;
#line 1155 "structure_reuse.direct.choose_reuse.m"
            else
#line 1156 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12 = (MR_Integer) 0;
#line 1152 "structure_reuse.direct.choose_reuse.m"
            {
#line 1152 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_12));
#line 1152 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13));
#line 1152 "structure_reuse.direct.choose_reuse.m"
            }
#line 1152 "structure_reuse.direct.choose_reuse.m"
          }
#line 1149 "structure_reuse.direct.choose_reuse.m"
      }
#line 1149 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 1149 "structure_reuse.direct.choose_reuse.m"
  }
#line 1147 "structure_reuse.direct.choose_reuse.m"
}

#line 1118 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0(
#line 1118 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6,
#line 1118 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7,
#line 1118 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8,
#line 1118 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9)
#line 1118 "structure_reuse.direct.choose_reuse.m"
{
#line 1122 "structure_reuse.direct.choose_reuse.m"
  {
#line 1122 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1122 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10;
#line 1122 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18;
#line 1122 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11;
#line 1122 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12;
#line 1122 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13;
#line 1122 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14;
#line 1122 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;

#line 1134 "structure_reuse.direct.choose_reuse.m"
#line 1134 "structure_reuse.direct.choose_reuse.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagC_6) {
#line 1134 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1134 "structure_reuse.direct.choose_reuse.m"
#line 1134 "structure_reuse.direct.choose_reuse.m"
        switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8) {
#line 1134 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1140 "structure_reuse.direct.choose_reuse.m"
            {
#line 1140 "structure_reuse.direct.choose_reuse.m"
              {
#line 1140 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
              }
#line 1140 "structure_reuse.direct.choose_reuse.m"
            }
#line 1134 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1134 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1138 "structure_reuse.direct.choose_reuse.m"
            {
#line 1138 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29;

#line 7028 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "structure_reuse.direct.choose_reuse.m"
                if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1149 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1149 "structure_reuse.direct.choose_reuse.m"
                else
#line 1150 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 7038 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              else
#line 7040 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                {
#line 7042 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, (MR_Integer) 1)));
#line 1162 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, (MR_Integer) 0)));

#line 1138 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1138 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
                  }
#line 7052 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                }
#line 1138 "structure_reuse.direct.choose_reuse.m"
              {
#line 1138 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1138 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29));
#line 1138 "structure_reuse.direct.choose_reuse.m"
              }
#line 1138 "structure_reuse.direct.choose_reuse.m"
            }
#line 1134 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1134 "structure_reuse.direct.choose_reuse.m"
        }
#line 1134 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1134 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1134 "structure_reuse.direct.choose_reuse.m"
#line 1134 "structure_reuse.direct.choose_reuse.m"
        switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExplicitSecTagR_8) {
#line 1134 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1136 "structure_reuse.direct.choose_reuse.m"
            {
#line 1136 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;
#line 1136 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;

#line 1161 "structure_reuse.direct.choose_reuse.m"
              if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1161 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1161 "structure_reuse.direct.choose_reuse.m"
              else
#line 1162 "structure_reuse.direct.choose_reuse.m"
                {
#line 1162 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9, (MR_Integer) 0)));

#line 1162 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9, (MR_Integer) 1)));
#line 1162 "structure_reuse.direct.choose_reuse.m"
                }
#line 1136 "structure_reuse.direct.choose_reuse.m"
              {
#line 1136 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25);
              }
#line 1136 "structure_reuse.direct.choose_reuse.m"
              {
#line 1136 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1136 "structure_reuse.direct.choose_reuse.m"
                MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24));
#line 1136 "structure_reuse.direct.choose_reuse.m"
              }
#line 1136 "structure_reuse.direct.choose_reuse.m"
            }
#line 1134 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1134 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1134 "structure_reuse.direct.choose_reuse.m"
            {
#line 1134 "structure_reuse.direct.choose_reuse.m"
              {
#line 1134 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__equals_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseCellVars_9);
              }
#line 1134 "structure_reuse.direct.choose_reuse.m"
            }
#line 1134 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1134 "structure_reuse.direct.choose_reuse.m"
        }
#line 1134 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1134 "structure_reuse.direct.choose_reuse.m"
    }
#line 1125 "structure_reuse.direct.choose_reuse.m"
    {
#line 1125 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12 = mercury__list__length_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentCellVars_7);
    }
#line 7146 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1126 "structure_reuse.direct.choose_reuse.m"
    {
#line 1126 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11);
    }
#line 1127 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthC_12 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__LengthB_13);
#line 1127 "structure_reuse.direct.choose_reuse.m"
    {
#line 1127 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14 = mercury__list__duplicate_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, ((MR_Box) ((MR_Integer) 0)));
    }
#line 1128 "structure_reuse.direct.choose_reuse.m"
    {
#line 1128 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10 = mercury__list__f_43_43_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsNoUpdate_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NeedsUpdate_14);
    }
#line 1122 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_10;
#line 1122 "structure_reuse.direct.choose_reuse.m"
  }
#line 1118 "structure_reuse.direct.choose_reuse.m"
}

#line 1092 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6,
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7,
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8,
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 1092 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10)
#line 1092 "structure_reuse.direct.choose_reuse.m"
{
#line 1105 "structure_reuse.direct.choose_reuse.m"
  {
#line 1105 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 1100 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22;
#line 1102 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 1097 "structure_reuse.direct.choose_reuse.m"
    {
#line 1097 "structure_reuse.direct.choose_reuse.m"
      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11);
    }
#line 1098 "structure_reuse.direct.choose_reuse.m"
    {
#line 1098 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_11, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12);
    }
#line 1097 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1097 "structure_reuse.direct.choose_reuse.m"
      {
#line 1099 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1099 "structure_reuse.direct.choose_reuse.m"
          {
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 0)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 1)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 2)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 3)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 4)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 5)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1099 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_12, (MR_Integer) 7)));
#line 7264 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7266 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1100 "structure_reuse.direct.choose_reuse.m"
            {
#line 1100 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_14, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22);
            }
#line 1100 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1100 "structure_reuse.direct.choose_reuse.m"
              {
#line 1100 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_22);
#line 1100 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1100 "structure_reuse.direct.choose_reuse.m"
              }
#line 1097 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1097 "structure_reuse.direct.choose_reuse.m"
              {
#line 1101 "structure_reuse.direct.choose_reuse.m"
                {
#line 1101 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23 = hlds__hlds_data__get_secondary_tag_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_22);
                }
#line 1102 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23)) == (MR_mktag((MR_Integer) 1)));
#line 1102 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1102 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_23, (MR_Integer) 0)));
#line 1097 "structure_reuse.direct.choose_reuse.m"
              }
#line 1099 "structure_reuse.direct.choose_reuse.m"
          }
#line 1097 "structure_reuse.direct.choose_reuse.m"
      }
#line 1105 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1104 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10 = (MR_Integer) 1;
#line 1105 "structure_reuse.direct.choose_reuse.m"
    else
#line 1106 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SecondaryTag_10 = (MR_Integer) 0;
#line 1105 "structure_reuse.direct.choose_reuse.m"
  }
#line 1092 "structure_reuse.direct.choose_reuse.m"
}

#line 1078 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(
#line 1078 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1,
#line 1078 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2)
#line 1078 "structure_reuse.direct.choose_reuse.m"
{
#line 1080 "structure_reuse.direct.choose_reuse.m"
  {
#line 1080 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1080 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;

#line 1080 "structure_reuse.direct.choose_reuse.m"
#line 1080 "structure_reuse.direct.choose_reuse.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1) {
#line 1080 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1080 "structure_reuse.direct.choose_reuse.m"
#line 1080 "structure_reuse.direct.choose_reuse.m"
        switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2) {
#line 1080 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1084 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 1;
#line 1080 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1080 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1082 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1080 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1080 "structure_reuse.direct.choose_reuse.m"
        }
#line 1080 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1080 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1080 "structure_reuse.direct.choose_reuse.m"
#line 1080 "structure_reuse.direct.choose_reuse.m"
        switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2) {
#line 1080 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1081 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1080 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1080 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1080 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (MR_Integer) 0;
#line 1080 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1080 "structure_reuse.direct.choose_reuse.m"
        }
#line 1080 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1080 "structure_reuse.direct.choose_reuse.m"
    }
#line 1080 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 1080 "structure_reuse.direct.choose_reuse.m"
  }
#line 1078 "structure_reuse.direct.choose_reuse.m"
}

#line 1076 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0_1(
#line 1076 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1076 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1076 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1076 "structure_reuse.direct.choose_reuse.m"
{
#line 1076 "structure_reuse.direct.choose_reuse.m"
  {
#line 1076 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1076 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1076 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3;

#line 1076 "structure_reuse.direct.choose_reuse.m"
    {
#line 1076 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__needs_update_and_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 1076 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_3));
#line 1076 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1076 "structure_reuse.direct.choose_reuse.m"
  }
#line 1076 "structure_reuse.direct.choose_reuse.m"
}

#line 1056 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(
#line 1056 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4,
#line 1056 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5)
#line 1056 "structure_reuse.direct.choose_reuse.m"
{
#line 1058 "structure_reuse.direct.choose_reuse.m"
  {
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6;
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31;
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons1_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 0)));
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 1)));
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R1_4, (MR_Integer) 2)));
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons2_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 0)));
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 1)));
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R2_5, (MR_Integer) 2)));
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15;
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21;
#line 1058 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22;
#line 1068 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28;
#line 1068 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 1068 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 1061 "structure_reuse.direct.choose_reuse.m"
    {
#line 1061 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = mercury__bool__and_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons1_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons2_10);
    }
#line 7480 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1068 "structure_reuse.direct.choose_reuse.m"
    {
#line 1068 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
    }
#line 1068 "structure_reuse.direct.choose_reuse.m"
    {
#line 1068 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_14_28, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
    }
#line 1068 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24);
#line 1072 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1070 "structure_reuse.direct.choose_reuse.m"
      {
#line 1070 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29;
#line 1070 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25;

#line 1070 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8;
#line 7505 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1071 "structure_reuse.direct.choose_reuse.m"
        {
#line 1071 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
        }
#line 1071 "structure_reuse.direct.choose_reuse.m"
        {
#line 1071 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22 = mercury__list__take_upto_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_15_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
        }
#line 1070 "structure_reuse.direct.choose_reuse.m"
      }
#line 1072 "structure_reuse.direct.choose_reuse.m"
    else
#line 1073 "structure_reuse.direct.choose_reuse.m"
      {
#line 1073 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1073 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26;

#line 1073 "structure_reuse.direct.choose_reuse.m"
        {
#line 1073 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11);
        }
#line 1073 "structure_reuse.direct.choose_reuse.m"
        {
#line 1073 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21 = mercury__list__take_upto_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields1_8);
        }
#line 1074 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Fields2_11;
#line 1073 "structure_reuse.direct.choose_reuse.m"
      }
#line 7542 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1076 "structure_reuse.direct.choose_reuse.m"
    {
#line 1076 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = mercury__list__map_corresponding_3_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_31, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[22], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L1b_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__L2b_22);
    }
#line 1062 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_9 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_12);
#line 1062 "structure_reuse.direct.choose_reuse.m"
    {
#line 1062 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16, (MR_Float) 2.0000000000000000);
    }
#line 1061 "structure_reuse.direct.choose_reuse.m"
    {
#line 1061 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1061 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13));
#line 1061 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14));
#line 1061 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15);
#line 1061 "structure_reuse.direct.choose_reuse.m"
    }
#line 1058 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__R_6;
#line 1058 "structure_reuse.direct.choose_reuse.m"
  }
#line 1056 "structure_reuse.direct.choose_reuse.m"
}

#line 1026 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(
#line 1026 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1026 "structure_reuse.direct.choose_reuse.m"
{
#line 1026 "structure_reuse.direct.choose_reuse.m"
  {
#line 1026 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1026 "structure_reuse.direct.choose_reuse.m"
    MR_builtin_longjmp((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0, 1);
#line 1026 "structure_reuse.direct.choose_reuse.m"
  }
#line 1026 "structure_reuse.direct.choose_reuse.m"
}

#line 1027 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3(
#line 1027 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1027 "structure_reuse.direct.choose_reuse.m"
{
#line 1027 "structure_reuse.direct.choose_reuse.m"
  {
#line 1027 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1027 "structure_reuse.direct.choose_reuse.m"
    (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10 = ((MR_Word) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10);
#line 1027 "structure_reuse.direct.choose_reuse.m"
    {
#line 1027 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
    }
#line 1027 "structure_reuse.direct.choose_reuse.m"
  }
#line 1027 "structure_reuse.direct.choose_reuse.m"
}

#line 1026 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_2(
#line 1026 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1026 "structure_reuse.direct.choose_reuse.m"
{
#line 1026 "structure_reuse.direct.choose_reuse.m"
  {
#line 1026 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1026 "structure_reuse.direct.choose_reuse.m"
    {
#line 1029 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 2)));
#line 1029 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 0)));
#line 1029 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 1)));
#line 1029 "structure_reuse.direct.choose_reuse.m"
      MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__Arg_10, (MR_Integer) 3)));

#line 1029 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
#line 1028 "structure_reuse.direct.choose_reuse.m"
      if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded)
#line 1028 "structure_reuse.direct.choose_reuse.m"
        {
#line 1028 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_1(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
        }
#line 1026 "structure_reuse.direct.choose_reuse.m"
    }
#line 1026 "structure_reuse.direct.choose_reuse.m"
  }
#line 1026 "structure_reuse.direct.choose_reuse.m"
}

#line 1026 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(
#line 1026 "structure_reuse.direct.choose_reuse.m"
  void * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg)
#line 1026 "structure_reuse.direct.choose_reuse.m"
{
#line 1026 "structure_reuse.direct.choose_reuse.m"
  {
#line 1026 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr = (struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s *) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr_arg;

#line 1026 "structure_reuse.direct.choose_reuse.m"
    if (MR_builtin_setjmp((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__commit_0) == 0)
#line 1026 "structure_reuse.direct.choose_reuse.m"
      {
#line 1026 "structure_reuse.direct.choose_reuse.m"
        {
#line 1027 "structure_reuse.direct.choose_reuse.m"
          {
#line 1027 "structure_reuse.direct.choose_reuse.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, &(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__conv0_Arg_10, (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr);
          }
#line 1026 "structure_reuse.direct.choose_reuse.m"
        }
#line 1026 "structure_reuse.direct.choose_reuse.m"
        (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
#line 1026 "structure_reuse.direct.choose_reuse.m"
      }
#line 1026 "structure_reuse.direct.choose_reuse.m"
    else
#line 1026 "structure_reuse.direct.choose_reuse.m"
      (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env_ptr)->transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1026 "structure_reuse.direct.choose_reuse.m"
  }
#line 1026 "structure_reuse.direct.choose_reuse.m"
}

#line 1019 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(
#line 1019 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3,
#line 1019 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)
#line 1019 "structure_reuse.direct.choose_reuse.m"
{
#line 1019 "structure_reuse.direct.choose_reuse.m"
  {
#line 1019 "structure_reuse.direct.choose_reuse.m"
    struct transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0_s transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env;

#line 1023 "structure_reuse.direct.choose_reuse.m"
#line 1023 "structure_reuse.direct.choose_reuse.m"
    switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4)) {
#line 1023 "structure_reuse.direct.choose_reuse.m"
      default:
#line 1023 "structure_reuse.direct.choose_reuse.m"
        (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
#line 1023 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 1047 "structure_reuse.direct.choose_reuse.m"
        {
#line 1048 "structure_reuse.direct.choose_reuse.m"
          {
#line 1048 "structure_reuse.direct.choose_reuse.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
          }
#line 1047 "structure_reuse.direct.choose_reuse.m"
          (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1047 "structure_reuse.direct.choose_reuse.m"
        }
#line 1023 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 1047 "structure_reuse.direct.choose_reuse.m"
        {
#line 1048 "structure_reuse.direct.choose_reuse.m"
          {
#line 1048 "structure_reuse.direct.choose_reuse.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
          }
#line 1047 "structure_reuse.direct.choose_reuse.m"
          (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1047 "structure_reuse.direct.choose_reuse.m"
        }
#line 1023 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 2:
#line 1047 "structure_reuse.direct.choose_reuse.m"
        {
#line 1048 "structure_reuse.direct.choose_reuse.m"
          {
#line 1048 "structure_reuse.direct.choose_reuse.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
          }
#line 1047 "structure_reuse.direct.choose_reuse.m"
          (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1047 "structure_reuse.direct.choose_reuse.m"
        }
#line 1023 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 3:
#line 1023 "structure_reuse.direct.choose_reuse.m"
#line 1023 "structure_reuse.direct.choose_reuse.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 0)))) {
#line 1023 "structure_reuse.direct.choose_reuse.m"
          default:
#line 1023 "structure_reuse.direct.choose_reuse.m"
            (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_FALSE;
#line 1023 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 4:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 5:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 6:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 7:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 8:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 9:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 10:
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 11:
#line 1047 "structure_reuse.direct.choose_reuse.m"
            {
#line 1048 "structure_reuse.direct.choose_reuse.m"
              {
#line 1048 "structure_reuse.direct.choose_reuse.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.cons_has_normal_fields\'/2", (MR_String) "unusual cons_id");
              }
#line 1047 "structure_reuse.direct.choose_reuse.m"
              (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1047 "structure_reuse.direct.choose_reuse.m"
            }
#line 1023 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 1023 "structure_reuse.direct.choose_reuse.m"
            {
#line 1023 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 3)));
#line 1023 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8;
#line 1023 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 1)));
#line 1023 "structure_reuse.direct.choose_reuse.m"
              MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, (MR_Integer) 2)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 1025 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 1025 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 1025 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40;
#line 1025 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;
#line 1025 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 1025 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43;

#line 1024 "structure_reuse.direct.choose_reuse.m"
              {
#line 1024 "structure_reuse.direct.choose_reuse.m"
                check_hlds__type_util__get_cons_defn_det_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_3, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtor_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8);
              }
#line 1025 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 0)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 1)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 2)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 3)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 4)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 5)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
              (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__ConsArgs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 6)));
#line 1025 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsDefn_8, (MR_Integer) 7)));
#line 1026 "structure_reuse.direct.choose_reuse.m"
              {
#line 1026 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_4(&transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env);
              }
#line 1026 "structure_reuse.direct.choose_reuse.m"
              (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = !((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded);
#line 1023 "structure_reuse.direct.choose_reuse.m"
            }
#line 1023 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 1032 "structure_reuse.direct.choose_reuse.m"
            (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded = MR_TRUE;
#line 1023 "structure_reuse.direct.choose_reuse.m"
            break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
        }
#line 1023 "structure_reuse.direct.choose_reuse.m"
        break;
#line 1023 "structure_reuse.direct.choose_reuse.m"
    }
#line 1023 "structure_reuse.direct.choose_reuse.m"
    return (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__env).transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0_env_0__succeeded;
#line 1019 "structure_reuse.direct.choose_reuse.m"
  }
#line 1019 "structure_reuse.direct.choose_reuse.m"
}

#line 950 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11,
#line 950 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12)
#line 950 "structure_reuse.direct.choose_reuse.m"
{
#line 954 "structure_reuse.direct.choose_reuse.m"
  {
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 0)));
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 2)));
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 3)));
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 1)));
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 3)));
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 954 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 955 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 1)));
#line 955 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_11, (MR_Integer) 4)));
#line 957 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 0)));
#line 957 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 2)));
#line 989 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 989 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 989 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83;
#line 1097 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81;
#line 1099 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82;
#line 1100 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83;
#line 1102 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85;

#line 960 "structure_reuse.direct.choose_reuse.m"
    {
#line 960 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = parse_tree__prog_data____Unify____cons_id_0_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15);
    }
#line 962 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 961 "structure_reuse.direct.choose_reuse.m"
      {
#line 961 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 = (MR_Integer) 1;
#line 961 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 961 "structure_reuse.direct.choose_reuse.m"
      }
#line 962 "structure_reuse.direct.choose_reuse.m"
    else
#line 963 "structure_reuse.direct.choose_reuse.m"
      {
#line 963 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 = (MR_Integer) 0;
#line 968 "structure_reuse.direct.choose_reuse.m"
        {
#line 968 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9);
        }
#line 963 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 969 "structure_reuse.direct.choose_reuse.m"
          {
#line 969 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__cons_has_normal_fields_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15);
          }
#line 963 "structure_reuse.direct.choose_reuse.m"
      }
#line 954 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 954 "structure_reuse.direct.choose_reuse.m"
      {
#line 8074 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 972 "structure_reuse.direct.choose_reuse.m"
        {
#line 972 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10);
        }
#line 973 "structure_reuse.direct.choose_reuse.m"
        {
#line 973 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_64_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
        }
#line 976 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 == (MR_Integer) 0);
#line 976 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 954 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 954 "structure_reuse.direct.choose_reuse.m"
          {
#line 980 "structure_reuse.direct.choose_reuse.m"
            {
#line 980 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__has_secondary_tag_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCons_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24);
            }
#line 982 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24 == (MR_Integer) 1);
#line 982 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 982 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Integer) 1;
#line 982 "structure_reuse.direct.choose_reuse.m"
            else
#line 982 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Integer) 0;
#line 982 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadNumArgs_22 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35);
#line 989 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 0)));
#line 989 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 1)));
#line 989 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 2)));
#line 989 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, (MR_Integer) 3)));
#line 1097 "structure_reuse.direct.choose_reuse.m"
            {
#line 1097 "structure_reuse.direct.choose_reuse.m"
              hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72);
            }
#line 1098 "structure_reuse.direct.choose_reuse.m"
            {
#line 1098 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = check_hlds__type_util__type_to_type_defn_body_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Type_72, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73);
            }
#line 1097 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1097 "structure_reuse.direct.choose_reuse.m"
              {
#line 1099 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73)) == (MR_mktag((MR_Integer) 1)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1099 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 0)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 1)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 2)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 3)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 4)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 5)));
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1099 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeBody_73, (MR_Integer) 7)));
#line 8157 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 8159 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1100 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1100 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__map__search_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_25_86, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_26_87, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTagValues_75, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_9)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83);
                    }
#line 1100 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1100 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1100 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ConsTag_83);
#line 1100 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1100 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1097 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1097 "structure_reuse.direct.choose_reuse.m"
                      {
#line 1101 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1101 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84 = hlds__hlds_data__get_secondary_tag_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsTag_83);
                        }
#line 1102 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84)) == (MR_mktag((MR_Integer) 1)));
#line 1102 "structure_reuse.direct.choose_reuse.m"
                        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1102 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaybeSecondaryTag_84, (MR_Integer) 0)));
#line 1097 "structure_reuse.direct.choose_reuse.m"
                      }
#line 1099 "structure_reuse.direct.choose_reuse.m"
                  }
#line 1097 "structure_reuse.direct.choose_reuse.m"
              }
#line 8197 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8199 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              {
#line 981 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 + (MR_Integer) 1);
#line 985 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26);
#line 8205 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8207 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  {
#line 990 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 994 "structure_reuse.direct.choose_reuse.m"
                    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 994 "structure_reuse.direct.choose_reuse.m"
                    else
#line 992 "structure_reuse.direct.choose_reuse.m"
                      {
#line 992 "structure_reuse.direct.choose_reuse.m"
                        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27, (MR_Integer) 0)));

#line 993 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_29);
#line 992 "structure_reuse.direct.choose_reuse.m"
                      }
#line 8226 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8228 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 1003 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1003 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0((MR_Integer) 1, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
                        }
#line 1003 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 8237 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      }
#line 8239 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  }
#line 8241 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              }
#line 8243 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            else
#line 8245 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              {
#line 981 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewNumArgs_21 + (MR_Integer) 0);
#line 985 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26);
#line 8251 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8253 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  {
#line 990 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadArity_26 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 994 "structure_reuse.direct.choose_reuse.m"
                    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 994 "structure_reuse.direct.choose_reuse.m"
                    else
#line 992 "structure_reuse.direct.choose_reuse.m"
                      {
#line 992 "structure_reuse.direct.choose_reuse.m"
                        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constraint_27, (MR_Integer) 0)));

#line 993 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28 <= transform_hlds__ctgc__structure_reuse__direct__choose_reuse__N_88);
#line 992 "structure_reuse.direct.choose_reuse.m"
                      }
#line 8272 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 8274 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      {
#line 1003 "structure_reuse.direct.choose_reuse.m"
                        {
#line 1003 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__already_correct_fields_4_f_0((MR_Integer) 0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCellArgs_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadSecTag_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellArgs_16);
                        }
#line 1003 "structure_reuse.direct.choose_reuse.m"
                        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 8283 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                      }
#line 8285 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  }
#line 8287 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
              }
#line 954 "structure_reuse.direct.choose_reuse.m"
            if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 954 "structure_reuse.direct.choose_reuse.m"
              {
#line 8293 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_needs_update_0;
#line 1006 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = (MR_Integer) 0;
#line 1006 "structure_reuse.direct.choose_reuse.m"
                {
#line 1006 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = mercury__list__delete_all_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37)));
                }
#line 1005 "structure_reuse.direct.choose_reuse.m"
                {
#line 1005 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31 = mercury__list__length_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36);
                }
#line 1010 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20 == (MR_Integer) 1);
#line 1010 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1010 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32 = (MR_Integer) 0;
#line 1010 "structure_reuse.direct.choose_reuse.m"
                else
#line 1010 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32 = (MR_Integer) 1;
#line 911 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 = (MR_Integer) 5;
#line 915 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44 = (MR_Integer) 1;
#line 1012 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_43_43 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_44_44);
#line 1012 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25);
#line 919 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = (MR_Integer) 1;
#line 1012 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45);
#line 915 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = (MR_Integer) 1;
#line 1013 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArity_25 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__UpToDateFields_31);
#line 1013 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48);
#line 1013 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_40_40 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_46_46);
#line 919 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = (MR_Integer) 1;
#line 1014 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameConsV_32);
#line 1014 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49);
#line 911 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = (MR_Integer) 5;
#line 1015 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DiffArity_28);
#line 1015 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 - transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 1016 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = (MR_Integer) 0;
#line 1016 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53);
#line 954 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 954 "structure_reuse.direct.choose_reuse.m"
                  {
#line 1017 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1017 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Weight_33);
                    }
#line 1017 "structure_reuse.direct.choose_reuse.m"
                    {
#line 1017 "structure_reuse.direct.choose_reuse.m"
                      MR_Word base;
#line 1017 "structure_reuse.direct.choose_reuse.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_12 = base;
#line 1017 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__SameCons_20));
#line 1017 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseFields_30));
#line 1017 "structure_reuse.direct.choose_reuse.m"
                      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54);
#line 1017 "structure_reuse.direct.choose_reuse.m"
                    }
#line 1017 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 954 "structure_reuse.direct.choose_reuse.m"
                  }
#line 954 "structure_reuse.direct.choose_reuse.m"
              }
#line 954 "structure_reuse.direct.choose_reuse.m"
          }
#line 954 "structure_reuse.direct.choose_reuse.m"
      }
#line 954 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 954 "structure_reuse.direct.choose_reuse.m"
  }
#line 950 "structure_reuse.direct.choose_reuse.m"
}

#line 1054 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_2(
#line 1054 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 1054 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 1054 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 1054 "structure_reuse.direct.choose_reuse.m"
{
#line 1054 "structure_reuse.direct.choose_reuse.m"
  {
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6;

#line 1054 "structure_reuse.direct.choose_reuse.m"
    {
#line 1054 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__glb_reuse_types_2_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 1054 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_R_6));
#line 1054 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 1054 "structure_reuse.direct.choose_reuse.m"
  }
#line 1054 "structure_reuse.direct.choose_reuse.m"
}

#line 930 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1(
#line 930 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 930 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 930 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 930 "structure_reuse.direct.choose_reuse.m"
{
#line 930 "structure_reuse.direct.choose_reuse.m"
  {
#line 930 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 930 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 930 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12;

#line 930 "structure_reuse.direct.choose_reuse.m"
    {
#line 930 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_reuse_type_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12);
    }
#line 930 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 930 "structure_reuse.direct.choose_reuse.m"
      {
#line 930 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_ReuseType_12));
#line 930 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 930 "structure_reuse.direct.choose_reuse.m"
      }
#line 930 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 930 "structure_reuse.direct.choose_reuse.m"
  }
#line 930 "structure_reuse.direct.choose_reuse.m"
}

#line 921 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18,
#line 921 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19)
#line 921 "structure_reuse.direct.choose_reuse.m"
{
#line 924 "structure_reuse.direct.choose_reuse.m"
  {
#line 924 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 924 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 0)));
#line 925 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 1)));
#line 925 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
#line 925 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 3)));
#line 936 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16;
#line 931 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32;
#line 931 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15;
#line 931 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 931 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29;
#line 931 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30;
#line 931 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 1054 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16;

#line 930 "structure_reuse.direct.choose_reuse.m"
    {
#line 930 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 930 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_7[0]));
#line 930 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0_1));
#line 930 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 930 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8));
#line 930 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewVar_9));
#line 930 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCons_10));
#line 930 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 6) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewArgs_11));
#line 930 "structure_reuse.direct.choose_reuse.m"
    }
#line 930 "structure_reuse.direct.choose_reuse.m"
    {
#line 930 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__list__map_3_p_2((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_14, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15);
    }
#line 931 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 931 "structure_reuse.direct.choose_reuse.m"
      {
#line 1053 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15)) == (MR_mktag((MR_Integer) 1)));
#line 1053 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1053 "structure_reuse.direct.choose_reuse.m"
          {
#line 1053 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15, (MR_Integer) 0)));
#line 1053 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseTypes_15, (MR_Integer) 1)));
#line 8558 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_reuse_type_0;
#line 1054 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[21];
#line 1054 "structure_reuse.direct.choose_reuse.m"
            {
#line 1054 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16 = mercury__list__foldl_3_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_6_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_30, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_29)));
            }
#line 1054 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_ReuseType_16);
#line 1054 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 1053 "structure_reuse.direct.choose_reuse.m"
          }
#line 931 "structure_reuse.direct.choose_reuse.m"
      }
#line 936 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 934 "structure_reuse.direct.choose_reuse.m"
      {
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51;
#line 934 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52;
#line 349 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53;
#line 349 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54;
#line 349 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55;

#line 934 "structure_reuse.direct.choose_reuse.m"
        {
#line 934 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 934 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_12));
#line 934 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseType_16));
#line 934 "structure_reuse.direct.choose_reuse.m"
        }
#line 344 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 0)));
#line 344 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 1)));
#line 344 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 2)));
#line 344 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18, (MR_Integer) 3)));
#line 345 "structure_reuse.direct.choose_reuse.m"
        {
#line 345 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17));
#line 345 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs0_40));
#line 345 "structure_reuse.direct.choose_reuse.m"
        }
#line 346 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42 + (MR_Integer) 1);
#line 347 "structure_reuse.direct.choose_reuse.m"
        {
#line 347 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_42);
        }
#line 348 "structure_reuse.direct.choose_reuse.m"
        {
#line 348 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44);
        }
#line 349 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value0_41 * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree0_45);
#line 349 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, (MR_Integer) 0)));
#line 349 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpec_17, (MR_Integer) 1)));
#line 349 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 0)));
#line 349 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 1)));
#line 349 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52, (MR_Integer) 2)));
#line 349 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_51_51);
#line 349 "structure_reuse.direct.choose_reuse.m"
        {
#line 349 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FDegree_46);
        }
#line 350 "structure_reuse.direct.choose_reuse.m"
        {
#line 350 "structure_reuse.direct.choose_reuse.m"
          MR_Word base;
#line 350 "structure_reuse.direct.choose_reuse.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 350 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19 = base;
#line 350 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs0_39));
#line 350 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConSpecs_43));
#line 350 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_47);
#line 350 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_44));
#line 350 "structure_reuse.direct.choose_reuse.m"
        }
#line 934 "structure_reuse.direct.choose_reuse.m"
      }
#line 936 "structure_reuse.direct.choose_reuse.m"
    else
#line 936 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_18;
#line 924 "structure_reuse.direct.choose_reuse.m"
  }
#line 921 "structure_reuse.direct.choose_reuse.m"
}

#line 888 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(
#line 888 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1)
#line 888 "structure_reuse.direct.choose_reuse.m"
{
#line 890 "structure_reuse.direct.choose_reuse.m"
  {
#line 890 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 890 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 890 "structure_reuse.direct.choose_reuse.m"
  }
#line 888 "structure_reuse.direct.choose_reuse.m"
}

#line 884 "structure_reuse.direct.choose_reuse.m"
static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(
#line 884 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 884 "structure_reuse.direct.choose_reuse.m"
  MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5)
#line 884 "structure_reuse.direct.choose_reuse.m"
{
#line 886 "structure_reuse.direct.choose_reuse.m"
  {
#line 886 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 886 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 886 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 886 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 886 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 886 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));

#line 886 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3 = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree0_5 + transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6);
#line 886 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__3_3;
#line 886 "structure_reuse.direct.choose_reuse.m"
  }
#line 884 "structure_reuse.direct.choose_reuse.m"
}

#line 858 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0_1(
#line 858 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 858 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 858 "structure_reuse.direct.choose_reuse.m"
{
#line 858 "structure_reuse.direct.choose_reuse.m"
  {
#line 858 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 858 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 858 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_86;

#line 858 "structure_reuse.direct.choose_reuse.m"
    {
#line 858 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_86 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__find_match_in_goal_2__858__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 858 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_86));
#line 858 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 858 "structure_reuse.direct.choose_reuse.m"
  }
#line 858 "structure_reuse.direct.choose_reuse.m"
}

#line 811 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(
#line 811 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 811 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6,
#line 811 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71,
#line 811 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72)
#line 811 "structure_reuse.direct.choose_reuse.m"
{
#line 814 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 814 "structure_reuse.direct.choose_reuse.m"
    {
#line 814 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 814 "structure_reuse.direct.choose_reuse.m"
      {
#line 814 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 814 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6, (MR_Integer) 0)));
#line 814 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6, (MR_Integer) 1)));

#line 844 "structure_reuse.direct.choose_reuse.m"
#line 844 "structure_reuse.direct.choose_reuse.m"
        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8)) {
#line 844 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 844 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 868 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 844 "structure_reuse.direct.choose_reuse.m"
            break;
#line 844 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 817 "structure_reuse.direct.choose_reuse.m"
            {
#line 817 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 817 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)));
#line 817 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));
#line 817 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 817 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 4)));

#line 835 "structure_reuse.direct.choose_reuse.m"
#line 835 "structure_reuse.direct.choose_reuse.m"
              switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13)) {
#line 835 "structure_reuse.direct.choose_reuse.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 835 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 0:
#line 819 "structure_reuse.direct.choose_reuse.m"
                  {
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 0)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 1)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 2)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 3)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 4)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 5)));
#line 819 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 6)));
#line 821 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22;
#line 821 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 3)));
#line 821 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94;
#line 821 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95;
#line 821 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 0)));
#line 821 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 1)));
#line 821 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 2)));
#line 822 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_104_104;
#line 822 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_105_105;
#line 822 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106;

#line 821 "structure_reuse.direct.choose_reuse.m"
                    {
#line 821 "structure_reuse.direct.choose_reuse.m"
                      hlds__vartypes__lookup_var_type_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_93_93, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22);
                    }
#line 822 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 0)));
#line 822 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 1)));
#line 822 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 2)));
#line 822 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, (MR_Integer) 3)));
#line 822 "structure_reuse.direct.choose_reuse.m"
                    {
#line 822 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__util__top_cell_may_be_reusable_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_94_94, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarType_22);
                    }
#line 821 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 821 "structure_reuse.direct.choose_reuse.m"
                      {
#line 826 "structure_reuse.direct.choose_reuse.m"
                        {
#line 826 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9);
                        }
#line 826 "structure_reuse.direct.choose_reuse.m"
                        {
#line 826 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__empty_reuse_description_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_95_95);
                        }
#line 821 "structure_reuse.direct.choose_reuse.m"
                      }
#line 832 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 830 "structure_reuse.direct.choose_reuse.m"
                      {
#line 830 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96;

#line 831 "structure_reuse.direct.choose_reuse.m"
                        {
#line 831 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_9);
                        }
#line 830 "structure_reuse.direct.choose_reuse.m"
                        {
#line 830 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__verify_match_7_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cons_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_96_96, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
                        }
#line 830 "structure_reuse.direct.choose_reuse.m"
                      }
#line 832 "structure_reuse.direct.choose_reuse.m"
                    else
#line 832 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 819 "structure_reuse.direct.choose_reuse.m"
                  }
#line 835 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 835 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 1:
#line 836 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 835 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 835 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 2:
#line 837 "structure_reuse.direct.choose_reuse.m"
                  *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 835 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 835 "structure_reuse.direct.choose_reuse.m"
                case (MR_Integer) 3:
#line 835 "structure_reuse.direct.choose_reuse.m"
#line 835 "structure_reuse.direct.choose_reuse.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_13, (MR_Integer) 0)))) {
#line 835 "structure_reuse.direct.choose_reuse.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 835 "structure_reuse.direct.choose_reuse.m"
                    case (MR_Integer) 0:
#line 838 "structure_reuse.direct.choose_reuse.m"
                      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 835 "structure_reuse.direct.choose_reuse.m"
                      break;
#line 835 "structure_reuse.direct.choose_reuse.m"
                    case (MR_Integer) 1:
#line 841 "structure_reuse.direct.choose_reuse.m"
                      {
#line 842 "structure_reuse.direct.choose_reuse.m"
                        {
#line 842 "structure_reuse.direct.choose_reuse.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "complicated unify");
#line 842 "structure_reuse.direct.choose_reuse.m"
                          return;
                        }
#line 841 "structure_reuse.direct.choose_reuse.m"
                      }
#line 835 "structure_reuse.direct.choose_reuse.m"
                      break;
#line 835 "structure_reuse.direct.choose_reuse.m"
                  }
#line 835 "structure_reuse.direct.choose_reuse.m"
                  break;
#line 835 "structure_reuse.direct.choose_reuse.m"
              }
#line 817 "structure_reuse.direct.choose_reuse.m"
            }
#line 844 "structure_reuse.direct.choose_reuse.m"
            break;
#line 844 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 845 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 844 "structure_reuse.direct.choose_reuse.m"
            break;
#line 844 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 844 "structure_reuse.direct.choose_reuse.m"
#line 844 "structure_reuse.direct.choose_reuse.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 0)))) {
#line 844 "structure_reuse.direct.choose_reuse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 844 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 0:
#line 847 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 844 "structure_reuse.direct.choose_reuse.m"
                break;
#line 844 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 1:
#line 849 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71;
#line 844 "structure_reuse.direct.choose_reuse.m"
                break;
#line 844 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 2:
#line 851 "structure_reuse.direct.choose_reuse.m"
                {
#line 851 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 851 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 852 "structure_reuse.direct.choose_reuse.m"
                  {
#line 852 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_55, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
                  }
#line 851 "structure_reuse.direct.choose_reuse.m"
                }
#line 844 "structure_reuse.direct.choose_reuse.m"
                break;
#line 844 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 3:
#line 854 "structure_reuse.direct.choose_reuse.m"
                {
#line 854 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 855 "structure_reuse.direct.choose_reuse.m"
                  {
#line 855 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_98, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
                  }
#line 854 "structure_reuse.direct.choose_reuse.m"
                }
#line 844 "structure_reuse.direct.choose_reuse.m"
                break;
#line 844 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 4:
#line 857 "structure_reuse.direct.choose_reuse.m"
                {
#line 857 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 857 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100;
#line 857 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));
#line 857 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));

#line 858 "structure_reuse.direct.choose_reuse.m"
                  {
#line 858 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[20], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_58);
                  }
#line 859 "structure_reuse.direct.choose_reuse.m"
                  {
#line 859 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_100, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
                  }
#line 857 "structure_reuse.direct.choose_reuse.m"
                }
#line 844 "structure_reuse.direct.choose_reuse.m"
                break;
#line 844 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 5:
#line 870 "structure_reuse.direct.choose_reuse.m"
                {
#line 870 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 870 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 874 "structure_reuse.direct.choose_reuse.m"
                  /* direct tailcall eliminated */
#line 874 "structure_reuse.direct.choose_reuse.m"
                  {
#line 874 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal__tmp_copy_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ScopeGoal_69;

#line 874 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal__tmp_copy_6;
#line 874 "structure_reuse.direct.choose_reuse.m"
                  }
#line 874 "structure_reuse.direct.choose_reuse.m"
                  continue;
#line 870 "structure_reuse.direct.choose_reuse.m"
                }
#line 844 "structure_reuse.direct.choose_reuse.m"
                break;
#line 844 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 6:
#line 861 "structure_reuse.direct.choose_reuse.m"
                {
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 2)));
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 3)));
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 4)));
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65;
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66;
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82;
#line 861 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_8, (MR_Integer) 1)));

#line 863 "structure_reuse.direct.choose_reuse.m"
                  {
#line 863 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_62));
#line 863 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "structure_reuse.direct.choose_reuse.m"
                  }
#line 863 "structure_reuse.direct.choose_reuse.m"
                  {
#line 863 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_61));
#line 863 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 863 "structure_reuse.direct.choose_reuse.m"
                  }
#line 863 "structure_reuse.direct.choose_reuse.m"
                  {
#line 863 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65);
                  }
#line 865 "structure_reuse.direct.choose_reuse.m"
                  {
#line 865 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_63, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66);
                  }
#line 866 "structure_reuse.direct.choose_reuse.m"
                  {
#line 866 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchElse_66));
#line 866 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "structure_reuse.direct.choose_reuse.m"
                  }
#line 866 "structure_reuse.direct.choose_reuse.m"
                  {
#line 866 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchThen_65));
#line 866 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_82_82));
#line 866 "structure_reuse.direct.choose_reuse.m"
                  }
#line 866 "structure_reuse.direct.choose_reuse.m"
                  {
#line 866 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_72);
                  }
#line 861 "structure_reuse.direct.choose_reuse.m"
                }
#line 844 "structure_reuse.direct.choose_reuse.m"
                break;
#line 844 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 7:
#line 876 "structure_reuse.direct.choose_reuse.m"
                {
#line 877 "structure_reuse.direct.choose_reuse.m"
                  {
#line 877 "structure_reuse.direct.choose_reuse.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.find_match_in_goal_2\'/4", (MR_String) "shorthand");
#line 877 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 876 "structure_reuse.direct.choose_reuse.m"
                }
#line 844 "structure_reuse.direct.choose_reuse.m"
                break;
#line 844 "structure_reuse.direct.choose_reuse.m"
            }
#line 844 "structure_reuse.direct.choose_reuse.m"
            break;
#line 844 "structure_reuse.direct.choose_reuse.m"
        }
#line 814 "structure_reuse.direct.choose_reuse.m"
      }
#line 814 "structure_reuse.direct.choose_reuse.m"
      break;
#line 814 "structure_reuse.direct.choose_reuse.m"
    }
#line 811 "structure_reuse.direct.choose_reuse.m"
}

#line 805 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(
#line 805 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 805 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6,
#line 805 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 805 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8)
#line 805 "structure_reuse.direct.choose_reuse.m"
{
#line 809 "structure_reuse.direct.choose_reuse.m"
  {
#line 809 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 809 "structure_reuse.direct.choose_reuse.m"
    {
#line 809 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_2_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_8);
    }
#line 809 "structure_reuse.direct.choose_reuse.m"
  }
#line 805 "structure_reuse.direct.choose_reuse.m"
}

#line 437 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_2(
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 437 "structure_reuse.direct.choose_reuse.m"
{
#line 437 "structure_reuse.direct.choose_reuse.m"
  {
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_LambdaHeadVar__3_23;

#line 437 "structure_reuse.direct.choose_reuse.m"
    {
#line 437 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__437__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_LambdaHeadVar__3_23);
    }
#line 437 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_LambdaHeadVar__3_23));
#line 437 "structure_reuse.direct.choose_reuse.m"
  }
#line 437 "structure_reuse.direct.choose_reuse.m"
}

#line 800 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1(
#line 800 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 800 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 800 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 800 "structure_reuse.direct.choose_reuse.m"
{
#line 800 "structure_reuse.direct.choose_reuse.m"
  {
#line 800 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 800 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8;

#line 800 "structure_reuse.direct.choose_reuse.m"
    {
#line 800 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8);
    }
#line 800 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8));
#line 800 "structure_reuse.direct.choose_reuse.m"
  }
#line 800 "structure_reuse.direct.choose_reuse.m"
}

#line 792 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0(
#line 792 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 792 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6,
#line 792 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 792 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12)
#line 792 "structure_reuse.direct.choose_reuse.m"
{
#line 797 "structure_reuse.direct.choose_reuse.m"
  {
#line 797 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 797 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11;
#line 797 "structure_reuse.direct.choose_reuse.m"
    else
#line 799 "structure_reuse.direct.choose_reuse.m"
      {
#line 799 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10;
#line 799 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;

#line 800 "structure_reuse.direct.choose_reuse.m"
        {
#line 800 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 800 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 800 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_disjunction_4_p_0_1));
#line 800 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 800 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 800 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 800 "structure_reuse.direct.choose_reuse.m"
        }
#line 800 "structure_reuse.direct.choose_reuse.m"
        {
#line 800 "structure_reuse.direct.choose_reuse.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Branches_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10);
        }
#line 435 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "structure_reuse.direct.choose_reuse.m"
          {
#line 449 "structure_reuse.direct.choose_reuse.m"
            {
#line 449 "structure_reuse.direct.choose_reuse.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
#line 449 "structure_reuse.direct.choose_reuse.m"
              return;
            }
#line 448 "structure_reuse.direct.choose_reuse.m"
          }
#line 435 "structure_reuse.direct.choose_reuse.m"
        else
#line 435 "structure_reuse.direct.choose_reuse.m"
          {
#line 435 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 435 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, (MR_Integer) 0)));
#line 435 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, (MR_Integer) 1)));
#line 435 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23;
#line 435 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31;
#line 435 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;
#line 435 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48;
#line 435 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49;
#line 444 "structure_reuse.direct.choose_reuse.m"
            MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31;
#line 446 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74;
#line 446 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75;
#line 446 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;
#line 445 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 445 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 445 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80;
#line 445 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79;

#line 436 "structure_reuse.direct.choose_reuse.m"
            {
#line 436 "structure_reuse.direct.choose_reuse.m"
              mercury__list__length_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BranchMatches_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23);
            }
#line 444 "structure_reuse.direct.choose_reuse.m"
            {
#line 444 "structure_reuse.direct.choose_reuse.m"
              mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_81, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[19], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_22, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_21)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31);
            }
#line 444 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match0_31);
#line 446 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 0)));
#line 446 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 1)));
#line 446 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 2)));
#line 446 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 3)));
#line 446 "structure_reuse.direct.choose_reuse.m"
            {
#line 446 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_23);
            }
#line 446 "structure_reuse.direct.choose_reuse.m"
            {
#line 446 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49);
            }
#line 445 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 0)));
#line 445 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 1)));
#line 445 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_79_79 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 2)));
#line 445 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_31, (MR_Integer) 3)));
#line 445 "structure_reuse.direct.choose_reuse.m"
            {
#line 445 "structure_reuse.direct.choose_reuse.m"
              MR_Word base;
#line 445 "structure_reuse.direct.choose_reuse.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 445 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = base;
#line 445 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77));
#line 445 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 445 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47);
#line 445 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_80_80));
#line 445 "structure_reuse.direct.choose_reuse.m"
            }
#line 435 "structure_reuse.direct.choose_reuse.m"
          }
#line 799 "structure_reuse.direct.choose_reuse.m"
      }
#line 797 "structure_reuse.direct.choose_reuse.m"
  }
#line 792 "structure_reuse.direct.choose_reuse.m"
}

#line 417 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_3(
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 417 "structure_reuse.direct.choose_reuse.m"
{
#line 417 "structure_reuse.direct.choose_reuse.m"
  {
#line 417 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 417 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6;

#line 417 "structure_reuse.direct.choose_reuse.m"
    {
#line 417 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6);
    }
#line 417 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_Result_6));
#line 417 "structure_reuse.direct.choose_reuse.m"
  }
#line 417 "structure_reuse.direct.choose_reuse.m"
}

#line 882 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_2(
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 882 "structure_reuse.direct.choose_reuse.m"
{
#line 882 "structure_reuse.direct.choose_reuse.m"
  {
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3;

#line 882 "structure_reuse.direct.choose_reuse.m"
    {
#line 882 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 882 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_3));
#line 882 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 882 "structure_reuse.direct.choose_reuse.m"
  }
#line 882 "structure_reuse.direct.choose_reuse.m"
}

#line 780 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1(
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 780 "structure_reuse.direct.choose_reuse.m"
{
#line 780 "structure_reuse.direct.choose_reuse.m"
  {
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8;

#line 780 "structure_reuse.direct.choose_reuse.m"
    {
#line 780 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8);
    }
#line 780 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Match_8));
#line 780 "structure_reuse.direct.choose_reuse.m"
  }
#line 780 "structure_reuse.direct.choose_reuse.m"
}

#line 775 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(
#line 775 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 775 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6,
#line 775 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11,
#line 775 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12)
#line 775 "structure_reuse.direct.choose_reuse.m"
{
#line 778 "structure_reuse.direct.choose_reuse.m"
  {
#line 778 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 778 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9;
#line 778 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10;
#line 778 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13;
#line 778 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14;
#line 778 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35;
#line 778 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10;
#line 783 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 783 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17;
#line 783 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 783 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19;

#line 780 "structure_reuse.direct.choose_reuse.m"
    {
#line 780 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0_1));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 780 "structure_reuse.direct.choose_reuse.m"
    }
#line 780 "structure_reuse.direct.choose_reuse.m"
    {
#line 780 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_6, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9);
    }
#line 882 "structure_reuse.direct.choose_reuse.m"
    {
#line 882 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[17], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9, ((MR_Box) ((MR_Integer) 0)));
    }
#line 882 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10 = ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Degree_10);
#line 417 "structure_reuse.direct.choose_reuse.m"
    {
#line 417 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_0_11));
#line 417 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_9));
#line 417 "structure_reuse.direct.choose_reuse.m"
    }
#line 417 "structure_reuse.direct.choose_reuse.m"
    {
#line 417 "structure_reuse.direct.choose_reuse.m"
      mercury__list__sort_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[18], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35);
    }
#line 420 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "structure_reuse.direct.choose_reuse.m"
      {
#line 422 "structure_reuse.direct.choose_reuse.m"
        {
#line 422 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
#line 422 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 421 "structure_reuse.direct.choose_reuse.m"
      }
#line 420 "structure_reuse.direct.choose_reuse.m"
    else
#line 419 "structure_reuse.direct.choose_reuse.m"
      {
#line 419 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36;

#line 419 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35, (MR_Integer) 0)));
#line 419 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_35, (MR_Integer) 1)));
#line 419 "structure_reuse.direct.choose_reuse.m"
      }
#line 783 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 0)));
#line 783 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 1)));
#line 783 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 2)));
#line 783 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_14, (MR_Integer) 3)));
#line 783 "structure_reuse.direct.choose_reuse.m"
    {
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_Word base;
#line 783 "structure_reuse.direct.choose_reuse.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 783 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_12 = base;
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16));
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17));
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18);
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_10));
#line 783 "structure_reuse.direct.choose_reuse.m"
    }
#line 778 "structure_reuse.direct.choose_reuse.m"
  }
#line 775 "structure_reuse.direct.choose_reuse.m"
}

#line 749 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(
#line 749 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3)
#line 749 "structure_reuse.direct.choose_reuse.m"
{
#line 751 "structure_reuse.direct.choose_reuse.m"
  {
#line 751 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 751 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 0)));
#line 751 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 1)));
#line 751 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 2)));
#line 751 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 3)));

#line 751 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 751 "structure_reuse.direct.choose_reuse.m"
  }
#line 749 "structure_reuse.direct.choose_reuse.m"
}

#line 746 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0_1(
#line 746 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 746 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 746 "structure_reuse.direct.choose_reuse.m"
{
#line 746 "structure_reuse.direct.choose_reuse.m"
  {
#line 746 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 746 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 746 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2;

#line 746 "structure_reuse.direct.choose_reuse.m"
    {
#line 746 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_decon_specs_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 746 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__2_2));
#line 746 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 746 "structure_reuse.direct.choose_reuse.m"
  }
#line 746 "structure_reuse.direct.choose_reuse.m"
}

#line 741 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(
#line 741 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5,
#line 741 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6,
#line 741 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10,
#line 741 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11)
#line 741 "structure_reuse.direct.choose_reuse.m"
{
#line 744 "structure_reuse.direct.choose_reuse.m"
  {
#line 744 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 744 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 744 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17;
#line 744 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8;
#line 744 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9;
#line 744 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 745 "structure_reuse.direct.choose_reuse.m"
    {
#line 745 "structure_reuse.direct.choose_reuse.m"
      mercury__multi_map__lookup_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadVar_5)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8);
    }
#line 9806 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0;
#line 746 "structure_reuse.direct.choose_reuse.m"
    {
#line 746 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = mercury__list__map_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[16], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_8);
    }
#line 746 "structure_reuse.direct.choose_reuse.m"
    {
#line 746 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9 = mercury__list__condense_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12);
    }
#line 747 "structure_reuse.direct.choose_reuse.m"
    {
#line 747 "structure_reuse.direct.choose_reuse.m"
      mercury__list__append_3_p_1(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_17_17, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewSpecs_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_0_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeconstructionSpecs_11);
    }
#line 744 "structure_reuse.direct.choose_reuse.m"
  }
#line 741 "structure_reuse.direct.choose_reuse.m"
}

#line 417 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_4(
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 417 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 417 "structure_reuse.direct.choose_reuse.m"
{
#line 417 "structure_reuse.direct.choose_reuse.m"
  {
#line 417 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 417 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6;

#line 417 "structure_reuse.direct.choose_reuse.m"
    {
#line 417 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6);
    }
#line 417 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Result_6));
#line 417 "structure_reuse.direct.choose_reuse.m"
  }
#line 417 "structure_reuse.direct.choose_reuse.m"
}

#line 882 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_3(
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 882 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 882 "structure_reuse.direct.choose_reuse.m"
{
#line 882 "structure_reuse.direct.choose_reuse.m"
  {
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3;

#line 882 "structure_reuse.direct.choose_reuse.m"
    {
#line 882 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__add_degree_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 882 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_HeadVar__3_3));
#line 882 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 882 "structure_reuse.direct.choose_reuse.m"
  }
#line 882 "structure_reuse.direct.choose_reuse.m"
}

#line 780 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2(
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 780 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 780 "structure_reuse.direct.choose_reuse.m"
{
#line 780 "structure_reuse.direct.choose_reuse.m"
  {
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 780 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8;

#line 780 "structure_reuse.direct.choose_reuse.m"
    {
#line 780 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_match_in_goal_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8);
    }
#line 780 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Match_8));
#line 780 "structure_reuse.direct.choose_reuse.m"
  }
#line 780 "structure_reuse.direct.choose_reuse.m"
}

#line 738 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1(
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 738 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 738 "structure_reuse.direct.choose_reuse.m"
{
#line 738 "structure_reuse.direct.choose_reuse.m"
  {
#line 738 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 738 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11;

#line 738 "structure_reuse.direct.choose_reuse.m"
    {
#line 738 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_specs_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11);
    }
#line 738 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeconstructionSpecs_11));
#line 738 "structure_reuse.direct.choose_reuse.m"
  }
#line 738 "structure_reuse.direct.choose_reuse.m"
}

#line 724 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7,
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8,
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9,
#line 724 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10)
#line 724 "structure_reuse.direct.choose_reuse.m"
{
#line 727 "structure_reuse.direct.choose_reuse.m"
  {
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74;
#line 727 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 738 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14;
#line 882 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38;
#line 783 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42;
#line 783 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45;
#line 411 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75;
#line 411 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76;

#line 738 "structure_reuse.direct.choose_reuse.m"
    {
#line 738 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 738 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[1]));
#line 738 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_1));
#line 738 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 738 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9));
#line 738 "structure_reuse.direct.choose_reuse.m"
    }
#line 738 "structure_reuse.direct.choose_reuse.m"
    {
#line 738 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[3], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14);
    }
#line 738 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_V_14_14);
#line 277 "structure_reuse.direct.choose_reuse.m"
    {
#line 277 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 277 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14));
#line 277 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 277 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11, 3) = ((MR_Box) ((MR_Integer) 0));
#line 277 "structure_reuse.direct.choose_reuse.m"
    }
#line 780 "structure_reuse.direct.choose_reuse.m"
    {
#line 780 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[2]));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0_2));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6));
#line 780 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11));
#line 780 "structure_reuse.direct.choose_reuse.m"
    }
#line 780 "structure_reuse.direct.choose_reuse.m"
    {
#line 780 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_39_39, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37);
    }
#line 882 "structure_reuse.direct.choose_reuse.m"
    {
#line 882 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[14], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37, ((MR_Box) ((MR_Integer) 0)));
    }
#line 882 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38 = ((MR_Integer) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_Degree_38);
#line 417 "structure_reuse.direct.choose_reuse.m"
    {
#line 417 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_11));
#line 417 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExclusiveMatches_37));
#line 417 "structure_reuse.direct.choose_reuse.m"
    }
#line 417 "structure_reuse.direct.choose_reuse.m"
    {
#line 417 "structure_reuse.direct.choose_reuse.m"
      mercury__list__sort_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[15], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61);
    }
#line 420 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "structure_reuse.direct.choose_reuse.m"
      {
#line 422 "structure_reuse.direct.choose_reuse.m"
        {
#line 422 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_in_list\'/3", (MR_String) "empty list of matches");
        }
#line 421 "structure_reuse.direct.choose_reuse.m"
      }
#line 420 "structure_reuse.direct.choose_reuse.m"
    else
#line 419 "structure_reuse.direct.choose_reuse.m"
      {
#line 419 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;

#line 419 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61, (MR_Integer) 0)));
#line 419 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_61, (MR_Integer) 1)));
#line 419 "structure_reuse.direct.choose_reuse.m"
      }
#line 783 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 0)));
#line 783 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 1)));
#line 783 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 2)));
#line 783 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Match_14_40, (MR_Integer) 3)));
#line 783 "structure_reuse.direct.choose_reuse.m"
    {
#line 783 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_42_42));
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73));
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74);
#line 783 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Degree_38));
#line 783 "structure_reuse.direct.choose_reuse.m"
    }
#line 411 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73)) == (MR_mktag((MR_Integer) 1)));
#line 411 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 411 "structure_reuse.direct.choose_reuse.m"
      {
#line 411 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73, (MR_Integer) 0)));
#line 411 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Constructions_73, (MR_Integer) 1)));
#line 412 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Float) 0.0000000000000000;
#line 412 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Value_74 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77);
#line 727 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 727 "structure_reuse.direct.choose_reuse.m"
          {
#line 10162 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 10164 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 731 "structure_reuse.direct.choose_reuse.m"
            {
#line 731 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__init_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13);
            }
#line 732 "structure_reuse.direct.choose_reuse.m"
            {
#line 732 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__det_insert_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_16_16, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVar_9)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_12)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_13, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_10);
            }
#line 732 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 727 "structure_reuse.direct.choose_reuse.m"
          }
#line 411 "structure_reuse.direct.choose_reuse.m"
      }
#line 727 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 727 "structure_reuse.direct.choose_reuse.m"
  }
#line 724 "structure_reuse.direct.choose_reuse.m"
}

#line 717 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(
#line 717 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4,
#line 717 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5)
#line 717 "structure_reuse.direct.choose_reuse.m"
{
#line 719 "structure_reuse.direct.choose_reuse.m"
  {
#line 719 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 719 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6;
#line 719 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 719 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7;
#line 719 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8;
#line 719 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9;
#line 719 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;

#line 720 "structure_reuse.direct.choose_reuse.m"
    {
#line 720 "structure_reuse.direct.choose_reuse.m"
      mercury__map__keys_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table_4, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7);
    }
#line 721 "structure_reuse.direct.choose_reuse.m"
    {
#line 721 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = mercury__set__list_to_set_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List0_5);
    }
#line 721 "structure_reuse.direct.choose_reuse.m"
    {
#line 721 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = mercury__set__list_to_set_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Keys_7);
    }
#line 721 "structure_reuse.direct.choose_reuse.m"
    {
#line 721 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8 = mercury__set__intersect_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10);
    }
#line 722 "structure_reuse.direct.choose_reuse.m"
    {
#line 722 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6 = mercury__set__to_sorted_list_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_11_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Set_8);
    }
#line 719 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_6;
#line 719 "structure_reuse.direct.choose_reuse.m"
  }
#line 717 "structure_reuse.direct.choose_reuse.m"
}

#line 698 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2(
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 698 "structure_reuse.direct.choose_reuse.m"
{
#line 698 "structure_reuse.direct.choose_reuse.m"
  {
#line 698 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 698 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 698 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10;

#line 698 "structure_reuse.direct.choose_reuse.m"
    {
#line 698 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10);
    }
#line 698 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 698 "structure_reuse.direct.choose_reuse.m"
      {
#line 698 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Table_10));
#line 698 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 698 "structure_reuse.direct.choose_reuse.m"
      }
#line 698 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 698 "structure_reuse.direct.choose_reuse.m"
  }
#line 698 "structure_reuse.direct.choose_reuse.m"
}

#line 710 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_1(
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 710 "structure_reuse.direct.choose_reuse.m"
{
#line 710 "structure_reuse.direct.choose_reuse.m"
  {
#line 710 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 710 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 710 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6;

#line 710 "structure_reuse.direct.choose_reuse.m"
    {
#line 710 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 710 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_List_6));
#line 710 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 710 "structure_reuse.direct.choose_reuse.m"
  }
#line 710 "structure_reuse.direct.choose_reuse.m"
}

#line 690 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(
#line 690 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 690 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6,
#line 690 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7,
#line 690 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8)
#line 690 "structure_reuse.direct.choose_reuse.m"
{
#line 10336 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  {
#line 10338 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 10341 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10345 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    else
#line 10347 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      {
#line 10349 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7, (MR_Integer) 0)));
#line 10351 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7, (MR_Integer) 1)));
#line 10353 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 10355 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30;
#line 710 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30;

#line 711 "structure_reuse.direct.choose_reuse.m"
        {
#line 711 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = mercury__map__keys_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_19);
        }
#line 710 "structure_reuse.direct.choose_reuse.m"
        {
#line 710 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[13], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_20, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22)));
        }
#line 710 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_CommonDeadVars_30);
#line 700 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "structure_reuse.direct.choose_reuse.m"
        else
#line 697 "structure_reuse.direct.choose_reuse.m"
          {
#line 697 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12;

#line 698 "structure_reuse.direct.choose_reuse.m"
            {
#line 698 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0_2));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_6));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_7));
#line 698 "structure_reuse.direct.choose_reuse.m"
            }
#line 698 "structure_reuse.direct.choose_reuse.m"
            {
#line 698 "structure_reuse.direct.choose_reuse.m"
              mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_30, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ExtraTables_8);
            }
#line 697 "structure_reuse.direct.choose_reuse.m"
          }
#line 10408 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      }
#line 10410 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
  }
#line 690 "structure_reuse.direct.choose_reuse.m"
}

#line 688 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_5(
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 688 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 688 "structure_reuse.direct.choose_reuse.m"
{
#line 688 "structure_reuse.direct.choose_reuse.m"
  {
#line 688 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 688 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28;

#line 688 "structure_reuse.direct.choose_reuse.m"
    {
#line 688 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__688__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28);
    }
#line 688 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv6_HeadVar__3_28));
#line 688 "structure_reuse.direct.choose_reuse.m"
  }
#line 688 "structure_reuse.direct.choose_reuse.m"
}

#line 698 "structure_reuse.direct.choose_reuse.m"
static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4(
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 698 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 698 "structure_reuse.direct.choose_reuse.m"
{
#line 698 "structure_reuse.direct.choose_reuse.m"
  {
#line 698 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 698 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 698 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10;

#line 698 "structure_reuse.direct.choose_reuse.m"
    {
#line 698 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_common_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10);
    }
#line 698 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 698 "structure_reuse.direct.choose_reuse.m"
      {
#line 698 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv5_Table_10));
#line 698 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = MR_TRUE;
#line 698 "structure_reuse.direct.choose_reuse.m"
      }
#line 698 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 698 "structure_reuse.direct.choose_reuse.m"
  }
#line 698 "structure_reuse.direct.choose_reuse.m"
}

#line 710 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_3(
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 710 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 710 "structure_reuse.direct.choose_reuse.m"
{
#line 710 "structure_reuse.direct.choose_reuse.m"
  {
#line 710 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 710 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 710 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6;

#line 710 "structure_reuse.direct.choose_reuse.m"
    {
#line 710 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__common_var_with_list_2_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2));
    }
#line 710 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv3_List_6));
#line 710 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3;
#line 710 "structure_reuse.direct.choose_reuse.m"
  }
#line 710 "structure_reuse.direct.choose_reuse.m"
}

#line 680 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_2(
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 680 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 680 "structure_reuse.direct.choose_reuse.m"
{
#line 680 "structure_reuse.direct.choose_reuse.m"
  {
#line 680 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 680 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22;

#line 680 "structure_reuse.direct.choose_reuse.m"
    {
#line 680 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_in_disjunction__680__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22);
    }
#line 680 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__3_22));
#line 680 "structure_reuse.direct.choose_reuse.m"
  }
#line 680 "structure_reuse.direct.choose_reuse.m"
}

#line 665 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1(
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 665 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2)
#line 665 "structure_reuse.direct.choose_reuse.m"
{
#line 665 "structure_reuse.direct.choose_reuse.m"
  {
#line 665 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 665 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8;

#line 665 "structure_reuse.direct.choose_reuse.m"
    {
#line 665 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8);
    }
#line 665 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_MatchTable_8));
#line 665 "structure_reuse.direct.choose_reuse.m"
  }
#line 665 "structure_reuse.direct.choose_reuse.m"
}

#line 668 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14,
#line 668 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15)
#line 668 "structure_reuse.direct.choose_reuse.m"
{
#line 673 "structure_reuse.direct.choose_reuse.m"
  {
#line 673 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 673 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25;
#line 673 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12;
#line 673 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13;
#line 673 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17;
#line 673 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35;
#line 680 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17;
#line 688 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15;

#line 665 "structure_reuse.direct.choose_reuse.m"
    {
#line 665 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 665 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_6[0]));
#line 665 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_1));
#line 665 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 665 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7));
#line 665 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8));
#line 665 "structure_reuse.direct.choose_reuse.m"
    }
#line 665 "structure_reuse.direct.choose_reuse.m"
    {
#line 665 "structure_reuse.direct.choose_reuse.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjGoals_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12);
    }
#line 10642 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
#line 680 "structure_reuse.direct.choose_reuse.m"
    {
#line 680 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[10], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_14)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17);
    }
#line 680 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_STATE_VARIABLE_Table_17_17);
#line 10651 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10655 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
    else
#line 10657 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      {
#line 10659 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, (MR_Integer) 0)));
#line 10661 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12, (MR_Integer) 1)));
#line 10663 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 10665 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65;
#line 710 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65;

#line 711 "structure_reuse.direct.choose_reuse.m"
        {
#line 711 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = mercury__map__keys_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_54);
        }
#line 710 "structure_reuse.direct.choose_reuse.m"
        {
#line 710 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65 = mercury__list__foldl_3_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[2], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[11], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RestTables_55, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57)));
        }
#line 710 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv4_CommonDeadVars_65);
#line 700 "structure_reuse.direct.choose_reuse.m"
        if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 700 "structure_reuse.direct.choose_reuse.m"
        else
#line 697 "structure_reuse.direct.choose_reuse.m"
          {
#line 697 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47;

#line 698 "structure_reuse.direct.choose_reuse.m"
            {
#line 698 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[1]));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0_4));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10));
#line 698 "structure_reuse.direct.choose_reuse.m"
              MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, 5) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DisjTables_12));
#line 698 "structure_reuse.direct.choose_reuse.m"
            }
#line 698 "structure_reuse.direct.choose_reuse.m"
            {
#line 698 "structure_reuse.direct.choose_reuse.m"
              mercury__list__filter_map_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_47_47, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVars_65, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13);
            }
#line 697 "structure_reuse.direct.choose_reuse.m"
          }
#line 10718 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
      }
#line 688 "structure_reuse.direct.choose_reuse.m"
    {
#line 688 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_25_25, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[12], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsDisjTables_13, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_17_17)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15);
    }
#line 688 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv7_STATE_VARIABLE_Table_15);
#line 673 "structure_reuse.direct.choose_reuse.m"
  }
#line 668 "structure_reuse.direct.choose_reuse.m"
}

#line 622 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_2(
#line 622 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 622 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 622 "structure_reuse.direct.choose_reuse.m"
{
#line 622 "structure_reuse.direct.choose_reuse.m"
  {
#line 622 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 622 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 622 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_LambdaHeadVar__2_89;

#line 622 "structure_reuse.direct.choose_reuse.m"
    {
#line 622 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_LambdaHeadVar__2_89 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__compute_match_table_with_continuation__622__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 622 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_LambdaHeadVar__2_89));
#line 622 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 622 "structure_reuse.direct.choose_reuse.m"
  }
#line 622 "structure_reuse.direct.choose_reuse.m"
}

#line 652 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0_1(
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 652 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 652 "structure_reuse.direct.choose_reuse.m"
{
#line 652 "structure_reuse.direct.choose_reuse.m"
  {
#line 652 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 652 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117;

#line 652 "structure_reuse.direct.choose_reuse.m"
    {
#line 652 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__compute_match_table_with_continuation__652__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117);
    }
#line 652 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_HeadVar__3_117));
#line 652 "structure_reuse.direct.choose_reuse.m"
  }
#line 652 "structure_reuse.direct.choose_reuse.m"
}

#line 569 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67,
#line 569 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68)
#line 569 "structure_reuse.direct.choose_reuse.m"
{
#line 574 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 574 "structure_reuse.direct.choose_reuse.m"
    {
#line 574 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 574 "structure_reuse.direct.choose_reuse.m"
      {
#line 574 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 574 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9, (MR_Integer) 0)));
#line 574 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9, (MR_Integer) 1)));

#line 598 "structure_reuse.direct.choose_reuse.m"
#line 598 "structure_reuse.direct.choose_reuse.m"
        switch (MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12)) {
#line 598 "structure_reuse.direct.choose_reuse.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 598 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 0:
#line 627 "structure_reuse.direct.choose_reuse.m"
            {
#line 627 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_56 = (MR_Word) MR_body(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12), (MR_Integer) 0);
#line 627 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85;

#line 630 "structure_reuse.direct.choose_reuse.m"
              {
#line 630 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85);
              }
#line 632 "structure_reuse.direct.choose_reuse.m"
              {
#line 632 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_85_85, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
              }
#line 627 "structure_reuse.direct.choose_reuse.m"
            }
#line 598 "structure_reuse.direct.choose_reuse.m"
            break;
#line 598 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 1:
#line 577 "structure_reuse.direct.choose_reuse.m"
            {
#line 577 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 577 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100;
#line 577 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)));
#line 577 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 577 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 577 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 4)));
#line 594 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19;
#line 594 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20;
#line 594 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21;
#line 578 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22;
#line 578 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23;
#line 578 "structure_reuse.direct.choose_reuse.m"
              MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24;

#line 578 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = ((MR_tag((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17)) == (MR_mktag((MR_Integer) 1)));
#line 578 "structure_reuse.direct.choose_reuse.m"
              if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 578 "structure_reuse.direct.choose_reuse.m"
                {
#line 578 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 0)));
#line 578 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 1)));
#line 578 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 2)));
#line 578 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 3)));
#line 578 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 4)));
#line 578 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Unification_17, (MR_Integer) 5)));
#line 580 "structure_reuse.direct.choose_reuse.m"
                  {
#line 580 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25;
#line 591 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26;

#line 580 "structure_reuse.direct.choose_reuse.m"
                    {
#line 580 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25 = transform_hlds__smm_common__program_point_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalInfo_13);
                    }
#line 582 "structure_reuse.direct.choose_reuse.m"
                    {
#line 582 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_search_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26);
                    }
#line 591 "structure_reuse.direct.choose_reuse.m"
                    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 584 "structure_reuse.direct.choose_reuse.m"
                      {
#line 584 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27;
#line 584 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28;
#line 584 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29;
#line 584 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30;
#line 584 "structure_reuse.direct.choose_reuse.m"
                        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98;

#line 584 "structure_reuse.direct.choose_reuse.m"
                        {
#line 584 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_with_one_condition_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_26);
                        }
#line 585 "structure_reuse.direct.choose_reuse.m"
                        {
#line 585 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProgramPoint_25, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_27);
                        }
#line 587 "structure_reuse.direct.choose_reuse.m"
                        {
#line 587 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconstructionSpec_28));
#line 587 "structure_reuse.direct.choose_reuse.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 587 "structure_reuse.direct.choose_reuse.m"
                        }
#line 587 "structure_reuse.direct.choose_reuse.m"
                        {
#line 587 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_98_98);
                        }
#line 588 "structure_reuse.direct.choose_reuse.m"
                        {
#line 588 "structure_reuse.direct.choose_reuse.m"
                          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__find_best_match_in_conjunction_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_29, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30);
                        }
#line 590 "structure_reuse.direct.choose_reuse.m"
                        {
#line 590 "structure_reuse.direct.choose_reuse.m"
                          mercury__multi_map__set_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_19)), ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_30)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100);
                        }
#line 584 "structure_reuse.direct.choose_reuse.m"
                      }
#line 591 "structure_reuse.direct.choose_reuse.m"
                    else
#line 591 "structure_reuse.direct.choose_reuse.m"
                      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67;
#line 580 "structure_reuse.direct.choose_reuse.m"
                  }
#line 578 "structure_reuse.direct.choose_reuse.m"
                }
#line 578 "structure_reuse.direct.choose_reuse.m"
              else
#line 594 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67;
#line 597 "structure_reuse.direct.choose_reuse.m"
              {
#line 597 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_100_100, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
              }
#line 577 "structure_reuse.direct.choose_reuse.m"
            }
#line 598 "structure_reuse.direct.choose_reuse.m"
            break;
#line 598 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 2:
#line 600 "structure_reuse.direct.choose_reuse.m"
            {
#line 600 "structure_reuse.direct.choose_reuse.m"
              transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
            }
#line 598 "structure_reuse.direct.choose_reuse.m"
            break;
#line 598 "structure_reuse.direct.choose_reuse.m"
          case (MR_Integer) 3:
#line 598 "structure_reuse.direct.choose_reuse.m"
#line 598 "structure_reuse.direct.choose_reuse.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 0)))) {
#line 598 "structure_reuse.direct.choose_reuse.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 598 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 0:
#line 604 "structure_reuse.direct.choose_reuse.m"
                {
#line 604 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
                }
#line 598 "structure_reuse.direct.choose_reuse.m"
                break;
#line 598 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 1:
#line 608 "structure_reuse.direct.choose_reuse.m"
                {
#line 608 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
                }
#line 598 "structure_reuse.direct.choose_reuse.m"
                break;
#line 598 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 2:
#line 611 "structure_reuse.direct.choose_reuse.m"
                {
#line 611 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 611 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51;
#line 611 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 612 "structure_reuse.direct.choose_reuse.m"
                  {
#line 612 "structure_reuse.direct.choose_reuse.m"
                    mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_50, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51);
                  }
#line 613 "structure_reuse.direct.choose_reuse.m"
                  {
#line 613 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__NewCont_51, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
                  }
#line 611 "structure_reuse.direct.choose_reuse.m"
                }
#line 598 "structure_reuse.direct.choose_reuse.m"
                break;
#line 598 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 3:
#line 616 "structure_reuse.direct.choose_reuse.m"
                {
#line 616 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92;
#line 616 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 617 "structure_reuse.direct.choose_reuse.m"
                  {
#line 617 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_102, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92);
                  }
#line 619 "structure_reuse.direct.choose_reuse.m"
                  {
#line 619 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_92_92, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
                  }
#line 616 "structure_reuse.direct.choose_reuse.m"
                }
#line 598 "structure_reuse.direct.choose_reuse.m"
                break;
#line 598 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 4:
#line 621 "structure_reuse.direct.choose_reuse.m"
                {
#line 621 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 621 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90;
#line 621 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104;
#line 621 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 621 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));

#line 622 "structure_reuse.direct.choose_reuse.m"
                  {
#line 622 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[9], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cases_54);
                  }
#line 623 "structure_reuse.direct.choose_reuse.m"
                  {
#line 623 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_in_disjunction_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_104, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90);
                  }
#line 625 "structure_reuse.direct.choose_reuse.m"
                  {
#line 625 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_90_90, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
                  }
#line 621 "structure_reuse.direct.choose_reuse.m"
                }
#line 598 "structure_reuse.direct.choose_reuse.m"
                break;
#line 598 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 5:
#line 635 "structure_reuse.direct.choose_reuse.m"
                {
#line 635 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 635 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));

#line 639 "structure_reuse.direct.choose_reuse.m"
                  /* direct tailcall eliminated */
#line 639 "structure_reuse.direct.choose_reuse.m"
                  {
#line 639 "structure_reuse.direct.choose_reuse.m"
                    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal__tmp_copy_9 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_105;

#line 639 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_9 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal__tmp_copy_9;
#line 639 "structure_reuse.direct.choose_reuse.m"
                  }
#line 639 "structure_reuse.direct.choose_reuse.m"
                  continue;
#line 635 "structure_reuse.direct.choose_reuse.m"
                }
#line 598 "structure_reuse.direct.choose_reuse.m"
                break;
#line 598 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 6:
#line 642 "structure_reuse.direct.choose_reuse.m"
                {
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0];
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 2)));
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 3)));
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 4)));
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81;
#line 642 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__GoalExpr_12, (MR_Integer) 1)));
#line 652 "structure_reuse.direct.choose_reuse.m"
                  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81;

#line 643 "structure_reuse.direct.choose_reuse.m"
                  {
#line 643 "structure_reuse.direct.choose_reuse.m"
                    mercury__multi_map__init_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62);
                  }
#line 645 "structure_reuse.direct.choose_reuse.m"
                  {
#line 645 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ThenGoal_60));
#line 645 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "structure_reuse.direct.choose_reuse.m"
                  }
#line 644 "structure_reuse.direct.choose_reuse.m"
                  {
#line 644 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CondGoal_59, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_72_72, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63);
                  }
#line 646 "structure_reuse.direct.choose_reuse.m"
                  {
#line 646 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ElseGoal_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Table0_62, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64);
                  }
#line 648 "structure_reuse.direct.choose_reuse.m"
                  {
#line 648 "structure_reuse.direct.choose_reuse.m"
                    mercury__multi_map__merge_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_67, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75);
                  }
#line 649 "structure_reuse.direct.choose_reuse.m"
                  {
#line 649 "structure_reuse.direct.choose_reuse.m"
                    mercury__multi_map__merge_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_113_113, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_114_114, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_75_75, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76);
                  }
#line 651 "structure_reuse.direct.choose_reuse.m"
                  {
#line 651 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableElse_64));
#line 651 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 651 "structure_reuse.direct.choose_reuse.m"
                  }
#line 651 "structure_reuse.direct.choose_reuse.m"
                  {
#line 651 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TableThen_63));
#line 651 "structure_reuse.direct.choose_reuse.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78));
#line 651 "structure_reuse.direct.choose_reuse.m"
                  }
#line 650 "structure_reuse.direct.choose_reuse.m"
                  {
#line 650 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__process_possible_common_dead_vars_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_77_77, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65);
                  }
#line 11236 "transform_hlds.ctgc.structure_reuse.direct.choose_reuse.c"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[1];
#line 652 "structure_reuse.direct.choose_reuse.m"
                  {
#line 652 "structure_reuse.direct.choose_reuse.m"
                    mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeInfo_120_120, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[8], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CommonDeadVarsTables_65, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_76_76)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81);
                  }
#line 652 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_Table_81_81);
#line 653 "structure_reuse.direct.choose_reuse.m"
                  {
#line 653 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_81_81, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_68);
                  }
#line 642 "structure_reuse.direct.choose_reuse.m"
                }
#line 598 "structure_reuse.direct.choose_reuse.m"
                break;
#line 598 "structure_reuse.direct.choose_reuse.m"
              case (MR_Integer) 7:
#line 656 "structure_reuse.direct.choose_reuse.m"
                {
#line 658 "structure_reuse.direct.choose_reuse.m"
                  {
#line 658 "structure_reuse.direct.choose_reuse.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.compute_match_table_with_continuation\'/6", (MR_String) "shorthand");
#line 658 "structure_reuse.direct.choose_reuse.m"
                    return;
                  }
#line 656 "structure_reuse.direct.choose_reuse.m"
                }
#line 598 "structure_reuse.direct.choose_reuse.m"
                break;
#line 598 "structure_reuse.direct.choose_reuse.m"
            }
#line 598 "structure_reuse.direct.choose_reuse.m"
            break;
#line 598 "structure_reuse.direct.choose_reuse.m"
        }
#line 574 "structure_reuse.direct.choose_reuse.m"
      }
#line 574 "structure_reuse.direct.choose_reuse.m"
      break;
#line 574 "structure_reuse.direct.choose_reuse.m"
    }
#line 569 "structure_reuse.direct.choose_reuse.m"
}

#line 557 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_goal_list_5_p_0(
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6,
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7,
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8,
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12,
#line 557 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13)
#line 557 "structure_reuse.direct.choose_reuse.m"
{
#line 562 "structure_reuse.direct.choose_reuse.m"
  {
#line 562 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 562 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 562 "structure_reuse.direct.choose_reuse.m"
      *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12;
#line 562 "structure_reuse.direct.choose_reuse.m"
    else
#line 564 "structure_reuse.direct.choose_reuse.m"
      {
#line 564 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8, (MR_Integer) 0)));
#line 564 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goals_8, (MR_Integer) 1)));

#line 565 "structure_reuse.direct.choose_reuse.m"
        {
#line 565 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_7, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__CurrentGoal_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cont_11, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_0_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Table_13);
        }
#line 564 "structure_reuse.direct.choose_reuse.m"
      }
#line 562 "structure_reuse.direct.choose_reuse.m"
  }
#line 557 "structure_reuse.direct.choose_reuse.m"
}

#line 549 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_4_p_0(
#line 549 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5,
#line 549 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6,
#line 549 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7,
#line 549 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8)
#line 549 "structure_reuse.direct.choose_reuse.m"
{
#line 552 "structure_reuse.direct.choose_reuse.m"
  {
#line 552 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 552 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10;

#line 555 "structure_reuse.direct.choose_reuse.m"
    {
#line 555 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = mercury__multi_map__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
    }
#line 554 "structure_reuse.direct.choose_reuse.m"
    {
#line 554 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_5, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Goal_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_8);
    }
#line 552 "structure_reuse.direct.choose_reuse.m"
  }
#line 549 "structure_reuse.direct.choose_reuse.m"
}

#line 534 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(
#line 534 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4,
#line 534 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6,
#line 534 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7)
#line 534 "structure_reuse.direct.choose_reuse.m"
{
#line 537 "structure_reuse.direct.choose_reuse.m"
  {
#line 537 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 537 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 1)));
#line 538 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 0)));
#line 538 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 2)));
#line 538 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 3)));
#line 538 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpec_4, (MR_Integer) 4)));

#line 538 "structure_reuse.direct.choose_reuse.m"
    {
#line 538 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_8_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_7);
    }
#line 537 "structure_reuse.direct.choose_reuse.m"
  }
#line 534 "structure_reuse.direct.choose_reuse.m"
}

#line 531 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0_1(
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 531 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 531 "structure_reuse.direct.choose_reuse.m"
{
#line 531 "structure_reuse.direct.choose_reuse.m"
  {
#line 531 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 531 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7;

#line 531 "structure_reuse.direct.choose_reuse.m"
    {
#line 531 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstruction_from_dead_cell_table_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7);
    }
#line 531 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_STATE_VARIABLE_DeadCellTable_7));
#line 531 "structure_reuse.direct.choose_reuse.m"
  }
#line 531 "structure_reuse.direct.choose_reuse.m"
}

#line 526 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(
#line 526 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4,
#line 526 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7,
#line 526 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8)
#line 526 "structure_reuse.direct.choose_reuse.m"
{
#line 529 "structure_reuse.direct.choose_reuse.m"
  {
#line 529 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 529 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 0)));
#line 530 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 1)));
#line 530 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 2)));
#line 530 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_4, (MR_Integer) 3)));
#line 531 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8;

#line 531 "structure_reuse.direct.choose_reuse.m"
    {
#line 531 "structure_reuse.direct.choose_reuse.m"
      mercury__list__foldl_4_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[7], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeconSpecs_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_7)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8);
    }
#line 531 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_8 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_STATE_VARIABLE_DeadCellTable_8);
#line 529 "structure_reuse.direct.choose_reuse.m"
  }
#line 526 "structure_reuse.direct.choose_reuse.m"
}

#line 361 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0_1(
#line 361 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 361 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 361 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 361 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 361 "structure_reuse.direct.choose_reuse.m"
{
#line 361 "structure_reuse.direct.choose_reuse.m"
  {
#line 361 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 361 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6;

#line 361 "structure_reuse.direct.choose_reuse.m"
    {
#line 361 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6);
    }
#line 361 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_Result_6));
#line 361 "structure_reuse.direct.choose_reuse.m"
  }
#line 361 "structure_reuse.direct.choose_reuse.m"
}

#line 461 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28,
#line 461 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29)
#line 461 "structure_reuse.direct.choose_reuse.m"
{
#line 465 "structure_reuse.direct.choose_reuse.m"
  while (MR_TRUE)
#line 465 "structure_reuse.direct.choose_reuse.m"
    {
#line 465 "structure_reuse.direct.choose_reuse.m"
      /* tailcall optimized into a loop */
#line 465 "structure_reuse.direct.choose_reuse.m"
      {
#line 465 "structure_reuse.direct.choose_reuse.m"
        MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 465 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 1)));
#line 465 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13;
#line 465 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14;
#line 465 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15;
#line 465 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71;
#line 466 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 0)));
#line 466 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 2)));
#line 466 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 3)));

#line 467 "structure_reuse.direct.choose_reuse.m"
        {
#line 467 "structure_reuse.direct.choose_reuse.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13);
        }
#line 468 "structure_reuse.direct.choose_reuse.m"
        {
#line 468 "structure_reuse.direct.choose_reuse.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13, (MR_Integer) 47, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14);
        }
#line 555 "structure_reuse.direct.choose_reuse.m"
        {
#line 555 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71 = mercury__multi_map__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0);
        }
#line 554 "structure_reuse.direct.choose_reuse.m"
        {
#line 554 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__compute_match_table_with_continuation_6_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_71_71, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15);
        }
#line 477 "structure_reuse.direct.choose_reuse.m"
        {
#line 477 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = mercury__multi_map__is_empty_1_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15);
        }
#line 479 "structure_reuse.direct.choose_reuse.m"
        if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 478 "structure_reuse.direct.choose_reuse.m"
          {
#line 478 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 478 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 478 "structure_reuse.direct.choose_reuse.m"
            *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24;
#line 478 "structure_reuse.direct.choose_reuse.m"
          }
#line 479 "structure_reuse.direct.choose_reuse.m"
        else
#line 482 "structure_reuse.direct.choose_reuse.m"
          {
#line 482 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 482 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16;
#line 482 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 482 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76;
#line 482 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77;
#line 484 "structure_reuse.direct.choose_reuse.m"
            MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 484 "structure_reuse.direct.choose_reuse.m"
            MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;
#line 484 "structure_reuse.direct.choose_reuse.m"
            MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65;

#line 360 "structure_reuse.direct.choose_reuse.m"
            {
#line 360 "structure_reuse.direct.choose_reuse.m"
              mercury__multi_map__values_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_1[0], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76);
            }
#line 361 "structure_reuse.direct.choose_reuse.m"
            {
#line 361 "structure_reuse.direct.choose_reuse.m"
              mercury__list__sort_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_13_84, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[6], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Matches_76, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77);
            }
#line 364 "structure_reuse.direct.choose_reuse.m"
            if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 365 "structure_reuse.direct.choose_reuse.m"
              {
#line 366 "structure_reuse.direct.choose_reuse.m"
                {
#line 366 "structure_reuse.direct.choose_reuse.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.highest_match_degree_ratio\'/1", (MR_String) "empty multi_map");
#line 366 "structure_reuse.direct.choose_reuse.m"
                  return;
                }
#line 365 "structure_reuse.direct.choose_reuse.m"
              }
#line 364 "structure_reuse.direct.choose_reuse.m"
            else
#line 363 "structure_reuse.direct.choose_reuse.m"
              {
#line 363 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78;

#line 363 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77, (MR_Integer) 0)));
#line 363 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Sorted_77, (MR_Integer) 1)));
#line 363 "structure_reuse.direct.choose_reuse.m"
              }
#line 484 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 0)));
#line 484 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 1)));
#line 484 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 2)));
#line 484 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, (MR_Integer) 3)));
#line 485 "structure_reuse.direct.choose_reuse.m"
            if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "structure_reuse.direct.choose_reuse.m"
              {
#line 484 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_25 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24;
#line 484 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_27 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 484 "structure_reuse.direct.choose_reuse.m"
                *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_29 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 484 "structure_reuse.direct.choose_reuse.m"
              }
#line 485 "structure_reuse.direct.choose_reuse.m"
            else
#line 486 "structure_reuse.direct.choose_reuse.m"
              {
#line 486 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22;
#line 486 "structure_reuse.direct.choose_reuse.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23;
#line 486 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36;
#line 486 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37;
#line 486 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38;
#line 486 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39;
#line 486 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42;
#line 486 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43;
#line 506 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57;
#line 506 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;
#line 506 "structure_reuse.direct.choose_reuse.m"
                MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 514 "structure_reuse.direct.choose_reuse.m"
                MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41;

#line 491 "structure_reuse.direct.choose_reuse.m"
                {
#line 491 "structure_reuse.direct.choose_reuse.m"
                  libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14, (MR_String) "% Reuse results: \n");
                }
#line 492 "structure_reuse.direct.choose_reuse.m"
                {
#line 492 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__maybe_dump_match_table_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchTable_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16);
                }
#line 499 "structure_reuse.direct.choose_reuse.m"
                {
#line 499 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__annotate_reuses_in_goal_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36);
                }
#line 502 "structure_reuse.direct.choose_reuse.m"
                {
#line 502 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__remove_deconstructions_from_dead_cell_table_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37);
                }
#line 506 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 0)));
#line 506 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 1)));
#line 506 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 2)));
#line 506 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, (MR_Integer) 3)));
#line 508 "structure_reuse.direct.choose_reuse.m"
                {
#line 508 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_8, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_16);
                }
#line 507 "structure_reuse.direct.choose_reuse.m"
                {
#line 507 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_12, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_22, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_38_38, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39);
                }
#line 512 "structure_reuse.direct.choose_reuse.m"
                {
#line 512 "structure_reuse.direct.choose_reuse.m"
                  libs__globals__lookup_int_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_13, (MR_Integer) 406, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23);
                }
#line 514 "structure_reuse.direct.choose_reuse.m"
                {
#line 514 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39);
                }
#line 514 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_41_41 > transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MaxConditions_23);
#line 517 "structure_reuse.direct.choose_reuse.m"
                if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 515 "structure_reuse.direct.choose_reuse.m"
                  {
#line 515 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26;
#line 516 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28;
#line 515 "structure_reuse.direct.choose_reuse.m"
                  }
#line 517 "structure_reuse.direct.choose_reuse.m"
                else
#line 518 "structure_reuse.direct.choose_reuse.m"
                  {
#line 518 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_39_39;
#line 518 "structure_reuse.direct.choose_reuse.m"
                    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_36_36;
#line 518 "structure_reuse.direct.choose_reuse.m"
                  }
#line 522 "structure_reuse.direct.choose_reuse.m"
                /* direct tailcall eliminated */
#line 522 "structure_reuse.direct.choose_reuse.m"
                {
#line 522 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0__tmp_copy_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_37_37;
#line 522 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0__tmp_copy_26 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_42_42;
#line 522 "structure_reuse.direct.choose_reuse.m"
                  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0__tmp_copy_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_43_43;

#line 522 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0_28 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_ReuseAs_0__tmp_copy_28;
#line 522 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_26 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0__tmp_copy_26;
#line 522 "structure_reuse.direct.choose_reuse.m"
                  transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0_24 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_DeadCellTable_0__tmp_copy_24;
#line 522 "structure_reuse.direct.choose_reuse.m"
                }
#line 522 "structure_reuse.direct.choose_reuse.m"
                continue;
#line 486 "structure_reuse.direct.choose_reuse.m"
              }
#line 482 "structure_reuse.direct.choose_reuse.m"
          }
#line 465 "structure_reuse.direct.choose_reuse.m"
      }
#line 465 "structure_reuse.direct.choose_reuse.m"
      break;
#line 465 "structure_reuse.direct.choose_reuse.m"
    }
#line 461 "structure_reuse.direct.choose_reuse.m"
}

#line 437 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0_1(
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 437 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 437 "structure_reuse.direct.choose_reuse.m"
{
#line 437 "structure_reuse.direct.choose_reuse.m"
  {
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 437 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__3_23;

#line 437 "structure_reuse.direct.choose_reuse.m"
    {
#line 437 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__pred__average_match__437__1_3_p_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__3_23);
    }
#line 437 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__3_23));
#line 437 "structure_reuse.direct.choose_reuse.m"
  }
#line 437 "structure_reuse.direct.choose_reuse.m"
}

#line 431 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__average_match_2_p_0(
#line 431 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3,
#line 431 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4)
#line 431 "structure_reuse.direct.choose_reuse.m"
{
#line 435 "structure_reuse.direct.choose_reuse.m"
  {
#line 435 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;

#line 435 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "structure_reuse.direct.choose_reuse.m"
      {
#line 449 "structure_reuse.direct.choose_reuse.m"
        {
#line 449 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.average_match\'/2", (MR_String) "empty list");
#line 449 "structure_reuse.direct.choose_reuse.m"
          return;
        }
#line 448 "structure_reuse.direct.choose_reuse.m"
      }
#line 435 "structure_reuse.direct.choose_reuse.m"
    else
#line 435 "structure_reuse.direct.choose_reuse.m"
      {
#line 435 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65 = (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_match_0;
#line 435 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, (MR_Integer) 0)));
#line 435 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, (MR_Integer) 1)));
#line 435 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7;
#line 435 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15;
#line 435 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31;
#line 435 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32;
#line 435 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 444 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15;
#line 446 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58;
#line 446 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59;
#line 446 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60;
#line 445 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61;
#line 445 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62;
#line 445 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64;
#line 445 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63;

#line 436 "structure_reuse.direct.choose_reuse.m"
        {
#line 436 "structure_reuse.direct.choose_reuse.m"
          mercury__list__length_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__List_3, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7);
        }
#line 444 "structure_reuse.direct.choose_reuse.m"
        {
#line 444 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_65_65, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[5], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_6, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_5)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15);
        }
#line 444 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_Match0_15);
#line 446 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 0)));
#line 446 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 1)));
#line 446 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 2)));
#line 446 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 3)));
#line 446 "structure_reuse.direct.choose_reuse.m"
        {
#line 446 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Length_7);
        }
#line 446 "structure_reuse.direct.choose_reuse.m"
        {
#line 446 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33);
        }
#line 445 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 0)));
#line 445 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 1)));
#line 445 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_63_63 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 2)));
#line 445 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match0_15, (MR_Integer) 3)));
#line 445 "structure_reuse.direct.choose_reuse.m"
        {
#line 445 "structure_reuse.direct.choose_reuse.m"
          MR_Word base;
#line 445 "structure_reuse.direct.choose_reuse.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 445 "structure_reuse.direct.choose_reuse.m"
          *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__AverageMatch_4 = base;
#line 445 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_61_61));
#line 445 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_62_62));
#line 445 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31);
#line 445 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_64_64));
#line 445 "structure_reuse.direct.choose_reuse.m"
        }
#line 435 "structure_reuse.direct.choose_reuse.m"
      }
#line 435 "structure_reuse.direct.choose_reuse.m"
  }
#line 431 "structure_reuse.direct.choose_reuse.m"
}

#line 400 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_3_p_0(
#line 400 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4,
#line 400 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5,
#line 400 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6)
#line 400 "structure_reuse.direct.choose_reuse.m"
{
#line 395 "structure_reuse.direct.choose_reuse.m"
  {
#line 395 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 395 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 2)));
#line 395 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 2)));
#line 396 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 0)));
#line 396 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 1)));
#line 396 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match2_5, (MR_Integer) 3)));
#line 397 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 0)));
#line 397 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 1)));
#line 397 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match1_4, (MR_Integer) 3)));

#line 398 "structure_reuse.direct.choose_reuse.m"
    {
#line 398 "structure_reuse.direct.choose_reuse.m"
      mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V1_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V2_11);
    }
#line 395 "structure_reuse.direct.choose_reuse.m"
  }
#line 400 "structure_reuse.direct.choose_reuse.m"
}

#line 377 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__reverse_compare_matches_value_degree_3_p_0(
#line 377 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4,
#line 377 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5,
#line 377 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6)
#line 377 "structure_reuse.direct.choose_reuse.m"
{
#line 372 "structure_reuse.direct.choose_reuse.m"
  {
#line 372 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 372 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10;
#line 372 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11;
#line 386 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 2)));
#line 386 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 0)));
#line 386 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 1)));
#line 386 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 3)));
#line 386 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28;
#line 386 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32;
#line 386 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33;
#line 386 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34;

#line 386 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 == ((MR_Float) 0.0000000000000000));
#line 386 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 385 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 387 "structure_reuse.direct.choose_reuse.m"
      {
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 2)));
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16;
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 3)));
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 0)));
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchB_5, (MR_Integer) 1)));

#line 387 "structure_reuse.direct.choose_reuse.m"
        {
#line 387 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_23_23);
        }
#line 387 "structure_reuse.direct.choose_reuse.m"
        {
#line 387 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16);
        }
#line 387 "structure_reuse.direct.choose_reuse.m"
      }
#line 385 "structure_reuse.direct.choose_reuse.m"
    else
#line 389 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10 = (MR_Float) 0.0000000000000000;
#line 386 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 0)));
#line 386 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 1)));
#line 386 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 2)));
#line 386 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 3)));
#line 386 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 == ((MR_Float) 0.0000000000000000));
#line 386 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = !(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded);
#line 385 "structure_reuse.direct.choose_reuse.m"
    if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 387 "structure_reuse.direct.choose_reuse.m"
      {
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 2)));
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30;
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 3)));
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 0)));
#line 387 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__MatchA_4, (MR_Integer) 1)));

#line 387 "structure_reuse.direct.choose_reuse.m"
        {
#line 387 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = mercury__float__float_1_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_37_37);
        }
#line 387 "structure_reuse.direct.choose_reuse.m"
        {
#line 387 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11 = mercury__float__f_slash_2_f_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30);
        }
#line 387 "structure_reuse.direct.choose_reuse.m"
      }
#line 385 "structure_reuse.direct.choose_reuse.m"
    else
#line 389 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11 = (MR_Float) 0.0000000000000000;
#line 375 "structure_reuse.direct.choose_reuse.m"
    {
#line 375 "structure_reuse.direct.choose_reuse.m"
      mercury__private_builtin__builtin_compare_float_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Result_6, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VA_10, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VB_11);
    }
#line 372 "structure_reuse.direct.choose_reuse.m"
  }
#line 377 "structure_reuse.direct.choose_reuse.m"
}

#line 328 "structure_reuse.direct.choose_reuse.m"
static void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2(
#line 328 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 328 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1,
#line 328 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2,
#line 328 "structure_reuse.direct.choose_reuse.m"
  MR_Box * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3)
#line 328 "structure_reuse.direct.choose_reuse.m"
{
#line 328 "structure_reuse.direct.choose_reuse.m"
  {
#line 328 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 328 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5;

#line 328 "structure_reuse.direct.choose_reuse.m"
    {
#line 328 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1), ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5);
    }
#line 328 "structure_reuse.direct.choose_reuse.m"
    *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_3 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv1_HeadVar__5_5));
#line 328 "structure_reuse.direct.choose_reuse.m"
  }
#line 328 "structure_reuse.direct.choose_reuse.m"
}

#line 323 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_1(
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 323 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 323 "structure_reuse.direct.choose_reuse.m"
{
#line 323 "structure_reuse.direct.choose_reuse.m"
  {
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 323 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13;

#line 323 "structure_reuse.direct.choose_reuse.m"
    {
#line 323 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_condition__323__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 323 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_13));
#line 323 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 323 "structure_reuse.direct.choose_reuse.m"
  }
#line 323 "structure_reuse.direct.choose_reuse.m"
}

#line 320 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0(
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4,
#line 320 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5)
#line 320 "structure_reuse.direct.choose_reuse.m"
{
#line 322 "structure_reuse.direct.choose_reuse.m"
  {
#line 322 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 322 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6;
#line 322 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_0;
#line 322 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9;
#line 322 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 0)));
#line 324 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 1)));
#line 324 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 2)));
#line 324 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_5, (MR_Integer) 3)));

#line 324 "structure_reuse.direct.choose_reuse.m"
    {
#line 324 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[4], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_14_14);
    }
#line 331 "structure_reuse.direct.choose_reuse.m"
    if ((transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "structure_reuse.direct.choose_reuse.m"
      {
#line 333 "structure_reuse.direct.choose_reuse.m"
        {
#line 333 "structure_reuse.direct.choose_reuse.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.direct.choose_reuse", (MR_String) "function \140transform_hlds.ctgc.structure_reuse.direct.choose_reuse.match_get_condition\'/2", (MR_String) "no reuse conditions");
        }
#line 332 "structure_reuse.direct.choose_reuse.m"
      }
#line 331 "structure_reuse.direct.choose_reuse.m"
    else
#line 326 "structure_reuse.direct.choose_reuse.m"
      {
#line 326 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9, (MR_Integer) 0)));
#line 326 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Conditions_9, (MR_Integer) 1)));
#line 326 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18;
#line 326 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 1)));
#line 326 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 2)));
#line 328 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 0)));
#line 328 "structure_reuse.direct.choose_reuse.m"
        MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Background_4, (MR_Integer) 3)));
#line 327 "structure_reuse.direct.choose_reuse.m"
        MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6;

#line 328 "structure_reuse.direct.choose_reuse.m"
        {
#line 328 "structure_reuse.direct.choose_reuse.m"
          transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 328 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_4[0]));
#line 328 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_condition_2_f_0_2));
#line 328 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 328 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_19_19));
#line 328 "structure_reuse.direct.choose_reuse.m"
          MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_30_30));
#line 328 "structure_reuse.direct.choose_reuse.m"
        }
#line 327 "structure_reuse.direct.choose_reuse.m"
        {
#line 327 "structure_reuse.direct.choose_reuse.m"
          mercury__list__foldl_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__TypeCtorInfo_36_36, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_18_18, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Rest_11, ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__First_10)), &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6);
        }
#line 327 "structure_reuse.direct.choose_reuse.m"
        transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6 = ((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv2_Condition_6);
#line 326 "structure_reuse.direct.choose_reuse.m"
      }
#line 322 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Condition_6;
#line 322 "structure_reuse.direct.choose_reuse.m"
  }
#line 320 "structure_reuse.direct.choose_reuse.m"
}

#line 315 "structure_reuse.direct.choose_reuse.m"
static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0_1(
#line 315 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg,
#line 315 "structure_reuse.direct.choose_reuse.m"
  MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1)
#line 315 "structure_reuse.direct.choose_reuse.m"
{
#line 315 "structure_reuse.direct.choose_reuse.m"
  {
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_Box transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__closure_arg;
#line 315 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_8;

#line 315 "structure_reuse.direct.choose_reuse.m"
    {
#line 315 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_8 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__IntroducedFrom__func__match_get_dead_cons_ids__315__1_1_f_0(((MR_Word) transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_1));
    }
#line 315 "structure_reuse.direct.choose_reuse.m"
    transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2 = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__conv0_LambdaHeadVar__2_8));
#line 315 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__wrapper_arg_2;
#line 315 "structure_reuse.direct.choose_reuse.m"
  }
#line 315 "structure_reuse.direct.choose_reuse.m"
}

#line 312 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_get_dead_cons_ids_1_f_0(
#line 312 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3)
#line 312 "structure_reuse.direct.choose_reuse.m"
{
#line 314 "structure_reuse.direct.choose_reuse.m"
  {
#line 314 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 314 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4;
#line 314 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 0)));
#line 316 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 1)));
#line 316 "structure_reuse.direct.choose_reuse.m"
    MR_Float transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 2)));
#line 316 "structure_reuse.direct.choose_reuse.m"
    MR_Integer transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Match_3, (MR_Integer) 3)));

#line 316 "structure_reuse.direct.choose_reuse.m"
    {
#line 316 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4 = mercury__list__map_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__transform_hlds__ctgc__structure_reuse__direct__choose_reuse__type_ctor_info_deconstruction_spec_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__direct__choose_reuse_scalar_common_2[3], transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_9_9);
    }
#line 314 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsIds_4;
#line 314 "structure_reuse.direct.choose_reuse.m"
  }
#line 312 "structure_reuse.direct.choose_reuse.m"
}

#line 275 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__match_init_1_f_0(
#line 275 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3)
#line 275 "structure_reuse.direct.choose_reuse.m"
{
#line 277 "structure_reuse.direct.choose_reuse.m"
  {
#line 277 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 277 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;

#line 277 "structure_reuse.direct.choose_reuse.m"
    {
#line 277 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 277 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DS_3));
#line 277 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 2) = MR_box_float((MR_Float) 0.0000000000000000);
#line 277 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2, 3) = ((MR_Box) ((MR_Integer) 0));
#line 277 "structure_reuse.direct.choose_reuse.m"
    }
#line 277 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__2_2;
#line 277 "structure_reuse.direct.choose_reuse.m"
  }
#line 275 "structure_reuse.direct.choose_reuse.m"
}

#line 264 "structure_reuse.direct.choose_reuse.m"
static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__deconstruction_spec_init_5_f_0(
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7,
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8,
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9,
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10,
#line 264 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cond_11)
#line 264 "structure_reuse.direct.choose_reuse.m"
{
#line 268 "structure_reuse.direct.choose_reuse.m"
  {
#line 268 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 268 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6;

#line 268 "structure_reuse.direct.choose_reuse.m"
    {
#line 268 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 268 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Var_7));
#line 268 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__PP_8));
#line 268 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ConsId_9));
#line 268 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Args_10));
#line 268 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6, 4) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Cond_11));
#line 268 "structure_reuse.direct.choose_reuse.m"
    }
#line 268 "structure_reuse.direct.choose_reuse.m"
    return transform_hlds__ctgc__structure_reuse__direct__choose_reuse__HeadVar__6_6;
#line 268 "structure_reuse.direct.choose_reuse.m"
  }
#line 264 "structure_reuse.direct.choose_reuse.m"
}

#line 109 "structure_reuse.direct.choose_reuse.m"
void MR_CALL 
transform_hlds__ctgc__structure_reuse__direct__choose_reuse__determine_reuse_6_p_0(
#line 109 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_7,
#line 109 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_8,
#line 109 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_9,
#line 109 "structure_reuse.direct.choose_reuse.m"
  MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_18,
#line 109 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19,
#line 109 "structure_reuse.direct.choose_reuse.m"
  MR_Word * transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_11)
#line 109 "structure_reuse.direct.choose_reuse.m"
{
#line 135 "structure_reuse.direct.choose_reuse.m"
  {
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_bool transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded;
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12;
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13;
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14;
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15;
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16;
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21;
#line 135 "structure_reuse.direct.choose_reuse.m"
    MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29;

#line 137 "structure_reuse.direct.choose_reuse.m"
    {
#line 137 "structure_reuse.direct.choose_reuse.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_7, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12);
    }
#line 138 "structure_reuse.direct.choose_reuse.m"
    {
#line 138 "structure_reuse.direct.choose_reuse.m"
      libs__globals__get_reuse_strategy_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13);
    }
#line 169 "structure_reuse.direct.choose_reuse.m"
    {
#line 169 "structure_reuse.direct.choose_reuse.m"
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_8, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29);
    }
#line 170 "structure_reuse.direct.choose_reuse.m"
    {
#line 170 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 170 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 0) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Strategy_13));
#line 170 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ModuleInfo_7));
#line 170 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 2) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ProcInfo_8));
#line 170 "structure_reuse.direct.choose_reuse.m"
      MR_hl_field(MR_mktag(0), transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, 3) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VarTypes_29));
#line 170 "structure_reuse.direct.choose_reuse.m"
    }
#line 141 "structure_reuse.direct.choose_reuse.m"
    {
#line 141 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
    }
#line 140 "structure_reuse.direct.choose_reuse.m"
    {
#line 140 "structure_reuse.direct.choose_reuse.m"
      transform_hlds__ctgc__structure_reuse__direct__choose_reuse__choose_reuse_in_goal_7_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__BackGroundInfo_14, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_9, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_0_18, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__V_21_21, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__ReuseAs_11);
    }
#line 143 "structure_reuse.direct.choose_reuse.m"
    {
#line 143 "structure_reuse.direct.choose_reuse.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, (MR_Integer) 408, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16);
    }
#line 148 "structure_reuse.direct.choose_reuse.m"
#line 148 "structure_reuse.direct.choose_reuse.m"
    switch (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__FreeCells_16) {
#line 148 "structure_reuse.direct.choose_reuse.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 148 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 0:
#line 149 "structure_reuse.direct.choose_reuse.m"
        *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 148 "structure_reuse.direct.choose_reuse.m"
        break;
#line 148 "structure_reuse.direct.choose_reuse.m"
      case (MR_Integer) 1:
#line 145 "structure_reuse.direct.choose_reuse.m"
        {
#line 145 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17;
#line 145 "structure_reuse.direct.choose_reuse.m"
          MR_Word transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35;

#line 146 "structure_reuse.direct.choose_reuse.m"
          {
#line 146 "structure_reuse.direct.choose_reuse.m"
            libs__globals__lookup_bool_option_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__Globals_12, (MR_Integer) 47, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17);
          }
#line 1432 "structure_reuse.direct.choose_reuse.m"
          {
#line 1432 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_remove_conditionals_2_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__RemainingDeadCellTable_15, &transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35);
          }
#line 1433 "structure_reuse.direct.choose_reuse.m"
          {
#line 1433 "structure_reuse.direct.choose_reuse.m"
            transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded = transform_hlds__ctgc__structure_reuse__direct__dead_cell_table_is_empty_1_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35);
          }
#line 1438 "structure_reuse.direct.choose_reuse.m"
          if (transform_hlds__ctgc__structure_reuse__direct__choose_reuse__succeeded)
#line 1434 "structure_reuse.direct.choose_reuse.m"
            {
#line 1435 "structure_reuse.direct.choose_reuse.m"
              {
#line 1435 "structure_reuse.direct.choose_reuse.m"
                libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17, (MR_String) "% No cells to be cached/freed.\n");
              }
#line 1434 "structure_reuse.direct.choose_reuse.m"
              *transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19 = transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20;
#line 1434 "structure_reuse.direct.choose_reuse.m"
            }
#line 1438 "structure_reuse.direct.choose_reuse.m"
          else
#line 1442 "structure_reuse.direct.choose_reuse.m"
            {
#line 1440 "structure_reuse.direct.choose_reuse.m"
              {
#line 1440 "structure_reuse.direct.choose_reuse.m"
                libs__file_util__maybe_write_string_4_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__VeryVerbose_17, (MR_String) "% Marking cacheable/freeable cells.\n");
              }
#line 1443 "structure_reuse.direct.choose_reuse.m"
              {
#line 1443 "structure_reuse.direct.choose_reuse.m"
                transform_hlds__ctgc__structure_reuse__direct__choose_reuse__check_for_cell_caching_2_3_p_0(transform_hlds__ctgc__structure_reuse__direct__choose_reuse__DeadCellTable_35, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_20_20, transform_hlds__ctgc__structure_reuse__direct__choose_reuse__STATE_VARIABLE_Goal_19);
              }
#line 1442 "structure_reuse.direct.choose_reuse.m"
            }
#line 145 "structure_reuse.direct.choose_reuse.m"
        }
#line 148 "structure_reuse.direct.choose_reuse.m"
        break;
#line 148 "structure_reuse.direct.choose_reuse.m"
    }
#line 135 "structure_reuse.direct.choose_reuse.m"
  }
#line 109 "structure_reuse.direct.choose_reuse.m"
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
