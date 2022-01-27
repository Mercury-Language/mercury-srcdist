/*
** Automatically generated from `make_hlds_passes.m'
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


/* :- module hlds.make_hlds.make_hlds_passes. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_passes__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_passes.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.clause_to_proc.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "mdbcomp.builtin_modules.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_stats.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_mode.mih"
#include "hlds.make_hlds.add_mutable_aux_preds.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_solver.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "hlds.make_hlds.make_hlds_passes.du_type_layout.mih"
#include "hlds.make_hlds.make_hlds_passes.make_hlds_separate_items.mih"



#line 1046 "make_hlds_passes.m"
struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s {
#line 1050 "make_hlds_passes.m"
  MR_bool hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded;
#line 1077 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209;
#line 1077 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21;
#line 1077 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22;
#line 1077 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24;
#line 1087 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_0;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_34;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_35;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_84_84;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_85_85;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_86_86;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_87_87;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_210_210;
#line 1087 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_211_211;
#line 1090 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv0_ProcInfo_30;
#line 1114 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_1;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_167;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_169;
#line 1114 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_170;
#line 1115 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv1_ProcInfo_165;
#line 1046 "make_hlds_passes.m"
};

#line 927 "make_hlds_passes.m"
struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s {
#line 931 "make_hlds_passes.m"
  MR_bool hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded;
#line 959 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194;
#line 959 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21;
#line 959 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22;
#line 959 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24;
#line 970 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_0;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_34;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_35;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_72_72;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_73_73;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_74_74;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_75_75;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_195_195;
#line 970 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_196_196;
#line 973 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv0_ProcInfo_30;
#line 997 "make_hlds_passes.m"
  jmp_buf hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_1;
#line 997 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150;
#line 997 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151;
#line 997 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_152;
#line 997 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153;
#line 997 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_154;
#line 997 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_155;
#line 998 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv1_ProcInfo_150;
#line 927 "make_hlds_passes.m"
};


#line 285 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

#line 288 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0;

#line 291 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0;

#line 294 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 297 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0;

#line 300 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

#line 303 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

#line 306 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0;

#line 309 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0;

#line 312 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0;

#line 315 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0;

#line 318 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0;

#line 321 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0;

#line 324 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0;

#line 327 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 330 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 333 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0;

#line 336 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0;

#line 339 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0;

#line 342 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0;

#line 345 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 348 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 620 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__620__1_2_p_0(
#line 620 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_17,
#line 620 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_52);

#line 619 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__619__1_2_p_0(
#line 619 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_16,
#line 619 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_47);

#line 539 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__539__1_3_p_0(
#line 539 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SectionInfo_18,
#line 539 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_66,
#line 539 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__HeadVar__3_67);

#line 1168 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1(
#line 1168 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 1168 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 1168 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2);

#line 1087 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_1(
#line 1087 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1090 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3(
#line 1090 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1087 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(
#line 1087 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1087 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_4(
#line 1087 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1114 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(
#line 1114 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1115 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7(
#line 1115 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1114 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(
#line 1114 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 1114 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(
#line 1114 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 970 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_1(
#line 970 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 973 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3(
#line 973 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 970 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(
#line 970 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 970 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_4(
#line 970 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 997 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(
#line 997 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 998 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7(
#line 998 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 997 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(
#line 997 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 997 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(
#line 997 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg);

#line 620 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2(
#line 620 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

#line 619 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1(
#line 619 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg);

#line 539 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1(
#line 539 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 539 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 539 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2);

#line 453 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1(
#line 453 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 453 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 453 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 453 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

#line 392 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26(
#line 392 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 392 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 392 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 392 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 392 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4);

#line 389 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25(
#line 389 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 389 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 389 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 389 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

#line 372 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24(
#line 372 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 372 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 372 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 372 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 372 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 372 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 370 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23(
#line 370 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 370 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 370 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 370 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 370 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 370 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 362 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22(
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 362 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 362 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 362 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

#line 359 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21(
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 359 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 359 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 359 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

#line 356 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20(
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 356 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 356 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 356 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

#line 353 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19(
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 353 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 353 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 353 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

#line 348 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18(
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 348 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 348 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 348 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

#line 335 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17(
#line 335 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 335 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 335 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 335 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

#line 322 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16(
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 322 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 322 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 322 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_8);

#line 313 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15(
#line 313 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 313 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 313 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 313 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 313 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4);

#line 266 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14(
#line 266 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 266 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 266 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 266 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 266 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 266 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 262 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13(
#line 262 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 262 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 262 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 262 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);

#line 250 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12(
#line 250 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 250 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 250 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 250 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 250 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 250 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 246 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11(
#line 246 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 246 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 246 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 246 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 246 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 246 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 244 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10(
#line 244 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 244 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 244 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 244 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 244 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 244 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 235 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9(
#line 235 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 235 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 235 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 235 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 235 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 235 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 233 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8(
#line 233 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 233 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 233 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 233 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 233 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 233 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 226 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7(
#line 226 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 226 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 226 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 226 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 226 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 226 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5);

#line 218 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6(
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 218 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 218 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 218 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

#line 212 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5(
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 212 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 212 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 212 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7);

#line 202 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11);

#line 199 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11);

#line 196 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11);

#line 169 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
#line 169 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 169 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 169 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 169 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[70][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[26][3];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[4][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][14];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[6][10];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[9][8];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][11];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[4][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[2][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[2][1];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_1[70][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[5]))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "whose name is a variable."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for a predicate whose name is a variable."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a mode"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "initialise"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "finalise"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[28])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "pred"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not have a corresponding"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "used in"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has invalid signature."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "used in initialise declaration"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "matches multiple pred declarations."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[39])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration has invalid signature."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[20])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has multiple"))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[59]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: you cannot declare a"))
  },
  /* row 66 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_10[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: you cannot define a clause for a"))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_2[26][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[4])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_5[5])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[7])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[8])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_4[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_5[6][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_6[9][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_8[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_version_numbers_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_9[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_passes_scalar_common_10[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[26])))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1860 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0
  }
};

#line 1868 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_avail_0
  }
};

#line 1876 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_type_defn_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_type_defn_info_0
  }
};

#line 1884 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1892 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0
  }
};

#line 1900 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

#line 1908 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__list__pti_list_1__plain_hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__hlds__make_hlds__ti_sec_item_1parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

#line 1916 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_inst_defn_info_0
  }
};

#line 1924 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_defn_info_0
  }
};

#line 1932 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_pred_decl_info_0
  }
};

#line 1940 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mode_decl_info_0
  }
};

#line 1948 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_mutable_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0
  }
};

#line 1956 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_sec_item_1__plain_parse_tree__prog_item__type_ctor_info_item_typeclass_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_typeclass_info_0
  }
};

#line 1964 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_instance_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_instance_info_0
  }
};

#line 1972 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1981 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__make_hlds_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_passes__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1990 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_clause_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0
  }
};

#line 1998 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_promise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_promise_info_0
  }
};

#line 2006 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_initialise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_initialise_info_0
  }
};

#line 2014 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__hlds__make_hlds__pti_ims_item_1__plain_parse_tree__prog_item__type_ctor_info_item_finalise_info_0 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_finalise_info_0
  }
};

#line 2022 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2030 "hlds.make_hlds.make_hlds_passes.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_passes__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 620 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__620__1_2_p_0(
#line 620 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithInst_17,
#line 620 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_52)
#line 620 "make_hlds_passes.m"
{
#line 620 "make_hlds_passes.m"
  {
#line 620 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 620 "make_hlds_passes.m"
    {
#line 620 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[18], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_17)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_52)));
    }
#line 620 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 620 "make_hlds_passes.m"
  }
#line 620 "make_hlds_passes.m"
}

#line 619 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__619__1_2_p_0(
#line 619 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__WithType_16,
#line 619 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_47)
#line 619 "make_hlds_passes.m"
{
#line 619 "make_hlds_passes.m"
  {
#line 619 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 619 "make_hlds_passes.m"
    {
#line 619 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[17], ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_16)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_47)));
    }
#line 619 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 619 "make_hlds_passes.m"
  }
#line 619 "make_hlds_passes.m"
}

#line 539 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__539__1_3_p_0(
#line 539 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SectionInfo_18,
#line 539 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVar__2_66,
#line 539 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__HeadVar__3_67)
#line 539 "make_hlds_passes.m"
{
#line 539 "make_hlds_passes.m"
  {
#line 539 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;

#line 539 "make_hlds_passes.m"
    {
#line 539 "make_hlds_passes.m"
      hlds__make_hlds__wrap_with_section_info_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, hlds__make_hlds__make_hlds_passes__SectionInfo_18, ((MR_Box) (hlds__make_hlds__make_hlds_passes__HeadVar__2_66)), hlds__make_hlds__make_hlds_passes__HeadVar__3_67);
    }
#line 539 "make_hlds_passes.m"
  }
#line 539 "make_hlds_passes.m"
}

#line 1171 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(
#line 1171 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
#line 1171 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6,
#line 1171 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10,
#line 1171 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11)
#line 1171 "make_hlds_passes.m"
{
#line 1175 "make_hlds_passes.m"
  {
#line 1175 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1175 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
#line 1175 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9;
#line 1176 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
#line 1176 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
#line 1176 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
#line 1179 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_16_16;
#line 1179 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_17_17;
#line 1179 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_18_18;
#line 1179 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_19_19;

#line 1177 "make_hlds_passes.m"
    {
#line 1177 "make_hlds_passes.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5)), ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_6)), hlds__make_hlds__make_hlds_passes__VersionNumbersMap0_8, &hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9);
    }
#line 1179 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 0)));
#line 1179 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 1)));
#line 1179 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 2)));
#line 1179 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_0_10, (MR_Integer) 3)));
#line 1179 "make_hlds_passes.m"
    {
#line 1179 "make_hlds_passes.m"
      MR_Word base;
#line 1179 "make_hlds_passes.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1179 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_RecompInfo_11 = base;
#line 1179 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_16_16));
#line 1179 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_17_17));
#line 1179 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_18_18));
#line 1179 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbersMap_9));
#line 1179 "make_hlds_passes.m"
    }
#line 1175 "make_hlds_passes.m"
  }
#line 1171 "make_hlds_passes.m"
}

#line 1168 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1(
#line 1168 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 1168 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 1168 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2)
#line 1168 "make_hlds_passes.m"
{
#line 1168 "make_hlds_passes.m"
  {
#line 1168 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 1168 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11;

#line 1168 "make_hlds_passes.m"
    {
#line 1168 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__update_module_version_numbers_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11);
    }
#line 1168 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_RecompInfo_11));
#line 1168 "make_hlds_passes.m"
  }
#line 1168 "make_hlds_passes.m"
}

#line 1161 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0(
#line 1161 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_5,
#line 1161 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__VersionNumbers_6,
#line 1161 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_8,
#line 1161 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_9)
#line 1161 "make_hlds_passes.m"
{
#line 1164 "make_hlds_passes.m"
  {
#line 1164 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 1164 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_10_10;

#line 1168 "make_hlds_passes.m"
    {
#line 1168 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[3]));
#line 1168 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0_1));
#line 1168 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1168 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_5));
#line 1168 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__VersionNumbers_6));
#line 1168 "make_hlds_passes.m"
    }
#line 1167 "make_hlds_passes.m"
    {
#line 1167 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(hlds__make_hlds__make_hlds_passes__V_10_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_9);
    }
#line 1164 "make_hlds_passes.m"
  }
#line 1161 "make_hlds_passes.m"
}

#line 1087 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_1(
#line 1087 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1087 "make_hlds_passes.m"
{
#line 1087 "make_hlds_passes.m"
  {
#line 1087 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1087 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_0, 1);
#line 1087 "make_hlds_passes.m"
  }
#line 1087 "make_hlds_passes.m"
}

#line 1090 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3(
#line 1090 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1090 "make_hlds_passes.m"
{
#line 1090 "make_hlds_passes.m"
  {
#line 1090 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1090 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv0_ProcInfo_30);
#line 1090 "make_hlds_passes.m"
    {
#line 1090 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
    }
#line 1090 "make_hlds_passes.m"
  }
#line 1090 "make_hlds_passes.m"
}

#line 1087 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_2(
#line 1087 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1087 "make_hlds_passes.m"
{
#line 1087 "make_hlds_passes.m"
  {
#line 1087 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1091 "make_hlds_passes.m"
    {
#line 1091 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31);
    }
#line 1093 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
#line 1093 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1093 "make_hlds_passes.m"
      {
#line 1093 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
#line 1087 "make_hlds_passes.m"
        {
#line 1094 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
#line 1094 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1094 "make_hlds_passes.m"
            {
#line 1094 "make_hlds_passes.m"
              {
#line 1094 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
#line 1094 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
#line 1094 "make_hlds_passes.m"
              }
#line 1087 "make_hlds_passes.m"
              {
#line 1094 "make_hlds_passes.m"
                {
#line 1094 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_210_210 = parse_tree__prog_mode__di_mode_0_f_0();
                }
#line 1094 "make_hlds_passes.m"
                {
#line 1094 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_84_84, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_210_210);
                }
#line 1087 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
                  {
#line 1094 "make_hlds_passes.m"
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_85_85)) == (MR_mktag((MR_Integer) 1)));
#line 1094 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1094 "make_hlds_passes.m"
                      {
#line 1094 "make_hlds_passes.m"
                        {
#line 1094 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_85_85, (MR_Integer) 0)));
#line 1094 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_85_85, (MR_Integer) 1)));
#line 1094 "make_hlds_passes.m"
                        }
#line 1087 "make_hlds_passes.m"
                        {
#line 1094 "make_hlds_passes.m"
                          {
#line 1094 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_211_211 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
#line 1094 "make_hlds_passes.m"
                          {
#line 1094 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_86_86, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_211_211);
                          }
#line 1087 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
                            {
#line 1094 "make_hlds_passes.m"
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__V_87_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
                                {
#line 1095 "make_hlds_passes.m"
                                  {
#line 1095 "make_hlds_passes.m"
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33);
                                  }
#line 1096 "make_hlds_passes.m"
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "make_hlds_passes.m"
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1096 "make_hlds_passes.m"
                                    {
#line 1096 "make_hlds_passes.m"
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
#line 1087 "make_hlds_passes.m"
                                      {
#line 1097 "make_hlds_passes.m"
#line 1097 "make_hlds_passes.m"
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_34) {
#line 1097 "make_hlds_passes.m"
                                          default:
#line 1097 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
#line 1097 "make_hlds_passes.m"
                                            break;
#line 1097 "make_hlds_passes.m"
                                          case (MR_Integer) 4:
#line 1097 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
#line 1097 "make_hlds_passes.m"
                                            break;
#line 1097 "make_hlds_passes.m"
                                          case (MR_Integer) 0:
#line 1097 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
#line 1097 "make_hlds_passes.m"
                                            break;
#line 1097 "make_hlds_passes.m"
                                        }
#line 1087 "make_hlds_passes.m"
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
                                          {
#line 1098 "make_hlds_passes.m"
                                            {
#line 1098 "make_hlds_passes.m"
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_35);
                                            }
#line 1099 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
#line 1099 "make_hlds_passes.m"
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1099 "make_hlds_passes.m"
                                              {
#line 1099 "make_hlds_passes.m"
                                                hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
                                              }
#line 1087 "make_hlds_passes.m"
                                          }
#line 1087 "make_hlds_passes.m"
                                      }
#line 1096 "make_hlds_passes.m"
                                    }
#line 1087 "make_hlds_passes.m"
                                }
#line 1087 "make_hlds_passes.m"
                            }
#line 1087 "make_hlds_passes.m"
                        }
#line 1094 "make_hlds_passes.m"
                      }
#line 1087 "make_hlds_passes.m"
                  }
#line 1087 "make_hlds_passes.m"
              }
#line 1094 "make_hlds_passes.m"
            }
#line 1087 "make_hlds_passes.m"
        }
#line 1093 "make_hlds_passes.m"
      }
#line 1087 "make_hlds_passes.m"
  }
#line 1087 "make_hlds_passes.m"
}

#line 1087 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_4(
#line 1087 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1087 "make_hlds_passes.m"
{
#line 1087 "make_hlds_passes.m"
  {
#line 1087 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1087 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_0) == 0)
#line 1087 "make_hlds_passes.m"
      {
#line 1087 "make_hlds_passes.m"
        {
#line 1087 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_28;
#line 1087 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_29;
#line 1087 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_82_82;
#line 1087 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_83_83;

#line 1087 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
            {
#line 1087 "make_hlds_passes.m"
              {
#line 1087 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
#line 1087 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
#line 1087 "make_hlds_passes.m"
              }
#line 1087 "make_hlds_passes.m"
              {
#line 1087 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__V_82_82)) == (MR_mktag((MR_Integer) 1)));
#line 1087 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
                  {
#line 1087 "make_hlds_passes.m"
                    {
#line 1087 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_82_82, (MR_Integer) 0)));
#line 1087 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_82_82, (MR_Integer) 1)));
#line 1087 "make_hlds_passes.m"
                    }
#line 1087 "make_hlds_passes.m"
                    {
#line 1087 "make_hlds_passes.m"
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1087 "make_hlds_passes.m"
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
                        {
#line 1088 "make_hlds_passes.m"
                          {
#line 1088 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_28);
                          }
#line 1087 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1087 "make_hlds_passes.m"
                            {
#line 1089 "make_hlds_passes.m"
                              {
#line 1089 "make_hlds_passes.m"
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_29);
                              }
#line 1087 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1090 "make_hlds_passes.m"
                                {
#line 1090 "make_hlds_passes.m"
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv0_ProcInfo_30, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
#line 1087 "make_hlds_passes.m"
                            }
#line 1087 "make_hlds_passes.m"
                        }
#line 1087 "make_hlds_passes.m"
                    }
#line 1087 "make_hlds_passes.m"
                  }
#line 1087 "make_hlds_passes.m"
              }
#line 1087 "make_hlds_passes.m"
            }
#line 1087 "make_hlds_passes.m"
        }
#line 1087 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
#line 1087 "make_hlds_passes.m"
      }
#line 1087 "make_hlds_passes.m"
    else
#line 1087 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
#line 1087 "make_hlds_passes.m"
  }
#line 1087 "make_hlds_passes.m"
}

#line 1114 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(
#line 1114 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1114 "make_hlds_passes.m"
{
#line 1114 "make_hlds_passes.m"
  {
#line 1114 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1114 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_1, 1);
#line 1114 "make_hlds_passes.m"
  }
#line 1114 "make_hlds_passes.m"
}

#line 1115 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7(
#line 1115 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1115 "make_hlds_passes.m"
{
#line 1115 "make_hlds_passes.m"
  {
#line 1115 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1115 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv1_ProcInfo_165);
#line 1115 "make_hlds_passes.m"
    {
#line 1115 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
    }
#line 1115 "make_hlds_passes.m"
  }
#line 1115 "make_hlds_passes.m"
}

#line 1114 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_6(
#line 1114 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1114 "make_hlds_passes.m"
{
#line 1114 "make_hlds_passes.m"
  {
#line 1114 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1116 "make_hlds_passes.m"
    {
#line 1116 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166);
    }
#line 1118 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166)) == (MR_mktag((MR_Integer) 1)));
#line 1118 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1118 "make_hlds_passes.m"
      {
#line 1118 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_167 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeHeadModes_166, (MR_Integer) 0)));
#line 1114 "make_hlds_passes.m"
        {
#line 1119 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__HeadModes_167 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1114 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1114 "make_hlds_passes.m"
            {
#line 1120 "make_hlds_passes.m"
              {
#line 1120 "make_hlds_passes.m"
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfo_165, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168);
              }
#line 1121 "make_hlds_passes.m"
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168)) == (MR_mktag((MR_Integer) 1)));
#line 1121 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1121 "make_hlds_passes.m"
                {
#line 1121 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__MaybeDetism_168, (MR_Integer) 0)));
#line 1114 "make_hlds_passes.m"
                  {
#line 1122 "make_hlds_passes.m"
#line 1122 "make_hlds_passes.m"
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Detism_169) {
#line 1122 "make_hlds_passes.m"
                      default:
#line 1122 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
#line 1122 "make_hlds_passes.m"
                        break;
#line 1122 "make_hlds_passes.m"
                      case (MR_Integer) 4:
#line 1122 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
#line 1122 "make_hlds_passes.m"
                        break;
#line 1122 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 1122 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
#line 1122 "make_hlds_passes.m"
                        break;
#line 1122 "make_hlds_passes.m"
                    }
#line 1114 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1114 "make_hlds_passes.m"
                      {
#line 1123 "make_hlds_passes.m"
                        {
#line 1123 "make_hlds_passes.m"
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_170);
                        }
#line 1124 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__Purity_170 == (MR_Integer) 2);
#line 1124 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1124 "make_hlds_passes.m"
                          {
#line 1124 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
                          }
#line 1114 "make_hlds_passes.m"
                      }
#line 1114 "make_hlds_passes.m"
                  }
#line 1121 "make_hlds_passes.m"
                }
#line 1114 "make_hlds_passes.m"
            }
#line 1114 "make_hlds_passes.m"
        }
#line 1118 "make_hlds_passes.m"
      }
#line 1114 "make_hlds_passes.m"
  }
#line 1114 "make_hlds_passes.m"
}

#line 1114 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(
#line 1114 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 1114 "make_hlds_passes.m"
{
#line 1114 "make_hlds_passes.m"
  {
#line 1114 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 1114 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__commit_1) == 0)
#line 1114 "make_hlds_passes.m"
      {
#line 1114 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1114 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1115 "make_hlds_passes.m"
          {
#line 1115 "make_hlds_passes.m"
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__conv1_ProcInfo_165, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
#line 1114 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_FALSE;
#line 1114 "make_hlds_passes.m"
      }
#line 1114 "make_hlds_passes.m"
    else
#line 1114 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded = MR_TRUE;
#line 1114 "make_hlds_passes.m"
  }
#line 1114 "make_hlds_passes.m"
}

#line 1046 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0(
#line 1046 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SymName_8,
#line 1046 "make_hlds_passes.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_9,
#line 1046 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_10,
#line 1046 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43,
#line 1046 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44,
#line 1046 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45,
#line 1046 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46)
#line 1046 "make_hlds_passes.m"
{
#line 1046 "make_hlds_passes.m"
  {
#line 1046 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

#line 1050 "make_hlds_passes.m"
    {
#line 1050 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_13;
#line 1050 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_14;

#line 1062 "make_hlds_passes.m"
      {
#line 1062 "make_hlds_passes.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__PredTable_13);
      }
#line 1063 "make_hlds_passes.m"
      {
#line 1063 "make_hlds_passes.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_13, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__PredIds_14);
      }
#line 1074 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1066 "make_hlds_passes.m"
        {
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_15;
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_16;
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_17;
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_133_133;
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_134_134;
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_135_135;
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_157_157;
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_158_158;
#line 1066 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_162_162;

#line 1067 "make_hlds_passes.m"
          {
#line 1067 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1067 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1067 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_135_135, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1067 "make_hlds_passes.m"
          }
#line 1067 "make_hlds_passes.m"
          {
#line 1067 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1067 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_134_134, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_135_135));
#line 1067 "make_hlds_passes.m"
          }
#line 1067 "make_hlds_passes.m"
          {
#line 1067 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_133_133, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_134_134));
#line 1067 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[51])));
#line 1067 "make_hlds_passes.m"
          }
#line 1067 "make_hlds_passes.m"
          {
#line 1067 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
#line 1067 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_133_133));
#line 1067 "make_hlds_passes.m"
          }
#line 1071 "make_hlds_passes.m"
          {
#line 1071 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_158_158, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_15));
#line 1071 "make_hlds_passes.m"
          }
#line 1071 "make_hlds_passes.m"
          {
#line 1071 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_157_157, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_158_158));
#line 1071 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "make_hlds_passes.m"
          }
#line 1071 "make_hlds_passes.m"
          {
#line 1071 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1071 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_157_157));
#line 1071 "make_hlds_passes.m"
          }
#line 1072 "make_hlds_passes.m"
          {
#line 1072 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_16));
#line 1072 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_162_162, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1072 "make_hlds_passes.m"
          }
#line 1072 "make_hlds_passes.m"
          {
#line 1072 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1072 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1072 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1072 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_162_162));
#line 1072 "make_hlds_passes.m"
          }
#line 1073 "make_hlds_passes.m"
          {
#line 1073 "make_hlds_passes.m"
            MR_Word base;
#line 1073 "make_hlds_passes.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1073 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_17));
#line 1073 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1073 "make_hlds_passes.m"
          }
#line 1066 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1066 "make_hlds_passes.m"
        }
#line 1074 "make_hlds_passes.m"
      else
#line 1075 "make_hlds_passes.m"
        {
#line 1075 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 0)));
#line 1075 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 1)));

#line 1147 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1077 "make_hlds_passes.m"
            {
#line 1077 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_23;
#line 1077 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_25;
#line 1077 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_26;
#line 1077 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_27;

#line 1079 "make_hlds_passes.m"
              {
#line 1079 "make_hlds_passes.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__make_hlds_passes__HeadPredId_18, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21);
              }
#line 1080 "make_hlds_passes.m"
              {
#line 1080 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ArgTypes_22);
              }
#line 1081 "make_hlds_passes.m"
              {
#line 1081 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__PredInfo_21, &hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 2994 "hlds.make_hlds.make_hlds_passes.c"
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 1082 "make_hlds_passes.m"
              {
#line 1082 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__TypeCtorInfo_209_209, hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 1083 "make_hlds_passes.m"
              {
#line 1083 "make_hlds_passes.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__Globals_25);
              }
#line 1084 "make_hlds_passes.m"
              {
#line 1084 "make_hlds_passes.m"
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_25, &hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 1085 "make_hlds_passes.m"
              {
#line 1085 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 1087 "make_hlds_passes.m"
              {
#line 1087 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
#line 1086 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1102 "make_hlds_passes.m"
                {
#line 1102 "make_hlds_passes.m"
                  MR_String hlds__make_hlds__make_hlds_passes__CName_36;
#line 1102 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_37;
#line 1102 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_38;
#line 1102 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88;
#line 1102 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_89_89;
#line 1102 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_90_90;
#line 1102 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_91_91;
#line 1102 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_92_92;

#line 1101 "make_hlds_passes.m"
                  {
#line 1101 "make_hlds_passes.m"
                    hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88);
                  }
#line 1104 "make_hlds_passes.m"
                  {
#line 1104 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_90_90 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
#line 1104 "make_hlds_passes.m"
                  {
#line 1104 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_92_92 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
#line 1104 "make_hlds_passes.m"
                  {
#line 1104 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_91_91, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_92_92));
#line 1104 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1104 "make_hlds_passes.m"
                  }
#line 1104 "make_hlds_passes.m"
                  {
#line 1104 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_90_90));
#line 1104 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_91_91));
#line 1104 "make_hlds_passes.m"
                  }
#line 1103 "make_hlds_passes.m"
                  {
#line 1103 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1103 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_89_89));
#line 1103 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1103 "make_hlds_passes.m"
                  }
#line 1105 "make_hlds_passes.m"
                  {
#line 1105 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1105 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_37));
#line 1105 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_36));
#line 1105 "make_hlds_passes.m"
                  }
#line 1111 "make_hlds_passes.m"
                  {
#line 1111 "make_hlds_passes.m"
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), hlds__make_hlds__make_hlds_passes__FPEInfo_38, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
                  }
#line 1102 "make_hlds_passes.m"
                }
#line 1086 "make_hlds_passes.m"
              else
#line 1113 "make_hlds_passes.m"
                {
#line 1114 "make_hlds_passes.m"
                  {
#line 1114 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
#line 1113 "make_hlds_passes.m"
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0_env_0__succeeded)
#line 1127 "make_hlds_passes.m"
                    {
#line 1127 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_99_99;
#line 1127 "make_hlds_passes.m"
                      MR_String hlds__make_hlds__make_hlds_passes__CName_171;
#line 1127 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_172;
#line 1127 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_173;

#line 1126 "make_hlds_passes.m"
                      {
#line 1126 "make_hlds_passes.m"
                        hlds__hlds_module__module_info_new_user_final_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_171, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_99_99);
                      }
#line 1128 "make_hlds_passes.m"
                      {
#line 1128 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_172, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1128 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1128 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_172, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1128 "make_hlds_passes.m"
                      }
#line 1130 "make_hlds_passes.m"
                      {
#line 1130 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__FPEInfo_173 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_173, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1130 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_173, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_172));
#line 1130 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_173, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_171));
#line 1130 "make_hlds_passes.m"
                      }
#line 1136 "make_hlds_passes.m"
                      {
#line 1136 "make_hlds_passes.m"
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), hlds__make_hlds__make_hlds_passes__FPEInfo_173, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_99_99, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
                      }
#line 1127 "make_hlds_passes.m"
                    }
#line 1113 "make_hlds_passes.m"
                  else
#line 1141 "make_hlds_passes.m"
                    {
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_108_108;
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_109_109;
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_110_110;
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_123_123;
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_124_124;
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_128_128;
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_176;
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_177;
#line 1141 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_178;

#line 1139 "make_hlds_passes.m"
                      {
#line 1139 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1139 "make_hlds_passes.m"
                      }
#line 1139 "make_hlds_passes.m"
                      {
#line 1139 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_110_110));
#line 1139 "make_hlds_passes.m"
                      }
#line 1139 "make_hlds_passes.m"
                      {
#line 1139 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_109_109));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[55])));
#line 1139 "make_hlds_passes.m"
                      }
#line 1139 "make_hlds_passes.m"
                      {
#line 1139 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Pieces_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
#line 1139 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_176, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_108_108));
#line 1139 "make_hlds_passes.m"
                      }
#line 1142 "make_hlds_passes.m"
                      {
#line 1142 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_124_124, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_176));
#line 1142 "make_hlds_passes.m"
                      }
#line 1142 "make_hlds_passes.m"
                      {
#line 1142 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_124_124));
#line 1142 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_123_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1142 "make_hlds_passes.m"
                      }
#line 1142 "make_hlds_passes.m"
                      {
#line 1142 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_177 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1142 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_177, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1142 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_177, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_123_123));
#line 1142 "make_hlds_passes.m"
                      }
#line 1144 "make_hlds_passes.m"
                      {
#line 1144 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_177));
#line 1144 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1144 "make_hlds_passes.m"
                      }
#line 1143 "make_hlds_passes.m"
                      {
#line 1143 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1143 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_178, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1143 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_178, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_128_128));
#line 1143 "make_hlds_passes.m"
                      }
#line 1145 "make_hlds_passes.m"
                      {
#line 1145 "make_hlds_passes.m"
                        MR_Word base;
#line 1145 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1145 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_178));
#line 1145 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1145 "make_hlds_passes.m"
                      }
#line 1141 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1141 "make_hlds_passes.m"
                    }
#line 1113 "make_hlds_passes.m"
                }
#line 1077 "make_hlds_passes.m"
            }
#line 1147 "make_hlds_passes.m"
          else
#line 1148 "make_hlds_passes.m"
            {
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_50_50;
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_51_51;
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_52_52;
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_74_74;
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_75_75;
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_79_79;
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_199;
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_200;
#line 1148 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_201;

#line 1149 "make_hlds_passes.m"
              {
#line 1149 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1149 "make_hlds_passes.m"
              }
#line 1149 "make_hlds_passes.m"
              {
#line 1149 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_52_52));
#line 1149 "make_hlds_passes.m"
              }
#line 1149 "make_hlds_passes.m"
              {
#line 1149 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_51_51));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[63])));
#line 1149 "make_hlds_passes.m"
              }
#line 1149 "make_hlds_passes.m"
              {
#line 1149 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Pieces_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_199, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
#line 1149 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_199, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_50_50));
#line 1149 "make_hlds_passes.m"
              }
#line 1153 "make_hlds_passes.m"
              {
#line 1153 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_199));
#line 1153 "make_hlds_passes.m"
              }
#line 1153 "make_hlds_passes.m"
              {
#line 1153 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_75_75));
#line 1153 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1153 "make_hlds_passes.m"
              }
#line 1153 "make_hlds_passes.m"
              {
#line 1153 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Msg_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_200, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1153 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_200, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_74_74));
#line 1153 "make_hlds_passes.m"
              }
#line 1154 "make_hlds_passes.m"
              {
#line 1154 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_200));
#line 1154 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1154 "make_hlds_passes.m"
              }
#line 1154 "make_hlds_passes.m"
              {
#line 1154 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Spec_201 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1154 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1154 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1154 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_201, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_79_79));
#line 1154 "make_hlds_passes.m"
              }
#line 1155 "make_hlds_passes.m"
              {
#line 1155 "make_hlds_passes.m"
                MR_Word base;
#line 1155 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1155 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_201));
#line 1155 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1155 "make_hlds_passes.m"
              }
#line 1148 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1148 "make_hlds_passes.m"
            }
#line 1075 "make_hlds_passes.m"
        }
#line 1050 "make_hlds_passes.m"
    }
#line 1046 "make_hlds_passes.m"
  }
#line 1046 "make_hlds_passes.m"
}

#line 970 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_1(
#line 970 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 970 "make_hlds_passes.m"
{
#line 970 "make_hlds_passes.m"
  {
#line 970 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 970 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_0, 1);
#line 970 "make_hlds_passes.m"
  }
#line 970 "make_hlds_passes.m"
}

#line 973 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3(
#line 973 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 973 "make_hlds_passes.m"
{
#line 973 "make_hlds_passes.m"
  {
#line 973 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 973 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv0_ProcInfo_30);
#line 973 "make_hlds_passes.m"
    {
#line 973 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(hlds__make_hlds__make_hlds_passes__env_ptr);
    }
#line 973 "make_hlds_passes.m"
  }
#line 973 "make_hlds_passes.m"
}

#line 970 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_2(
#line 970 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 970 "make_hlds_passes.m"
{
#line 970 "make_hlds_passes.m"
  {
#line 970 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 974 "make_hlds_passes.m"
    {
#line 974 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31);
    }
#line 976 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31)) == (MR_mktag((MR_Integer) 1)));
#line 976 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 976 "make_hlds_passes.m"
      {
#line 976 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_31, (MR_Integer) 0)));
#line 970 "make_hlds_passes.m"
        {
#line 977 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32)) == (MR_mktag((MR_Integer) 1)));
#line 977 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 977 "make_hlds_passes.m"
            {
#line 977 "make_hlds_passes.m"
              {
#line 977 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32, (MR_Integer) 0)));
#line 977 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_32, (MR_Integer) 1)));
#line 977 "make_hlds_passes.m"
              }
#line 970 "make_hlds_passes.m"
              {
#line 977 "make_hlds_passes.m"
                {
#line 977 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_195_195 = parse_tree__prog_mode__di_mode_0_f_0();
                }
#line 977 "make_hlds_passes.m"
                {
#line 977 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_72_72, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_195_195);
                }
#line 970 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 970 "make_hlds_passes.m"
                  {
#line 977 "make_hlds_passes.m"
                    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 977 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 977 "make_hlds_passes.m"
                      {
#line 977 "make_hlds_passes.m"
                        {
#line 977 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_73_73, (MR_Integer) 0)));
#line 977 "make_hlds_passes.m"
                          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_73_73, (MR_Integer) 1)));
#line 977 "make_hlds_passes.m"
                        }
#line 970 "make_hlds_passes.m"
                        {
#line 977 "make_hlds_passes.m"
                          {
#line 977 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_196_196 = parse_tree__prog_mode__uo_mode_0_f_0();
                          }
#line 977 "make_hlds_passes.m"
                          {
#line 977 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_data____Unify____mer_mode_0_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_74_74, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_196_196);
                          }
#line 970 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 970 "make_hlds_passes.m"
                            {
#line 977 "make_hlds_passes.m"
                              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 970 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 970 "make_hlds_passes.m"
                                {
#line 978 "make_hlds_passes.m"
                                  {
#line 978 "make_hlds_passes.m"
                                    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_30, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33);
                                  }
#line 979 "make_hlds_passes.m"
                                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33)) == (MR_mktag((MR_Integer) 1)));
#line 979 "make_hlds_passes.m"
                                  if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 979 "make_hlds_passes.m"
                                    {
#line 979 "make_hlds_passes.m"
                                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_33, (MR_Integer) 0)));
#line 970 "make_hlds_passes.m"
                                      {
#line 980 "make_hlds_passes.m"
#line 980 "make_hlds_passes.m"
                                        switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_34) {
#line 980 "make_hlds_passes.m"
                                          default:
#line 980 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
#line 980 "make_hlds_passes.m"
                                            break;
#line 980 "make_hlds_passes.m"
                                          case (MR_Integer) 4:
#line 980 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
#line 980 "make_hlds_passes.m"
                                            break;
#line 980 "make_hlds_passes.m"
                                          case (MR_Integer) 0:
#line 980 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
#line 980 "make_hlds_passes.m"
                                            break;
#line 980 "make_hlds_passes.m"
                                        }
#line 970 "make_hlds_passes.m"
                                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 970 "make_hlds_passes.m"
                                          {
#line 981 "make_hlds_passes.m"
                                            {
#line 981 "make_hlds_passes.m"
                                              hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_35);
                                            }
#line 982 "make_hlds_passes.m"
                                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_35 == (MR_Integer) 0);
#line 982 "make_hlds_passes.m"
                                            if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 982 "make_hlds_passes.m"
                                              {
#line 982 "make_hlds_passes.m"
                                                hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_1(hlds__make_hlds__make_hlds_passes__env_ptr);
                                              }
#line 970 "make_hlds_passes.m"
                                          }
#line 970 "make_hlds_passes.m"
                                      }
#line 979 "make_hlds_passes.m"
                                    }
#line 970 "make_hlds_passes.m"
                                }
#line 970 "make_hlds_passes.m"
                            }
#line 970 "make_hlds_passes.m"
                        }
#line 977 "make_hlds_passes.m"
                      }
#line 970 "make_hlds_passes.m"
                  }
#line 970 "make_hlds_passes.m"
              }
#line 977 "make_hlds_passes.m"
            }
#line 970 "make_hlds_passes.m"
        }
#line 976 "make_hlds_passes.m"
      }
#line 970 "make_hlds_passes.m"
  }
#line 970 "make_hlds_passes.m"
}

#line 970 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_4(
#line 970 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 970 "make_hlds_passes.m"
{
#line 970 "make_hlds_passes.m"
  {
#line 970 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 970 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_0) == 0)
#line 970 "make_hlds_passes.m"
      {
#line 970 "make_hlds_passes.m"
        {
#line 970 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg1Type_28;
#line 970 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Arg2Type_29;
#line 970 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_70_70;
#line 970 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_71_71;

#line 970 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22)) == (MR_mktag((MR_Integer) 1)));
#line 970 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 970 "make_hlds_passes.m"
            {
#line 970 "make_hlds_passes.m"
              {
#line 970 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Arg1Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 0)));
#line 970 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22, (MR_Integer) 1)));
#line 970 "make_hlds_passes.m"
              }
#line 970 "make_hlds_passes.m"
              {
#line 970 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 970 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 970 "make_hlds_passes.m"
                  {
#line 970 "make_hlds_passes.m"
                    {
#line 970 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__Arg2Type_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Integer) 0)));
#line 970 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Integer) 1)));
#line 970 "make_hlds_passes.m"
                    }
#line 970 "make_hlds_passes.m"
                    {
#line 970 "make_hlds_passes.m"
                      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = (hlds__make_hlds__make_hlds_passes__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 970 "make_hlds_passes.m"
                      if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 970 "make_hlds_passes.m"
                        {
#line 971 "make_hlds_passes.m"
                          {
#line 971 "make_hlds_passes.m"
                            (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg1Type_28);
                          }
#line 970 "make_hlds_passes.m"
                          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 970 "make_hlds_passes.m"
                            {
#line 972 "make_hlds_passes.m"
                              {
#line 972 "make_hlds_passes.m"
                                (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = parse_tree__prog_type__type_is_io_state_1_p_0(hlds__make_hlds__make_hlds_passes__Arg2Type_29);
                              }
#line 970 "make_hlds_passes.m"
                              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 973 "make_hlds_passes.m"
                                {
#line 973 "make_hlds_passes.m"
                                  mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv0_ProcInfo_30, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_3, hlds__make_hlds__make_hlds_passes__env_ptr);
                                }
#line 970 "make_hlds_passes.m"
                            }
#line 970 "make_hlds_passes.m"
                        }
#line 970 "make_hlds_passes.m"
                    }
#line 970 "make_hlds_passes.m"
                  }
#line 970 "make_hlds_passes.m"
              }
#line 970 "make_hlds_passes.m"
            }
#line 970 "make_hlds_passes.m"
        }
#line 970 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
#line 970 "make_hlds_passes.m"
      }
#line 970 "make_hlds_passes.m"
    else
#line 970 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
#line 970 "make_hlds_passes.m"
  }
#line 970 "make_hlds_passes.m"
}

#line 997 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(
#line 997 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 997 "make_hlds_passes.m"
{
#line 997 "make_hlds_passes.m"
  {
#line 997 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 997 "make_hlds_passes.m"
    MR_builtin_longjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_1, 1);
#line 997 "make_hlds_passes.m"
  }
#line 997 "make_hlds_passes.m"
}

#line 998 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7(
#line 998 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 998 "make_hlds_passes.m"
{
#line 998 "make_hlds_passes.m"
  {
#line 998 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 998 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150 = ((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv1_ProcInfo_150);
#line 998 "make_hlds_passes.m"
    {
#line 998 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(hlds__make_hlds__make_hlds_passes__env_ptr);
    }
#line 998 "make_hlds_passes.m"
  }
#line 998 "make_hlds_passes.m"
}

#line 997 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_6(
#line 997 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 997 "make_hlds_passes.m"
{
#line 997 "make_hlds_passes.m"
  {
#line 997 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 999 "make_hlds_passes.m"
    {
#line 999 "make_hlds_passes.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151);
    }
#line 1001 "make_hlds_passes.m"
    (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151)) == (MR_mktag((MR_Integer) 1)));
#line 1001 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 1001 "make_hlds_passes.m"
      {
#line 1001 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeHeadModes_151, (MR_Integer) 0)));
#line 997 "make_hlds_passes.m"
        {
#line 1002 "make_hlds_passes.m"
          (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__HeadModes_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 997 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 997 "make_hlds_passes.m"
            {
#line 1003 "make_hlds_passes.m"
              {
#line 1003 "make_hlds_passes.m"
                hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfo_150, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153);
              }
#line 1004 "make_hlds_passes.m"
              (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153)) == (MR_mktag((MR_Integer) 1)));
#line 1004 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 1004 "make_hlds_passes.m"
                {
#line 1004 "make_hlds_passes.m"
                  (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_154 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__MaybeDetism_153, (MR_Integer) 0)));
#line 997 "make_hlds_passes.m"
                  {
#line 1005 "make_hlds_passes.m"
#line 1005 "make_hlds_passes.m"
                    switch ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Detism_154) {
#line 1005 "make_hlds_passes.m"
                      default:
#line 1005 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
#line 1005 "make_hlds_passes.m"
                        break;
#line 1005 "make_hlds_passes.m"
                      case (MR_Integer) 4:
#line 1005 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
#line 1005 "make_hlds_passes.m"
                        break;
#line 1005 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 1005 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
#line 1005 "make_hlds_passes.m"
                        break;
#line 1005 "make_hlds_passes.m"
                    }
#line 997 "make_hlds_passes.m"
                    if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 997 "make_hlds_passes.m"
                      {
#line 1006 "make_hlds_passes.m"
                        {
#line 1006 "make_hlds_passes.m"
                          hlds__hlds_pred__pred_info_get_purity_2_p_0((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_155);
                        }
#line 1007 "make_hlds_passes.m"
                        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__Purity_155 == (MR_Integer) 2);
#line 1007 "make_hlds_passes.m"
                        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 1007 "make_hlds_passes.m"
                          {
#line 1007 "make_hlds_passes.m"
                            hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_5(hlds__make_hlds__make_hlds_passes__env_ptr);
                          }
#line 997 "make_hlds_passes.m"
                      }
#line 997 "make_hlds_passes.m"
                  }
#line 1004 "make_hlds_passes.m"
                }
#line 997 "make_hlds_passes.m"
            }
#line 997 "make_hlds_passes.m"
        }
#line 1001 "make_hlds_passes.m"
      }
#line 997 "make_hlds_passes.m"
  }
#line 997 "make_hlds_passes.m"
}

#line 997 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(
#line 997 "make_hlds_passes.m"
  void * hlds__make_hlds__make_hlds_passes__env_ptr_arg)
#line 997 "make_hlds_passes.m"
{
#line 997 "make_hlds_passes.m"
  {
#line 997 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s * hlds__make_hlds__make_hlds_passes__env_ptr = (struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s *) hlds__make_hlds__make_hlds_passes__env_ptr_arg;

#line 997 "make_hlds_passes.m"
    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__commit_1) == 0)
#line 997 "make_hlds_passes.m"
      {
#line 997 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 997 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 998 "make_hlds_passes.m"
          {
#line 998 "make_hlds_passes.m"
            mercury__list__member_2_p_1((hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, &(hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__conv1_ProcInfo_150, (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24, hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_7, hlds__make_hlds__make_hlds_passes__env_ptr);
          }
#line 997 "make_hlds_passes.m"
        (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_FALSE;
#line 997 "make_hlds_passes.m"
      }
#line 997 "make_hlds_passes.m"
    else
#line 997 "make_hlds_passes.m"
      (hlds__make_hlds__make_hlds_passes__env_ptr)->hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded = MR_TRUE;
#line 997 "make_hlds_passes.m"
  }
#line 997 "make_hlds_passes.m"
}

#line 927 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0(
#line 927 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SymName_8,
#line 927 "make_hlds_passes.m"
  MR_Integer hlds__make_hlds__make_hlds_passes__Arity_9,
#line 927 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_10,
#line 927 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43,
#line 927 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44,
#line 927 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45,
#line 927 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46)
#line 927 "make_hlds_passes.m"
{
#line 927 "make_hlds_passes.m"
  {
#line 927 "make_hlds_passes.m"
    struct hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0_s hlds__make_hlds__make_hlds_passes__env;

#line 931 "make_hlds_passes.m"
    {
#line 931 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredTable_13;
#line 931 "make_hlds_passes.m"
      MR_Word hlds__make_hlds__make_hlds_passes__PredIds_14;

#line 944 "make_hlds_passes.m"
      {
#line 944 "make_hlds_passes.m"
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__PredTable_13);
      }
#line 945 "make_hlds_passes.m"
      {
#line 945 "make_hlds_passes.m"
        hlds__pred_table__predicate_table_lookup_pred_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable_13, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__PredIds_14);
      }
#line 956 "make_hlds_passes.m"
      if ((hlds__make_hlds__make_hlds_passes__PredIds_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "make_hlds_passes.m"
        {
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Pieces_15;
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Msg_16;
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__Spec_17;
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_118_118;
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_119_119;
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_120_120;
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_142_142;
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_143_143;
#line 948 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_147_147;

#line 949 "make_hlds_passes.m"
          {
#line 949 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 949 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_120_120, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 949 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 949 "make_hlds_passes.m"
          }
#line 949 "make_hlds_passes.m"
          {
#line 949 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 949 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_119_119, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_120_120));
#line 949 "make_hlds_passes.m"
          }
#line 949 "make_hlds_passes.m"
          {
#line 949 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_118_118, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_119_119));
#line 949 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_118_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[42])));
#line 949 "make_hlds_passes.m"
          }
#line 949 "make_hlds_passes.m"
          {
#line 949 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Pieces_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
#line 949 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_15, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_118_118));
#line 949 "make_hlds_passes.m"
          }
#line 953 "make_hlds_passes.m"
          {
#line 953 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 953 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_143_143, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_15));
#line 953 "make_hlds_passes.m"
          }
#line 953 "make_hlds_passes.m"
          {
#line 953 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 953 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_143_143));
#line 953 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 953 "make_hlds_passes.m"
          }
#line 953 "make_hlds_passes.m"
          {
#line 953 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Msg_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 953 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_16, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_142_142));
#line 953 "make_hlds_passes.m"
          }
#line 954 "make_hlds_passes.m"
          {
#line 954 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_147_147, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_16));
#line 954 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_147_147, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "make_hlds_passes.m"
          }
#line 954 "make_hlds_passes.m"
          {
#line 954 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Spec_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 954 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 954 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_17, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_147_147));
#line 954 "make_hlds_passes.m"
          }
#line 955 "make_hlds_passes.m"
          {
#line 955 "make_hlds_passes.m"
            MR_Word base;
#line 955 "make_hlds_passes.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 955 "make_hlds_passes.m"
            *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 955 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_17));
#line 955 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 955 "make_hlds_passes.m"
          }
#line 948 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 948 "make_hlds_passes.m"
        }
#line 956 "make_hlds_passes.m"
      else
#line 957 "make_hlds_passes.m"
        {
#line 957 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__HeadPredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 0)));
#line 957 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__TailPredIds_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__PredIds_14, (MR_Integer) 1)));

#line 1032 "make_hlds_passes.m"
          if ((hlds__make_hlds__make_hlds_passes__TailPredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 959 "make_hlds_passes.m"
            {
#line 959 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ProcTable_23;
#line 959 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Globals_25;
#line 959 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__CompilationTarget_26;
#line 959 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ExportLang_27;

#line 961 "make_hlds_passes.m"
              {
#line 961 "make_hlds_passes.m"
                hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__make_hlds_passes__HeadPredId_18, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21);
              }
#line 962 "make_hlds_passes.m"
              {
#line 962 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_arg_types_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &(hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ArgTypes_22);
              }
#line 963 "make_hlds_passes.m"
              {
#line 963 "make_hlds_passes.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__PredInfo_21, &hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 4171 "hlds.make_hlds.make_hlds_passes.c"
              (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 964 "make_hlds_passes.m"
              {
#line 964 "make_hlds_passes.m"
                (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__ProcInfos_24 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__TypeCtorInfo_194_194, hlds__make_hlds__make_hlds_passes__ProcTable_23);
              }
#line 965 "make_hlds_passes.m"
              {
#line 965 "make_hlds_passes.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__Globals_25);
              }
#line 966 "make_hlds_passes.m"
              {
#line 966 "make_hlds_passes.m"
                libs__globals__get_target_2_p_0(hlds__make_hlds__make_hlds_passes__Globals_25, &hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 967 "make_hlds_passes.m"
              {
#line 967 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__ExportLang_27 = libs__globals__target_lang_to_foreign_export_lang_1_f_0(hlds__make_hlds__make_hlds_passes__CompilationTarget_26);
              }
#line 970 "make_hlds_passes.m"
              {
#line 970 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_4(&hlds__make_hlds__make_hlds_passes__env);
              }
#line 969 "make_hlds_passes.m"
              if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 985 "make_hlds_passes.m"
                {
#line 985 "make_hlds_passes.m"
                  MR_String hlds__make_hlds__make_hlds_passes__CName_36;
#line 985 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_37;
#line 985 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_38;
#line 985 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76;
#line 985 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_77_77;
#line 985 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_78_78;
#line 985 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_79_79;
#line 985 "make_hlds_passes.m"
                  MR_Word hlds__make_hlds__make_hlds_passes__V_80_80;

#line 984 "make_hlds_passes.m"
                  {
#line 984 "make_hlds_passes.m"
                    hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76);
                  }
#line 987 "make_hlds_passes.m"
                  {
#line 987 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_78_78 = parse_tree__prog_mode__di_mode_0_f_0();
                  }
#line 987 "make_hlds_passes.m"
                  {
#line 987 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_80_80 = parse_tree__prog_mode__uo_mode_0_f_0();
                  }
#line 987 "make_hlds_passes.m"
                  {
#line 987 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_80_80));
#line 987 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "make_hlds_passes.m"
                  }
#line 987 "make_hlds_passes.m"
                  {
#line 987 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_78_78));
#line 987 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_79_79));
#line 987 "make_hlds_passes.m"
                  }
#line 986 "make_hlds_passes.m"
                  {
#line 986 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__PredNameModesPF_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 986 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 986 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_77_77));
#line 986 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_37, 2) = ((MR_Box) ((MR_Integer) 0));
#line 986 "make_hlds_passes.m"
                  }
#line 988 "make_hlds_passes.m"
                  {
#line 988 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__FPEInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 988 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 988 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_37));
#line 988 "make_hlds_passes.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_38, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_36));
#line 988 "make_hlds_passes.m"
                  }
#line 994 "make_hlds_passes.m"
                  {
#line 994 "make_hlds_passes.m"
                    hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), hlds__make_hlds__make_hlds_passes__FPEInfo_38, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
                  }
#line 985 "make_hlds_passes.m"
                }
#line 969 "make_hlds_passes.m"
              else
#line 996 "make_hlds_passes.m"
                {
#line 997 "make_hlds_passes.m"
                  {
#line 997 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_8(&hlds__make_hlds__make_hlds_passes__env);
                  }
#line 996 "make_hlds_passes.m"
                  if ((hlds__make_hlds__make_hlds_passes__env).hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0_env_0__succeeded)
#line 1010 "make_hlds_passes.m"
                    {
#line 1010 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87;
#line 1010 "make_hlds_passes.m"
                      MR_String hlds__make_hlds__make_hlds_passes__CName_156;
#line 1010 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__PredNameModesPF_157;
#line 1010 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__FPEInfo_158;

#line 1009 "make_hlds_passes.m"
                      {
#line 1009 "make_hlds_passes.m"
                        hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__make_hlds_passes__SymName_8, hlds__make_hlds__make_hlds_passes__Arity_9, &hlds__make_hlds__make_hlds_passes__CName_156, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87);
                      }
#line 1011 "make_hlds_passes.m"
                      {
#line 1011 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__PredNameModesPF_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1011 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1011 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__PredNameModesPF_157, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1011 "make_hlds_passes.m"
                      }
#line 1013 "make_hlds_passes.m"
                      {
#line 1013 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__FPEInfo_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1013 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ExportLang_27));
#line 1013 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredNameModesPF_157));
#line 1013 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__FPEInfo_158, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__CName_156));
#line 1013 "make_hlds_passes.m"
                      }
#line 1019 "make_hlds_passes.m"
                      {
#line 1019 "make_hlds_passes.m"
                        hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_1[69]))), hlds__make_hlds__make_hlds_passes__FPEInfo_158, hlds__make_hlds__make_hlds_passes__Context_10, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46);
                      }
#line 1010 "make_hlds_passes.m"
                    }
#line 996 "make_hlds_passes.m"
                  else
#line 1025 "make_hlds_passes.m"
                    {
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_96_96;
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_97_97;
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_98_98;
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_108_108;
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_109_109;
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__V_113_113;
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Pieces_161;
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Msg_162;
#line 1025 "make_hlds_passes.m"
                      MR_Word hlds__make_hlds__make_hlds_passes__Spec_163;

#line 1023 "make_hlds_passes.m"
                      {
#line 1023 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_98_98, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1023 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_98_98, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1023 "make_hlds_passes.m"
                      }
#line 1023 "make_hlds_passes.m"
                      {
#line 1023 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1023 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_97_97, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_98_98));
#line 1023 "make_hlds_passes.m"
                      }
#line 1023 "make_hlds_passes.m"
                      {
#line 1023 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_97_97));
#line 1023 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[46])));
#line 1023 "make_hlds_passes.m"
                      }
#line 1022 "make_hlds_passes.m"
                      {
#line 1022 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Pieces_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
#line 1022 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_161, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_96_96));
#line 1022 "make_hlds_passes.m"
                      }
#line 1027 "make_hlds_passes.m"
                      {
#line 1027 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_161));
#line 1027 "make_hlds_passes.m"
                      }
#line 1027 "make_hlds_passes.m"
                      {
#line 1027 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_109_109));
#line 1027 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1027 "make_hlds_passes.m"
                      }
#line 1027 "make_hlds_passes.m"
                      {
#line 1027 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Msg_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1027 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_162, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_108_108));
#line 1027 "make_hlds_passes.m"
                      }
#line 1029 "make_hlds_passes.m"
                      {
#line 1029 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_162));
#line 1029 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1029 "make_hlds_passes.m"
                      }
#line 1028 "make_hlds_passes.m"
                      {
#line 1028 "make_hlds_passes.m"
                        hlds__make_hlds__make_hlds_passes__Spec_163 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1028 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_163, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_113_113));
#line 1028 "make_hlds_passes.m"
                      }
#line 1030 "make_hlds_passes.m"
                      {
#line 1030 "make_hlds_passes.m"
                        MR_Word base;
#line 1030 "make_hlds_passes.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "make_hlds_passes.m"
                        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1030 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_163));
#line 1030 "make_hlds_passes.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1030 "make_hlds_passes.m"
                      }
#line 1025 "make_hlds_passes.m"
                      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1025 "make_hlds_passes.m"
                    }
#line 996 "make_hlds_passes.m"
                }
#line 959 "make_hlds_passes.m"
            }
#line 1032 "make_hlds_passes.m"
          else
#line 1033 "make_hlds_passes.m"
            {
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_50_50;
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_51_51;
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_52_52;
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_62_62;
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_63_63;
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_67_67;
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Pieces_184;
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Msg_185;
#line 1033 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__Spec_186;

#line 1034 "make_hlds_passes.m"
              {
#line 1034 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1034 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_8));
#line 1034 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_9));
#line 1034 "make_hlds_passes.m"
              }
#line 1034 "make_hlds_passes.m"
              {
#line 1034 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1034 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_52_52));
#line 1034 "make_hlds_passes.m"
              }
#line 1034 "make_hlds_passes.m"
              {
#line 1034 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_51_51));
#line 1034 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[49])));
#line 1034 "make_hlds_passes.m"
              }
#line 1034 "make_hlds_passes.m"
              {
#line 1034 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Pieces_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[68])));
#line 1034 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_184, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_50_50));
#line 1034 "make_hlds_passes.m"
              }
#line 1037 "make_hlds_passes.m"
              {
#line 1037 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_184));
#line 1037 "make_hlds_passes.m"
              }
#line 1037 "make_hlds_passes.m"
              {
#line 1037 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_63_63));
#line 1037 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "make_hlds_passes.m"
              }
#line 1037 "make_hlds_passes.m"
              {
#line 1037 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Msg_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_10));
#line 1037 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_185, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_62_62));
#line 1037 "make_hlds_passes.m"
              }
#line 1039 "make_hlds_passes.m"
              {
#line 1039 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_185));
#line 1039 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "make_hlds_passes.m"
              }
#line 1038 "make_hlds_passes.m"
              {
#line 1038 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Spec_186 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1038 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 1038 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_186, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_67_67));
#line 1038 "make_hlds_passes.m"
              }
#line 1040 "make_hlds_passes.m"
              {
#line 1040 "make_hlds_passes.m"
                MR_Word base;
#line 1040 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_46 = base;
#line 1040 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_186));
#line 1040 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_45));
#line 1040 "make_hlds_passes.m"
              }
#line 1033 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_43;
#line 1033 "make_hlds_passes.m"
            }
#line 957 "make_hlds_passes.m"
        }
#line 931 "make_hlds_passes.m"
    }
#line 927 "make_hlds_passes.m"
  }
#line 927 "make_hlds_passes.m"
}

#line 892 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_finalise_5_p_0(
#line 892 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_6,
#line 892 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19,
#line 892 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20,
#line 892 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21,
#line 892 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22)
#line 892 "make_hlds_passes.m"
{
#line 896 "make_hlds_passes.m"
  {
#line 896 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 896 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 0)));
#line 896 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 1)));
#line 896 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 0)));
#line 896 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 1)));
#line 896 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 2)));
#line 896 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 3)));
#line 898 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemFinaliseInfo_10, (MR_Integer) 4)));

#line 918 "make_hlds_passes.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1))))
#line 919 "make_hlds_passes.m"
      {
#line 919 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19;
#line 919 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 919 "make_hlds_passes.m"
      }
#line 918 "make_hlds_passes.m"
    else
#line 901 "make_hlds_passes.m"
      {
#line 901 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ItemExport_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9, (MR_Integer) 0)));
#line 901 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 906 "make_hlds_passes.m"
#line 906 "make_hlds_passes.m"
        switch (hlds__make_hlds__make_hlds_passes__ItemExport_16) {
#line 906 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 906 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 903 "make_hlds_passes.m"
            {
#line 904 "make_hlds_passes.m"
              {
#line 904 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[32]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
              }
#line 903 "make_hlds_passes.m"
            }
#line 906 "make_hlds_passes.m"
            break;
#line 906 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 907 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 906 "make_hlds_passes.m"
            break;
#line 906 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 908 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 906 "make_hlds_passes.m"
            break;
#line 906 "make_hlds_passes.m"
        }
#line 914 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "make_hlds_passes.m"
          {
#line 913 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__implement_finalise_7_p_0(hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__Arity_12, hlds__make_hlds__make_hlds_passes__Context_14, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22);
          }
#line 914 "make_hlds_passes.m"
        else
#line 915 "make_hlds_passes.m"
          {
#line 916 "make_hlds_passes.m"
            {
#line 916 "make_hlds_passes.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_finalise\'/5", (MR_String) "bad introduced finalise declaration");
#line 916 "make_hlds_passes.m"
              return;
            }
#line 915 "make_hlds_passes.m"
          }
#line 901 "make_hlds_passes.m"
      }
#line 896 "make_hlds_passes.m"
  }
#line 892 "make_hlds_passes.m"
}

#line 859 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_initialise_5_p_0(
#line 859 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_6,
#line 859 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19,
#line 859 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20,
#line 859 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21,
#line 859 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22)
#line 859 "make_hlds_passes.m"
{
#line 863 "make_hlds_passes.m"
  {
#line 863 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 863 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 0)));
#line 863 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialise_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 1)));
#line 863 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 0)));
#line 863 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 1)));
#line 863 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 2)));
#line 863 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 3)));
#line 865 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemInitialise_10, (MR_Integer) 4)));

#line 885 "make_hlds_passes.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9)) == (MR_mktag((MR_Integer) 1))))
#line 886 "make_hlds_passes.m"
      {
#line 886 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19;
#line 886 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 886 "make_hlds_passes.m"
      }
#line 885 "make_hlds_passes.m"
    else
#line 868 "make_hlds_passes.m"
      {
#line 868 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ItemExport_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9, (MR_Integer) 0)));
#line 868 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24;

#line 873 "make_hlds_passes.m"
#line 873 "make_hlds_passes.m"
        switch (hlds__make_hlds__make_hlds_passes__ItemExport_16) {
#line 873 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 873 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 870 "make_hlds_passes.m"
            {
#line 871 "make_hlds_passes.m"
              {
#line 871 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[30]), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24);
              }
#line 870 "make_hlds_passes.m"
            }
#line 873 "make_hlds_passes.m"
            break;
#line 873 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 874 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 873 "make_hlds_passes.m"
            break;
#line 873 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 875 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_21;
#line 873 "make_hlds_passes.m"
            break;
#line 873 "make_hlds_passes.m"
        }
#line 881 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__Origin_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 880 "make_hlds_passes.m"
          {
#line 880 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__implement_initialise_7_p_0(hlds__make_hlds__make_hlds_passes__SymName_11, hlds__make_hlds__make_hlds_passes__Arity_12, hlds__make_hlds__make_hlds_passes__Context_14, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_19, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_22);
          }
#line 881 "make_hlds_passes.m"
        else
#line 882 "make_hlds_passes.m"
          {
#line 883 "make_hlds_passes.m"
            {
#line 883 "make_hlds_passes.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_initialise\'/5", (MR_String) "bad introduced initialise declaration");
#line 883 "make_hlds_passes.m"
              return;
            }
#line 882 "make_hlds_passes.m"
          }
#line 868 "make_hlds_passes.m"
      }
#line 863 "make_hlds_passes.m"
  }
#line 859 "make_hlds_passes.m"
}

#line 824 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_13,
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_14,
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__VarSet_15,
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Goal_16,
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Context_17,
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Status_18,
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
#line 824 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28,
#line 824 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29,
#line 824 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30,
#line 824 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31)
#line 824 "make_hlds_passes.m"
{
#line 830 "make_hlds_passes.m"
  {
#line 830 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 830 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__Line_22;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__File_23;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__Name_24;
#line 830 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_25;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_35_35;
#line 830 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_42_42;
#line 830 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_43_43;
#line 830 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_45_45;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_49_49;
#line 830 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_55_55;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_57_57;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_58_58;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_65_65;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_67_67;
#line 830 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__V_68_68;

#line 831 "make_hlds_passes.m"
    {
#line 831 "make_hlds_passes.m"
      mercury__term__context_line_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__Line_22);
    }
#line 832 "make_hlds_passes.m"
    {
#line 832 "make_hlds_passes.m"
      mercury__term__context_file_2_p_0(hlds__make_hlds__make_hlds_passes__Context_17, &hlds__make_hlds__make_hlds_passes__File_23);
    }
#line 834 "make_hlds_passes.m"
    {
#line 834 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_35_35 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__make_hlds__make_hlds_passes__PromiseType_13);
    }
#line 4921 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__V_55_55 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_10[1];
#line 834 "make_hlds_passes.m"
    {
#line 834 "make_hlds_passes.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_55_55, hlds__make_hlds__make_hlds_passes__File_23, &hlds__make_hlds__make_hlds_passes__V_49_49);
    }
#line 833 "make_hlds_passes.m"
    {
#line 833 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__V_49_49);
    }
#line 834 "make_hlds_passes.m"
    {
#line 834 "make_hlds_passes.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_55_55, hlds__make_hlds__make_hlds_passes__Line_22, &hlds__make_hlds__make_hlds_passes__V_58_58);
    }
#line 833 "make_hlds_passes.m"
    {
#line 833 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_65_65 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__V_58_58, hlds__make_hlds__make_hlds_passes__V_57_57);
    }
#line 833 "make_hlds_passes.m"
    {
#line 833 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "__", hlds__make_hlds__make_hlds_passes__V_65_65);
    }
#line 834 "make_hlds_passes.m"
    {
#line 834 "make_hlds_passes.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(hlds__make_hlds__make_hlds_passes__V_55_55, hlds__make_hlds__make_hlds_passes__V_35_35, &hlds__make_hlds__make_hlds_passes__V_68_68);
    }
#line 833 "make_hlds_passes.m"
    {
#line 833 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__Name_24 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__V_68_68, hlds__make_hlds__make_hlds_passes__V_67_67);
    }
#line 852 "make_hlds_passes.m"
    {
#line 852 "make_hlds_passes.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__make_hlds_passes__ModuleName_25);
    }
#line 853 "make_hlds_passes.m"
    {
#line 853 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ModuleName_25));
#line 853 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Name_24));
#line 853 "make_hlds_passes.m"
    }
#line 854 "make_hlds_passes.m"
    {
#line 854 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Goal_16));
#line 854 "make_hlds_passes.m"
    }
#line 855 "make_hlds_passes.m"
    {
#line 855 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 855 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PromiseType_13));
#line 855 "make_hlds_passes.m"
    }
#line 853 "make_hlds_passes.m"
    {
#line 853 "make_hlds_passes.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_15, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__V_42_42, hlds__make_hlds__make_hlds_passes__HeadVars_14, hlds__make_hlds__make_hlds_passes__V_43_43, hlds__make_hlds__make_hlds_passes__Status_18, hlds__make_hlds__make_hlds_passes__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__make_hlds_passes__V_45_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_29, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_30, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_31);
    }
#line 830 "make_hlds_passes.m"
  }
#line 824 "make_hlds_passes.m"
}

#line 796 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_promise_7_p_0(
#line 796 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_8,
#line 796 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22,
#line 796 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23,
#line 796 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_24,
#line 796 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_25,
#line 796 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26,
#line 796 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27)
#line 796 "make_hlds_passes.m"
{
#line 800 "make_hlds_passes.m"
  {
#line 800 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 0)));
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 1)));
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PromiseType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 0)));
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 1)));
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 2)));
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 3)));
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 4)));
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__HeadVars_20;
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredStatus_21;
#line 800 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28;
#line 802 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPromiseInfo_13, (MR_Integer) 5)));

#line 808 "make_hlds_passes.m"
    {
#line 808 "make_hlds_passes.m"
      mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_passes__UnivVars_17, &hlds__make_hlds__make_hlds_passes__HeadVars_20);
    }
#line 816 "make_hlds_passes.m"
#line 816 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__PromiseType_14) {
#line 816 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 816 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 816 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 816 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 815 "make_hlds_passes.m"
        {
#line 815 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(hlds__make_hlds__make_hlds_passes__UnivVars_17, hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28);
        }
#line 816 "make_hlds_passes.m"
        break;
#line 816 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 817 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_26;
#line 816 "make_hlds_passes.m"
        break;
#line 816 "make_hlds_passes.m"
    }
#line 820 "make_hlds_passes.m"
    {
#line 820 "make_hlds_passes.m"
      hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, &hlds__make_hlds__make_hlds_passes__PredStatus_21);
    }
#line 821 "make_hlds_passes.m"
    {
#line 821 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_promise_clause_12_p_0(hlds__make_hlds__make_hlds_passes__PromiseType_14, hlds__make_hlds__make_hlds_passes__HeadVars_20, hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__Goal_15, hlds__make_hlds__make_hlds_passes__Context_18, hlds__make_hlds__make_hlds_passes__PredStatus_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_22, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_23, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_28_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_27);
    }
#line 800 "make_hlds_passes.m"
  }
#line 796 "make_hlds_passes.m"
}

#line 734 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_clause_7_p_0(
#line 734 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_8,
#line 734 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34,
#line 734 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35,
#line 734 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36,
#line 734 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37,
#line 734 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38,
#line 734 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39)
#line 734 "make_hlds_passes.m"
{
#line 738 "make_hlds_passes.m"
  {
#line 738 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 0)));
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 1)));
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredSymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 0)));
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 1)));
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 2)));
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 3)));
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 4)));
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeBodyGoal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 5)));
#line 738 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 6)));
#line 738 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes__SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemClauseInfo_13, (MR_Integer) 7)));
#line 738 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__PredName_22;

#line 743 "make_hlds_passes.m"
    {
#line 743 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__PredName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredSymName_14);
    }
#line 744 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (strcmp(hlds__make_hlds__make_hlds_passes__PredName_22, (MR_String) "") == 0);
#line 744 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 747 "make_hlds_passes.m"
      {
#line 747 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Pieces_23;
#line 747 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Msg_24;
#line 747 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Spec_25;
#line 747 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_42_42;
#line 747 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_43_43;
#line 747 "make_hlds_passes.m"
        MR_String hlds__make_hlds__make_hlds_passes__V_44_44;
#line 747 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_51_51;
#line 747 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_52_52;
#line 747 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_56_56;

#line 746 "make_hlds_passes.m"
        {
#line 746 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_44_44 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_15);
        }
#line 746 "make_hlds_passes.m"
        {
#line 746 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 746 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_44_44));
#line 746 "make_hlds_passes.m"
        }
#line 746 "make_hlds_passes.m"
        {
#line 746 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_43_43));
#line 746 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[22])));
#line 746 "make_hlds_passes.m"
        }
#line 745 "make_hlds_passes.m"
        {
#line 745 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[67])));
#line 745 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_42_42));
#line 745 "make_hlds_passes.m"
        }
#line 748 "make_hlds_passes.m"
        {
#line 748 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 748 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_23));
#line 748 "make_hlds_passes.m"
        }
#line 748 "make_hlds_passes.m"
        {
#line 748 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_52_52));
#line 748 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "make_hlds_passes.m"
        }
#line 748 "make_hlds_passes.m"
        {
#line 748 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 748 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_20));
#line 748 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_51_51));
#line 748 "make_hlds_passes.m"
        }
#line 749 "make_hlds_passes.m"
        {
#line 749 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_24));
#line 749 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "make_hlds_passes.m"
        }
#line 749 "make_hlds_passes.m"
        {
#line 749 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 749 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 749 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 749 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_56_56));
#line 749 "make_hlds_passes.m"
        }
#line 750 "make_hlds_passes.m"
        {
#line 750 "make_hlds_passes.m"
          MR_Word base;
#line 750 "make_hlds_passes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39 = base;
#line 750 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_25));
#line 750 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38));
#line 750 "make_hlds_passes.m"
        }
#line 747 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36;
#line 747 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34;
#line 747 "make_hlds_passes.m"
      }
#line 744 "make_hlds_passes.m"
    else
#line 786 "make_hlds_passes.m"
      {
#line 786 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredStatus_33;
#line 786 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65;
#line 786 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_70_70;

#line 782 "make_hlds_passes.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12)) == (MR_mktag((MR_Integer) 1))))
#line 783 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 782 "make_hlds_passes.m"
        else
#line 753 "make_hlds_passes.m"
          {
#line 753 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__ItemExport_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, (MR_Integer) 0)));

#line 777 "make_hlds_passes.m"
#line 777 "make_hlds_passes.m"
            switch (hlds__make_hlds__make_hlds_passes__ItemExport_26) {
#line 777 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 777 "make_hlds_passes.m"
              case (MR_Integer) 2:
#line 766 "make_hlds_passes.m"
                if ((hlds__make_hlds__make_hlds_passes__Origin_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 757 "make_hlds_passes.m"
                  {
#line 757 "make_hlds_passes.m"
                    MR_Integer hlds__make_hlds__make_hlds_passes__Arity_27;
#line 757 "make_hlds_passes.m"
                    MR_String hlds__make_hlds__make_hlds_passes__ClauseId_28;
#line 757 "make_hlds_passes.m"
                    MR_Word hlds__make_hlds__make_hlds_passes__V_62_62;
#line 757 "make_hlds_passes.m"
                    MR_Word hlds__make_hlds__make_hlds_passes__V_63_63;
#line 757 "make_hlds_passes.m"
                    MR_Word hlds__make_hlds__make_hlds_passes__V_64_64;
#line 757 "make_hlds_passes.m"
                    MR_Word hlds__make_hlds__make_hlds_passes__V_66_66;
#line 757 "make_hlds_passes.m"
                    MR_String hlds__make_hlds__make_hlds_passes__V_67_67;

#line 758 "make_hlds_passes.m"
                    {
#line 758 "make_hlds_passes.m"
                      mercury__list__length_2_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[19], hlds__make_hlds__make_hlds_passes__Args_16, &hlds__make_hlds__make_hlds_passes__Arity_27);
                    }
#line 763 "make_hlds_passes.m"
                    {
#line 763 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 763 "make_hlds_passes.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredName_22));
#line 763 "make_hlds_passes.m"
                    }
#line 763 "make_hlds_passes.m"
                    {
#line 763 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 763 "make_hlds_passes.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_63_63));
#line 763 "make_hlds_passes.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Arity_27));
#line 763 "make_hlds_passes.m"
                    }
#line 762 "make_hlds_passes.m"
                    {
#line 762 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__ClauseId_28 = parse_tree__prog_out__simple_call_id_to_string_2_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__V_62_62);
                    }
#line 765 "make_hlds_passes.m"
                    {
#line 765 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "clause for ", hlds__make_hlds__make_hlds_passes__ClauseId_28);
                    }
#line 765 "make_hlds_passes.m"
                    {
#line 765 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "make_hlds_passes.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 765 "make_hlds_passes.m"
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_67_67));
#line 765 "make_hlds_passes.m"
                    }
#line 765 "make_hlds_passes.m"
                    {
#line 765 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_passes__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "make_hlds_passes.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_66_66));
#line 765 "make_hlds_passes.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 765 "make_hlds_passes.m"
                    }
#line 764 "make_hlds_passes.m"
                    {
#line 764 "make_hlds_passes.m"
                      hlds__make_hlds__make_hlds_error__error_is_exported_4_p_0(hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__V_64_64, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65);
                    }
#line 757 "make_hlds_passes.m"
                  }
#line 766 "make_hlds_passes.m"
                else
#line 767 "make_hlds_passes.m"
                  {
#line 767 "make_hlds_passes.m"
                    MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_29 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_17), (MR_Integer) 1);
#line 767 "make_hlds_passes.m"
                    MR_Word hlds__make_hlds__make_hlds_passes__AllowExport_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_29, (MR_Integer) 0)));
#line 768 "make_hlds_passes.m"
                    MR_Word hlds__make_hlds__make_hlds_passes___IsMutable_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_29, (MR_Integer) 1)));

#line 772 "make_hlds_passes.m"
#line 772 "make_hlds_passes.m"
                    switch (hlds__make_hlds__make_hlds_passes__AllowExport_30) {
#line 772 "make_hlds_passes.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 772 "make_hlds_passes.m"
                      case (MR_Integer) 1:
#line 771 "make_hlds_passes.m"
                        {
#line 771 "make_hlds_passes.m"
                        }
#line 772 "make_hlds_passes.m"
                        break;
#line 772 "make_hlds_passes.m"
                      case (MR_Integer) 0:
#line 773 "make_hlds_passes.m"
                        {
#line 774 "make_hlds_passes.m"
                          {
#line 774 "make_hlds_passes.m"
                            mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_clause\'/7", (MR_String) "bad introduced clause");
#line 774 "make_hlds_passes.m"
                            return;
                          }
#line 773 "make_hlds_passes.m"
                        }
#line 772 "make_hlds_passes.m"
                        break;
#line 772 "make_hlds_passes.m"
                    }
#line 767 "make_hlds_passes.m"
                    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 767 "make_hlds_passes.m"
                  }
#line 777 "make_hlds_passes.m"
                break;
#line 777 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 778 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 777 "make_hlds_passes.m"
                break;
#line 777 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 779 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_38;
#line 777 "make_hlds_passes.m"
                break;
#line 777 "make_hlds_passes.m"
            }
#line 753 "make_hlds_passes.m"
          }
#line 788 "make_hlds_passes.m"
        {
#line 788 "make_hlds_passes.m"
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, &hlds__make_hlds__make_hlds_passes__PredStatus_33);
        }
#line 790 "make_hlds_passes.m"
        {
#line 790 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 790 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SeqNum_21));
#line 790 "make_hlds_passes.m"
        }
#line 789 "make_hlds_passes.m"
        {
#line 789 "make_hlds_passes.m"
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__make_hlds_passes__VarSet_18, hlds__make_hlds__make_hlds_passes__PredOrFunc_15, hlds__make_hlds__make_hlds_passes__PredSymName_14, hlds__make_hlds__make_hlds_passes__Args_16, hlds__make_hlds__make_hlds_passes__MaybeBodyGoal_19, hlds__make_hlds__make_hlds_passes__PredStatus_33, hlds__make_hlds__make_hlds_passes__Context_20, hlds__make_hlds__make_hlds_passes__V_70_70, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_0_36, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_37, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65_65, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_39);
        }
#line 786 "make_hlds_passes.m"
      }
#line 738 "make_hlds_passes.m"
  }
#line 734 "make_hlds_passes.m"
}

#line 693 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(
#line 693 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SectionItem_4,
#line 693 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32,
#line 693 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33)
#line 693 "make_hlds_passes.m"
{
#line 696 "make_hlds_passes.m"
  {
#line 696 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 696 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_4, (MR_Integer) 1)));
#line 696 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredSymName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 0)));
#line 696 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 1)));
#line 696 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 2)));
#line 696 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__PredName_22;
#line 697 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___SectionInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_4, (MR_Integer) 0)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Origin_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 3)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 4)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___InstVarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 5)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 6)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 7)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 8)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___MaybeDet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 9)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Purity_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 10)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ClassContext_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 11)));
#line 698 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 12)));
#line 698 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_7, (MR_Integer) 13)));

#line 703 "make_hlds_passes.m"
    {
#line 703 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__PredName_22 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredSymName_8);
    }
#line 704 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (strcmp(hlds__make_hlds__make_hlds_passes__PredName_22, (MR_String) "") == 0);
#line 704 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 704 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 704 "make_hlds_passes.m"
    else
#line 711 "make_hlds_passes.m"
#line 711 "make_hlds_passes.m"
      switch (hlds__make_hlds__make_hlds_passes__PredOrFunc_9) {
#line 711 "make_hlds_passes.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 711 "make_hlds_passes.m"
        case (MR_Integer) 1:
#line 712 "make_hlds_passes.m"
          {
#line 712 "make_hlds_passes.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__Arity_23;
#line 712 "make_hlds_passes.m"
            MR_Integer hlds__make_hlds__make_hlds_passes__FuncArity_24;
#line 712 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__PredTable0_25;
#line 712 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__PredIds_26;

#line 713 "make_hlds_passes.m"
            {
#line 713 "make_hlds_passes.m"
              mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__make_hlds_passes__TypesAndModes_10, &hlds__make_hlds__make_hlds_passes__Arity_23);
            }
#line 714 "make_hlds_passes.m"
            {
#line 714 "make_hlds_passes.m"
              parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &hlds__make_hlds__make_hlds_passes__FuncArity_24, hlds__make_hlds__make_hlds_passes__Arity_23);
            }
#line 715 "make_hlds_passes.m"
            {
#line 715 "make_hlds_passes.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__make_hlds_passes__PredTable0_25);
            }
#line 716 "make_hlds_passes.m"
            {
#line 716 "make_hlds_passes.m"
              hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_25, (MR_Integer) 0, hlds__make_hlds__make_hlds_passes__PredSymName_8, hlds__make_hlds__make_hlds_passes__FuncArity_24, &hlds__make_hlds__make_hlds_passes__PredIds_26);
            }
#line 724 "make_hlds_passes.m"
            if ((hlds__make_hlds__make_hlds_passes__PredIds_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "make_hlds_passes.m"
              {
#line 726 "make_hlds_passes.m"
                {
#line 726 "make_hlds_passes.m"
                  mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.maybe_add_default_mode\'/3", (MR_String) "can\'t find func declaration");
#line 726 "make_hlds_passes.m"
                  return;
                }
#line 725 "make_hlds_passes.m"
              }
#line 724 "make_hlds_passes.m"
            else
#line 719 "make_hlds_passes.m"
              {
#line 719 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__Preds0_29;
#line 719 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__Preds_30;
#line 719 "make_hlds_passes.m"
                MR_Word hlds__make_hlds__make_hlds_passes__PredTable_31;

#line 720 "make_hlds_passes.m"
                {
#line 720 "make_hlds_passes.m"
                  hlds__pred_table__predicate_table_get_preds_2_p_0(hlds__make_hlds__make_hlds_passes__PredTable0_25, &hlds__make_hlds__make_hlds_passes__Preds0_29);
                }
#line 721 "make_hlds_passes.m"
                {
#line 721 "make_hlds_passes.m"
                  check_hlds__clause_to_proc__maybe_add_default_func_modes_3_p_0(hlds__make_hlds__make_hlds_passes__PredIds_26, hlds__make_hlds__make_hlds_passes__Preds0_29, &hlds__make_hlds__make_hlds_passes__Preds_30);
                }
#line 722 "make_hlds_passes.m"
                {
#line 722 "make_hlds_passes.m"
                  hlds__pred_table__predicate_table_set_preds_3_p_0(hlds__make_hlds__make_hlds_passes__Preds_30, hlds__make_hlds__make_hlds_passes__PredTable0_25, &hlds__make_hlds__make_hlds_passes__PredTable_31);
                }
#line 723 "make_hlds_passes.m"
                {
#line 723 "make_hlds_passes.m"
                  hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__make_hlds_passes__PredTable_31, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33);
                }
#line 719 "make_hlds_passes.m"
              }
#line 712 "make_hlds_passes.m"
          }
#line 711 "make_hlds_passes.m"
          break;
#line 711 "make_hlds_passes.m"
        case (MR_Integer) 0:
#line 710 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_33 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_32;
#line 711 "make_hlds_passes.m"
          break;
#line 711 "make_hlds_passes.m"
      }
#line 696 "make_hlds_passes.m"
  }
#line 693 "make_hlds_passes.m"
}

#line 660 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_decl_5_p_0(
#line 660 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_6,
#line 660 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26,
#line 660 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27,
#line 660 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28,
#line 660 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29)
#line 660 "make_hlds_passes.m"
{
#line 664 "make_hlds_passes.m"
  {
#line 664 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 664 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 0)));
#line 664 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_6, (MR_Integer) 1)));
#line 664 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 0)));
#line 664 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 1)));
#line 664 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Modes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 2)));
#line 664 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDet_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 4)));
#line 664 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 5)));
#line 664 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 6)));
#line 664 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__PredName_19;
#line 666 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___WithInst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 3)));
#line 666 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemModeDecl_10, (MR_Integer) 7)));

#line 669 "make_hlds_passes.m"
    {
#line 669 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__PredName_19 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredSymName_11);
    }
#line 670 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (strcmp(hlds__make_hlds__make_hlds_passes__PredName_19, (MR_String) "") == 0);
#line 670 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 672 "make_hlds_passes.m"
      {
#line 672 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Msg_21;
#line 672 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Spec_22;
#line 672 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_43_43;

#line 673 "make_hlds_passes.m"
        {
#line 673 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Msg_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 673 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_21, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_17));
#line 673 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[66])));
#line 673 "make_hlds_passes.m"
        }
#line 674 "make_hlds_passes.m"
        {
#line 674 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_21));
#line 674 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "make_hlds_passes.m"
        }
#line 674 "make_hlds_passes.m"
        {
#line 674 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Spec_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 674 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 674 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 674 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_22, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_43_43));
#line 674 "make_hlds_passes.m"
        }
#line 675 "make_hlds_passes.m"
        {
#line 675 "make_hlds_passes.m"
          MR_Word base;
#line 675 "make_hlds_passes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29 = base;
#line 675 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_22));
#line 675 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28));
#line 675 "make_hlds_passes.m"
        }
#line 672 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26;
#line 672 "make_hlds_passes.m"
      }
#line 670 "make_hlds_passes.m"
    else
#line 683 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 684 "make_hlds_passes.m"
      {
#line 687 "make_hlds_passes.m"
        {
#line 687 "make_hlds_passes.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_mode_decl\'/5", (MR_String) "no pred_or_func on mode declaration");
#line 687 "make_hlds_passes.m"
          return;
        }
#line 684 "make_hlds_passes.m"
      }
#line 683 "make_hlds_passes.m"
    else
#line 678 "make_hlds_passes.m"
      {
#line 678 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__MaybePredOrFunc_12, (MR_Integer) 0)));
#line 678 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ModeStatus_24;
#line 680 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_25_25;

#line 679 "make_hlds_passes.m"
        {
#line 679 "make_hlds_passes.m"
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_9, &hlds__make_hlds__make_hlds_passes__ModeStatus_24);
        }
#line 680 "make_hlds_passes.m"
        {
#line 680 "make_hlds_passes.m"
          hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__make_hlds_passes__VarSet_16, hlds__make_hlds__make_hlds_passes__PredSymName_11, hlds__make_hlds__make_hlds_passes__Modes_13, hlds__make_hlds__make_hlds_passes__MaybeDet_15, hlds__make_hlds__make_hlds_passes__ModeStatus_24, hlds__make_hlds__make_hlds_passes__Context_17, hlds__make_hlds__make_hlds_passes__PredOrFunc_23, (MR_Integer) 0, &hlds__make_hlds__make_hlds_passes__V_25_25, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_27, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_28, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_29);
        }
#line 678 "make_hlds_passes.m"
      }
#line 664 "make_hlds_passes.m"
  }
#line 660 "make_hlds_passes.m"
}

#line 620 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2(
#line 620 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
#line 620 "make_hlds_passes.m"
{
#line 620 "make_hlds_passes.m"
  {
#line 620 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 620 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

#line 620 "make_hlds_passes.m"
    {
#line 620 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__620__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
#line 620 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 620 "make_hlds_passes.m"
  }
#line 620 "make_hlds_passes.m"
}

#line 619 "make_hlds_passes.m"
static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1(
#line 619 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg)
#line 619 "make_hlds_passes.m"
{
#line 619 "make_hlds_passes.m"
  {
#line 619 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 619 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;

#line 619 "make_hlds_passes.m"
    {
#line 619 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_pred_decl__619__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 4))));
    }
#line 619 "make_hlds_passes.m"
    return hlds__make_hlds__make_hlds_passes__succeeded;
#line 619 "make_hlds_passes.m"
  }
#line 619 "make_hlds_passes.m"
}

#line 607 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0(
#line 607 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SectionItem_6,
#line 607 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_39,
#line 607 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40,
#line 607 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_41,
#line 607 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42)
#line 607 "make_hlds_passes.m"
{
#line 611 "make_hlds_passes.m"
  {
#line 611 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SectionInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_6, (MR_Integer) 0)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecl_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_6, (MR_Integer) 1)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionInfo_9, (MR_Integer) 0)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__NeedQual_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionInfo_9, (MR_Integer) 1)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredSymName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 0)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PredOrFunc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 1)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypesAndModes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 2)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__WithType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 3)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__WithInst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 4)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MaybeDetism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 5)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Origin_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 6)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 7)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__InstVarSet_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 8)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ExistQVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 9)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Purity_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 10)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ClassContext_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 11)));
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 12)));
#line 611 "make_hlds_passes.m"
    MR_String hlds__make_hlds__make_hlds_passes__PredName_27;
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_43_43;
#line 611 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_48_48;
#line 614 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemPredDecl_10, (MR_Integer) 13)));

#line 619 "make_hlds_passes.m"
    {
#line 619 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 619 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_43_43, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[0]));
#line 619 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_1));
#line 619 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 619 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_43_43, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithType_16));
#line 619 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_43_43, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "make_hlds_passes.m"
    }
#line 619 "make_hlds_passes.m"
    {
#line 619 "make_hlds_passes.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__V_43_43, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pred_decl\'/5", (MR_String) "WithType != no");
    }
#line 620 "make_hlds_passes.m"
    {
#line 620 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 620 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_48_48, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_9[1]));
#line 620 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0_2));
#line 620 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 620 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_48_48, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__WithInst_17));
#line 620 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "make_hlds_passes.m"
    }
#line 620 "make_hlds_passes.m"
    {
#line 620 "make_hlds_passes.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__make_hlds_passes__V_48_48, (MR_String) "hlds.make_hlds.make_hlds_passes", (MR_String) "predicate \140hlds.make_hlds.make_hlds_passes.add_pred_decl\'/5", (MR_String) "WithInst != no");
    }
#line 622 "make_hlds_passes.m"
    {
#line 622 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__PredName_27 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__make_hlds_passes__PredSymName_13);
    }
#line 623 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (strcmp(hlds__make_hlds__make_hlds_passes__PredName_27, (MR_String) "") == 0);
#line 623 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 626 "make_hlds_passes.m"
      {
#line 626 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Pieces_28;
#line 626 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Msg_29;
#line 626 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Spec_30;
#line 626 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_55_55;
#line 626 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_56_56;
#line 626 "make_hlds_passes.m"
        MR_String hlds__make_hlds__make_hlds_passes__V_57_57;
#line 626 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_64_64;
#line 626 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_65_65;
#line 626 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_69_69;

#line 625 "make_hlds_passes.m"
        {
#line 625 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_57_57 = parse_tree__prog_out__pred_or_func_to_full_str_1_f_0(hlds__make_hlds__make_hlds_passes__PredOrFunc_14);
        }
#line 625 "make_hlds_passes.m"
        {
#line 625 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 625 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_57_57));
#line 625 "make_hlds_passes.m"
        }
#line 625 "make_hlds_passes.m"
        {
#line 625 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_56_56));
#line 625 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_passes_scalar_common_1[22])));
#line 625 "make_hlds_passes.m"
        }
#line 624 "make_hlds_passes.m"
        {
#line 624 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Pieces_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 624 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[65])));
#line 624 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__Pieces_28, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_55_55));
#line 624 "make_hlds_passes.m"
        }
#line 627 "make_hlds_passes.m"
        {
#line 627 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 627 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Pieces_28));
#line 627 "make_hlds_passes.m"
        }
#line 627 "make_hlds_passes.m"
        {
#line 627 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_65_65));
#line 627 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 627 "make_hlds_passes.m"
        }
#line 627 "make_hlds_passes.m"
        {
#line 627 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Msg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 627 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_29, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_25));
#line 627 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Msg_29, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_64_64));
#line 627 "make_hlds_passes.m"
        }
#line 628 "make_hlds_passes.m"
        {
#line 628 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Msg_29));
#line 628 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "make_hlds_passes.m"
        }
#line 628 "make_hlds_passes.m"
        {
#line 628 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 628 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 628 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__V_69_69));
#line 628 "make_hlds_passes.m"
        }
#line 629 "make_hlds_passes.m"
        {
#line 629 "make_hlds_passes.m"
          MR_Word base;
#line 629 "make_hlds_passes.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42 = base;
#line 629 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Spec_30));
#line 629 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_41));
#line 629 "make_hlds_passes.m"
        }
#line 626 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_39;
#line 626 "make_hlds_passes.m"
      }
#line 623 "make_hlds_passes.m"
    else
#line 634 "make_hlds_passes.m"
      {
#line 634 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Markers0_31;
#line 634 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Markers_35;
#line 634 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredStatus_36;
#line 634 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__PredOrigin_37;
#line 652 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_38_38;

#line 634 "make_hlds_passes.m"
        {
#line 634 "make_hlds_passes.m"
          hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__make_hlds_passes__Markers0_31);
        }
#line 645 "make_hlds_passes.m"
        if ((hlds__make_hlds__make_hlds_passes__Origin_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__Markers_35 = hlds__make_hlds__make_hlds_passes__Markers0_31;
#line 645 "make_hlds_passes.m"
        else
#line 636 "make_hlds_passes.m"
          {
#line 636 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__CompilerAttrs_32 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Origin_19), (MR_Integer) 1);
#line 636 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes__IsMutable_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_32, (MR_Integer) 1)));
#line 637 "make_hlds_passes.m"
            MR_Word hlds__make_hlds__make_hlds_passes___AllowExport_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__CompilerAttrs_32, (MR_Integer) 0)));

#line 641 "make_hlds_passes.m"
#line 641 "make_hlds_passes.m"
            switch (hlds__make_hlds__make_hlds_passes__IsMutable_34) {
#line 641 "make_hlds_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 641 "make_hlds_passes.m"
              case (MR_Integer) 1:
#line 639 "make_hlds_passes.m"
                {
#line 640 "make_hlds_passes.m"
                  {
#line 640 "make_hlds_passes.m"
                    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, hlds__make_hlds__make_hlds_passes__Markers0_31, &hlds__make_hlds__make_hlds_passes__Markers_35);
                  }
#line 639 "make_hlds_passes.m"
                }
#line 641 "make_hlds_passes.m"
                break;
#line 641 "make_hlds_passes.m"
              case (MR_Integer) 0:
#line 643 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__Markers_35 = hlds__make_hlds__make_hlds_passes__Markers0_31;
#line 641 "make_hlds_passes.m"
                break;
#line 641 "make_hlds_passes.m"
            }
#line 636 "make_hlds_passes.m"
          }
#line 649 "make_hlds_passes.m"
        {
#line 649 "make_hlds_passes.m"
          hlds__status__item_mercury_status_to_pred_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_11, &hlds__make_hlds__make_hlds_passes__PredStatus_36);
        }
#line 651 "make_hlds_passes.m"
        {
#line 651 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__PredOrigin_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 651 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__PredOrigin_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__PredSymName_13));
#line 651 "make_hlds_passes.m"
        }
#line 652 "make_hlds_passes.m"
        {
#line 652 "make_hlds_passes.m"
          hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__make_hlds_passes__PredOrigin_37, hlds__make_hlds__make_hlds_passes__TypeVarSet_20, hlds__make_hlds__make_hlds_passes__InstVarSet_21, hlds__make_hlds__make_hlds_passes__ExistQVars_22, hlds__make_hlds__make_hlds_passes__PredOrFunc_14, hlds__make_hlds__make_hlds_passes__PredSymName_13, hlds__make_hlds__make_hlds_passes__TypesAndModes_15, hlds__make_hlds__make_hlds_passes__MaybeDetism_18, hlds__make_hlds__make_hlds_passes__Purity_23, hlds__make_hlds__make_hlds_passes__ClassContext_24, hlds__make_hlds__make_hlds_passes__Markers_35, hlds__make_hlds__make_hlds_passes__Context_25, hlds__make_hlds__make_hlds_passes__PredStatus_36, hlds__make_hlds__make_hlds_passes__NeedQual_12, &hlds__make_hlds__make_hlds_passes__V_38_38, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_41, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_42);
        }
#line 634 "make_hlds_passes.m"
      }
#line 611 "make_hlds_passes.m"
  }
#line 607 "make_hlds_passes.m"
}

#line 586 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_mode_defn_7_p_0(
#line 586 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_8,
#line 586 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16,
#line 586 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17,
#line 586 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_18,
#line 586 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19,
#line 586 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20,
#line 586 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21)
#line 586 "make_hlds_passes.m"
{
#line 591 "make_hlds_passes.m"
  {
#line 591 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 591 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 0)));
#line 591 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 1)));
#line 591 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModeStatus_14;
#line 591 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__FoundError_15;

#line 593 "make_hlds_passes.m"
    {
#line 593 "make_hlds_passes.m"
      hlds__status__item_mercury_status_to_mode_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, &hlds__make_hlds__make_hlds_passes__ModeStatus_14);
    }
#line 596 "make_hlds_passes.m"
    {
#line 596 "make_hlds_passes.m"
      hlds__make_hlds__add_mode__module_add_mode_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemModeDefnInfo_13, hlds__make_hlds__make_hlds_passes__ModeStatus_14, &hlds__make_hlds__make_hlds_passes__FoundError_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21);
    }
#line 600 "make_hlds_passes.m"
#line 600 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__FoundError_15) {
#line 600 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 600 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 599 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_18;
#line 600 "make_hlds_passes.m"
        break;
#line 600 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 602 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19 = (MR_Integer) 1;
#line 600 "make_hlds_passes.m"
        break;
#line 600 "make_hlds_passes.m"
    }
#line 591 "make_hlds_passes.m"
  }
#line 586 "make_hlds_passes.m"
}

#line 565 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_inst_defn_7_p_0(
#line 565 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_8,
#line 565 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16,
#line 565 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17,
#line 565 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_18,
#line 565 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19,
#line 565 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20,
#line 565 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21)
#line 565 "make_hlds_passes.m"
{
#line 570 "make_hlds_passes.m"
  {
#line 570 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 570 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 0)));
#line 570 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_8, (MR_Integer) 1)));
#line 570 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__InstStatus_14;
#line 570 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__FoundError_15;

#line 572 "make_hlds_passes.m"
    {
#line 572 "make_hlds_passes.m"
      hlds__status__item_mercury_status_to_inst_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_12, &hlds__make_hlds__make_hlds_passes__InstStatus_14);
    }
#line 575 "make_hlds_passes.m"
    {
#line 575 "make_hlds_passes.m"
      hlds__make_hlds__add_mode__module_add_inst_defn_7_p_0(hlds__make_hlds__make_hlds_passes__ItemInstDefnInfo_13, hlds__make_hlds__make_hlds_passes__InstStatus_14, &hlds__make_hlds__make_hlds_passes__FoundError_15, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_20, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_21);
    }
#line 579 "make_hlds_passes.m"
#line 579 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__FoundError_15) {
#line 579 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 579 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 578 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_0_18;
#line 579 "make_hlds_passes.m"
        break;
#line 579 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 581 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_19 = (MR_Integer) 1;
#line 579 "make_hlds_passes.m"
        break;
#line 579 "make_hlds_passes.m"
    }
#line 570 "make_hlds_passes.m"
  }
#line 565 "make_hlds_passes.m"
}

#line 539 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1(
#line 539 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 539 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 539 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_2)
#line 539 "make_hlds_passes.m"
{
#line 539 "make_hlds_passes.m"
  {
#line 539 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 539 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_HeadVar__3_67;

#line 539 "make_hlds_passes.m"
    {
#line 539 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__IntroducedFrom__pred__add_type_defn__539__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), &hlds__make_hlds__make_hlds_passes__conv0_HeadVar__3_67);
    }
#line 539 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_HeadVar__3_67));
#line 539 "make_hlds_passes.m"
  }
#line 539 "make_hlds_passes.m"
}

#line 508 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(
#line 508 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__SectionItem_12,
#line 508 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45,
#line 508 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46,
#line 508 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_0_47,
#line 508 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_48,
#line 508 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_49,
#line 508 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_50,
#line 508 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_51,
#line 508 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_52,
#line 508 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_53,
#line 508 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_54)
#line 508 "make_hlds_passes.m"
{
#line 516 "make_hlds_passes.m"
  {
#line 516 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SectionInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_12, (MR_Integer) 0)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionItem_12, (MR_Integer) 1)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionInfo_18, (MR_Integer) 0)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__NeedQual_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SectionInfo_18, (MR_Integer) 1)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SymName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 0)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 1)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeDefn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 2)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeVarSet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 3)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 4)));
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeStatus_41;
#line 516 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeSpecs_42;
#line 519 "make_hlds_passes.m"
    MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemTypeDefnInfo_19, (MR_Integer) 5)));

#line 543 "make_hlds_passes.m"
#line 543 "make_hlds_passes.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__TypeDefn_24)) {
#line 543 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 543 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 544 "make_hlds_passes.m"
        {
#line 544 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_52 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_51;
#line 544 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_54 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_53;
#line 544 "make_hlds_passes.m"
        }
#line 543 "make_hlds_passes.m"
        break;
#line 543 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 545 "make_hlds_passes.m"
        {
#line 545 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_52 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_51;
#line 545 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_54 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_53;
#line 545 "make_hlds_passes.m"
        }
#line 543 "make_hlds_passes.m"
        break;
#line 543 "make_hlds_passes.m"
      case (MR_Integer) 2:
#line 546 "make_hlds_passes.m"
        {
#line 546 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_52 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_51;
#line 546 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_54 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_53;
#line 546 "make_hlds_passes.m"
        }
#line 543 "make_hlds_passes.m"
        break;
#line 543 "make_hlds_passes.m"
      case (MR_Integer) 3:
#line 543 "make_hlds_passes.m"
#line 543 "make_hlds_passes.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_24, (MR_Integer) 0)))) {
#line 543 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 543 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 522 "make_hlds_passes.m"
            {
#line 522 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_70_70;
#line 522 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__SolverTypeDetails_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_24, (MR_Integer) 1)));
#line 522 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30;
#line 522 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__MutableItems_31;
#line 522 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__TypeSectionMutableItems_32;
#line 522 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_56_56;
#line 522 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes___MaybeUserEqComp_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_passes__TypeDefn_24, (MR_Integer) 2)));
#line 538 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_62_62;
#line 538 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_63_63;
#line 538 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_64_64;
#line 538 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__V_65_65;

#line 533 "make_hlds_passes.m"
              {
#line 533 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 533 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SymName_22));
#line 533 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__TypeParams_23));
#line 533 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__TypeVarSet_25));
#line 533 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SolverTypeDetails_28));
#line 533 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_26));
#line 533 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_20));
#line 533 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__NeedQual_21));
#line 533 "make_hlds_passes.m"
              }
#line 536 "make_hlds_passes.m"
              {
#line 536 "make_hlds_passes.m"
                MR_Word base;
#line 536 "make_hlds_passes.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_52 = base;
#line 536 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SolverAuxPredInfo_30));
#line 536 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_51));
#line 536 "make_hlds_passes.m"
              }
#line 538 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_28, (MR_Integer) 0)));
#line 538 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_28, (MR_Integer) 1)));
#line 538 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_28, (MR_Integer) 2)));
#line 538 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_28, (MR_Integer) 3)));
#line 538 "make_hlds_passes.m"
              hlds__make_hlds__make_hlds_passes__MutableItems_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__SolverTypeDetails_28, (MR_Integer) 4)));
#line 539 "make_hlds_passes.m"
              {
#line 539 "make_hlds_passes.m"
                hlds__make_hlds__make_hlds_passes__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 539 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_56_56, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_3[3]));
#line 539 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0_1));
#line 539 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 539 "make_hlds_passes.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_56_56, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__SectionInfo_18));
#line 539 "make_hlds_passes.m"
              }
#line 6515 "hlds.make_hlds.make_hlds_passes.c"
              hlds__make_hlds__make_hlds_passes__TypeInfo_70_70 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[5];
#line 539 "make_hlds_passes.m"
              {
#line 539 "make_hlds_passes.m"
                mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_mutable_info_0, hlds__make_hlds__make_hlds_passes__TypeInfo_70_70, hlds__make_hlds__make_hlds_passes__V_56_56, hlds__make_hlds__make_hlds_passes__MutableItems_31, &hlds__make_hlds__make_hlds_passes__TypeSectionMutableItems_32);
              }
#line 541 "make_hlds_passes.m"
              {
#line 541 "make_hlds_passes.m"
                *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_54 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_passes__TypeInfo_70_70, hlds__make_hlds__make_hlds_passes__TypeSectionMutableItems_32, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_53);
              }
#line 522 "make_hlds_passes.m"
            }
#line 543 "make_hlds_passes.m"
            break;
#line 543 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 547 "make_hlds_passes.m"
            {
#line 547 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_52 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_0_51;
#line 547 "make_hlds_passes.m"
              *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_54 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SectionMutableItems_0_53;
#line 547 "make_hlds_passes.m"
            }
#line 543 "make_hlds_passes.m"
            break;
#line 543 "make_hlds_passes.m"
        }
#line 543 "make_hlds_passes.m"
        break;
#line 543 "make_hlds_passes.m"
    }
#line 550 "make_hlds_passes.m"
    {
#line 550 "make_hlds_passes.m"
      hlds__status__item_mercury_status_to_type_status_2_p_0(hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_20, &hlds__make_hlds__make_hlds_passes__TypeStatus_41);
    }
#line 553 "make_hlds_passes.m"
    {
#line 553 "make_hlds_passes.m"
      hlds__make_hlds__add_type__module_add_type_defn_11_p_0(hlds__make_hlds__make_hlds_passes__TypeVarSet_25, hlds__make_hlds__make_hlds_passes__SymName_22, hlds__make_hlds__make_hlds_passes__TypeParams_23, hlds__make_hlds__make_hlds_passes__TypeDefn_24, hlds__make_hlds__make_hlds_passes__Context_26, hlds__make_hlds__make_hlds_passes__TypeStatus_41, hlds__make_hlds__make_hlds_passes__NeedQual_21, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_45, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_46, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__TypeSpecs_42);
    }
#line 557 "make_hlds_passes.m"
    if ((hlds__make_hlds__make_hlds_passes__TypeSpecs_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "make_hlds_passes.m"
      {
#line 556 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_48 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_0_47;
#line 556 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_50 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_49;
#line 556 "make_hlds_passes.m"
      }
#line 557 "make_hlds_passes.m"
    else
#line 558 "make_hlds_passes.m"
      {
#line 559 "make_hlds_passes.m"
        {
#line 559 "make_hlds_passes.m"
          *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__make_hlds_passes__TypeSpecs_42, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_0_49);
        }
#line 560 "make_hlds_passes.m"
        *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_48 = (MR_Integer) 1;
#line 558 "make_hlds_passes.m"
      }
#line 516 "make_hlds_passes.m"
  }
#line 508 "make_hlds_passes.m"
}

#line 455 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(
#line 455 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_5,
#line 455 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Avail_6,
#line 455 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16,
#line 455 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17)
#line 455 "make_hlds_passes.m"
{
#line 458 "make_hlds_passes.m"
  {
#line 458 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 458 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_8;
#line 458 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_9;
#line 458 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ImportOrUse_11;

#line 462 "make_hlds_passes.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__Avail_6)) == (MR_mktag((MR_Integer) 0))))
#line 460 "make_hlds_passes.m"
      {
#line 460 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_19_19 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Avail_6), (MR_Integer) 0);
#line 460 "make_hlds_passes.m"
        MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_10;

#line 460 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_19_19, (MR_Integer) 0)));
#line 460 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_19_19, (MR_Integer) 1)));
#line 460 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___SeqNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_19_19, (MR_Integer) 2)));
#line 461 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__ImportOrUse_11 = (MR_Integer) 0;
#line 460 "make_hlds_passes.m"
      }
#line 462 "make_hlds_passes.m"
    else
#line 463 "make_hlds_passes.m"
      {
#line 463 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_18_18 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_passes__Avail_6), (MR_Integer) 1);
#line 463 "make_hlds_passes.m"
        MR_Integer hlds__make_hlds__make_hlds_passes___SeqNum_28;

#line 463 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_18_18, (MR_Integer) 0)));
#line 463 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_18_18, (MR_Integer) 1)));
#line 463 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes___SeqNum_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_18_18, (MR_Integer) 2)));
#line 464 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__ImportOrUse_11 = (MR_Integer) 1;
#line 463 "make_hlds_passes.m"
      }
#line 479 "make_hlds_passes.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_5)) == (MR_mktag((MR_Integer) 1))))
#line 480 "make_hlds_passes.m"
      {
#line 480 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ItemImport_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_5, (MR_Integer) 0)));

#line 498 "make_hlds_passes.m"
#line 498 "make_hlds_passes.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_passes__ItemImport_14)) {
#line 498 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 498 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 502 "make_hlds_passes.m"
            {
#line 502 "make_hlds_passes.m"
              hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17);
            }
#line 498 "make_hlds_passes.m"
            break;
#line 498 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 482 "make_hlds_passes.m"
            {
#line 482 "make_hlds_passes.m"
              MR_Word hlds__make_hlds__make_hlds_passes__ImportLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__ItemImport_14, (MR_Integer) 0)));

#line 490 "make_hlds_passes.m"
#line 490 "make_hlds_passes.m"
              switch (hlds__make_hlds__make_hlds_passes__ImportLocn_15) {
#line 490 "make_hlds_passes.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 490 "make_hlds_passes.m"
                case (MR_Integer) 3:
#line 484 "make_hlds_passes.m"
                  {
#line 484 "make_hlds_passes.m"
                    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24;

#line 485 "make_hlds_passes.m"
                    {
#line 485 "make_hlds_passes.m"
                      hlds__hlds_module__module_add_avail_module_name_6_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, (MR_Integer) 1, hlds__make_hlds__make_hlds_passes__ImportOrUse_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24);
                    }
#line 489 "make_hlds_passes.m"
                    {
#line 489 "make_hlds_passes.m"
                      hlds__hlds_module__module_info_add_parent_to_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_24_24, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17);
                    }
#line 484 "make_hlds_passes.m"
                  }
#line 490 "make_hlds_passes.m"
                  break;
#line 490 "make_hlds_passes.m"
                case (MR_Integer) 0:
#line 490 "make_hlds_passes.m"
                case (MR_Integer) 2:
#line 490 "make_hlds_passes.m"
                case (MR_Integer) 1:
#line 495 "make_hlds_passes.m"
                  {
#line 495 "make_hlds_passes.m"
                    hlds__hlds_module__module_add_indirectly_imported_module_name_3_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17);
                  }
#line 490 "make_hlds_passes.m"
                  break;
#line 490 "make_hlds_passes.m"
              }
#line 482 "make_hlds_passes.m"
            }
#line 498 "make_hlds_passes.m"
            break;
#line 498 "make_hlds_passes.m"
        }
#line 480 "make_hlds_passes.m"
      }
#line 479 "make_hlds_passes.m"
    else
#line 467 "make_hlds_passes.m"
      {
#line 467 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__ItemExport_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_5, (MR_Integer) 0)));
#line 467 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__Section_13;
#line 467 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_26_26;

#line 471 "make_hlds_passes.m"
#line 471 "make_hlds_passes.m"
        switch (hlds__make_hlds__make_hlds_passes__ItemExport_12) {
#line 471 "make_hlds_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 471 "make_hlds_passes.m"
          case (MR_Integer) 2:
#line 470 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Section_13 = (MR_Integer) 0;
#line 471 "make_hlds_passes.m"
            break;
#line 471 "make_hlds_passes.m"
          case (MR_Integer) 0:
#line 471 "make_hlds_passes.m"
          case (MR_Integer) 1:
#line 475 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__Section_13 = (MR_Integer) 1;
#line 471 "make_hlds_passes.m"
            break;
#line 471 "make_hlds_passes.m"
        }
#line 478 "make_hlds_passes.m"
        {
#line 478 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 478 "make_hlds_passes.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_passes__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__Context_9));
#line 478 "make_hlds_passes.m"
        }
#line 477 "make_hlds_passes.m"
        {
#line 477 "make_hlds_passes.m"
          hlds__hlds_module__module_add_avail_module_name_6_p_0(hlds__make_hlds__make_hlds_passes__ModuleName_8, hlds__make_hlds__make_hlds_passes__Section_13, hlds__make_hlds__make_hlds_passes__ImportOrUse_11, hlds__make_hlds__make_hlds_passes__V_26_26, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_17);
        }
#line 467 "make_hlds_passes.m"
      }
#line 458 "make_hlds_passes.m"
  }
#line 455 "make_hlds_passes.m"
}

#line 453 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1(
#line 453 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 453 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 453 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 453 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 453 "make_hlds_passes.m"
{
#line 453 "make_hlds_passes.m"
  {
#line 453 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 453 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_17;

#line 453 "make_hlds_passes.m"
    {
#line 453 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_avail_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_17);
    }
#line 453 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_17));
#line 453 "make_hlds_passes.m"
  }
#line 453 "make_hlds_passes.m"
}

#line 448 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0(
#line 448 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__StatusItem_4,
#line 448 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_8,
#line 448 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_9)
#line 448 "make_hlds_passes.m"
{
#line 451 "make_hlds_passes.m"
  {
#line 451 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 451 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_4, (MR_Integer) 0)));
#line 451 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Avails_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__StatusItem_4, (MR_Integer) 1)));
#line 451 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_10_10;
#line 453 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_9;

#line 453 "make_hlds_passes.m"
    {
#line 453 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[2]));
#line 453 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0_1));
#line 453 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_10_10, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__ItemMercuryStatus_6));
#line 453 "make_hlds_passes.m"
    }
#line 453 "make_hlds_passes.m"
    {
#line 453 "make_hlds_passes.m"
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_avail_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, hlds__make_hlds__make_hlds_passes__V_10_10, hlds__make_hlds__make_hlds_passes__Avails_7, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_8)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_9);
    }
#line 453 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_9 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_9);
#line 451 "make_hlds_passes.m"
  }
#line 448 "make_hlds_passes.m"
}

#line 420 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(
#line 420 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeCtor_4,
#line 420 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_11,
#line 420 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12)
#line 420 "make_hlds_passes.m"
{
#line 423 "make_hlds_passes.m"
  {
#line 423 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 423 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TVarSet_6;
#line 423 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Context_8;
#line 423 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__Type_10;

#line 424 "make_hlds_passes.m"
    {
#line 424 "make_hlds_passes.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &hlds__make_hlds__make_hlds_passes__TVarSet_6);
    }
#line 426 "make_hlds_passes.m"
    {
#line 426 "make_hlds_passes.m"
      mercury__term__context_init_1_p_0(&hlds__make_hlds__make_hlds_passes__Context_8);
    }
#line 430 "make_hlds_passes.m"
    {
#line 430 "make_hlds_passes.m"
      parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__make_hlds_passes__TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__Type_10);
    }
#line 442 "make_hlds_passes.m"
    {
#line 442 "make_hlds_passes.m"
      hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_p_0(hlds__make_hlds__make_hlds_passes__TVarSet_6, hlds__make_hlds__make_hlds_passes__Type_10, hlds__make_hlds__make_hlds_passes__TypeCtor_4, (MR_Word) MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_passes_scalar_common_1[64]), hlds__make_hlds__make_hlds_passes__Context_8, (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))), hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_0_11, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_12);
    }
#line 423 "make_hlds_passes.m"
  }
#line 420 "make_hlds_passes.m"
}

#line 392 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_26(
#line 392 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 392 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 392 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 392 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 392 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4)
#line 392 "make_hlds_passes.m"
{
#line 392 "make_hlds_passes.m"
  {
#line 392 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 392 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv124_STATE_VARIABLE_QualInfo_9;

#line 392 "make_hlds_passes.m"
    {
#line 392 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_version_numbers_4_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv124_STATE_VARIABLE_QualInfo_9);
    }
#line 392 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv124_STATE_VARIABLE_QualInfo_9));
#line 392 "make_hlds_passes.m"
  }
#line 392 "make_hlds_passes.m"
}

#line 389 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25(
#line 389 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 389 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 389 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 389 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 389 "make_hlds_passes.m"
{
#line 389 "make_hlds_passes.m"
  {
#line 389 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 389 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv122_HeadVar__4_4;

#line 389 "make_hlds_passes.m"
    {
#line 389 "make_hlds_passes.m"
      hlds__make_hlds__add_pred__check_pred_if_field_access_function_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv122_HeadVar__4_4);
    }
#line 389 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv122_HeadVar__4_4));
#line 389 "make_hlds_passes.m"
  }
#line 389 "make_hlds_passes.m"
}

#line 372 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_24(
#line 372 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 372 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 372 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 372 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 372 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 372 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 372 "make_hlds_passes.m"
{
#line 372 "make_hlds_passes.m"
  {
#line 372 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 372 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv119_STATE_VARIABLE_ModuleInfo_20;
#line 372 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv118_STATE_VARIABLE_Specs_22;

#line 372 "make_hlds_passes.m"
    {
#line 372 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_finalise_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv119_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv118_STATE_VARIABLE_Specs_22);
    }
#line 372 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv119_STATE_VARIABLE_ModuleInfo_20));
#line 372 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv118_STATE_VARIABLE_Specs_22));
#line 372 "make_hlds_passes.m"
  }
#line 372 "make_hlds_passes.m"
}

#line 370 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_23(
#line 370 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 370 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 370 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 370 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 370 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 370 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 370 "make_hlds_passes.m"
{
#line 370 "make_hlds_passes.m"
  {
#line 370 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 370 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv115_STATE_VARIABLE_ModuleInfo_20;
#line 370 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv114_STATE_VARIABLE_Specs_22;

#line 370 "make_hlds_passes.m"
    {
#line 370 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_initialise_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv115_STATE_VARIABLE_ModuleInfo_20, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv114_STATE_VARIABLE_Specs_22);
    }
#line 370 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv115_STATE_VARIABLE_ModuleInfo_20));
#line 370 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv114_STATE_VARIABLE_Specs_22));
#line 370 "make_hlds_passes.m"
  }
#line 370 "make_hlds_passes.m"
}

#line 362 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_22(
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 362 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 362 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 362 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 362 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
#line 362 "make_hlds_passes.m"
{
#line 362 "make_hlds_passes.m"
  {
#line 362 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 362 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv110_STATE_VARIABLE_ModuleInfo_23;
#line 362 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv109_STATE_VARIABLE_QualInfo_25;
#line 362 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv108_STATE_VARIABLE_Specs_27;

#line 362 "make_hlds_passes.m"
    {
#line 362 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_promise_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv110_STATE_VARIABLE_ModuleInfo_23, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv109_STATE_VARIABLE_QualInfo_25, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv108_STATE_VARIABLE_Specs_27);
    }
#line 362 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv110_STATE_VARIABLE_ModuleInfo_23));
#line 362 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv109_STATE_VARIABLE_QualInfo_25));
#line 362 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv108_STATE_VARIABLE_Specs_27));
#line 362 "make_hlds_passes.m"
  }
#line 362 "make_hlds_passes.m"
}

#line 359 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_21(
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 359 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 359 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 359 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 359 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
#line 359 "make_hlds_passes.m"
{
#line 359 "make_hlds_passes.m"
  {
#line 359 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 359 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv104_HeadVar__3_3;
#line 359 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv103_HeadVar__5_5;
#line 359 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv102_HeadVar__7_7;

#line 359 "make_hlds_passes.m"
    {
#line 359 "make_hlds_passes.m"
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv104_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv103_HeadVar__5_5, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv102_HeadVar__7_7);
    }
#line 359 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv104_HeadVar__3_3));
#line 359 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv103_HeadVar__5_5));
#line 359 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv102_HeadVar__7_7));
#line 359 "make_hlds_passes.m"
  }
#line 359 "make_hlds_passes.m"
}

#line 356 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_20(
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 356 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 356 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 356 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 356 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
#line 356 "make_hlds_passes.m"
{
#line 356 "make_hlds_passes.m"
  {
#line 356 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 356 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv98_HeadVar__3_3;
#line 356 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv97_HeadVar__5_5;
#line 356 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv96_HeadVar__7_7;

#line 356 "make_hlds_passes.m"
    {
#line 356 "make_hlds_passes.m"
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_defns_for_mutable_if_local_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv98_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv97_HeadVar__5_5, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv96_HeadVar__7_7);
    }
#line 356 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv98_HeadVar__3_3));
#line 356 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv97_HeadVar__5_5));
#line 356 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv96_HeadVar__7_7));
#line 356 "make_hlds_passes.m"
  }
#line 356 "make_hlds_passes.m"
}

#line 353 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_19(
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 353 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 353 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 353 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 353 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
#line 353 "make_hlds_passes.m"
{
#line 353 "make_hlds_passes.m"
  {
#line 353 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 353 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv92_HeadVar__3_3;
#line 353 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv91_HeadVar__5_5;
#line 353 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv90_HeadVar__7_7;

#line 353 "make_hlds_passes.m"
    {
#line 353 "make_hlds_passes.m"
      hlds__make_hlds__add_solver__add_solver_type_aux_pred_defns_if_local_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv92_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv91_HeadVar__5_5, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv90_HeadVar__7_7);
    }
#line 353 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv92_HeadVar__3_3));
#line 353 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv91_HeadVar__5_5));
#line 353 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv90_HeadVar__7_7));
#line 353 "make_hlds_passes.m"
  }
#line 353 "make_hlds_passes.m"
}

#line 348 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_18(
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 348 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 348 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 348 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 348 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
#line 348 "make_hlds_passes.m"
{
#line 348 "make_hlds_passes.m"
  {
#line 348 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 348 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv86_STATE_VARIABLE_ModuleInfo_35;
#line 348 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv85_STATE_VARIABLE_QualInfo_37;
#line 348 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv84_STATE_VARIABLE_Specs_39;

#line 348 "make_hlds_passes.m"
    {
#line 348 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_clause_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv86_STATE_VARIABLE_ModuleInfo_35, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv85_STATE_VARIABLE_QualInfo_37, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv84_STATE_VARIABLE_Specs_39);
    }
#line 348 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv86_STATE_VARIABLE_ModuleInfo_35));
#line 348 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv85_STATE_VARIABLE_QualInfo_37));
#line 348 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv84_STATE_VARIABLE_Specs_39));
#line 348 "make_hlds_passes.m"
  }
#line 348 "make_hlds_passes.m"
}

#line 335 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_17(
#line 335 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 335 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 335 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 335 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 335 "make_hlds_passes.m"
{
#line 335 "make_hlds_passes.m"
  {
#line 335 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 335 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv82_STATE_VARIABLE_ModuleInfo_12;

#line 335 "make_hlds_passes.m"
    {
#line 335 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_builtin_type_ctor_special_preds_in_builtin_module_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv82_STATE_VARIABLE_ModuleInfo_12);
    }
#line 335 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv82_STATE_VARIABLE_ModuleInfo_12));
#line 335 "make_hlds_passes.m"
  }
#line 335 "make_hlds_passes.m"
}

#line 322 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_16(
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 322 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 322 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 322 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 322 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_8)
#line 322 "make_hlds_passes.m"
{
#line 322 "make_hlds_passes.m"
  {
#line 322 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 322 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv78_HeadVar__4_4;
#line 322 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv77_HeadVar__6_6;
#line 322 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv76_HeadVar__8_8;

#line 322 "make_hlds_passes.m"
    {
#line 322 "make_hlds_passes.m"
      hlds__make_hlds__add_type__process_type_defn_8_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv78_HeadVar__4_4, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_5), &hlds__make_hlds__make_hlds_passes__conv77_HeadVar__6_6, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_7), &hlds__make_hlds__make_hlds_passes__conv76_HeadVar__8_8);
    }
#line 322 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv78_HeadVar__4_4));
#line 322 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_6 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv77_HeadVar__6_6));
#line 322 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_8 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv76_HeadVar__8_8));
#line 322 "make_hlds_passes.m"
  }
#line 322 "make_hlds_passes.m"
}

#line 313 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15(
#line 313 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 313 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 313 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 313 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 313 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_4)
#line 313 "make_hlds_passes.m"
{
#line 313 "make_hlds_passes.m"
  {
#line 313 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 313 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv74_HeadVar__5_5;

#line 313 "make_hlds_passes.m"
    {
#line 313 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__du_type_layout__decide_du_type_layout_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_3), &hlds__make_hlds__make_hlds_passes__conv74_HeadVar__5_5);
    }
#line 313 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_4 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv74_HeadVar__5_5));
#line 313 "make_hlds_passes.m"
  }
#line 313 "make_hlds_passes.m"
}

#line 266 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_14(
#line 266 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 266 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 266 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 266 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 266 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 266 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 266 "make_hlds_passes.m"
{
#line 266 "make_hlds_passes.m"
  {
#line 266 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 266 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv71_HeadVar__3_3;
#line 266 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv70_HeadVar__5_5;

#line 266 "make_hlds_passes.m"
    {
#line 266 "make_hlds_passes.m"
      hlds__make_hlds__add_class__add_instance_defn_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv71_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv70_HeadVar__5_5);
    }
#line 266 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv71_HeadVar__3_3));
#line 266 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv70_HeadVar__5_5));
#line 266 "make_hlds_passes.m"
  }
#line 266 "make_hlds_passes.m"
}

#line 262 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_13(
#line 262 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 262 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 262 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 262 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 262 "make_hlds_passes.m"
{
#line 262 "make_hlds_passes.m"
  {
#line 262 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 262 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv68_STATE_VARIABLE_ModuleInfo_33;

#line 262 "make_hlds_passes.m"
    {
#line 262 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__maybe_add_default_mode_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv68_STATE_VARIABLE_ModuleInfo_33);
    }
#line 262 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv68_STATE_VARIABLE_ModuleInfo_33));
#line 262 "make_hlds_passes.m"
  }
#line 262 "make_hlds_passes.m"
}

#line 250 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_12(
#line 250 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 250 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 250 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 250 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 250 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 250 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 250 "make_hlds_passes.m"
{
#line 250 "make_hlds_passes.m"
  {
#line 250 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 250 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv65_HeadVar__3_3;
#line 250 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv64_HeadVar__5_5;

#line 250 "make_hlds_passes.m"
    {
#line 250 "make_hlds_passes.m"
      hlds__make_hlds__add_class__add_typeclass_defn_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv65_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv64_HeadVar__5_5);
    }
#line 250 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv65_HeadVar__3_3));
#line 250 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv64_HeadVar__5_5));
#line 250 "make_hlds_passes.m"
  }
#line 250 "make_hlds_passes.m"
}

#line 246 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_11(
#line 246 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 246 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 246 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 246 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 246 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 246 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 246 "make_hlds_passes.m"
{
#line 246 "make_hlds_passes.m"
  {
#line 246 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 246 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv61_HeadVar__3_3;
#line 246 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv60_HeadVar__5_5;

#line 246 "make_hlds_passes.m"
    {
#line 246 "make_hlds_passes.m"
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv61_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv60_HeadVar__5_5);
    }
#line 246 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv61_HeadVar__3_3));
#line 246 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv60_HeadVar__5_5));
#line 246 "make_hlds_passes.m"
  }
#line 246 "make_hlds_passes.m"
}

#line 244 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_10(
#line 244 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 244 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 244 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 244 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 244 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 244 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 244 "make_hlds_passes.m"
{
#line 244 "make_hlds_passes.m"
  {
#line 244 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 244 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv57_HeadVar__3_3;
#line 244 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv56_HeadVar__5_5;

#line 244 "make_hlds_passes.m"
    {
#line 244 "make_hlds_passes.m"
      hlds__make_hlds__add_mutable_aux_preds__add_aux_pred_decls_for_mutable_if_local_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv57_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv56_HeadVar__5_5);
    }
#line 244 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv57_HeadVar__3_3));
#line 244 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv56_HeadVar__5_5));
#line 244 "make_hlds_passes.m"
  }
#line 244 "make_hlds_passes.m"
}

#line 235 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_9(
#line 235 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 235 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 235 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 235 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 235 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 235 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 235 "make_hlds_passes.m"
{
#line 235 "make_hlds_passes.m"
  {
#line 235 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 235 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv53_HeadVar__3_3;
#line 235 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv52_HeadVar__5_5;

#line 235 "make_hlds_passes.m"
    {
#line 235 "make_hlds_passes.m"
      hlds__make_hlds__add_solver__add_solver_type_aux_pred_decls_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv53_HeadVar__3_3, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv52_HeadVar__5_5);
    }
#line 235 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv53_HeadVar__3_3));
#line 235 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv52_HeadVar__5_5));
#line 235 "make_hlds_passes.m"
  }
#line 235 "make_hlds_passes.m"
}

#line 233 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_8(
#line 233 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 233 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 233 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 233 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 233 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 233 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 233 "make_hlds_passes.m"
{
#line 233 "make_hlds_passes.m"
  {
#line 233 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 233 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv49_STATE_VARIABLE_ModuleInfo_27;
#line 233 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv48_STATE_VARIABLE_Specs_29;

#line 233 "make_hlds_passes.m"
    {
#line 233 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_mode_decl_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv49_STATE_VARIABLE_ModuleInfo_27, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv48_STATE_VARIABLE_Specs_29);
    }
#line 233 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv49_STATE_VARIABLE_ModuleInfo_27));
#line 233 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv48_STATE_VARIABLE_Specs_29));
#line 233 "make_hlds_passes.m"
  }
#line 233 "make_hlds_passes.m"
}

#line 226 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_7(
#line 226 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 226 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 226 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 226 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 226 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 226 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5)
#line 226 "make_hlds_passes.m"
{
#line 226 "make_hlds_passes.m"
  {
#line 226 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 226 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv45_STATE_VARIABLE_ModuleInfo_40;
#line 226 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv44_STATE_VARIABLE_Specs_42;

#line 226 "make_hlds_passes.m"
    {
#line 226 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_pred_decl_5_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv45_STATE_VARIABLE_ModuleInfo_40, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv44_STATE_VARIABLE_Specs_42);
    }
#line 226 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv45_STATE_VARIABLE_ModuleInfo_40));
#line 226 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv44_STATE_VARIABLE_Specs_42));
#line 226 "make_hlds_passes.m"
  }
#line 226 "make_hlds_passes.m"
}

#line 218 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_6(
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 218 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 218 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 218 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 218 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
#line 218 "make_hlds_passes.m"
{
#line 218 "make_hlds_passes.m"
  {
#line 218 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 218 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv40_STATE_VARIABLE_ModuleInfo_17;
#line 218 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19;
#line 218 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv38_STATE_VARIABLE_Specs_21;

#line 218 "make_hlds_passes.m"
    {
#line 218 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_mode_defn_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv40_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv38_STATE_VARIABLE_Specs_21);
    }
#line 218 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv40_STATE_VARIABLE_ModuleInfo_17));
#line 218 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv39_STATE_VARIABLE_FoundInvalidInstOrMode_19));
#line 218 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv38_STATE_VARIABLE_Specs_21));
#line 218 "make_hlds_passes.m"
  }
#line 218 "make_hlds_passes.m"
}

#line 212 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_5(
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 212 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 212 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 212 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 212 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7)
#line 212 "make_hlds_passes.m"
{
#line 212 "make_hlds_passes.m"
  {
#line 212 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 212 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv34_STATE_VARIABLE_ModuleInfo_17;
#line 212 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19;
#line 212 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv32_STATE_VARIABLE_Specs_21;

#line 212 "make_hlds_passes.m"
    {
#line 212 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_inst_defn_7_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv34_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv32_STATE_VARIABLE_Specs_21);
    }
#line 212 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv34_STATE_VARIABLE_ModuleInfo_17));
#line 212 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv33_STATE_VARIABLE_FoundInvalidInstOrMode_19));
#line 212 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv32_STATE_VARIABLE_Specs_21));
#line 212 "make_hlds_passes.m"
  }
#line 212 "make_hlds_passes.m"
}

#line 202 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_4(
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
#line 202 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
#line 202 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11)
#line 202 "make_hlds_passes.m"
{
#line 202 "make_hlds_passes.m"
  {
#line 202 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 202 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv26_STATE_VARIABLE_ModuleInfo_46;
#line 202 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv25_STATE_VARIABLE_FoundInvalidType_48;
#line 202 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv24_STATE_VARIABLE_Specs_50;
#line 202 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv23_STATE_VARIABLE_SolverAuxPredInfos_52;
#line 202 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv22_STATE_VARIABLE_SectionMutableItems_54;

#line 202 "make_hlds_passes.m"
    {
#line 202 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv26_STATE_VARIABLE_ModuleInfo_46, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv25_STATE_VARIABLE_FoundInvalidType_48, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv24_STATE_VARIABLE_Specs_50, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_8), &hlds__make_hlds__make_hlds_passes__conv23_STATE_VARIABLE_SolverAuxPredInfos_52, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_10), &hlds__make_hlds__make_hlds_passes__conv22_STATE_VARIABLE_SectionMutableItems_54);
    }
#line 202 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv26_STATE_VARIABLE_ModuleInfo_46));
#line 202 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv25_STATE_VARIABLE_FoundInvalidType_48));
#line 202 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv24_STATE_VARIABLE_Specs_50));
#line 202 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv23_STATE_VARIABLE_SolverAuxPredInfos_52));
#line 202 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv22_STATE_VARIABLE_SectionMutableItems_54));
#line 202 "make_hlds_passes.m"
  }
#line 202 "make_hlds_passes.m"
}

#line 199 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_3(
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
#line 199 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
#line 199 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11)
#line 199 "make_hlds_passes.m"
{
#line 199 "make_hlds_passes.m"
  {
#line 199 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 199 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv16_STATE_VARIABLE_ModuleInfo_46;
#line 199 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv15_STATE_VARIABLE_FoundInvalidType_48;
#line 199 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv14_STATE_VARIABLE_Specs_50;
#line 199 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv13_STATE_VARIABLE_SolverAuxPredInfos_52;
#line 199 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv12_STATE_VARIABLE_SectionMutableItems_54;

#line 199 "make_hlds_passes.m"
    {
#line 199 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv16_STATE_VARIABLE_ModuleInfo_46, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv15_STATE_VARIABLE_FoundInvalidType_48, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv14_STATE_VARIABLE_Specs_50, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_8), &hlds__make_hlds__make_hlds_passes__conv13_STATE_VARIABLE_SolverAuxPredInfos_52, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_10), &hlds__make_hlds__make_hlds_passes__conv12_STATE_VARIABLE_SectionMutableItems_54);
    }
#line 199 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv16_STATE_VARIABLE_ModuleInfo_46));
#line 199 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv15_STATE_VARIABLE_FoundInvalidType_48));
#line 199 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv14_STATE_VARIABLE_Specs_50));
#line 199 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv13_STATE_VARIABLE_SolverAuxPredInfos_52));
#line 199 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv12_STATE_VARIABLE_SectionMutableItems_54));
#line 199 "make_hlds_passes.m"
  }
#line 199 "make_hlds_passes.m"
}

#line 196 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_2(
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_4,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_5,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_6,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_7,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_8,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_9,
#line 196 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_10,
#line 196 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_11)
#line 196 "make_hlds_passes.m"
{
#line 196 "make_hlds_passes.m"
  {
#line 196 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 196 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_46;
#line 196 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_FoundInvalidType_48;
#line 196 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv4_STATE_VARIABLE_Specs_50;
#line 196 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_SolverAuxPredInfos_52;
#line 196 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_SectionMutableItems_54;

#line 196 "make_hlds_passes.m"
    {
#line 196 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_type_defn_11_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_46, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_4), &hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_FoundInvalidType_48, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_6), &hlds__make_hlds__make_hlds_passes__conv4_STATE_VARIABLE_Specs_50, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_8), &hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_SolverAuxPredInfos_52, ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_10), &hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_SectionMutableItems_54);
    }
#line 196 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv6_STATE_VARIABLE_ModuleInfo_46));
#line 196 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv5_STATE_VARIABLE_FoundInvalidType_48));
#line 196 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv4_STATE_VARIABLE_Specs_50));
#line 196 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv3_STATE_VARIABLE_SolverAuxPredInfos_52));
#line 196 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv2_STATE_VARIABLE_SectionMutableItems_54));
#line 196 "make_hlds_passes.m"
  }
#line 196 "make_hlds_passes.m"
}

#line 169 "make_hlds_passes.m"
static void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_1(
#line 169 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__closure_arg,
#line 169 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_1,
#line 169 "make_hlds_passes.m"
  MR_Box hlds__make_hlds__make_hlds_passes__wrapper_arg_2,
#line 169 "make_hlds_passes.m"
  MR_Box * hlds__make_hlds__make_hlds_passes__wrapper_arg_3)
#line 169 "make_hlds_passes.m"
{
#line 169 "make_hlds_passes.m"
  {
#line 169 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__closure = hlds__make_hlds__make_hlds_passes__closure_arg;
#line 169 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_9;

#line 169 "make_hlds_passes.m"
    {
#line 169 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__add_item_avail_list_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_passes__wrapper_arg_2), &hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_9);
    }
#line 169 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_passes__conv0_STATE_VARIABLE_ModuleInfo_9));
#line 169 "make_hlds_passes.m"
  }
#line 169 "make_hlds_passes.m"
}

#line 41 "make_hlds_passes.m"
void MR_CALL 
hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(
#line 41 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__AugCompUnit_12,
#line 41 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__Globals_13,
#line 41 "make_hlds_passes.m"
  MR_String hlds__make_hlds__make_hlds_passes__DumpBaseFileName_14,
#line 41 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__MQInfo0_15,
#line 41 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__TypeEqvMapMap_16,
#line 41 "make_hlds_passes.m"
  MR_Word hlds__make_hlds__make_hlds_passes__UsedModules_17,
#line 41 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_61,
#line 41 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_62,
#line 41 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_63,
#line 41 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_64,
#line 41 "make_hlds_passes.m"
  MR_Word * hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65)
#line 41 "make_hlds_passes.m"
{
#line 97 "make_hlds_passes.m"
  {
#line 97 "make_hlds_passes.m"
    MR_bool hlds__make_hlds__make_hlds_passes__succeeded;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_197_197;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_198_198;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_199_199;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_200_200;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_201_201;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_232_232;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_233_233;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_247_247;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_259_259;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeInfo_265_265;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__TypeCtorInfo_312_312;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__PQInfo_23;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleName_28;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_30;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemAvailLists_36;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnsAbstract_37;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnsMercury_38;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeDefnsForeign_39;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInstDefns_40;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDefns_41;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPredDecls_42;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemModeDecls_43;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPromises_44;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemTypeclasses_45;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInstances_46;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemInitialises_47;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemFinalises_48;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemMutables_49;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPragmas2_50;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemPragmas3_51;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__ItemClauses_52;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverAuxPredInfos_53;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__SolverItemMutables_54;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQInfo_56;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQUndefType_57;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQUndefInst_58;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQUndefMode_59;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__MQUndefTypeClass_60;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_68_68;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_78_78;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_82_82;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_83_83;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_84_84;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_85_85;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_86_86;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_89_89;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_90_90;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_91_91;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_92_92;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_94_94;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_95_95;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_96_96;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_101_101;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_102_102;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_105_105;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_106_106;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_108_108;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_109_109;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_111_111;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_112_112;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_114_114;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_115_115;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_117_117;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_121_121;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_123_123;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_124_124;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_126_126;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_128_128;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_129_129;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_130_130;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_131_131;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_138_138;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_139_139;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_140_140;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_143_143;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_144_144;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_145_145;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_147_147;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_148_148;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_149_149;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_151_151;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_152_152;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_153_153;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_155_155;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_156_156;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_157_157;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_159_159;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_160_160;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_161_161;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_163_163;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_164_164;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_165_165;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_167_167;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_168_168;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_170_170;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_171_171;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_173_173;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_174_174;
#line 97 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_175_175;
#line 129 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___ModuleNameContext_29;
#line 129 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___SrcItemBlocks_31;
#line 129 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___DirectIntItemBlocks_32;
#line 129 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___IndirectIntItemBlocks_33;
#line 129 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___OptItemBlocks_34;
#line 129 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes___IntForOptItemBlocks_35;
#line 169 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_78_78;
#line 196 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv11_STATE_VARIABLE_ModuleInfo_82_82;
#line 196 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_FoundInvalidType_83_83;
#line 196 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_Specs_84_84;
#line 196 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_SolverAuxPredInfos_85_85;
#line 196 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv7_STATE_VARIABLE_SolverItemMutables_86_86;
#line 199 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv21_STATE_VARIABLE_ModuleInfo_88_88;
#line 199 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv20_STATE_VARIABLE_FoundInvalidType_89_89;
#line 199 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv19_STATE_VARIABLE_Specs_90_90;
#line 199 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv18_STATE_VARIABLE_SolverAuxPredInfos_91_91;
#line 199 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv17_STATE_VARIABLE_SolverItemMutables_92_92;
#line 202 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv31_STATE_VARIABLE_ModuleInfo_94_94;
#line 202 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv30_STATE_VARIABLE_FoundInvalidType_95_95;
#line 202 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv29_STATE_VARIABLE_Specs_96_96;
#line 202 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv28_SolverAuxPredInfos_53;
#line 202 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv27_SolverItemMutables_54;
#line 212 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv37_STATE_VARIABLE_ModuleInfo_100_100;
#line 212 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv36_STATE_VARIABLE_FoundInvalidInstOrMode_101_101;
#line 212 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv35_STATE_VARIABLE_Specs_102_102;
#line 218 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv43_STATE_VARIABLE_ModuleInfo_104_104;
#line 218 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv42_STATE_VARIABLE_FoundInvalidInstOrMode_105_105;
#line 218 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv41_STATE_VARIABLE_Specs_106_106;
#line 226 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv47_STATE_VARIABLE_ModuleInfo_108_108;
#line 226 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv46_STATE_VARIABLE_Specs_109_109;
#line 233 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv51_STATE_VARIABLE_ModuleInfo_111_111;
#line 233 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv50_STATE_VARIABLE_Specs_112_112;
#line 235 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv55_STATE_VARIABLE_ModuleInfo_114_114;
#line 235 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv54_STATE_VARIABLE_Specs_115_115;
#line 244 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv59_STATE_VARIABLE_ModuleInfo_117_117;
#line 244 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv58_STATE_VARIABLE_Specs_118_118;
#line 246 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv63_STATE_VARIABLE_ModuleInfo_120_120;
#line 246 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv62_STATE_VARIABLE_Specs_121_121;
#line 250 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv67_STATE_VARIABLE_ModuleInfo_123_123;
#line 250 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv66_STATE_VARIABLE_Specs_124_124;
#line 262 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv69_STATE_VARIABLE_ModuleInfo_126_126;
#line 266 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv73_STATE_VARIABLE_ModuleInfo_128_128;
#line 266 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv72_STATE_VARIABLE_Specs_129_129;
#line 332 "make_hlds_passes.m"
    MR_Word hlds__make_hlds__make_hlds_passes__V_363_363;
#line 348 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv89_STATE_VARIABLE_ModuleInfo_147_147;
#line 348 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv88_STATE_VARIABLE_QualInfo_148_148;
#line 348 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv87_STATE_VARIABLE_Specs_149_149;
#line 353 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv95_STATE_VARIABLE_ModuleInfo_151_151;
#line 353 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv94_STATE_VARIABLE_QualInfo_152_152;
#line 353 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv93_STATE_VARIABLE_Specs_153_153;
#line 356 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv101_STATE_VARIABLE_ModuleInfo_155_155;
#line 356 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv100_STATE_VARIABLE_QualInfo_156_156;
#line 356 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv99_STATE_VARIABLE_Specs_157_157;
#line 359 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv107_STATE_VARIABLE_ModuleInfo_159_159;
#line 359 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv106_STATE_VARIABLE_QualInfo_160_160;
#line 359 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv105_STATE_VARIABLE_Specs_161_161;
#line 362 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv113_STATE_VARIABLE_ModuleInfo_163_163;
#line 362 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv112_STATE_VARIABLE_QualInfo_164_164;
#line 362 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv111_STATE_VARIABLE_Specs_165_165;
#line 370 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv117_STATE_VARIABLE_ModuleInfo_167_167;
#line 370 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv116_STATE_VARIABLE_Specs_168_168;
#line 372 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv121_STATE_VARIABLE_ModuleInfo_170_170;
#line 372 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv120_STATE_VARIABLE_Specs_171_171;
#line 389 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv123_STATE_VARIABLE_Specs_65;
#line 392 "make_hlds_passes.m"
    MR_Box hlds__make_hlds__make_hlds_passes__conv125_STATE_VARIABLE_QualInfo_61;

#line 98 "make_hlds_passes.m"
    {
#line 98 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo0_15, &hlds__make_hlds__make_hlds_passes__PQInfo_23);
    }
#line 99 "make_hlds_passes.m"
    {
#line 99 "make_hlds_passes.m"
      hlds__hlds_module__module_info_init_6_p_0(hlds__make_hlds__make_hlds_passes__AugCompUnit_12, hlds__make_hlds__make_hlds_passes__DumpBaseFileName_14, hlds__make_hlds__make_hlds_passes__Globals_13, hlds__make_hlds__make_hlds_passes__PQInfo_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67);
    }
#line 101 "make_hlds_passes.m"
    {
#line 101 "make_hlds_passes.m"
      hlds__hlds_module__module_info_set_used_modules_3_p_0(hlds__make_hlds__make_hlds_passes__UsedModules_17, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_67_67, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_68_68);
    }
#line 129 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__ModuleName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 0)));
#line 129 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes___ModuleNameContext_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 1)));
#line 129 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 2)));
#line 129 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes___SrcItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 3)));
#line 129 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes___DirectIntItemBlocks_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 4)));
#line 129 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes___IndirectIntItemBlocks_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 5)));
#line 129 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes___OptItemBlocks_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 6)));
#line 129 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes___IntForOptItemBlocks_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__AugCompUnit_12, (MR_Integer) 7)));
#line 155 "make_hlds_passes.m"
    {
#line 155 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__make_hlds_separate_items__separate_items_in_aug_comp_unit_18_p_0(hlds__make_hlds__make_hlds_passes__AugCompUnit_12, &hlds__make_hlds__make_hlds_passes__ItemAvailLists_36, &hlds__make_hlds__make_hlds_passes__ItemTypeDefnsAbstract_37, &hlds__make_hlds__make_hlds_passes__ItemTypeDefnsMercury_38, &hlds__make_hlds__make_hlds_passes__ItemTypeDefnsForeign_39, &hlds__make_hlds__make_hlds_passes__ItemInstDefns_40, &hlds__make_hlds__make_hlds_passes__ItemModeDefns_41, &hlds__make_hlds__make_hlds_passes__ItemPredDecls_42, &hlds__make_hlds__make_hlds_passes__ItemModeDecls_43, &hlds__make_hlds__make_hlds_passes__ItemPromises_44, &hlds__make_hlds__make_hlds_passes__ItemTypeclasses_45, &hlds__make_hlds__make_hlds_passes__ItemInstances_46, &hlds__make_hlds__make_hlds_passes__ItemInitialises_47, &hlds__make_hlds__make_hlds_passes__ItemFinalises_48, &hlds__make_hlds__make_hlds_passes__ItemMutables_49, &hlds__make_hlds__make_hlds_passes__ItemPragmas2_50, &hlds__make_hlds__make_hlds_passes__ItemPragmas3_51, &hlds__make_hlds__make_hlds_passes__ItemClauses_52);
    }
#line 8451 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185 = (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0;
#line 169 "make_hlds_passes.m"
    {
#line 169 "make_hlds_passes.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[1], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[2], hlds__make_hlds__make_hlds_passes__ItemAvailLists_36, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_68_68)), &hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_78_78);
    }
#line 169 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_78_78 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv1_STATE_VARIABLE_ModuleInfo_78_78);
#line 8460 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeInfo_197_197 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[2];
#line 8462 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_198_198 = (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0;
#line 8464 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeInfo_199_199 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[3];
#line 8466 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeInfo_200_200 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[4];
#line 8468 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeInfo_201_201 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[6];
#line 196 "make_hlds_passes.m"
    {
#line 196 "make_hlds_passes.m"
      mercury__list__foldl5_12_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_197_197, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_198_198, hlds__make_hlds__make_hlds_passes__TypeInfo_199_199, hlds__make_hlds__make_hlds_passes__TypeInfo_200_200, hlds__make_hlds__make_hlds_passes__TypeInfo_201_201, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[3], hlds__make_hlds__make_hlds_passes__ItemTypeDefnsAbstract_37, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_78_78)), &hlds__make_hlds__make_hlds_passes__conv11_STATE_VARIABLE_ModuleInfo_82_82, ((MR_Box) ((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_FoundInvalidType_83_83, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_Specs_84_84, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_SolverAuxPredInfos_85_85, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &hlds__make_hlds__make_hlds_passes__conv7_STATE_VARIABLE_SolverItemMutables_86_86);
    }
#line 196 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_82_82 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv11_STATE_VARIABLE_ModuleInfo_82_82);
#line 196 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_83_83 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv10_STATE_VARIABLE_FoundInvalidType_83_83);
#line 196 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_84_84 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv9_STATE_VARIABLE_Specs_84_84);
#line 196 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_85_85 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv8_STATE_VARIABLE_SolverAuxPredInfos_85_85);
#line 196 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_86_86 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv7_STATE_VARIABLE_SolverItemMutables_86_86);
#line 199 "make_hlds_passes.m"
    {
#line 199 "make_hlds_passes.m"
      mercury__list__foldl5_12_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_197_197, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_198_198, hlds__make_hlds__make_hlds_passes__TypeInfo_199_199, hlds__make_hlds__make_hlds_passes__TypeInfo_200_200, hlds__make_hlds__make_hlds_passes__TypeInfo_201_201, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[4], hlds__make_hlds__make_hlds_passes__ItemTypeDefnsMercury_38, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_82_82)), &hlds__make_hlds__make_hlds_passes__conv21_STATE_VARIABLE_ModuleInfo_88_88, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_83_83)), &hlds__make_hlds__make_hlds_passes__conv20_STATE_VARIABLE_FoundInvalidType_89_89, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_84_84)), &hlds__make_hlds__make_hlds_passes__conv19_STATE_VARIABLE_Specs_90_90, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_85_85)), &hlds__make_hlds__make_hlds_passes__conv18_STATE_VARIABLE_SolverAuxPredInfos_91_91, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_86_86)), &hlds__make_hlds__make_hlds_passes__conv17_STATE_VARIABLE_SolverItemMutables_92_92);
    }
#line 199 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv21_STATE_VARIABLE_ModuleInfo_88_88);
#line 199 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_89_89 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv20_STATE_VARIABLE_FoundInvalidType_89_89);
#line 199 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_90_90 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv19_STATE_VARIABLE_Specs_90_90);
#line 199 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_91_91 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv18_STATE_VARIABLE_SolverAuxPredInfos_91_91);
#line 199 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_92_92 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv17_STATE_VARIABLE_SolverItemMutables_92_92);
#line 202 "make_hlds_passes.m"
    {
#line 202 "make_hlds_passes.m"
      mercury__list__foldl5_12_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_197_197, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_198_198, hlds__make_hlds__make_hlds_passes__TypeInfo_199_199, hlds__make_hlds__make_hlds_passes__TypeInfo_200_200, hlds__make_hlds__make_hlds_passes__TypeInfo_201_201, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[5], hlds__make_hlds__make_hlds_passes__ItemTypeDefnsForeign_39, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_88_88)), &hlds__make_hlds__make_hlds_passes__conv31_STATE_VARIABLE_ModuleInfo_94_94, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_89_89)), &hlds__make_hlds__make_hlds_passes__conv30_STATE_VARIABLE_FoundInvalidType_95_95, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_90_90)), &hlds__make_hlds__make_hlds_passes__conv29_STATE_VARIABLE_Specs_96_96, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverAuxPredInfos_91_91)), &hlds__make_hlds__make_hlds_passes__conv28_SolverAuxPredInfos_53, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_SolverItemMutables_92_92)), &hlds__make_hlds__make_hlds_passes__conv27_SolverItemMutables_54);
    }
#line 202 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_94_94 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv31_STATE_VARIABLE_ModuleInfo_94_94);
#line 202 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_95_95 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv30_STATE_VARIABLE_FoundInvalidType_95_95);
#line 202 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_96_96 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv29_STATE_VARIABLE_Specs_96_96);
#line 202 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__SolverAuxPredInfos_53 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv28_SolverAuxPredInfos_53);
#line 202 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__SolverItemMutables_54 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv27_SolverItemMutables_54);
#line 8515 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_232_232 = (MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0;
#line 8517 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeInfo_233_233 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[3];
#line 212 "make_hlds_passes.m"
    {
#line 212 "make_hlds_passes.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[7], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_232_232, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[6], hlds__make_hlds__make_hlds_passes__ItemInstDefns_40, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_94_94)), &hlds__make_hlds__make_hlds_passes__conv37_STATE_VARIABLE_ModuleInfo_100_100, ((MR_Box) ((MR_Integer) 0)), &hlds__make_hlds__make_hlds_passes__conv36_STATE_VARIABLE_FoundInvalidInstOrMode_101_101, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_96_96)), &hlds__make_hlds__make_hlds_passes__conv35_STATE_VARIABLE_Specs_102_102);
    }
#line 212 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv37_STATE_VARIABLE_ModuleInfo_100_100);
#line 212 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_101_101 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv36_STATE_VARIABLE_FoundInvalidInstOrMode_101_101);
#line 212 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_102_102 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv35_STATE_VARIABLE_Specs_102_102);
#line 218 "make_hlds_passes.m"
    {
#line 218 "make_hlds_passes.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[8], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_232_232, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[7], hlds__make_hlds__make_hlds_passes__ItemModeDefns_41, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_100_100)), &hlds__make_hlds__make_hlds_passes__conv43_STATE_VARIABLE_ModuleInfo_104_104, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_101_101)), &hlds__make_hlds__make_hlds_passes__conv42_STATE_VARIABLE_FoundInvalidInstOrMode_105_105, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_102_102)), &hlds__make_hlds__make_hlds_passes__conv41_STATE_VARIABLE_Specs_106_106);
    }
#line 218 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv43_STATE_VARIABLE_ModuleInfo_104_104);
#line 218 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_105_105 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv42_STATE_VARIABLE_FoundInvalidInstOrMode_105_105);
#line 218 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_106_106 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv41_STATE_VARIABLE_Specs_106_106);
#line 8541 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeInfo_247_247 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[9];
#line 226 "make_hlds_passes.m"
    {
#line 226 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_247_247, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[8], hlds__make_hlds__make_hlds_passes__ItemPredDecls_42, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_104_104)), &hlds__make_hlds__make_hlds_passes__conv47_STATE_VARIABLE_ModuleInfo_108_108, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_106_106)), &hlds__make_hlds__make_hlds_passes__conv46_STATE_VARIABLE_Specs_109_109);
    }
#line 226 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_108_108 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv47_STATE_VARIABLE_ModuleInfo_108_108);
#line 226 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_109_109 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv46_STATE_VARIABLE_Specs_109_109);
#line 233 "make_hlds_passes.m"
    {
#line 233 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[10], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[9], hlds__make_hlds__make_hlds_passes__ItemModeDecls_43, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_108_108)), &hlds__make_hlds__make_hlds_passes__conv51_STATE_VARIABLE_ModuleInfo_111_111, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_109_109)), &hlds__make_hlds__make_hlds_passes__conv50_STATE_VARIABLE_Specs_112_112);
    }
#line 233 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_111_111 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv51_STATE_VARIABLE_ModuleInfo_111_111);
#line 233 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_112_112 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv50_STATE_VARIABLE_Specs_112_112);
#line 8561 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_259_259 = (MR_Word) &hlds__make_hlds__add_solver__hlds__make_hlds__add_solver__type_ctor_info_solver_aux_pred_info_0;
#line 235 "make_hlds_passes.m"
    {
#line 235 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0(hlds__make_hlds__make_hlds_passes__TypeCtorInfo_259_259, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[10], hlds__make_hlds__make_hlds_passes__SolverAuxPredInfos_53, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_111_111)), &hlds__make_hlds__make_hlds_passes__conv55_STATE_VARIABLE_ModuleInfo_114_114, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_112_112)), &hlds__make_hlds__make_hlds_passes__conv54_STATE_VARIABLE_Specs_115_115);
    }
#line 235 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_114_114 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv55_STATE_VARIABLE_ModuleInfo_114_114);
#line 235 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_115_115 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv54_STATE_VARIABLE_Specs_115_115);
#line 8572 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeInfo_265_265 = (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[5];
#line 244 "make_hlds_passes.m"
    {
#line 244 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_265_265, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[11], hlds__make_hlds__make_hlds_passes__ItemMutables_49, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_114_114)), &hlds__make_hlds__make_hlds_passes__conv59_STATE_VARIABLE_ModuleInfo_117_117, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_115_115)), &hlds__make_hlds__make_hlds_passes__conv58_STATE_VARIABLE_Specs_118_118);
    }
#line 244 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_117_117 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv59_STATE_VARIABLE_ModuleInfo_117_117);
#line 244 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv58_STATE_VARIABLE_Specs_118_118);
#line 246 "make_hlds_passes.m"
    {
#line 246 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_265_265, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[12], hlds__make_hlds__make_hlds_passes__SolverItemMutables_54, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_117_117)), &hlds__make_hlds__make_hlds_passes__conv63_STATE_VARIABLE_ModuleInfo_120_120, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_118_118)), &hlds__make_hlds__make_hlds_passes__conv62_STATE_VARIABLE_Specs_121_121);
    }
#line 246 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv63_STATE_VARIABLE_ModuleInfo_120_120);
#line 246 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_121_121 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv62_STATE_VARIABLE_Specs_121_121);
#line 250 "make_hlds_passes.m"
    {
#line 250 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[11], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[13], hlds__make_hlds__make_hlds_passes__ItemTypeclasses_45, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_120_120)), &hlds__make_hlds__make_hlds_passes__conv67_STATE_VARIABLE_ModuleInfo_123_123, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_121_121)), &hlds__make_hlds__make_hlds_passes__conv66_STATE_VARIABLE_Specs_124_124);
    }
#line 250 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_123_123 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv67_STATE_VARIABLE_ModuleInfo_123_123);
#line 250 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_124_124 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv66_STATE_VARIABLE_Specs_124_124);
#line 262 "make_hlds_passes.m"
    {
#line 262 "make_hlds_passes.m"
      mercury__list__foldl_4_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_247_247, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[14], hlds__make_hlds__make_hlds_passes__ItemPredDecls_42, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_123_123)), &hlds__make_hlds__make_hlds_passes__conv69_STATE_VARIABLE_ModuleInfo_126_126);
    }
#line 262 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_126_126 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv69_STATE_VARIABLE_ModuleInfo_126_126);
#line 266 "make_hlds_passes.m"
    {
#line 266 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[12], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[15], hlds__make_hlds__make_hlds_passes__ItemInstances_46, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_126_126)), &hlds__make_hlds__make_hlds_passes__conv73_STATE_VARIABLE_ModuleInfo_128_128, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_124_124)), &hlds__make_hlds__make_hlds_passes__conv72_STATE_VARIABLE_Specs_129_129);
    }
#line 266 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_128_128 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv73_STATE_VARIABLE_ModuleInfo_128_128);
#line 266 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_129_129 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv72_STATE_VARIABLE_Specs_129_129);
#line 295 "make_hlds_passes.m"
    {
#line 295 "make_hlds_passes.m"
      hlds__make_hlds__add_pragma__add_pass_2_pragmas_5_p_0(hlds__make_hlds__make_hlds_passes__ItemPragmas2_50, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_128_128, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_130_130, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_129_129, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_131_131);
    }
#line 325 "make_hlds_passes.m"
#line 325 "make_hlds_passes.m"
    switch (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_95_95) {
#line 325 "make_hlds_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 325 "make_hlds_passes.m"
      case (MR_Integer) 0:
#line 308 "make_hlds_passes.m"
        {
#line 308 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_132_132;
#line 308 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__V_133_133;
#line 308 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_135_135;
#line 308 "make_hlds_passes.m"
          MR_Word hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136;
#line 313 "make_hlds_passes.m"
          MR_Box hlds__make_hlds__make_hlds_passes__conv75_STATE_VARIABLE_TypeTable_135_135;
#line 322 "make_hlds_passes.m"
          MR_Box hlds__make_hlds__make_hlds_passes__conv81_STATE_VARIABLE_FoundInvalidType_138_138;
#line 322 "make_hlds_passes.m"
          MR_Box hlds__make_hlds__make_hlds_passes__conv80_STATE_VARIABLE_ModuleInfo_139_139;
#line 322 "make_hlds_passes.m"
          MR_Box hlds__make_hlds__make_hlds_passes__conv79_STATE_VARIABLE_Specs_140_140;

#line 312 "make_hlds_passes.m"
          {
#line 312 "make_hlds_passes.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_130_130, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_132_132);
          }
#line 313 "make_hlds_passes.m"
          {
#line 313 "make_hlds_passes.m"
            hlds__make_hlds__make_hlds_passes__V_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 313 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_133_133, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_6[6]));
#line 313 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_133_133, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_15));
#line 313 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_133_133, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 313 "make_hlds_passes.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_133_133, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_130_130));
#line 313 "make_hlds_passes.m"
          }
#line 313 "make_hlds_passes.m"
          {
#line 313 "make_hlds_passes.m"
            hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[1], hlds__make_hlds__make_hlds_passes__V_133_133, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_132_132, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_132_132)), &hlds__make_hlds__make_hlds_passes__conv75_STATE_VARIABLE_TypeTable_135_135);
          }
#line 313 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_135_135 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv75_STATE_VARIABLE_TypeTable_135_135);
#line 315 "make_hlds_passes.m"
          {
#line 315 "make_hlds_passes.m"
            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_135_135, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_130_130, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136);
          }
#line 322 "make_hlds_passes.m"
          {
#line 322 "make_hlds_passes.m"
            hlds__hlds_data__foldl3_over_type_ctor_defns_8_p_0((MR_Word) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[16], hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_TypeTable_135_135, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_95_95)), &hlds__make_hlds__make_hlds_passes__conv81_STATE_VARIABLE_FoundInvalidType_138_138, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_136_136)), &hlds__make_hlds__make_hlds_passes__conv80_STATE_VARIABLE_ModuleInfo_139_139, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_131_131)), &hlds__make_hlds__make_hlds_passes__conv79_STATE_VARIABLE_Specs_140_140);
          }
#line 322 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_138_138 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv81_STATE_VARIABLE_FoundInvalidType_138_138);
#line 322 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_139_139 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv80_STATE_VARIABLE_ModuleInfo_139_139);
#line 322 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_140_140 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv79_STATE_VARIABLE_Specs_140_140);
#line 308 "make_hlds_passes.m"
        }
#line 325 "make_hlds_passes.m"
        break;
#line 325 "make_hlds_passes.m"
      case (MR_Integer) 1:
#line 326 "make_hlds_passes.m"
        {
#line 326 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_138_138 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_95_95;
#line 326 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_139_139 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_130_130;
#line 326 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_140_140 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_131_131;
#line 326 "make_hlds_passes.m"
        }
#line 325 "make_hlds_passes.m"
        break;
#line 325 "make_hlds_passes.m"
    }
#line 332 "make_hlds_passes.m"
    {
#line 332 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_363_363 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
#line 332 "make_hlds_passes.m"
    {
#line 332 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(hlds__make_hlds__make_hlds_passes__ModuleName_28, hlds__make_hlds__make_hlds_passes__V_363_363);
    }
#line 332 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 333 "make_hlds_passes.m"
      {
#line 333 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__succeeded = hlds__special_pred__compiler_generated_rtti_for_builtins_1_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_139_139);
      }
#line 331 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 335 "make_hlds_passes.m"
      {
#line 335 "make_hlds_passes.m"
        MR_Word hlds__make_hlds__make_hlds_passes__V_142_142;
#line 335 "make_hlds_passes.m"
        MR_Box hlds__make_hlds__make_hlds_passes__conv83_STATE_VARIABLE_ModuleInfo_143_143;

#line 336 "make_hlds_passes.m"
        {
#line 336 "make_hlds_passes.m"
          hlds__make_hlds__make_hlds_passes__V_142_142 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
        }
#line 335 "make_hlds_passes.m"
        {
#line 335 "make_hlds_passes.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[17], hlds__make_hlds__make_hlds_passes__V_142_142, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_139_139)), &hlds__make_hlds__make_hlds_passes__conv83_STATE_VARIABLE_ModuleInfo_143_143);
        }
#line 335 "make_hlds_passes.m"
        hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_143_143 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv83_STATE_VARIABLE_ModuleInfo_143_143);
#line 335 "make_hlds_passes.m"
      }
#line 331 "make_hlds_passes.m"
    else
#line 331 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_143_143 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_139_139;
#line 342 "make_hlds_passes.m"
    {
#line 342 "make_hlds_passes.m"
      hlds__hlds_module__module_info_optimize_2_p_0(hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_143_143, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_144_144);
    }
#line 345 "make_hlds_passes.m"
    {
#line 345 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__init_qual_info_3_p_0(hlds__make_hlds__make_hlds_passes__MQInfo0_15, hlds__make_hlds__make_hlds_passes__TypeEqvMapMap_16, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_145_145);
    }
#line 8764 "hlds.make_hlds.make_hlds_passes.c"
    hlds__make_hlds__make_hlds_passes__TypeCtorInfo_312_312 = (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;
#line 348 "make_hlds_passes.m"
    {
#line 348 "make_hlds_passes.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[13], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_312_312, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[18], hlds__make_hlds__make_hlds_passes__ItemClauses_52, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_144_144)), &hlds__make_hlds__make_hlds_passes__conv89_STATE_VARIABLE_ModuleInfo_147_147, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_145_145)), &hlds__make_hlds__make_hlds_passes__conv88_STATE_VARIABLE_QualInfo_148_148, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_140_140)), &hlds__make_hlds__make_hlds_passes__conv87_STATE_VARIABLE_Specs_149_149);
    }
#line 348 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_147_147 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv89_STATE_VARIABLE_ModuleInfo_147_147);
#line 348 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_148_148 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv88_STATE_VARIABLE_QualInfo_148_148);
#line 348 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_149_149 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv87_STATE_VARIABLE_Specs_149_149);
#line 353 "make_hlds_passes.m"
    {
#line 353 "make_hlds_passes.m"
      mercury__list__foldl3_8_p_0(hlds__make_hlds__make_hlds_passes__TypeCtorInfo_259_259, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_312_312, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[19], hlds__make_hlds__make_hlds_passes__SolverAuxPredInfos_53, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_147_147)), &hlds__make_hlds__make_hlds_passes__conv95_STATE_VARIABLE_ModuleInfo_151_151, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_148_148)), &hlds__make_hlds__make_hlds_passes__conv94_STATE_VARIABLE_QualInfo_152_152, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_149_149)), &hlds__make_hlds__make_hlds_passes__conv93_STATE_VARIABLE_Specs_153_153);
    }
#line 353 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_151_151 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv95_STATE_VARIABLE_ModuleInfo_151_151);
#line 353 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_152_152 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv94_STATE_VARIABLE_QualInfo_152_152);
#line 353 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_153_153 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv93_STATE_VARIABLE_Specs_153_153);
#line 356 "make_hlds_passes.m"
    {
#line 356 "make_hlds_passes.m"
      mercury__list__foldl3_8_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_265_265, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_312_312, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[20], hlds__make_hlds__make_hlds_passes__ItemMutables_49, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_151_151)), &hlds__make_hlds__make_hlds_passes__conv101_STATE_VARIABLE_ModuleInfo_155_155, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_152_152)), &hlds__make_hlds__make_hlds_passes__conv100_STATE_VARIABLE_QualInfo_156_156, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_153_153)), &hlds__make_hlds__make_hlds_passes__conv99_STATE_VARIABLE_Specs_157_157);
    }
#line 356 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_155_155 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv101_STATE_VARIABLE_ModuleInfo_155_155);
#line 356 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_156_156 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv100_STATE_VARIABLE_QualInfo_156_156);
#line 356 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_157_157 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv99_STATE_VARIABLE_Specs_157_157);
#line 359 "make_hlds_passes.m"
    {
#line 359 "make_hlds_passes.m"
      mercury__list__foldl3_8_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_265_265, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_312_312, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[21], hlds__make_hlds__make_hlds_passes__SolverItemMutables_54, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_155_155)), &hlds__make_hlds__make_hlds_passes__conv107_STATE_VARIABLE_ModuleInfo_159_159, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_156_156)), &hlds__make_hlds__make_hlds_passes__conv106_STATE_VARIABLE_QualInfo_160_160, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_157_157)), &hlds__make_hlds__make_hlds_passes__conv105_STATE_VARIABLE_Specs_161_161);
    }
#line 359 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_159_159 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv107_STATE_VARIABLE_ModuleInfo_159_159);
#line 359 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_160_160 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv106_STATE_VARIABLE_QualInfo_160_160);
#line 359 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_161_161 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv105_STATE_VARIABLE_Specs_161_161);
#line 362 "make_hlds_passes.m"
    {
#line 362 "make_hlds_passes.m"
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[14], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_312_312, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[22], hlds__make_hlds__make_hlds_passes__ItemPromises_44, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_159_159)), &hlds__make_hlds__make_hlds_passes__conv113_STATE_VARIABLE_ModuleInfo_163_163, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_160_160)), &hlds__make_hlds__make_hlds_passes__conv112_STATE_VARIABLE_QualInfo_164_164, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_161_161)), &hlds__make_hlds__make_hlds_passes__conv111_STATE_VARIABLE_Specs_165_165);
    }
#line 362 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_163_163 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv113_STATE_VARIABLE_ModuleInfo_163_163);
#line 362 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_164_164 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv112_STATE_VARIABLE_QualInfo_164_164);
#line 362 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_165_165 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv111_STATE_VARIABLE_Specs_165_165);
#line 370 "make_hlds_passes.m"
    {
#line 370 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[15], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[23], hlds__make_hlds__make_hlds_passes__ItemInitialises_47, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_163_163)), &hlds__make_hlds__make_hlds_passes__conv117_STATE_VARIABLE_ModuleInfo_167_167, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_165_165)), &hlds__make_hlds__make_hlds_passes__conv116_STATE_VARIABLE_Specs_168_168);
    }
#line 370 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_167_167 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv117_STATE_VARIABLE_ModuleInfo_167_167);
#line 370 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_168_168 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv116_STATE_VARIABLE_Specs_168_168);
#line 372 "make_hlds_passes.m"
    {
#line 372 "make_hlds_passes.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_1[16], hlds__make_hlds__make_hlds_passes__TypeCtorInfo_185_185, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[24], hlds__make_hlds__make_hlds_passes__ItemFinalises_48, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_167_167)), &hlds__make_hlds__make_hlds_passes__conv121_STATE_VARIABLE_ModuleInfo_170_170, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_168_168)), &hlds__make_hlds__make_hlds_passes__conv120_STATE_VARIABLE_Specs_171_171);
    }
#line 372 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_170_170 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv121_STATE_VARIABLE_ModuleInfo_170_170);
#line 372 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_171_171 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv120_STATE_VARIABLE_Specs_171_171);
#line 381 "make_hlds_passes.m"
    {
#line 381 "make_hlds_passes.m"
      hlds__make_hlds__add_pragma__add_pass_3_pragmas_7_p_0(hlds__make_hlds__make_hlds_passes__ItemPragmas3_51, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_170_170, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_64, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_164_164, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_173_173, hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_171_171, &hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_174_174);
    }
#line 389 "make_hlds_passes.m"
    {
#line 389 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 389 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_175_175, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_passes_scalar_common_8[0]));
#line 389 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_175_175, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0_25));
#line 389 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_175_175, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 389 "make_hlds_passes.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_passes__V_175_175, 3) = ((MR_Box) (*hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_ModuleInfo_64));
#line 389 "make_hlds_passes.m"
    }
#line 389 "make_hlds_passes.m"
    {
#line 389 "make_hlds_passes.m"
      mercury__list__foldl_4_p_0(hlds__make_hlds__make_hlds_passes__TypeInfo_247_247, hlds__make_hlds__make_hlds_passes__TypeInfo_233_233, hlds__make_hlds__make_hlds_passes__V_175_175, hlds__make_hlds__make_hlds_passes__ItemPredDecls_42, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_174_174)), &hlds__make_hlds__make_hlds_passes__conv123_STATE_VARIABLE_Specs_65);
    }
#line 389 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_Specs_65 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv123_STATE_VARIABLE_Specs_65);
#line 392 "make_hlds_passes.m"
    {
#line 392 "make_hlds_passes.m"
      mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &recompilation__recompilation__type_ctor_info_version_numbers_0, hlds__make_hlds__make_hlds_passes__TypeCtorInfo_312_312, (MR_Word) &hlds__make_hlds__make_hlds_passes_scalar_common_2[25], hlds__make_hlds__make_hlds_passes__ModuleVersionNumbers_30, ((MR_Box) (hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_173_173)), &hlds__make_hlds__make_hlds_passes__conv125_STATE_VARIABLE_QualInfo_61);
    }
#line 392 "make_hlds_passes.m"
    *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_61 = ((MR_Word) hlds__make_hlds__make_hlds_passes__conv125_STATE_VARIABLE_QualInfo_61);
#line 394 "make_hlds_passes.m"
    {
#line 394 "make_hlds_passes.m"
      hlds__make_hlds__qual_info__qual_info_get_mq_info_2_p_0(*hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_QualInfo_61, &hlds__make_hlds__make_hlds_passes__MQInfo_56);
    }
#line 395 "make_hlds_passes.m"
    {
#line 395 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_found_undef_type_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_56, &hlds__make_hlds__make_hlds_passes__MQUndefType_57);
    }
#line 396 "make_hlds_passes.m"
    {
#line 396 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_found_undef_inst_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_56, &hlds__make_hlds__make_hlds_passes__MQUndefInst_58);
    }
#line 397 "make_hlds_passes.m"
    {
#line 397 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_found_undef_mode_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_56, &hlds__make_hlds__make_hlds_passes__MQUndefMode_59);
    }
#line 398 "make_hlds_passes.m"
    {
#line 398 "make_hlds_passes.m"
      parse_tree__module_qual__mq_info_get_found_undef_typeclass_2_p_0(hlds__make_hlds__make_hlds_passes__MQInfo_56, &hlds__make_hlds__make_hlds_passes__MQUndefTypeClass_60);
    }
#line 400 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQUndefType_57 == (MR_Integer) 1);
#line 401 "make_hlds_passes.m"
    if (!(hlds__make_hlds__make_hlds_passes__succeeded))
#line 401 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQUndefTypeClass_60 == (MR_Integer) 1);
#line 399 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 404 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_62 = (MR_Integer) 1;
#line 399 "make_hlds_passes.m"
    else
#line 399 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_62 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidType_138_138;
#line 409 "make_hlds_passes.m"
    hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQUndefInst_58 == (MR_Integer) 1);
#line 410 "make_hlds_passes.m"
    if (!(hlds__make_hlds__make_hlds_passes__succeeded))
#line 410 "make_hlds_passes.m"
      hlds__make_hlds__make_hlds_passes__succeeded = (hlds__make_hlds__make_hlds_passes__MQUndefMode_59 == (MR_Integer) 1);
#line 408 "make_hlds_passes.m"
    if (hlds__make_hlds__make_hlds_passes__succeeded)
#line 413 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_63 = (MR_Integer) 1;
#line 408 "make_hlds_passes.m"
    else
#line 408 "make_hlds_passes.m"
      *hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_63 = hlds__make_hlds__make_hlds_passes__STATE_VARIABLE_FoundInvalidInstOrMode_105_105;
#line 97 "make_hlds_passes.m"
  }
#line 41 "make_hlds_passes.m"
}

void mercury__hlds__make_hlds__make_hlds_passes__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__make_hlds_passes__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.make_hlds_passes. */
